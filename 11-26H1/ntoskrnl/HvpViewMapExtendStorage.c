/*
 * XREFs of HvpViewMapExtendStorage @ 0x1408BED58
 * Callers:
 *     HvpPerformLogFileRecovery @ 0x140AEE1B4 (HvpPerformLogFileRecovery.c)
 *     HvpAddBin @ 0x140B87980 (HvpAddBin.c)
 * Callees:
 *     CmSiExtendSection @ 0x1404EAC34 (CmSiExtendSection.c)
 *     HvpViewMapCreateViewsForRegion @ 0x1408BE958 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapFindViewForFileOffset @ 0x1408BFACC (HvpViewMapFindViewForFileOffset.c)
 *     HvpViewMapMakeViewRangeValid @ 0x1408BFC18 (HvpViewMapMakeViewRangeValid.c)
 */

int __fastcall HvpViewMapExtendStorage(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  __int64 ViewForFileOffset; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  int result; // eax

  v2 = (unsigned int)(a2 + 4096);
  if ( *(_QWORD *)(a1 + 8) >= v2 )
    return 0;
  if ( v2 > *(_QWORD *)(a1 + 16) )
  {
    result = CmSiExtendSection(*(void **)a1, (LARGE_INTEGER)(unsigned int)(a2 + 4096));
    if ( result < 0 )
      return result;
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( !v4
    || (ViewForFileOffset = HvpViewMapFindViewForFileOffset(a1, v4 - 1)) == 0
    || (v6 = *(_QWORD *)(ViewForFileOffset + 32), v7 = *(_QWORD *)(ViewForFileOffset + 48), v7 >= v6) )
  {
LABEL_10:
    if ( v4 < v2 )
    {
      result = HvpViewMapCreateViewsForRegion(a1, v4, v2, 0);
      if ( result < 0 )
        return result;
      *(_QWORD *)(a1 + 8) = v2;
    }
    return 0;
  }
  v4 = v2;
  if ( v6 <= v2 )
    v4 = *(_QWORD *)(ViewForFileOffset + 32);
  result = HvpViewMapMakeViewRangeValid(a1, ViewForFileOffset, v7, v4, 0);
  if ( result >= 0 )
  {
    *(_QWORD *)(a1 + 8) = v4;
    goto LABEL_10;
  }
  return result;
}

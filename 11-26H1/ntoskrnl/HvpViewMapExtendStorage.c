/*
 * XREFs of HvpViewMapExtendStorage @ 0x1408B8788
 * Callers:
 *     HvpPerformLogFileRecovery @ 0x140AEB2A8 (HvpPerformLogFileRecovery.c)
 *     HvpAddBin @ 0x140B7EAA0 (HvpAddBin.c)
 * Callees:
 *     CmSiExtendSection @ 0x1404F1654 (CmSiExtendSection.c)
 *     HvpViewMapCreateViewsForRegion @ 0x1408B8388 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapFindViewForFileOffset @ 0x1408B94FC (HvpViewMapFindViewForFileOffset.c)
 *     HvpViewMapMakeViewRangeValid @ 0x1408B9648 (HvpViewMapMakeViewRangeValid.c)
 */

__int64 __fastcall HvpViewMapExtendStorage(__int64 *a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  __int64 ViewForFileOffset; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 result; // rax

  v2 = (unsigned int)(a2 + 4096);
  if ( a1[1] >= v2 )
    return 0LL;
  if ( v2 > a1[2] )
  {
    result = CmSiExtendSection(*a1, (unsigned int)(a2 + 4096));
    if ( (int)result < 0 )
      return result;
  }
  v4 = a1[1];
  if ( !v4
    || (ViewForFileOffset = HvpViewMapFindViewForFileOffset(a1, v4 - 1)) == 0
    || (v6 = *(_QWORD *)(ViewForFileOffset + 32), v7 = *(_QWORD *)(ViewForFileOffset + 48), v7 >= v6) )
  {
LABEL_10:
    if ( v4 < v2 )
    {
      result = HvpViewMapCreateViewsForRegion((__int64)a1, v4, v2, 0);
      if ( (int)result < 0 )
        return result;
      a1[1] = v2;
    }
    return 0LL;
  }
  v4 = v2;
  if ( v6 <= v2 )
    v4 = *(_QWORD *)(ViewForFileOffset + 32);
  result = HvpViewMapMakeViewRangeValid((_DWORD)a1, ViewForFileOffset, v7, v4, 0);
  if ( (int)result >= 0 )
  {
    a1[1] = v4;
    goto LABEL_10;
  }
  return result;
}

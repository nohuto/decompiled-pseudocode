/*
 * XREFs of DifObjTrkLookupItem @ 0x14064B060
 * Callers:
 *     <none>
 * Callees:
 *     RtlLookupElementGenericTableFullAvl @ 0x14041CC60 (RtlLookupElementGenericTableFullAvl.c)
 *     DifIsValidTrackingObject @ 0x14064ADB4 (DifIsValidTrackingObject.c)
 *     DifObjTrkGetPluginContext @ 0x14064AEAC (DifObjTrkGetPluginContext.c)
 *     DifAcquireSpinLockAtDpcLevelSafe @ 0x14064D16C (DifAcquireSpinLockAtDpcLevelSafe.c)
 *     DifReleaseSpinLockFromDpcLevelSafe @ 0x14064D224 (DifReleaseSpinLockFromDpcLevelSafe.c)
 *     MmGetVaTypeForVerifier @ 0x1406F38B0 (MmGetVaTypeForVerifier.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

bool __fastcall DifObjTrkLookupItem(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  bool v3; // bl
  __int64 v4; // r15
  unsigned int *PluginContext; // r12
  int VaTypeForVerifier; // eax
  __int64 v9; // rdx
  unsigned __int64 *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  _WORD v14[2]; // [rsp+20h] [rbp-30h] BYREF
  TABLE_SEARCH_RESULT SearchResult; // [rsp+24h] [rbp-2Ch] BYREF
  PVOID NodeOrParent; // [rsp+28h] [rbp-28h] BYREF
  _DWORD Buffer[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-18h]
  __int64 v19; // [rsp+40h] [rbp-10h]

  v3 = 0;
  v4 = a3;
  Buffer[1] = 0;
  v14[0] = 0;
  if ( KeGetCurrentIrql() > 2u )
    return 0;
  if ( (int)DifIsValidTrackingObject(a1, a2) < 0 )
    return 0;
  PluginContext = (unsigned int *)DifObjTrkGetPluginContext(a1);
  VaTypeForVerifier = MmGetVaTypeForVerifier(a2);
  if ( VaTypeForVerifier == 5 )
    return 0;
  v10 = &stru_140E27B08.Spare35[15 * VaTypeForVerifier];
  if ( !*((_DWORD *)v10 + 27) || a2 < v10[21] || a2 > v10[22] )
    return 0;
  Buffer[0] = a1;
  v18 = a2;
  v11 = *PluginContext;
  if ( (_DWORD)v11 )
    v12 = a2 + v11;
  else
    v12 = a2 + v4;
  v19 = v12;
  DifAcquireSpinLockAtDpcLevelSafe(v14, v9, stru_140E27B08.Spare35);
  if ( DifObjTrkInitialized )
  {
    NodeOrParent = 0LL;
    SearchResult = TableEmptyTree;
    v3 = RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(v10 + 8), Buffer, &NodeOrParent, &SearchResult) != 0LL;
  }
  DifReleaseSpinLockFromDpcLevelSafe(v14, stru_140E27B08.Spare35);
  return v3;
}

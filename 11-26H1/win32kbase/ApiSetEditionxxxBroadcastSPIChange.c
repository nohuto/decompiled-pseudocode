/*
 * XREFs of ApiSetEditionxxxBroadcastSPIChange @ 0x1401C1A80
 * Callers:
 *     xxxSystemParametersInfo @ 0x1401ACFA0 (xxxSystemParametersInfo.c)
 * Callees:
 *     EditionxxxBroadcastSPIChange @ 0x1401C1AC8 (EditionxxxBroadcastSPIChange.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionxxxBroadcastSPIChange(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 (*v3)(void); // rax
  __int64 result; // rax

  v1 = a1;
  v2 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48);
  v3 = *(__int64 (**)(void))(v2 + 2848);
  if ( !v3 )
    return EditionxxxBroadcastSPIChange(v1, v2, 1LL);
  result = v3();
  if ( (int)result >= 0 )
    return EditionxxxBroadcastSPIChange(v1, v2, 1LL);
  return result;
}

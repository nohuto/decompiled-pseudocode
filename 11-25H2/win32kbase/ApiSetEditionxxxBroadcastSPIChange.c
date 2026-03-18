/*
 * XREFs of ApiSetEditionxxxBroadcastSPIChange @ 0x1400A87B0
 * Callers:
 *     xxxSystemParametersInfo @ 0x1400A70D0 (xxxSystemParametersInfo.c)
 * Callees:
 *     EditionxxxBroadcastSPIChange @ 0x14023EC20 (EditionxxxBroadcastSPIChange.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionxxxBroadcastSPIChange(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 (*v4)(void); // rax
  __int64 result; // rax

  v2 = a1;
  v3 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48);
  v4 = *(__int64 (**)(void))(v3 + 3248);
  if ( !v4 )
    return EditionxxxBroadcastSPIChange(v2, v3, 1LL);
  result = v4();
  if ( (int)result >= 0 )
    return EditionxxxBroadcastSPIChange(v2, v3, 1LL);
  return result;
}

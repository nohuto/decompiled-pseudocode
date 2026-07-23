/*
 * XREFs of PspGetBaseTrapFrame @ 0x140464F40
 * Callers:
 *     KiRollbackSlistPops @ 0x1404FAE20 (KiRollbackSlistPops.c)
 *     PspInitializeThunkContext @ 0x1409E7B48 (PspInitializeThunkContext.c)
 *     PspFreeUserFiberShadowStack @ 0x140A045EC (PspFreeUserFiberShadowStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetBaseTrapFrame(__int64 a1, _DWORD *a2)
{
  __int64 i; // rax
  __int64 v3; // rcx

  for ( i = *(_QWORD *)(a1 + 40); (*(_BYTE *)(i + 8) & 1) != 0; i = *(_QWORD *)(i + 40) )
    ;
  if ( a2 )
    *a2 = *(_QWORD *)(i + 32) != 0LL;
  v3 = 400LL;
  if ( KiFredEnabled )
    v3 = 416LL;
  return i - v3;
}

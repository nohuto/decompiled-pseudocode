/*
 * XREFs of PspGetBaseTrapFrame @ 0x14046B7C0
 * Callers:
 *     KiRollbackSlistPops @ 0x140501630 (KiRollbackSlistPops.c)
 *     PspFreeUserFiberShadowStack @ 0x14095ED2C (PspFreeUserFiberShadowStack.c)
 *     PspInitializeThunkContext @ 0x1409EB378 (PspInitializeThunkContext.c)
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

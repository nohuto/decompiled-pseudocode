/*
 * XREFs of PsGetBaseTrapFrame @ 0x140469AD0
 * Callers:
 *     PsCallEnclave @ 0x140803C20 (PsCallEnclave.c)
 *     PsPicoWalkUserStack @ 0x140B4C1D8 (PsPicoWalkUserStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetBaseTrapFrame(__int64 a1, _DWORD *a2)
{
  __int64 i; // r8
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

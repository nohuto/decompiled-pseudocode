/*
 * XREFs of ?PointerTypeToInputType@@YA?AW4InputType@@K_N@Z @ 0x180047A50
 * Callers:
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x18015D598 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PointerTypeToInputType(int a1, char a2)
{
  __int64 result; // rax
  int v3; // ecx
  int v4; // ecx

  if ( a1 == 4 )
    return 2LL;
  v3 = a1 - 2;
  if ( !v3 )
    return 8LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 16LL;
  if ( v4 != 2 )
    return 0LL;
  result = 0x1000000LL;
  if ( !a2 )
    return 32LL;
  return result;
}

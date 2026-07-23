/*
 * XREFs of IoSetFsZeroingOffset @ 0x1405CE520
 * Callers:
 *     <none>
 * Callees:
 *     IopIrpHasExtensionType @ 0x14041C8C0 (IopIrpHasExtensionType.c)
 */

__int64 __fastcall IoSetFsZeroingOffset(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // r9
  int v3; // r10d

  if ( IopIrpHasExtensionType(a1, 4u) )
    *(_DWORD *)(*(_QWORD *)(v2 + 200) + 40LL) = v3;
  else
    return (unsigned int)-1073741275;
  return v1;
}

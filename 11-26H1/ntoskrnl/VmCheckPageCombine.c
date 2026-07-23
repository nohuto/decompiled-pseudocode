/*
 * XREFs of VmCheckPageCombine @ 0x140AF3FF4
 * Callers:
 *     MiCapturePfnVm @ 0x14050D140 (MiCapturePfnVm.c)
 * Callees:
 *     <none>
 */

bool __fastcall VmCheckPageCombine(__int64 a1, int a2)
{
  __int64 v2; // rcx
  bool result; // al

  v2 = *(_QWORD *)(a1 + 1648);
  result = 0;
  if ( !v2 )
    return 1;
  if ( (*(_BYTE *)(v2 + 152) & 1) == 0 )
    return a2 != 0;
  return result;
}

/*
 * XREFs of PsGetCurrentProcessWow64Process @ 0x140448AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentProcessWow64Process()
{
  unsigned __int64 result; // rax

  result = KeGetCurrentThread()->ApcState.Process[1].ReadyTime;
  if ( result )
    return *(_QWORD *)result;
  return result;
}

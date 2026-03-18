/*
 * XREFs of NtIsSystemResumeAutomatic @ 0x140B45F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool NtIsSystemResumeAutomatic()
{
  return (dword_140F105A0[0] & 3) == 0;
}

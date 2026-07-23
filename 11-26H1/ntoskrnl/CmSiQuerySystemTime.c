/*
 * XREFs of CmSiQuerySystemTime @ 0x1404EACE0
 * Callers:
 *     SshpSessionManagerInterruptTimeToSystemTime @ 0x1407E9550 (SshpSessionManagerInterruptTimeToSystemTime.c)
 *     CmpReorganizeHive @ 0x140AE10D4 (CmpReorganizeHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmSiQuerySystemTime(_QWORD *a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000014];
  *a1 = MEMORY[0xFFFFF78000000014];
  return result;
}

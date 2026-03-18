/*
 * XREFs of NtAlertThread @ 0x140B1B8F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeAlertThread @ 0x1402C5C40 (KeAlertThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtAlertThread(ULONG_PTR a1)
{
  char PreviousMode; // bl
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  result = ObpReferenceObjectByHandleWithTag(a1, 4LL, PsThreadType, PreviousMode, 0x75537350u, &Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    LOBYTE(v3) = PreviousMode;
    KeAlertThread((__int64)Object, v3, v4);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
    return 0LL;
  }
  return result;
}

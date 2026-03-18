/*
 * XREFs of NtOpenKeyedEvent @ 0x140841DC0
 * Callers:
 *     DifNtOpenKeyedEventWrapper @ 0x14067DCA0 (DifNtOpenKeyedEventWrapper.c)
 * Callees:
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ObOpenObjectByName @ 0x1408FC870 (ObOpenObjectByName.c)
 */

__int64 __fastcall NtOpenKeyedEvent(_QWORD *a1, int a2, int a3)
{
  int v3; // esi
  char PreviousMode; // di
  __int64 result; // rax
  __int64 v8; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  v8 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    ProbeForRead(a1, 1uLL, 8u);
  *a1 = 0LL;
  LOBYTE(a3) = PreviousMode;
  result = ObOpenObjectByName(v3, (_DWORD)ExpKeyedEventObjectType, a3, 0, a2, 0LL, (__int64)&v8);
  if ( (int)result >= 0 )
    *a1 = v8;
  return result;
}

/*
 * XREFs of ExpSetTimer2 @ 0x1403B3454
 * Callers:
 *     NtSetIRTimer @ 0x1403B33F0 (NtSetIRTimer.c)
 *     NtCancelTimer2 @ 0x1403B3410 (NtCancelTimer2.c)
 *     NtSetTimer2 @ 0x1403B3430 (NtSetTimer2.c)
 *     DifNtCancelTimer2Wrapper @ 0x1406721E0 (DifNtCancelTimer2Wrapper.c)
 *     DifNtSetIRTimerWrapper @ 0x14068F030 (DifNtSetIRTimerWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExpSetTimerObject2 @ 0x1403B3598 (ExpSetTimerObject2.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140929E80 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall ExpSetTimer2(HANDLE Handle, _QWORD *a2, __int64 a3, __int128 *a4)
{
  _QWORD *v6; // rsi
  __int64 ULong64FromUser; // rbx
  NTSTATUS result; // eax
  int v10; // ebx
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v12[4]; // [rsp+48h] [rbp-60h] BYREF
  __int128 v13; // [rsp+68h] [rbp-40h] BYREF

  v6 = a2;
  v12[0] = 0LL;
  v13 = 0LL;
  Object = 0LL;
  ULong64FromUser = 0LL;
  if ( a2 && KeGetCurrentThread()->PreviousMode )
  {
    v12[0] = RtlReadULong64FromUser(a2);
    v6 = v12;
    v12[1] = v12;
    if ( a3 )
    {
      ULong64FromUser = RtlReadULong64FromUser(a3);
      v12[2] = ULong64FromUser;
    }
    if ( a4 )
    {
      RtlCopyFromUser(&v13, a4, 0x10uLL);
      a4 = &v13;
      v12[3] = &v13;
    }
  }
  result = ObReferenceObjectByHandleWithTag(
             Handle,
             2u,
             ExpIRTimerObjectType,
             KeGetCurrentThread()->PreviousMode,
             0x53547249u,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v10 = ExpSetTimerObject2(Object, v6, ULong64FromUser, a4);
    ObfDereferenceObjectWithTag(Object, 0x53547249u);
    return v10;
  }
  return result;
}

/*
 * XREFs of LdrpLogFatalLdrEtwEvent @ 0x1800CBA00
 * Callers:
 *     LdrpInitializationFailure @ 0x1800CB4A0 (LdrpInitializationFailure.c)
 *     LdrpGenericExceptionFilter @ 0x18015B628 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     EtwEventWriteNoRegistration @ 0x1800CBC90 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

int __fastcall LdrpLogFatalLdrEtwEvent(unsigned __int16 *a1, const EVENT_DESCRIPTOR *a2)
{
  unsigned __int64 v3; // rcx
  const void **v5; // rdi
  _WORD *v6; // rbx
  unsigned int v7; // eax
  _WORD *Heap_0; // rax
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-38h] BYREF

  v3 = *a1;
  v5 = (const void **)(a1 + 4);
  if ( v3 + 2 > a1[1] || (v6 = *v5, *((_WORD *)*v5 + (v3 >> 1))) )
  {
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v3 + 2);
    v6 = Heap_0;
    if ( !Heap_0 )
      return (int)Heap_0;
    memmove(Heap_0, *v5, *a1);
    v6[(unsigned __int64)*a1 >> 1] = 0;
  }
  v7 = *a1 + 2;
  UserData.Ptr = (unsigned __int64)v6;
  UserData.Size = v7;
  UserData.Reserved = 0;
  LODWORD(Heap_0) = EtwEventWriteNoRegistration(&UserLoaderGuid, a2, 1u, &UserData);
  if ( v6 != *v5 )
    LODWORD(Heap_0) = RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v6);
  return (int)Heap_0;
}

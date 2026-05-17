/*
 * XREFs of RtlCreateUserSecurityObject @ 0x18013A130
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlpNewSecurityObject @ 0x18005E6A0 (RtlpNewSecurityObject.c)
 *     RtlCreateAndSetSD @ 0x1800C8770 (RtlCreateAndSetSD.c)
 */

__int64 __fastcall RtlCreateUserSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        _DWORD *a6,
        _QWORD *a7)
{
  __int64 result; // rax
  unsigned int v8; // ebx
  __int64 v9[3]; // [rsp+50h] [rbp-18h] BYREF

  v9[0] = 0LL;
  result = RtlCreateAndSetSD(a1, a2, a3, a4, v9);
  if ( (int)result >= 0 )
  {
    v8 = RtlpNewSecurityObject(0LL, (_OWORD *)v9[0], a7, 0LL, 0, a5, 0, (void *)0xFFFFFFFFFFFFFFFCLL, a6);
    RtlFreeHeap_0();
    return v8;
  }
  return result;
}

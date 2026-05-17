/*
 * XREFs of RtlpGetDefaultTrustSubjectContext @ 0x18005DBF0
 * Callers:
 *     RtlpSetSecurityObject @ 0x18005BF70 (RtlpSetSecurityObject.c)
 *     RtlpGetDefaultsSubjectContext @ 0x18005D7C0 (RtlpGetDefaultsSubjectContext.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x18005D5C0 (RtlIsValidProcessTrustLabelSid.c)
 *     RtlCopySid @ 0x1800C8CC0 (RtlCopySid.c)
 *     NtQueryInformationToken @ 0x18015F360 (NtQueryInformationToken.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpGetDefaultTrustSubjectContext(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // rsi
  __int64 result; // rax
  int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rdi
  _QWORD *Heap_0; // rax
  _QWORD *v10; // rbx
  int v11; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v12[3]; // [rsp+34h] [rbp-D4h] BYREF
  __int64 v13[10]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v14[10]; // [rsp+90h] [rbp-78h] BYREF

  v11 = 76;
  v12[0] = 76;
  v2 = v13;
  result = NtQueryInformationToken(-4LL, 41LL, v13, 76LL, &v11);
  v6 = result;
  if ( (int)result >= 0 )
  {
    if ( !a1 )
      goto LABEL_8;
    result = NtQueryInformationToken(a1, 41LL, v14, v12[0], v12);
    if ( (int)result < 0 )
      return result;
    v7 = v13[0];
    if ( v13[0] && !RtlIsValidProcessTrustLabelSid(v13[0]) )
      return 3221225485LL;
    v8 = v14[0];
    if ( v14[0] )
    {
      if ( !RtlIsValidProcessTrustLabelSid(v14[0]) )
        return 3221225485LL;
      if ( v7 )
      {
        if ( *(_DWORD *)(v7 + 8) < *(_DWORD *)(v8 + 8) || *(_DWORD *)(v7 + 12) < *(_DWORD *)(v8 + 12) )
          goto LABEL_7;
      }
      else if ( *(_DWORD *)(v8 + 8) )
      {
        goto LABEL_7;
      }
    }
    v2 = v14;
    v11 = v12[0];
LABEL_7:
    v6 = 0;
LABEL_8:
    Heap_0 = (_QWORD *)RtlAllocateHeap_0();
    v10 = Heap_0;
    if ( !Heap_0 )
      return 3221225495LL;
    if ( *v2 )
    {
      *Heap_0 = Heap_0 + 1;
      v6 = RtlCopySid((unsigned int)(v11 - 8), Heap_0 + 1, *v2);
      if ( v6 < 0 )
      {
        RtlFreeHeap_0();
        return (unsigned int)v6;
      }
    }
    else
    {
      *Heap_0 = 0LL;
    }
    *a2 = v10;
    return (unsigned int)v6;
  }
  return result;
}

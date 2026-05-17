/*
 * XREFs of RtlpGetDefaultsSubjectContext @ 0x18005D7C0
 * Callers:
 *     RtlpNewSecurityObject @ 0x18005E6A0 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x18005DBF0 (RtlpGetDefaultTrustSubjectContext.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtQueryInformationToken @ 0x18015F360 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1801615B0 (NtOpenProcessToken.c)
 */

__int64 __fastcall RtlpGetDefaultsSubjectContext(
        __int64 a1,
        char a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        _QWORD *a8,
        __int64 *a9)
{
  __int64 *v10; // r15
  __int64 *v11; // r13
  __int64 Heap_0; // rax
  int DefaultTrustSubjectContext; // ebx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v20; // rdi
  __int64 *v21; // rdi
  __int64 *v22; // rdi
  __int64 v23; // rax
  __int64 *v24; // rdi
  __int64 v25; // rax
  unsigned int v26; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-24h] BYREF
  unsigned int v28; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v29; // [rsp+3Ch] [rbp-1Ch] BYREF
  HANDLE Handle[3]; // [rsp+40h] [rbp-18h] BYREF
  char v31; // [rsp+A0h] [rbp+48h]
  unsigned int v33; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v34; // [rsp+B8h] [rbp+60h] BYREF

  v10 = a5;
  v11 = a7;
  Handle[0] = 0LL;
  *a6 = 0LL;
  v26 = 0;
  v29 = 0;
  v34 = 0;
  v33 = 0;
  v27 = 0;
  v28 = 0;
  *a9 = 0LL;
  v31 = 0;
  *a3 = 0LL;
  *a4 = 0LL;
  *v10 = 0LL;
  *v11 = 0LL;
  if ( a1 )
  {
    v27 = 76;
    Heap_0 = RtlAllocateHeap_0();
    *a3 = Heap_0;
    if ( !Heap_0 )
      goto LABEL_15;
    DefaultTrustSubjectContext = NtQueryInformationToken(a1, 4LL, Heap_0, v27, &v27);
    if ( DefaultTrustSubjectContext < 0 )
      goto LABEL_16;
    v28 = 84;
    v16 = RtlAllocateHeap_0();
    *v11 = v16;
    if ( !v16 )
      goto LABEL_15;
    DefaultTrustSubjectContext = NtQueryInformationToken(a1, 25LL, v16, v28, &v28);
    if ( DefaultTrustSubjectContext < 0 )
      goto LABEL_16;
    DefaultTrustSubjectContext = NtQueryInformationToken(a1, 5LL, *a4, 0LL, &v33);
    if ( DefaultTrustSubjectContext != -1073741789 )
      goto LABEL_16;
    v17 = RtlAllocateHeap_0();
    *a4 = v17;
    if ( !v17 )
      goto LABEL_15;
    DefaultTrustSubjectContext = NtQueryInformationToken(a1, 5LL, v17, v33, &v33);
    if ( DefaultTrustSubjectContext < 0 )
      goto LABEL_16;
    DefaultTrustSubjectContext = NtQueryInformationToken(a1, 6LL, *v10, 0LL, &v34);
    if ( DefaultTrustSubjectContext != -1073741789 )
      goto LABEL_16;
    v18 = RtlAllocateHeap_0();
    *v10 = v18;
    if ( !v18 )
    {
LABEL_15:
      DefaultTrustSubjectContext = -1073741801;
      goto LABEL_16;
    }
    DefaultTrustSubjectContext = NtQueryInformationToken(a1, 6LL, v18, v34, &v34);
    if ( DefaultTrustSubjectContext < 0 )
      goto LABEL_16;
  }
  DefaultTrustSubjectContext = RtlpGetDefaultTrustSubjectContext(a1, a8);
  if ( DefaultTrustSubjectContext < 0 )
    goto LABEL_16;
  if ( !a2 )
    return 0LL;
  DefaultTrustSubjectContext = NtOpenProcessToken(-1LL, 8LL, Handle);
  if ( DefaultTrustSubjectContext < 0 )
  {
    v31 = 0;
    goto LABEL_16;
  }
  v31 = 1;
  v29 = 76;
  v23 = RtlAllocateHeap_0();
  *a6 = v23;
  if ( !v23 )
    goto LABEL_15;
  DefaultTrustSubjectContext = NtQueryInformationToken(Handle[0], 4LL, v23, v29, &v29);
  if ( DefaultTrustSubjectContext >= 0 )
  {
    v24 = a9;
    DefaultTrustSubjectContext = NtQueryInformationToken(Handle[0], 5LL, *a9, 0LL, &v26);
    if ( DefaultTrustSubjectContext == -1073741789 )
    {
      v25 = RtlAllocateHeap_0();
      *v24 = v25;
      if ( v25 )
      {
        DefaultTrustSubjectContext = NtQueryInformationToken(Handle[0], 5LL, v25, v26, &v26);
        if ( DefaultTrustSubjectContext >= 0 )
        {
          NtClose(Handle[0]);
          return 0LL;
        }
      }
    }
  }
LABEL_16:
  if ( *a3 )
  {
    RtlFreeHeap_0();
    *a3 = 0LL;
  }
  if ( *v11 )
  {
    RtlFreeHeap_0();
    *v11 = 0LL;
  }
  if ( *a4 )
  {
    RtlFreeHeap_0();
    *a4 = 0LL;
  }
  if ( *v10 )
  {
    RtlFreeHeap_0();
    *v10 = 0LL;
  }
  v20 = a8;
  if ( *a8 )
  {
    RtlFreeHeap_0();
    *v20 = 0LL;
  }
  v21 = a6;
  if ( *a6 )
  {
    RtlFreeHeap_0();
    *v21 = 0LL;
  }
  v22 = a9;
  if ( *a9 )
  {
    RtlFreeHeap_0();
    *v22 = 0LL;
  }
  if ( v31 == 1 )
    NtClose(Handle[0]);
  return (unsigned int)DefaultTrustSubjectContext;
}

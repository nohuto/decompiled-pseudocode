/*
 * XREFs of RtlpGetDefaultsSubjectContext @ 0x180047D40
 * Callers:
 *     RtlpNewSecurityObject @ 0x180048C20 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180048170 (RtlpGetDefaultTrustSubjectContext.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtQueryInformationToken @ 0x18015F260 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1801614B0 (NtOpenProcessToken.c)
 */

__int64 __fastcall RtlpGetDefaultsSubjectContext(
        HANDLE TokenHandle,
        char a2,
        PVOID *a3,
        PVOID *a4,
        PVOID *a5,
        PVOID *a6,
        PVOID *a7,
        PVOID *a8,
        PVOID *a9)
{
  PVOID *v10; // r15
  PVOID *v11; // r13
  struct _PEB *v14; // rax
  void *ProcessHeap; // rsi
  PVOID Heap_0; // rax
  NTSTATUS DefaultTrustSubjectContext; // ebx
  PVOID v18; // rax
  PVOID v19; // rax
  PVOID v20; // rax
  PVOID *v22; // rdi
  PVOID *v23; // rdi
  PVOID *v24; // rdi
  PVOID v25; // rax
  PVOID *v26; // rdi
  PVOID v27; // rax
  ULONG v28; // [rsp+30h] [rbp-28h] BYREF
  ULONG TokenInformationLength; // [rsp+34h] [rbp-24h] BYREF
  ULONG ReturnLength; // [rsp+38h] [rbp-20h] BYREF
  ULONG v31; // [rsp+3Ch] [rbp-1Ch] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-18h] BYREF
  char v33; // [rsp+A0h] [rbp+48h]
  ULONG v35; // [rsp+B0h] [rbp+58h] BYREF
  ULONG v36; // [rsp+B8h] [rbp+60h] BYREF

  v10 = a5;
  v11 = a7;
  Handle = 0LL;
  *a6 = 0LL;
  v28 = 0;
  v31 = 0;
  v36 = 0;
  v35 = 0;
  TokenInformationLength = 0;
  ReturnLength = 0;
  *a9 = 0LL;
  v14 = NtCurrentPeb();
  v33 = 0;
  *a3 = 0LL;
  *a4 = 0LL;
  ProcessHeap = v14->ProcessHeap;
  *v10 = 0LL;
  *v11 = 0LL;
  if ( TokenHandle )
  {
    TokenInformationLength = 76;
    Heap_0 = RtlAllocateHeap_0(ProcessHeap, NtdllBaseTag + 1310720, 0x4CuLL);
    *a3 = Heap_0;
    if ( !Heap_0 )
      goto LABEL_15;
    DefaultTrustSubjectContext = NtQueryInformationToken(
                                   TokenHandle,
                                   4u,
                                   Heap_0,
                                   TokenInformationLength,
                                   &TokenInformationLength);
    if ( DefaultTrustSubjectContext < 0 )
      goto LABEL_16;
    ReturnLength = 84;
    v18 = RtlAllocateHeap_0(ProcessHeap, NtdllBaseTag + 1310720, 0x54uLL);
    *v11 = v18;
    if ( !v18 )
      goto LABEL_15;
    DefaultTrustSubjectContext = NtQueryInformationToken(TokenHandle, 0x19u, v18, ReturnLength, &ReturnLength);
    if ( DefaultTrustSubjectContext < 0 )
      goto LABEL_16;
    DefaultTrustSubjectContext = NtQueryInformationToken(TokenHandle, 5u, *a4, 0, &v35);
    if ( DefaultTrustSubjectContext != -1073741789 )
      goto LABEL_16;
    v19 = RtlAllocateHeap_0(ProcessHeap, NtdllBaseTag + 1310720, v35);
    *a4 = v19;
    if ( !v19 )
      goto LABEL_15;
    DefaultTrustSubjectContext = NtQueryInformationToken(TokenHandle, 5u, v19, v35, &v35);
    if ( DefaultTrustSubjectContext < 0 )
      goto LABEL_16;
    DefaultTrustSubjectContext = NtQueryInformationToken(TokenHandle, 6u, *v10, 0, &v36);
    if ( DefaultTrustSubjectContext != -1073741789 )
      goto LABEL_16;
    v20 = RtlAllocateHeap_0(ProcessHeap, NtdllBaseTag + 1310720, v36);
    *v10 = v20;
    if ( !v20 )
    {
LABEL_15:
      DefaultTrustSubjectContext = -1073741801;
      goto LABEL_16;
    }
    DefaultTrustSubjectContext = NtQueryInformationToken(TokenHandle, 6u, v20, v36, &v36);
    if ( DefaultTrustSubjectContext < 0 )
      goto LABEL_16;
  }
  DefaultTrustSubjectContext = RtlpGetDefaultTrustSubjectContext(TokenHandle);
  if ( DefaultTrustSubjectContext < 0 )
    goto LABEL_16;
  if ( !a2 )
    return 0LL;
  DefaultTrustSubjectContext = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &Handle);
  if ( DefaultTrustSubjectContext < 0 )
  {
    v33 = 0;
    goto LABEL_16;
  }
  v33 = 1;
  v31 = 76;
  v25 = RtlAllocateHeap_0(ProcessHeap, NtdllBaseTag + 1310720, 0x4CuLL);
  *a6 = v25;
  if ( !v25 )
    goto LABEL_15;
  DefaultTrustSubjectContext = NtQueryInformationToken(Handle, 4u, v25, v31, &v31);
  if ( DefaultTrustSubjectContext >= 0 )
  {
    v26 = a9;
    DefaultTrustSubjectContext = NtQueryInformationToken(Handle, 5u, *a9, 0, &v28);
    if ( DefaultTrustSubjectContext == -1073741789 )
    {
      v27 = RtlAllocateHeap_0(ProcessHeap, NtdllBaseTag + 1310720, v28);
      *v26 = v27;
      if ( v27 )
      {
        DefaultTrustSubjectContext = NtQueryInformationToken(Handle, 5u, v27, v28, &v28);
        if ( DefaultTrustSubjectContext >= 0 )
        {
          NtClose(Handle);
          return 0LL;
        }
      }
    }
  }
LABEL_16:
  if ( *a3 )
  {
    RtlFreeHeap_0(ProcessHeap, 0, *a3);
    *a3 = 0LL;
  }
  if ( *v11 )
  {
    RtlFreeHeap_0(ProcessHeap, 0, *v11);
    *v11 = 0LL;
  }
  if ( *a4 )
  {
    RtlFreeHeap_0(ProcessHeap, 0, *a4);
    *a4 = 0LL;
  }
  if ( *v10 )
  {
    RtlFreeHeap_0(ProcessHeap, 0, *v10);
    *v10 = 0LL;
  }
  v22 = a8;
  if ( *a8 )
  {
    RtlFreeHeap_0(ProcessHeap, 0, *a8);
    *v22 = 0LL;
  }
  v23 = a6;
  if ( *a6 )
  {
    RtlFreeHeap_0(ProcessHeap, 0, *a6);
    *v23 = 0LL;
  }
  v24 = a9;
  if ( *a9 )
  {
    RtlFreeHeap_0(ProcessHeap, 0, *a9);
    *v24 = 0LL;
  }
  if ( v33 == 1 )
    NtClose(Handle);
  return (unsigned int)DefaultTrustSubjectContext;
}

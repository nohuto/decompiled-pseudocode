/*
 * XREFs of RtlAllocateAndInitializeSidEx @ 0x18013CA90
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlLengthRequiredSid @ 0x1800CBEC0 (RtlLengthRequiredSid.c)
 */

NTSTATUS __cdecl RtlAllocateAndInitializeSidEx(
        PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
        UCHAR SubAuthorityCount,
        PULONG SubAuthorities,
        PSID *Sid)
{
  __int64 v4; // rdi
  ULONG v9; // eax
  char *Heap_0; // rax
  __int64 v11; // r8
  signed __int64 v12; // rdx

  v4 = SubAuthorityCount;
  if ( SubAuthorityCount > 0xFu )
    return -1073741811;
  v9 = RtlLengthRequiredSid(SubAuthorityCount);
  Heap_0 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v9);
  if ( !Heap_0 )
    return -1073741801;
  *Heap_0 = 1;
  *(_DWORD *)(Heap_0 + 2) = *(_DWORD *)IdentifierAuthority->Value;
  *((_WORD *)Heap_0 + 3) = *(_WORD *)&IdentifierAuthority->Value[4];
  Heap_0[1] = v4;
  if ( (_BYTE)v4 )
  {
    v11 = v4;
    v12 = Heap_0 - (char *)SubAuthorities;
    do
    {
      *(PULONG)((char *)SubAuthorities + v12 + 8) = *SubAuthorities;
      ++SubAuthorities;
      --v11;
    }
    while ( v11 );
  }
  *Sid = Heap_0;
  return 0;
}

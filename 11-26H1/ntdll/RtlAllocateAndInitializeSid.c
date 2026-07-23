/*
 * XREFs of RtlAllocateAndInitializeSid @ 0x1800D4570
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 */

NTSTATUS __cdecl RtlAllocateAndInitializeSid(
        PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
        UCHAR SubAuthorityCount,
        ULONG SubAuthority0,
        ULONG SubAuthority1,
        ULONG SubAuthority2,
        ULONG SubAuthority3,
        ULONG SubAuthority4,
        ULONG SubAuthority5,
        ULONG SubAuthority6,
        ULONG SubAuthority7,
        PSID *Sid)
{
  int v11; // ebx
  char *Heap_0; // rax

  v11 = SubAuthorityCount;
  if ( SubAuthorityCount > 8u )
    return -1073741704;
  Heap_0 = (char *)RtlAllocateHeap_0(
                     NtCurrentPeb()->ProcessHeap,
                     NtdllBaseTag + 1310720,
                     4 * (unsigned int)SubAuthorityCount + 8);
  if ( !Heap_0 )
    return -1073741801;
  Heap_0[1] = v11;
  *Heap_0 = 1;
  *(_DWORD *)(Heap_0 + 2) = *(_DWORD *)IdentifierAuthority->Value;
  *((_WORD *)Heap_0 + 3) = *(_WORD *)&IdentifierAuthority->Value[4];
  if ( v11 != 1 )
  {
    if ( v11 != 2 )
    {
      switch ( v11 )
      {
        case 3:
          goto LABEL_14;
        case 4:
          goto LABEL_13;
        case 5:
          goto LABEL_12;
        case 6:
          goto LABEL_11;
        case 7:
          goto LABEL_16;
        case 8:
          *((_DWORD *)Heap_0 + 9) = SubAuthority7;
LABEL_16:
          *((_DWORD *)Heap_0 + 8) = SubAuthority6;
LABEL_11:
          *((_DWORD *)Heap_0 + 7) = SubAuthority5;
LABEL_12:
          *((_DWORD *)Heap_0 + 6) = SubAuthority4;
LABEL_13:
          *((_DWORD *)Heap_0 + 5) = SubAuthority3;
LABEL_14:
          *((_DWORD *)Heap_0 + 4) = SubAuthority2;
          break;
        default:
          goto LABEL_5;
      }
    }
    *((_DWORD *)Heap_0 + 3) = SubAuthority1;
  }
  *((_DWORD *)Heap_0 + 2) = SubAuthority0;
LABEL_5:
  *Sid = Heap_0;
  return 0;
}

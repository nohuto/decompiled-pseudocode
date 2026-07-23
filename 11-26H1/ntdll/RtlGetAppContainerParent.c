/*
 * XREFs of RtlGetAppContainerParent @ 0x180043AF0
 * Callers:
 *     RtlpGetTokenNamedObjectPath @ 0x180042BE0 (RtlpGetTokenNamedObjectPath.c)
 *     RtlDefaultNpAcl @ 0x180045C90 (RtlDefaultNpAcl.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlCompareMemory @ 0x1801630E0 (RtlCompareMemory.c)
 */

NTSTATUS __cdecl RtlGetAppContainerParent(PSID AppContainerSid, PSID *AppContainerSidParent)
{
  NTSTATUS result; // eax
  char *Heap_0; // rax
  void *v6; // rcx
  _DWORD *v7; // rdx
  char *v8; // rbx
  __int64 v9; // r8

  *AppContainerSidParent = 0LL;
  if ( *((_BYTE *)AppContainerSid + 1) < 2u
    || *(_BYTE *)AppContainerSid != 1
    || RtlCompareMemory((char *)AppContainerSid + 2, &RtlpAppPackageAuthority, 6uLL) != 6
    || *((_DWORD *)AppContainerSid + 2) != 2
    || *((_BYTE *)AppContainerSid + 1) != 12 )
  {
    return -1073741811;
  }
  Heap_0 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, 0x28uLL);
  v6 = Heap_0;
  if ( !Heap_0 )
    return -1073741670;
  *(_WORD *)Heap_0 = 2049;
  v7 = Heap_0 + 8;
  v8 = (char *)((_BYTE *)AppContainerSid - Heap_0);
  *(_SID_IDENTIFIER_AUTHORITY *)(Heap_0 + 2) = RtlpAppPackageAuthority;
  v9 = 8LL;
  do
  {
    *v7 = *(_DWORD *)((char *)v7 + (_QWORD)v8);
    ++v7;
    --v9;
  }
  while ( v9 );
  result = 0;
  *AppContainerSidParent = v6;
  return result;
}

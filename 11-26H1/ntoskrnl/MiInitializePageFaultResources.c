/*
 * XREFs of MiInitializePageFaultResources @ 0x1406FC31C
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     MiInsertInPageBlock @ 0x14031E654 (MiInsertInPageBlock.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiAllocateInPageSupportBlock @ 0x1403991AC (MiAllocateInPageSupportBlock.c)
 *     InitializeSListHead @ 0x140492D50 (InitializeSListHead.c)
 */

__int64 __fastcall MiInitializePageFaultResources(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  unsigned int *v10; // rbx
  unsigned int v11; // eax
  unsigned __int64 v12; // rax

  v4 = 0;
  v5 = 0LL;
  while ( v4 < 2 )
  {
    v6 = 16LL * v4;
    InitializeSListHead((PSLIST_HEADER)((char *)&MiState + v6 + 39392));
    InitializeSListHead((PSLIST_HEADER)((char *)&MiState + v6 + 39424));
    v7 = v4 != 0 ? 16 : 8;
    *((_BYTE *)&MiState + v5 + 39456) = v4 != 0 ? 16 : 8;
    v8 = MiAllocateInPageSupportBlock(v4, v7);
    if ( !v8 )
      return 0LL;
    *((_QWORD *)&MiState + v5 + 4933) = v8;
    v9 = (-(__int64)(v4 != 0) & 0xFFFFFFFFFFFFF880uLL) + 2368;
    *((_QWORD *)&MiState + v5 + 4935) = v8 + v9 * v7;
    v10 = (unsigned int *)(v8 + 188);
    do
    {
      v11 = *v10 | 0x100;
      if ( v5 )
        v11 = *v10 & 0xFFFFFEFF;
      *v10 = v11;
      MiInsertInPageBlock((PSLIST_ENTRY)(v10 - 47));
      v10 = (unsigned int *)((char *)v10 + v9);
      --v7;
    }
    while ( v7 );
    ++v4;
    ++v5;
  }
  v12 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, 0x10u, a3, a4);
  if ( !v12 )
    return 0LL;
  qword_140E36148 = v12;
  return 1LL;
}

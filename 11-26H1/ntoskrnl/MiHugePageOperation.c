/*
 * XREFs of MiHugePageOperation @ 0x140709E08
 * Callers:
 *     MiGetHugeRange @ 0x1406F0520 (MiGetHugeRange.c)
 *     MiPartitionTransferAllocateLargePages @ 0x140882E30 (MiPartitionTransferAllocateLargePages.c)
 * Callees:
 *     MiGetUltraMapping @ 0x140287730 (MiGetUltraMapping.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiDeleteUltraThreadContext @ 0x14028EB40 (MiDeleteUltraThreadContext.c)
 *     MiWriteLargePte @ 0x1402A0630 (MiWriteLargePte.c)
 *     MiCreateUltraThreadContext @ 0x1402D6670 (MiCreateUltraThreadContext.c)
 *     MiUpdateProtectionMask @ 0x1402E58D0 (MiUpdateProtectionMask.c)
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiGroupZeroHugeRange @ 0x140709CF4 (MiGroupZeroHugeRange.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiHugePageOperation(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  int v7; // eax
  unsigned __int64 UltraMapping; // rbp
  int v9; // ebx
  int v10; // edi
  int updated; // eax
  unsigned int v12; // r8d
  unsigned __int64 v13; // rsi
  __int128 v14; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v15[128]; // [rsp+40h] [rbp-B8h] BYREF

  v14 = 0LL;
  memset_0(v15, 0, sizeof(v15));
  v7 = MiPageToNode(a2);
  MiInitializePageColorBase(
    (__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
    3,
    v7 + 1,
    (__int64)&v14);
  UltraMapping = 0LL;
  if ( a2 <= qword_140E2D920 && ((*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    v9 = (*(_DWORD *)(48 * a2 - 0x21FFFFFFFFE0LL) >> 22) & 3;
  else
    v9 = 1;
  v10 = 0;
  if ( a4 )
  {
    v10 = 2;
  }
  else if ( (unsigned int)MiCreateUltraThreadContext((__int64)v15, (__int64)&v14, 1, 0LL) )
  {
    UltraMapping = MiGetUltraMapping((__int64)v15, 0LL, 0x40000LL, 0);
    updated = MiUpdateProtectionMask(0x84000004, v9);
    MiWriteLargePte(UltraMapping, a2, 0, updated);
  }
  else
  {
    v10 = 1;
    v12 = 4;
    if ( v9 )
    {
      if ( v9 == 2 )
        v12 = 1028;
    }
    else
    {
      v12 = 516;
    }
    UltraMapping = MmMapIoSpaceEx(a2 << 12, 0x40000000LL, v12);
    if ( !UltraMapping )
      v10 = 2;
  }
  v13 = 0LL;
  if ( v10 != 2 )
    v13 = UltraMapping;
  MiGroupZeroHugeRange(a1, v13, a2, v9, 0);
  if ( v10 )
  {
    if ( v10 == 1 )
      MiUnmapContiguousMemory(v13, 0x40000000uLL, 1);
  }
  else
  {
    MiWriteLargePte(v13, a2, 0, 0);
    MiDeleteUltraThreadContext((__int64)v15);
  }
}

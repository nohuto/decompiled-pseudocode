/*
 * XREFs of MiAllocateTopLevelPage @ 0x140ABFDA0
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140ABF9A0 (MmCreateProcessAddressSpace.c)
 *     MiAllocateProcessShadow @ 0x140ABFF40 (MiAllocateProcessShadow.c)
 * Callees:
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiSetPageTablePfnBuddy @ 0x1402A4030 (MiSetPageTablePfnBuddy.c)
 *     MiGetSlabPage @ 0x14033C304 (MiGetSlabPage.c)
 *     MiInitializePfnForOtherProcess @ 0x14033D818 (MiInitializePfnForOtherProcess.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiWaitForFreePage @ 0x1403D4D84 (MiWaitForFreePage.c)
 *     MiInitializeSelfmap @ 0x14042A4F4 (MiInitializeSelfmap.c)
 *     MiGetNextPageColor @ 0x140442ED0 (MiGetNextPageColor.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 */

__int64 __fastcall MiAllocateTopLevelPage(unsigned __int64 a1)
{
  __int64 v2; // rcx
  __int64 ProcessPartition; // r14
  int v4; // r8d
  unsigned int NextPageColor; // ebx
  char v6; // r12
  unsigned __int8 v7; // al
  char v8; // r15
  struct _KTHREAD *CurrentThread; // rsi
  __int64 SlabPage; // rdi
  _OWORD v12[2]; // [rsp+30h] [rbp-28h] BYREF

  v12[0] = 0LL;
  ProcessPartition = MiGetProcessPartition(a1);
  MiInitializePageColorBase(v2 + 1024, 3, v4, (__int64)v12);
  NextPageColor = MiGetNextPageColor((__int64)v12);
  v6 = 0;
  v7 = *(_BYTE *)(a1 + 1774);
  v8 = -1;
  CurrentThread = 0LL;
  if ( v7 != 0xFF )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 2;
    v8 = CurrentThread[1].SavedApcStateFill[15];
    CurrentThread[1].SavedApcStateFill[15] = v7;
  }
  while ( 1 )
  {
    if ( *(_BYTE *)(a1 + 1774) != 0xFF )
    {
      SlabPage = MiGetSlabPage(ProcessPartition, 8, NextPageColor, 0xCu, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0);
      if ( SlabPage != -1 )
        break;
    }
    SlabPage = MiGetPage(ProcessPartition, NextPageColor, 0x30u);
    if ( SlabPage != -1 )
      break;
    MiWaitForFreePage(ProcessPartition, v6);
  }
  if ( *(_BYTE *)(a1 + 1774) != 0xFF )
    CurrentThread[1].SavedApcStateFill[15] = v8;
  MiSetPfnContainingFrame(48 * SlabPage - 0x220000000000LL, SlabPage);
  *(_QWORD *)(48 * SlabPage - 0x220000000000LL) = 0LL;
  MiInitializePfnForOtherProcess(SlabPage, 0xFFFFF6FB7DBEDF68uLL, SlabPage, 512);
  MiSetPageTablePfnBuddy(48 * SlabPage - 0x220000000000LL, a1, 0);
  MiInitializeSelfmap(SlabPage);
  return SlabPage;
}

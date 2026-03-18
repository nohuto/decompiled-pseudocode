/*
 * XREFs of MiDoneWithThisPageGetAnother @ 0x140AF46EC
 * Callers:
 *     MiUpdateForkMaps @ 0x140AF443C (MiUpdateForkMaps.c)
 * Callees:
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x14036FE20 (MiInitializePageColorBase.c)
 *     MiWaitForFreePage @ 0x1403D1DB4 (MiWaitForFreePage.c)
 *     MiGetNextPageColor @ 0x14044ADA0 (MiGetNextPageColor.c)
 *     MiGetProcessPartition @ 0x14044C0C0 (MiGetProcessPartition.c)
 *     MiFinishLastForkPageTable @ 0x1404D069C (MiFinishLastForkPageTable.c)
 */

__int64 __fastcall MiDoneWithThisPageGetAnother(__int64 *a1, __int64 a2, _KPROCESS *a3)
{
  __int64 v4; // rdx
  unsigned int NextPageColor; // ebx
  __int64 ProcessPartition; // rbp
  __int64 i; // rcx
  __int64 result; // rax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  v11 = 0LL;
  if ( v4 != -1 )
    MiFinishLastForkPageTable(a3, v4);
  MiInitializePageColorBase(a2 + 1024, 3, 0, (__int64)&v11);
  NextPageColor = MiGetNextPageColor((__int64)&v11);
  ProcessPartition = MiGetProcessPartition((__int64)a3);
  for ( i = ProcessPartition; ; i = ProcessPartition )
  {
    result = MiGetPage(i, NextPageColor, 0x30u);
    *a1 = result;
    if ( result != -1 )
      break;
    MiWaitForFreePage(ProcessPartition, 0);
  }
  return result;
}

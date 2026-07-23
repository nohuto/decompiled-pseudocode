/*
 * XREFs of ?KiAbpPreCleanupThreadState@AutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x1402039C4
 * Callers:
 *     KeTerminateThread @ 0x140203468 (KeTerminateThread.c)
 * Callees:
 *     ?KiAbpPerformPendingReleases@AutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x140203BD0 (-KiAbpPerformPendingReleases@AutoBoost@@YAXPEAU_KTHREAD@@@Z.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 */

void __fastcall AutoBoost::KiAbpPreCleanupThreadState(AutoBoost *this, struct _KTHREAD *a2)
{
  struct AutoBoost::_AB_THREAD_ENTRY *v3; // rdx
  __int64 v4; // rbx
  unsigned int i; // ebp
  __int64 v6; // r14
  __int64 v7; // rdi
  char v8; // al
  char v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8

  if ( (*((_DWORD *)this + 29) & 1) != 0 )
  {
    AutoBoost::KiAbpPerformPendingReleases(this, a2);
    v4 = *(_QWORD *)(*((_QWORD *)this + 142) + 8LL);
    if ( v4 )
    {
      for ( i = 0; i < *(unsigned __int8 *)(v4 + 14); ++i )
      {
        v6 = 48LL * i;
        v7 = v6 + v4 + 16;
        v8 = *(_BYTE *)(v7 + 32);
        if ( (v8 & 1) != 0 )
        {
          *(_BYTE *)(v7 + 33) |= 1u;
          if ( (v8 & 2) != 0 )
            AutoBoost::KiAbpEntryUnlink((AutoBoost *)(v6 + v4 + 16), v3);
          v9 = *(_BYTE *)(v6 + v4 + 52);
          v10 = *(_QWORD *)v7;
          v11 = *(_QWORD *)(v6 + v4 + 56);
          *(_QWORD *)v7 = 0LL;
          *(_DWORD *)(v6 + v4 + 56) = 0;
          *(_WORD *)(v7 + 32) = 0;
          *(_WORD *)(v7 - 48LL * (v9 & 0x7F) - 8) |= 1 << (v9 & 0xF);
          AutoBoost::KiAbpUnboostThread(this, v10, v11, 0LL);
        }
      }
    }
  }
}

/*
 * XREFs of MiDiscardPte @ 0x1406EEED0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetWsleContents @ 0x140297070 (MiGetWsleContents.c)
 *     MiReleasePageFileInfo @ 0x1402DAD50 (MiReleasePageFileInfo.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MiGetProcessorFlushList @ 0x1403229E0 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x140328E50 (MiFreeWsleList.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14035DBA4 (MI_WSLE_LOG_ACCESS.c)
 *     MiInsertTbFlushEntry @ 0x14035E7E0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140360920 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x1403613C0 (MiReleaseProcessorFlushList.c)
 *     MiDiscardPtePrototype @ 0x1405248A4 (MiDiscardPtePrototype.c)
 *     MiDiscardPteTransitionPage @ 0x1405287F0 (MiDiscardPteTransitionPage.c)
 */

__int64 __fastcall MiDiscardPte(__int64 KernelWaitTime, unsigned __int64 a2, int a3)
{
  __int64 v3; // r14
  unsigned int v4; // ebx
  __int64 v6; // rbp
  __int64 v7; // rdx
  _KPROCESS *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 *ProcessorFlushList; // rax
  __int64 v12; // rdx
  _KPROCESS *v13; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  _KPROCESS *v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  _QWORD v24[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v25; // [rsp+70h] [rbp+8h]
  unsigned __int64 v26; // [rsp+70h] [rbp+8h]

  v3 = *(_QWORD *)(KernelWaitTime + 184);
  v4 = 0;
  v6 = KernelWaitTime;
  if ( !a3 )
  {
    v7 = *(_QWORD *)a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL
      && a2 <= 0xFFFFF6FB7DBED7F8uLL
      && (v7 & 1) != 0
      && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
    {
      v8 = MiPteHasShadow();
      if ( v8 )
      {
        KernelWaitTime = v8[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v10 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
          if ( (v10 & 0x20) != 0 )
            v9 |= 0x20uLL;
          v7 = v9 | 0x42;
          if ( (v10 & 0x42) == 0 )
            v7 = v9;
        }
      }
    }
    v25 = v7;
    if ( !v7 )
      goto LABEL_55;
    if ( (v7 & 1) != 0 )
    {
      if ( (MiGetWsleContents(KernelWaitTime, (__int64)(a2 << 25) >> 16) & 0xF) == 8 )
      {
        *(_DWORD *)(v3 + 16) = 1073741849;
        return 5;
      }
      if ( (*(_DWORD *)(v3 + 20) & 1) != 0 )
        MI_WSLE_LOG_ACCESS(*(_QWORD *)(v6 + 32), a2);
      if ( !*(_QWORD *)v3 )
      {
        ProcessorFlushList = MiGetProcessorFlushList();
        *(_QWORD *)v3 = ProcessorFlushList + 517;
        MiInitializeTbFlushList(
          (__int64)(ProcessorFlushList + 517),
          *(_QWORD *)(v6 + 32),
          *((_DWORD *)ProcessorFlushList + 1037),
          2,
          1);
      }
      MiInsertTbFlushEntry(*(_QWORD *)v3, (__int64)(a2 << 25) >> 16, 1LL, 0);
      if ( *(_DWORD *)(*(_QWORD *)v3 + 28LL) == *(_DWORD *)(*(_QWORD *)v3 + 12LL) )
      {
        MiFreeWsleList(*(_QWORD *)(v6 + 32), v12, *(_QWORD *)v3, 8u);
        MiReleaseProcessorFlushList();
        *(_QWORD *)v3 = 0LL;
      }
    }
    else
    {
      if ( (v7 & 0x400) == 0 )
      {
        if ( (v7 & 0x800) != 0 )
        {
          if ( (unsigned int)MiDiscardPteTransitionPage((unsigned __int64 *)a2, 0LL) )
            goto LABEL_55;
          v7 = *(_QWORD *)a2;
          if ( a2 >= 0xFFFFF6FB7DBED000uLL
            && a2 <= 0xFFFFF6FB7DBED7F8uLL
            && (v7 & 1) != 0
            && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
          {
            v13 = MiPteHasShadow();
            if ( v13 )
            {
              v15 = v13[2].KernelWaitTime;
              if ( v15 )
              {
                v16 = *(_QWORD *)(v15 + 8 * ((a2 >> 3) & 0x1FF));
                if ( (v16 & 0x20) != 0 )
                  v14 |= 0x20uLL;
                v7 = v14 | 0x42;
                if ( (v16 & 0x42) == 0 )
                  v7 = v14;
              }
            }
          }
          v25 = v7;
        }
        if ( (v7 & 8) != 0 )
        {
          v24[0] = v25;
          if ( (v25 & 8) != 0 )
          {
            v26 = v25 & 0xFFFFFFFFFFFFFFF7uLL;
            v17 = v24[0];
            if ( (unsigned __int64)v24 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)v24 <= 0xFFFFF6FB7DBED7F8uLL
              && (v24[0] & 1) != 0
              && ((v24[0] & 0x20) == 0 || (v24[0] & 0x42) == 0) )
            {
              v18 = MiPteHasShadow();
              if ( v18 )
              {
                v20 = v18[2].KernelWaitTime;
                if ( v20 )
                {
                  v21 = *(_QWORD *)(v20 + 8 * (((unsigned __int64)v24 >> 3) & 0x1FF));
                  if ( (v21 & 0x20) != 0 )
                    v19 |= 0x20uLL;
                  v17 = v19 | 0x42;
                  if ( (v21 & 0x42) == 0 )
                    v17 = v19;
                }
              }
            }
            v24[0] = v17 & 0xFFFFFFFFFFFFFFFBuLL;
            v22 = v17 & 0xFFFFFFFFFFFFFFFBuLL;
            v7 = v26;
          }
          else
          {
            v22 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          }
          *(_QWORD *)a2 = v7;
          _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(v6 + 32) - 376LL));
          MiReleasePageFileInfo(
            *(struct _KEVENT **)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v6 + 32) + 174LL)),
            v22,
            1);
        }
        goto LABEL_55;
      }
      MiDiscardPtePrototype((__int64 *)a2);
    }
LABEL_55:
    *(_QWORD *)(v3 + 8) = a2;
  }
  return v4;
}

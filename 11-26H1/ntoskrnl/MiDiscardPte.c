/*
 * XREFs of MiDiscardPte @ 0x1406F3B70
 * Callers:
 *     <none>
 * Callees:
 *     MiGetWsleContents @ 0x1402965D0 (MiGetWsleContents.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14035F944 (MI_WSLE_LOG_ACCESS.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiDiscardPtePrototype @ 0x140526F14 (MiDiscardPtePrototype.c)
 *     MiDiscardPteTransitionPage @ 0x14052AE60 (MiDiscardPteTransitionPage.c)
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
  unsigned __int64 v11; // r8
  __int64 *ProcessorFlushList; // rax
  __int64 v13; // rdx
  _KPROCESS *v14; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  _KPROCESS *v19; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  _QWORD v25[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v26; // [rsp+70h] [rbp+8h]
  unsigned __int64 v27; // [rsp+70h] [rbp+8h]

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
    v26 = v7;
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
        MI_WSLE_LOG_ACCESS(*(_QWORD *)(v6 + 32), a2, v11);
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
        MiFreeWsleList(*(_QWORD *)(v6 + 32), v13, *(_QWORD *)v3, 8u);
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
            v14 = MiPteHasShadow();
            if ( v14 )
            {
              v16 = v14[2].KernelWaitTime;
              if ( v16 )
              {
                v17 = *(_QWORD *)(v16 + 8 * ((a2 >> 3) & 0x1FF));
                if ( (v17 & 0x20) != 0 )
                  v15 |= 0x20uLL;
                v7 = v15 | 0x42;
                if ( (v17 & 0x42) == 0 )
                  v7 = v15;
              }
            }
          }
          v26 = v7;
        }
        if ( (v7 & 8) != 0 )
        {
          v25[0] = v26;
          if ( (v26 & 8) != 0 )
          {
            v27 = v26 & 0xFFFFFFFFFFFFFFF7uLL;
            v18 = v25[0];
            if ( (unsigned __int64)v25 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)v25 <= 0xFFFFF6FB7DBED7F8uLL
              && (v25[0] & 1) != 0
              && ((v25[0] & 0x20) == 0 || (v25[0] & 0x42) == 0) )
            {
              v19 = MiPteHasShadow();
              if ( v19 )
              {
                v21 = v19[2].KernelWaitTime;
                if ( v21 )
                {
                  v22 = *(_QWORD *)(v21 + 8 * (((unsigned __int64)v25 >> 3) & 0x1FF));
                  if ( (v22 & 0x20) != 0 )
                    v20 |= 0x20uLL;
                  v18 = v20 | 0x42;
                  if ( (v22 & 0x42) == 0 )
                    v18 = v20;
                }
              }
            }
            v25[0] = v18 & 0xFFFFFFFFFFFFFFFBuLL;
            v23 = v18 & 0xFFFFFFFFFFFFFFFBuLL;
            v7 = v27;
          }
          else
          {
            v23 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          }
          *(_QWORD *)a2 = v7;
          _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(v6 + 32) - 376LL));
          MiReleasePageFileInfo(
            *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v6 + 32) + 174LL)),
            v23,
            1LL);
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

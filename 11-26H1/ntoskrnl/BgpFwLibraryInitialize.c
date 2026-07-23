/*
 * XREFs of BgpFwLibraryInitialize @ 0x140C5A5B8
 * Callers:
 *     BgLibraryInitialize @ 0x140C55AD4 (BgLibraryInitialize.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140357C64 (BgpFwAllocateMemory.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     BgpFwAcquireLock @ 0x1404E11C4 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E157C (BgpFwReleaseLock.c)
 *     wcscpy_s @ 0x14053EF80 (wcscpy_s.c)
 *     BgpFwLibraryEnable @ 0x14071AB1C (BgpFwLibraryEnable.c)
 *     BgpGxProcessQrCodeBitmap @ 0x14071AFEC (BgpGxProcessQrCodeBitmap.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AnFwProgressIndicatorTransition @ 0x140C553F8 (AnFwProgressIndicatorTransition.c)
 *     BgpFwInitializeReservePool @ 0x140C569A4 (BgpFwInitializeReservePool.c)
 *     BgpFwLibraryDestroy @ 0x140C569EC (BgpFwLibraryDestroy.c)
 *     BgpFwReservePoolSwap @ 0x140C56BC0 (BgpFwReservePoolSwap.c)
 *     ResFwConfigureDisplayStringResources @ 0x140C56C5C (ResFwConfigureDisplayStringResources.c)
 *     AnFwConfigureProgressResources @ 0x140C570AC (AnFwConfigureProgressResources.c)
 *     LogFwInitialize @ 0x140C58270 (LogFwInitialize.c)
 *     BgpFwInitializeLock @ 0x140D19B64 (BgpFwInitializeLock.c)
 *     BgpFoInitialize @ 0x140D19C60 (BgpFoInitialize.c)
 *     BgpBcInitializeCriticalMode @ 0x140D1AA6C (BgpBcInitializeCriticalMode.c)
 */

__int64 __fastcall BgpFwLibraryInitialize(__int64 a1, unsigned int a2)
{
  int v2; // r15d
  __int64 result; // rax
  int v6; // ebp
  unsigned int *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // ebx
  unsigned __int64 Memory; // rax
  const void **v12; // r13
  __int64 v13; // rbx
  int v14; // eax
  unsigned int v15; // r14d
  int v16; // edx
  unsigned int v17; // edi
  char *v18; // rax
  char *v19; // r12
  __int64 v20; // rdx
  _OWORD *v21; // rcx
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  unsigned int *v24; // r8
  char *v25; // rbx
  int v26; // eax
  char *v27; // rdi
  char *v28; // rbx
  struct _LIST_ENTRY *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rcx
  const wchar_t *v34; // r8
  void *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  unsigned __int64 v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // eax
  unsigned int v45; // [rsp+20h] [rbp-58h]
  unsigned int v46; // [rsp+24h] [rbp-54h]
  int v47; // [rsp+80h] [rbp+8h]
  unsigned int v49; // [rsp+90h] [rbp+18h]
  unsigned int v50; // [rsp+98h] [rbp+20h]

  v2 = 0;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 116) < 5u )
      return 3221225561LL;
    v6 = *(_DWORD *)(a1 + 120) & 0x16FF0000;
    if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 1) == 0
      || (gLoadedDiffHivesLock.WaitBlockFill6[80] & 4) != 0
      || (*(_DWORD *)(a1 + 120) & 0x100000) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 120) & 0x100000) != 0 )
      {
        BgpFwAcquireLock();
        if ( a2 == -1 )
        {
          gLoadedDiffHivesLock.WaitBlock[0].WaitListEntry.Flink = 0LL;
          *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] = *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0xFFEFE7FD | 0x101800;
          gLoadedDiffHivesLock.Timer.TimerListEntry = 0LL;
          *(_OWORD *)&gLoadedDiffHivesLock.Timer.Dpc = 0LL;
          result = BgpFwLibraryEnable(a1 + 32);
          if ( (int)result < 0 )
            return result;
          *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] &= ~0x2000u;
          v7 = *(unsigned int **)(a1 + 16);
          if ( v7 )
          {
            BgpFwReservePoolSwap(0, *(_QWORD *)(a1 + 240), *(_DWORD *)(a1 + 248), v7);
            gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)ResFwConfigureDisplayStringResources(*(_QWORD *)(a1 + 256));
            gLoadedDiffHivesLock.NpxState = AnFwConfigureProgressResources(*(int **)(a1 + 264));
          }
          else
          {
            gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Flink = 0LL;
            gLoadedDiffHivesLock.NpxState = 0LL;
          }
          LogFwInitialize();
        }
        else
        {
          *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] &= ~0x1000u;
          AnFwProgressIndicatorTransition();
        }
        BgpFwReleaseLock();
        goto LABEL_83;
      }
      if ( a2 == -1 )
      {
        *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] = BgpFwInitializeLock() | 0xC04;
        gLoadedDiffHivesLock.SavedApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)&gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Blink;
        gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)&gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Blink;
        v9 = *(_QWORD *)(v8 + 240);
        if ( !v9 || !*(_DWORD *)(a1 + 248) )
          return 3221225626LL;
        BgpFwInitializeReservePool(v9, 0x4000u, dword_140E647B0);
        v10 = BgpFwLibraryEnable(a1 + 32);
        if ( v10 < 0 )
          goto LABEL_42;
        *(_OWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[136] = *(_OWORD *)(a1 + 100);
        if ( !*(_QWORD *)(a1 + 88) )
        {
LABEL_23:
          if ( *(_DWORD *)(a1 + 116) >= 3u )
          {
            gLoadedDiffHivesLock.MutantListHead.Blink = *(struct _LIST_ENTRY **)(a1 + 404);
            *(_DWORD *)&gLoadedDiffHivesLock.AbWaitEntryCount = *(_DWORD *)(a1 + 412);
          }
          LODWORD(gLoadedDiffHivesLock.ThreadListEntry.Flink) = *(_DWORD *)(a1 + 400);
          v10 = BgpBcInitializeCriticalMode(a1, 0xFFFFFFFFLL);
          if ( v10 < 0 )
            goto LABEL_42;
LABEL_83:
          *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] |= 1u;
          return 0;
        }
        Memory = BgpFwAllocateMemory(0x18uLL);
        if ( Memory )
        {
          *(_QWORD *)Memory = *(_QWORD *)(a1 + 88);
          *(_DWORD *)(Memory + 8) = *(_DWORD *)(a1 + 96);
          *(_QWORD *)(Memory + 16) = *(_QWORD *)(a1 + 88);
          *(_DWORD *)(Memory + 12) = 1;
          gLoadedDiffHivesLock.AffinityVersion = Memory;
          v10 = BgpFoInitialize(Memory, 0LL);
          if ( v10 >= 0 )
            goto LABEL_23;
LABEL_42:
          BgpFwLibraryDestroy();
          return (unsigned int)v10;
        }
LABEL_41:
        v10 = -1073741801;
        goto LABEL_42;
      }
      BgpFwAcquireLock();
      v10 = BgpFwLibraryEnable(a1 + 32);
      if ( v10 < 0 )
      {
        BgpFwReleaseLock();
        goto LABEL_42;
      }
      gLoadedDiffHivesLock.WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)MmGetPhysicalAddress(gLoadedDiffHivesLock.WaitBlock[0].WaitListEntry.Flink).QuadPart;
      *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[56] = gLoadedDiffHivesLock.Timer.TimerListEntry.Blink;
      *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[60] = HIDWORD(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink);
      *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[64] = HIDWORD(gLoadedDiffHivesLock.Timer.TimerListEntry.Blink);
      if ( LODWORD(gLoadedDiffHivesLock.Timer.Dpc) == 4 )
      {
        *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[72] = 3;
      }
      else if ( LODWORD(gLoadedDiffHivesLock.Timer.Dpc) == 5 )
      {
        *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[72] = 4;
      }
      else
      {
        *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[72] = 0;
      }
      v12 = (const void **)(a1 + 72);
      v13 = 0LL;
      v14 = 432;
      v47 = 0;
      *(_OWORD *)&gLoadedDiffHivesLock.SavedApcStateFill[24] = *(_OWORD *)(a1 + 272);
      v15 = 0;
      v16 = 0;
      *(_OWORD *)&gLoadedDiffHivesLock.SavedApcStateFill[40] = *(_OWORD *)(a1 + 288);
      *(_OWORD *)&gLoadedDiffHivesLock.SchedulerApcFill5[8] = *(_OWORD *)(a1 + 304);
      *(_OWORD *)&gLoadedDiffHivesLock.SchedulerApcFill5[24] = *(_OWORD *)(a1 + 320);
      *(_OWORD *)&gLoadedDiffHivesLock.SchedulerApcFill5[40] = *(_OWORD *)(a1 + 336);
      *(_OWORD *)&gLoadedDiffHivesLock.SchedulerApcFill5[56] = *(_OWORD *)(a1 + 352);
      *(_OWORD *)&gLoadedDiffHivesLock.SchedulerApcFill5[72] = *(_OWORD *)(a1 + 368);
      *(_OWORD *)&gLoadedDiffHivesLock.SuspendEvent.Header.Lock = *(_OWORD *)(a1 + 384);
      if ( *(_QWORD *)(a1 + 72) )
      {
        v16 = *(_DWORD *)(a1 + 84);
        v15 = (*(_DWORD *)(a1 + 80) + 15) & 0xFFFFFFF0;
        v13 = 32LL;
        v47 = 32;
        v14 = v15 + 464;
      }
      v17 = 0;
      v49 = 0;
      if ( *(_QWORD *)(a1 + 128) )
      {
        v49 = 32;
        v17 = (*(_DWORD *)(a1 + 136) + 15) & 0xFFFFFFF0;
        v2 = 32;
        v14 += v17 + 32;
        v12 = (const void **)(a1 + 72);
      }
      v46 = v16 + v14 + 16496 - v15 - v2 - v17 - v13 - 432;
      v45 = ((v46 >> 3) + 15) & 0xFFFFFFF0;
      v50 = v16 + v14 + 16496 + v45;
      v18 = (char *)BgpFwAllocateMemory(v50);
      gLoadedDiffHivesLock.WaitBlock[2].Object = v18;
      v19 = v18;
      if ( !v18 )
      {
        BgpFwReleaseLock();
        goto LABEL_41;
      }
      v20 = 3LL;
      v21 = v18;
      v22 = (_OWORD *)a1;
      do
      {
        *v21 = *v22;
        v21[1] = v22[1];
        v21[2] = v22[2];
        v21[3] = v22[3];
        v21[4] = v22[4];
        v21[5] = v22[5];
        v21[6] = v22[6];
        v21 += 8;
        v23 = v22[7];
        v22 += 8;
        *(v21 - 1) = v23;
        --v20;
      }
      while ( v20 );
      *v21 = *v22;
      v21[1] = v22[1];
      *((_QWORD *)v21 + 4) = *((_QWORD *)v22 + 4);
      *(_DWORD *)v19 = v50;
      *((_DWORD *)v19 + 30) |= 0x100000u;
      *((_QWORD *)v19 + 30) = 0LL;
      *((_DWORD *)v19 + 62) = 0;
      *((_QWORD *)v19 + 33) = 0LL;
      *((_QWORD *)v19 + 32) = 0LL;
      v24 = (unsigned int *)&v19[(unsigned int)v13 + 432 + v17 + v15 + v2];
      BgpFwInitializeReservePool((__int64)v24 + v45, v46, v24);
      gLoadedDiffHivesLock.Affinity = 0LL;
      if ( !v15 )
        goto LABEL_49;
      v25 = &v19[v13 + 432];
      memmove(v25, *v12, *(unsigned int *)(a1 + 80));
      *((_DWORD *)v19 + 111) = 1;
      *((_QWORD *)v19 + 54) = v25;
      *((_DWORD *)v19 + 110) = *(_DWORD *)(a1 + 80);
      *((_QWORD *)v19 + 56) = v25;
      *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] |= 0x800u;
      v26 = BgpFoInitialize(v19 + 432, 1LL);
      *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] &= ~0x800u;
      if ( v26 >= 0 )
        gLoadedDiffHivesLock.Affinity = (_KAFFINITY_EX *)(v19 + 432);
      if ( !gLoadedDiffHivesLock.Affinity )
LABEL_49:
        DbgPrintEx(0x65u, 0, "BGFX system font initialization failure!\n");
      *(_QWORD *)&gLoadedDiffHivesLock.AffinityPrimaryGroup = 0LL;
      if ( v17 )
      {
        v27 = &v19[v15 + 432 + v47];
        v28 = &v27[v49];
        memmove(v28, *(const void **)(a1 + 128), *(unsigned int *)(a1 + 136));
        *((_DWORD *)v27 + 3) = 1;
        *(_QWORD *)v27 = v28;
        *((_DWORD *)v27 + 2) = *(_DWORD *)(a1 + 136);
        *((_QWORD *)v27 + 2) = v28;
        *(_QWORD *)&gLoadedDiffHivesLock.AffinityPrimaryGroup = v27;
      }
      memset_0(&gLoadedDiffHivesLock.WaitBlockFill11[152], 0, 0x58uLL);
      if ( *(_QWORD *)(a1 + 144) )
      {
        v29 = (struct _LIST_ENTRY *)BgpFwAllocateMemory(*(unsigned int *)(a1 + 160));
        gLoadedDiffHivesLock.WaitBlock[3].WaitListEntry.Blink = v29;
        if ( v29 )
        {
          memmove(v29, *(const void **)(a1 + 144), *(unsigned int *)(a1 + 160));
          *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[168] = *(_DWORD *)(a1 + 160);
          *(_QWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[172] = *(_QWORD *)(a1 + 164);
        }
      }
      v30 = *(_QWORD *)(a1 + 184);
      if ( v30 && (int)BgpGxProcessQrCodeBitmap(v30, (__int64 *)&gLoadedDiffHivesLock.536) < 0 )
        *(_QWORD *)&gLoadedDiffHivesLock.NextProcessor = 0LL;
      v31 = *(_QWORD *)(a1 + 216);
      if ( v31 )
      {
        v32 = -1LL;
        v33 = -1LL;
        do
          ++v33;
        while ( *(_WORD *)(v31 + 2 * v33) );
        gLoadedDiffHivesLock.Process = (_KPROCESS *)BgpFwAllocateMemory(2 * v33 + 2);
        if ( gLoadedDiffHivesLock.Process )
        {
          v34 = *(const wchar_t **)(a1 + 216);
          do
            ++v32;
          while ( v34[v32] );
          wcscpy_s((wchar_t *)gLoadedDiffHivesLock.Process, v32 + 1, v34);
        }
      }
      gLoadedDiffHivesLock.AffinityVersion = 0LL;
      if ( *(_QWORD *)(a1 + 88) )
      {
        v35 = (void *)BgpFwAllocateMemory(*(unsigned int *)(a1 + 96));
        v36 = (__int64)v35;
        if ( v35 )
        {
          memmove(v35, *(const void **)(a1 + 88), *(unsigned int *)(a1 + 96));
          v37 = BgpFwAllocateMemory(0x18uLL);
          v38 = v37;
          if ( !v37 )
          {
            v39 = v36;
LABEL_72:
            BgpFwFreeMemory(v39);
            goto LABEL_73;
          }
          *(_DWORD *)(v37 + 12) = 0;
          *(_QWORD *)v37 = v36;
          *(_DWORD *)(v37 + 8) = *(_DWORD *)(a1 + 96);
          *(_QWORD *)(v37 + 16) = v36;
          if ( (int)BgpFoInitialize(v37, 0LL) < 0 )
          {
            BgpFwFreeMemory(v36);
            v39 = v38;
            goto LABEL_72;
          }
          gLoadedDiffHivesLock.AffinityVersion = v38;
        }
      }
LABEL_73:
      if ( *(_DWORD *)(a1 + 116) >= 3u )
      {
        gLoadedDiffHivesLock.MutantListHead.Blink = *(struct _LIST_ENTRY **)(a1 + 404);
        *(_DWORD *)&gLoadedDiffHivesLock.AbWaitEntryCount = *(_DWORD *)(a1 + 412);
      }
      LODWORD(gLoadedDiffHivesLock.ThreadListEntry.Flink) = *(_DWORD *)(a1 + 400);
      if ( *(_DWORD *)(a1 + 116) >= 5u )
        gLoadedDiffHivesLock.SecureThreadCookie = *(_DWORD *)(a1 + 416);
      *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] |= 0x8000u;
      BgpBcInitializeCriticalMode(a1, a2);
      *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] = *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0xFFFF77FF | 0x800;
      v40 = BgpFwAllocateMemory(0x48uLL);
      *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] &= ~0x800u;
      v41 = v40;
      if ( v40 )
      {
        v42 = *(_QWORD *)(a1 + 256);
        if ( v42 )
        {
          *(_OWORD *)v41 = *(_OWORD *)v42;
          *(_OWORD *)(v41 + 16) = *(_OWORD *)(v42 + 16);
          *(_DWORD *)(v41 + 32) = *(_DWORD *)(v42 + 32);
          *((_QWORD *)v19 + 32) = v41;
          v41 += 36LL;
        }
        v43 = *(_QWORD *)(a1 + 264);
        if ( v43 )
        {
          *(_OWORD *)v41 = *(_OWORD *)v43;
          *(_OWORD *)(v41 + 16) = *(_OWORD *)(v43 + 16);
          *(_DWORD *)(v41 + 32) = *(_DWORD *)(v43 + 32);
          *((_QWORD *)v19 + 33) = v41;
        }
      }
      gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)ResFwConfigureDisplayStringResources(*(_QWORD *)(a1 + 256));
      gLoadedDiffHivesLock.NpxState = AnFwConfigureProgressResources(*(int **)(a1 + 264));
      v44 = *(_DWORD *)(a1 + 124);
      *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] |= v6 | 0x80;
      *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[84] = v44;
      BgpFwReleaseLock();
      *(_QWORD *)&gLoadedDiffHivesLock.UserAffinityPrimaryGroup = *(_QWORD *)(a1 + 232);
      goto LABEL_83;
    }
  }
  return 3221225485LL;
}

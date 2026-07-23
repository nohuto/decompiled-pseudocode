/*
 * XREFs of BgpConsoleInitialize @ 0x140C56420
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140357C64 (BgpFwAllocateMemory.c)
 *     BgpFwAcquireLock @ 0x1404E11C4 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E157C (BgpFwReleaseLock.c)
 *     BgpGetResolution @ 0x14050E808 (BgpGetResolution.c)
 *     BgpConsoleSetPointSize @ 0x14071AA40 (BgpConsoleSetPointSize.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     BgpDisplayCharacterGetContext @ 0x140C55BB4 (BgpDisplayCharacterGetContext.c)
 *     BgpConsoleClearScreenEx @ 0x140C55D78 (BgpConsoleClearScreenEx.c)
 *     BgpFoGetFontHandle @ 0x140C5A508 (BgpFoGetFontHandle.c)
 *     BgpConsoleGetFontName @ 0x140D19B18 (BgpConsoleGetFontName.c)
 */

__int64 __fastcall BgpConsoleInitialize(unsigned int a1, unsigned int a2, unsigned int a3)
{
  _DWORD *Memory; // rax
  unsigned int *NormalContext; // r9
  int FontHandle; // ebx
  _DWORD *Resolution; // rax
  __int64 v10; // r9
  char *v11; // rcx
  _DWORD *v12; // rbx
  __int64 Context; // rax
  unsigned int v14; // edx
  unsigned int v15; // r10d
  unsigned int v16; // r8d
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int i; // r11d
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  wchar_t *Str2; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v26[4]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v27[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v28; // [rsp+58h] [rbp-18h]
  int v29; // [rsp+60h] [rbp-10h]
  int v30; // [rsp+64h] [rbp-Ch]

  v28 = 0LL;
  v29 = 0;
  v24 = 0LL;
  Str2 = 0LL;
  BgpFwAcquireLock();
  Memory = (_DWORD *)BgpFwAllocateMemory(0x5E10uLL);
  WheapPfaLock.SchedulerApc.NormalContext = Memory;
  NormalContext = Memory;
  if ( !Memory )
  {
    FontHandle = -1073741801;
    goto LABEL_15;
  }
  *Memory = 80;
  Memory[1] = 25;
  Memory[2] |= (unsigned __int16)a1;
  Memory[3] = a2;
  Memory[4] = a3;
  Resolution = BgpGetResolution(v26);
  *(_QWORD *)(v10 + 20) = *(_QWORD *)Resolution;
  *(_DWORD *)(v10 + 28) = Resolution[2];
  *(_DWORD *)(v10 + 32) = 15;
  *(_QWORD *)(v10 + 40) = 0LL;
  *(_DWORD *)(v10 + 48) = 12;
  *(_QWORD *)(v10 + 52) = 22LL;
  memset_0((void *)(v10 + 80), 0, 0x5DC0uLL);
  v27[0] = a3;
  v27[1] = a2;
  v30 = ((unsigned __int8)~(_BYTE)a1 >> 1) & 1;
  BgpConsoleGetFontName(LODWORD(gLoadedDiffHivesLock.ThreadListEntry.Flink), &Str2);
  FontHandle = BgpFoGetFontHandle(Str2);
  if ( FontHandle < 0
    || (FontHandle = BgpConsoleSetPointSize(
                       *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 1),
                       *(_DWORD *)WheapPfaLock.SchedulerApc.NormalContext,
                       *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 6),
                       *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 5),
                       (__int64)v27,
                       (__int64)&v24),
        FontHandle < 0) )
  {
    NormalContext = (unsigned int *)WheapPfaLock.SchedulerApc.NormalContext;
LABEL_15:
    if ( NormalContext )
    {
      BgpFwFreeMemory((__int64)NormalContext);
      WheapPfaLock.SchedulerApc.NormalContext = 0LL;
    }
    goto LABEL_17;
  }
  v11 = (char *)WheapPfaLock.SchedulerApc.NormalContext;
  *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 8) = v29;
  v12 = v11 + 48;
  *((_QWORD *)v11 + 6) = v24;
  Context = BgpDisplayCharacterGetContext((__int64)v27, (int *)v11 + 12, ~(unsigned __int8)(a1 >> 1) & 2 | 1u);
  NormalContext = (unsigned int *)WheapPfaLock.SchedulerApc.NormalContext;
  *((_QWORD *)WheapPfaLock.SchedulerApc.NormalContext + 5) = Context;
  if ( !Context )
  {
    FontHandle = -1073741823;
    goto LABEL_15;
  }
  v14 = *NormalContext;
  v15 = 0;
  v16 = NormalContext[1];
  NormalContext[15] = (NormalContext[5] - *v12 * *NormalContext) >> 1;
  v17 = v12[1] * v16;
  v18 = NormalContext[6];
  *((_QWORD *)NormalContext + 9) = 0LL;
  NormalContext[17] = 0;
  NormalContext[16] = (v18 - v17) >> 1;
  if ( v14 )
  {
    do
    {
      for ( i = 0; i < v16; v16 = NormalContext[1] )
      {
        v20 = i++;
        v21 = 25LL * v15 + v20;
        v22 = 3 * v21;
        LOWORD(NormalContext[v22 + 22]) = 32;
        NormalContext[3 * v21 + 21] = a3;
        NormalContext[v22 + 20] = a2;
      }
      ++v15;
    }
    while ( v15 < *NormalContext );
  }
  if ( (a1 & 1) != 0 )
    BgpConsoleClearScreenEx();
  FontHandle = 0;
LABEL_17:
  BgpFwReleaseLock();
  return (unsigned int)FontHandle;
}

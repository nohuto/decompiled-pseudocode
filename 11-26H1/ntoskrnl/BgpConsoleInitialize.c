/*
 * XREFs of BgpConsoleInitialize @ 0x140C50420
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwFreeMemory @ 0x140355E00 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140355EBC (BgpFwAllocateMemory.c)
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E81BC (BgpFwReleaseLock.c)
 *     BgpGetResolution @ 0x140514D98 (BgpGetResolution.c)
 *     BgpConsoleSetPointSize @ 0x140715D50 (BgpConsoleSetPointSize.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     BgpDisplayCharacterGetContext @ 0x140C4FBB4 (BgpDisplayCharacterGetContext.c)
 *     BgpConsoleClearScreenEx @ 0x140C4FD78 (BgpConsoleClearScreenEx.c)
 *     BgpFoGetFontHandle @ 0x140C54508 (BgpFoGetFontHandle.c)
 *     BgpConsoleGetFontName @ 0x140D13950 (BgpConsoleGetFontName.c)
 */

__int64 __fastcall BgpConsoleInitialize(unsigned int a1, int a2, int a3)
{
  __int64 Memory; // rax
  struct _LIST_ENTRY *Flink; // r9
  int FontHandle; // ebx
  _DWORD *Resolution; // rax
  __int64 v10; // r9
  struct _LIST_ENTRY *v11; // rcx
  struct _LIST_ENTRY *v12; // rbx
  struct _LIST_ENTRY *Context; // rax
  int v14; // edx
  unsigned int v15; // r10d
  unsigned int Flink_high; // r8d
  int v17; // eax
  int Blink; // ecx
  unsigned int i; // r11d
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  struct _LIST_ENTRY *v24; // [rsp+30h] [rbp-40h] BYREF
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
  Memory = BgpFwAllocateMemory(0x5E10uLL);
  WheapPfaLock.SavedApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)Memory;
  Flink = (struct _LIST_ENTRY *)Memory;
  if ( !Memory )
  {
    FontHandle = -1073741801;
    goto LABEL_15;
  }
  *(_DWORD *)Memory = 80;
  *(_DWORD *)(Memory + 4) = 25;
  *(_DWORD *)(Memory + 8) |= (unsigned __int16)a1;
  *(_DWORD *)(Memory + 12) = a2;
  *(_DWORD *)(Memory + 16) = a3;
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
                       HIDWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink->Flink),
                       (unsigned int)WheapPfaLock.SavedApcState.ApcListHead[1].Flink->Flink,
                       (unsigned int)WheapPfaLock.SavedApcState.ApcListHead[1].Flink[1].Blink,
                       HIDWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink[1].Flink),
                       (__int64)v27,
                       (__int64)&v24),
        FontHandle < 0) )
  {
    Flink = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
LABEL_15:
    if ( Flink )
    {
      BgpFwFreeMemory((__int64)Flink);
      WheapPfaLock.SavedApcState.ApcListHead[1].Flink = 0LL;
    }
    goto LABEL_17;
  }
  v11 = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
  LODWORD(WheapPfaLock.SavedApcState.ApcListHead[1].Flink[2].Flink) = v29;
  v12 = v11 + 3;
  v11[3].Flink = v24;
  Context = (struct _LIST_ENTRY *)BgpDisplayCharacterGetContext(
                                    (__int64)v27,
                                    (int *)&v11[3],
                                    ~(unsigned __int8)(a1 >> 1) & 2 | 1u);
  Flink = WheapPfaLock.SavedApcState.ApcListHead[1].Flink;
  WheapPfaLock.SavedApcState.ApcListHead[1].Flink[2].Blink = Context;
  if ( !Context )
  {
    FontHandle = -1073741823;
    goto LABEL_15;
  }
  v14 = (int)Flink->Flink;
  v15 = 0;
  Flink_high = HIDWORD(Flink->Flink);
  HIDWORD(Flink[3].Blink) = (unsigned int)(HIDWORD(Flink[1].Flink) - LODWORD(v12->Flink) * LODWORD(Flink->Flink)) >> 1;
  v17 = HIDWORD(v12->Flink) * Flink_high;
  Blink = (int)Flink[1].Blink;
  Flink[4].Blink = 0LL;
  HIDWORD(Flink[4].Flink) = 0;
  LODWORD(Flink[4].Flink) = (unsigned int)(Blink - v17) >> 1;
  if ( v14 )
  {
    do
    {
      for ( i = 0; i < Flink_high; Flink_high = HIDWORD(Flink->Flink) )
      {
        v20 = i++;
        v21 = 25LL * v15 + v20;
        v22 = 3 * v21;
        *((_WORD *)&Flink[5].Blink + 2 * v22) = 32;
        *((_DWORD *)&Flink[5].Flink + 3 * v21 + 1) = a3;
        *((_DWORD *)&Flink[5].Flink + v22) = a2;
      }
      ++v15;
    }
    while ( v15 < LODWORD(Flink->Flink) );
  }
  if ( (a1 & 1) != 0 )
    BgpConsoleClearScreenEx();
  FontHandle = 0;
LABEL_17:
  BgpFwReleaseLock();
  return (unsigned int)FontHandle;
}

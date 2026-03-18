/*
 * XREFs of ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1401C6398
 * Callers:
 *     ?FNTCachepInit@@YAXPEBG@Z @ 0x1401C5E88 (-FNTCachepInit@@YAXPEBG@Z.c)
 *     ?vCleanUpFntCache@@YAXXZ @ 0x140296BF8 (-vCleanUpFntCache@@YAXXZ.c)
 *     FNTCachepClose @ 0x14031BBBC (FNTCachepClose.c)
 * Callees:
 *     vUnmapFontCacheFile @ 0x14031BA80 (vUnmapFontCacheFile.c)
 */

void __fastcall vCleanUpFntCacheInternal(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  void *v4; // rcx
  __int64 v5; // rax
  void *v6; // rcx

  v3 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  v4 = *(void **)(v3 + 19608);
  if ( v4 )
  {
    ZwClose(v4);
    *(_QWORD *)(v3 + 19608) = 0LL;
  }
  v5 = *(_QWORD *)(v3 + 19592);
  if ( v5 )
  {
    if ( *(_QWORD *)(v5 + 8) )
      vUnmapFontCacheFile();
    v6 = *(void **)(*(_QWORD *)(v3 + 19592) + 104LL);
    if ( v6 )
    {
      ZwClose(v6);
      *(_QWORD *)(*(_QWORD *)(v3 + 19592) + 104LL) = 0LL;
    }
    Win32FreePool(*(void **)(v3 + 19592));
    *(_QWORD *)(v3 + 19592) = 0LL;
  }
  *(_DWORD *)(v3 + 19584) = 0;
  *(_BYTE *)(v3 + 19604) = 1;
}

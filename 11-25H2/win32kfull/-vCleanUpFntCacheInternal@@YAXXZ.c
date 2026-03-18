/*
 * XREFs of ?vCleanUpFntCacheInternal@@YAXXZ @ 0x14010CFEC
 * Callers:
 *     InitFNTCache @ 0x14010CA54 (InitFNTCache.c)
 *     ?vCleanUpFntCache@@YAXXZ @ 0x14026EE0C (-vCleanUpFntCache@@YAXXZ.c)
 *     EngCloseFNTCache @ 0x1403040D4 (EngCloseFNTCache.c)
 * Callees:
 *     vUnmapFontCacheFile @ 0x140303FC4 (vUnmapFontCacheFile.c)
 */

void __fastcall vCleanUpFntCacheInternal(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  void *v4; // rcx
  _QWORD *v5; // rax
  void *v6; // rcx

  v3 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  v4 = *(void **)(v3 + 19616);
  if ( v4 )
  {
    ZwClose(v4);
    *(_QWORD *)(v3 + 19616) = 0LL;
  }
  v5 = *(_QWORD **)(v3 + 19600);
  if ( v5 )
  {
    if ( *v5 )
      vUnmapFontCacheFile();
    v6 = *(void **)(*(_QWORD *)(v3 + 19600) + 96LL);
    if ( v6 )
    {
      ZwClose(v6);
      *(_QWORD *)(*(_QWORD *)(v3 + 19600) + 96LL) = 0LL;
    }
    Win32FreePool(*(void **)(v3 + 19600));
    *(_QWORD *)(v3 + 19600) = 0LL;
  }
  *(_DWORD *)(v3 + 19592) = 0;
  *(_BYTE *)(v3 + 19612) = 1;
}

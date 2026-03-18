/*
 * XREFs of vUnmapFontCacheFile @ 0x140303FC4
 * Callers:
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x14010CFEC (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     bInitCacheTable @ 0x140303C78 (bInitCacheTable.c)
 *     bReAllocCacheFile @ 0x140303E68 (bReAllocCacheFile.c)
 * Callees:
 *     ?vUnmapFile@@YAXPEAUFILEVIEW@@H@Z @ 0x140229BB0 (-vUnmapFile@@YAXPEAUFILEVIEW@@H@Z.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

_QWORD *__fastcall vUnmapFontCacheFile(int a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *result; // rax
  __int64 v4; // rbx

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  result = *(_QWORD **)(v2 + 19600);
  if ( result[10] )
  {
    if ( *result )
    {
      v4 = result[12];
      result[12] = 0LL;
      vUnmapFile((struct FILEVIEW *)(*(_QWORD *)(v2 + 19600) + 48LL));
      memset_0((void *)(*(_QWORD *)(v2 + 19600) + 48LL), 0, 0x50uLL);
      *(_QWORD *)(*(_QWORD *)(v2 + 19600) + 96LL) = v4;
      result = *(_QWORD **)(v2 + 19600);
      *result = 0LL;
    }
  }
  return result;
}

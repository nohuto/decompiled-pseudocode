/*
 * XREFs of bInitCacheTable @ 0x140303C78
 * Callers:
 *     InitFNTCache @ 0x14010CA54 (InitFNTCache.c)
 * Callees:
 *     vUnmapFontCacheFile @ 0x140303FC4 (vUnmapFontCacheFile.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z @ 0x140305F10 (-bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall bInitCacheTable(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v7; // r13
  int v8; // r15d
  int v10; // r12d
  unsigned int v12; // ebp
  unsigned int v13; // esi
  __int64 v14; // r14
  void *v15; // rcx

  v7 = (unsigned int)(a1 + a2 + 200);
  v8 = (_DWORD)a2 << 11;
  v10 = 768 * a1;
  v12 = 0;
  v13 = ((_DWORD)a2 << 11) + 768 * a1 + ((80 * v7 + 327) & 0xFFFFFFF8);
  v14 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  if ( **(_QWORD **)(v14 + 19600) )
    vUnmapFontCacheFile();
  v15 = *(void **)(*(_QWORD *)(v14 + 19600) + 96LL);
  if ( v15 )
  {
    ZwClose(v15);
    *(_QWORD *)(*(_QWORD *)(v14 + 19600) + 96LL) = 0LL;
  }
  if ( (unsigned int)bMapFileRetainHandle(v15, *(_QWORD *)(v14 + 19600) + 48LL, v13) )
  {
    **(_QWORD **)(v14 + 19600) = *(_QWORD *)(*(_QWORD *)(v14 + 19600) + 56LL);
    memset_0((void *)(**(_QWORD **)(v14 + 19600) + 72LL), 255, 0xF4uLL);
    memset_0((void *)(**(_QWORD **)(v14 + 19600) + 320LL), 0, 80 * v7);
    *(_DWORD *)(**(_QWORD **)(v14 + 19600) + 12LL) = a7;
    *(_DWORD *)(**(_QWORD **)(v14 + 19600) + 16LL) = v7;
    *(_DWORD *)(**(_QWORD **)(v14 + 19600) + 20LL) = 0;
    ***(_DWORD ***)(v14 + 19600) = 0;
    *(_QWORD *)(**(_QWORD **)(v14 + 19600) + 56LL) = a3;
    *(_QWORD *)(**(_QWORD **)(v14 + 19600) + 64LL) = a4;
    *(_QWORD *)(**(_QWORD **)(v14 + 19600) + 40LL) = a5;
    *(_QWORD *)(**(_QWORD **)(v14 + 19600) + 48LL) = a6;
    *(_DWORD *)(**(_QWORD **)(v14 + 19600) + 24LL) = v13;
    *(_QWORD *)(**(_QWORD **)(v14 + 19600) + 28LL) = (unsigned int)(v10 + v8);
    *(_DWORD *)(**(_QWORD **)(v14 + 19600) + 36LL) = 0;
    return 1;
  }
  return v12;
}

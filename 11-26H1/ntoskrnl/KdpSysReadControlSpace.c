/*
 * XREFs of KdpSysReadControlSpace @ 0x140C1C434
 * Callers:
 *     KdSystemDebugControl @ 0x14077FDF0 (KdSystemDebugControl.c)
 *     KdpReadControlSpace @ 0x140C1A388 (KdpReadControlSpace.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     KdpCopyMemoryChunks @ 0x140C1D780 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpSysReadControlSpace(ULONG a1, __int64 a2, int a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rsi
  __int64 v7; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 *v13; // rdx
  unsigned int v14; // r8d
  __int64 v16; // [rsp+30h] [rbp-18h] BYREF

  v5 = (__int64)a5;
  v7 = a1;
  v16 = 0LL;
  *a5 = 0;
  if ( a1 >= KeQueryActiveProcessorCountEx(0xFFFFu) )
    return 3221225473LL;
  v10 = KiProcessorBlock[v7];
  if ( !v10 )
    return 3221225473LL;
  a5 = (_DWORD *)KiProcessorBlock[v7];
  if ( !a2 )
  {
    v13 = &v16;
    v16 = v10 - 384;
    goto LABEL_11;
  }
  v11 = a2 - 1;
  if ( !v11 )
  {
    v13 = (__int64 *)&a5;
    goto LABEL_11;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      LODWORD(v13) = v10 + 8;
LABEL_11:
      v14 = 8;
      goto LABEL_12;
    }
    return 3221225473LL;
  }
  LODWORD(v13) = v10 + 256;
  v14 = 272;
LABEL_12:
  if ( v14 > a4 )
    v14 = a4;
  return KdpCopyMemoryChunks(a3, (_DWORD)v13, v14, 0, 5, v5);
}

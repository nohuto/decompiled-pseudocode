/*
 * XREFs of MiHotAddBootDescriptor @ 0x140CFB1E0
 * Callers:
 *     MiHotAddBootDeferredDescriptorsDiscardable @ 0x140CFAF3C (MiHotAddBootDeferredDescriptorsDiscardable.c)
 * Callees:
 *     MiAddPhysicalMemoryChunks @ 0x14086B848 (MiAddPhysicalMemoryChunks.c)
 */

__int64 __fastcall MiHotAddBootDescriptor(__int64 a1)
{
  bool v1; // zf
  int v2; // eax
  unsigned __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = *(_QWORD *)(a1 + 32) << 12;
  v1 = *(_DWORD *)(a1 + 24) == 24;
  v4 = *(_QWORD *)(a1 + 40) << 12;
  v2 = 1280;
  if ( !v1 )
    v2 = 1024;
  return MiAddPhysicalMemoryChunks((unsigned __int16 *)&MiSystemPartition, &v5, &v4, 0LL, v2, 0);
}

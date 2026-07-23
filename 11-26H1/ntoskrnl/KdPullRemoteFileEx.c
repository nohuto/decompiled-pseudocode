/*
 * XREFs of KdPullRemoteFileEx @ 0x140C19420
 * Callers:
 *     <none>
 * Callees:
 *     KdpPullRemoteFile @ 0x140C198F8 (KdpPullRemoteFile.c)
 */

__int64 __fastcall KdPullRemoteFileEx(int a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  return KdpPullRemoteFile(a1, a1, a2, a3, a4, a5, a6);
}

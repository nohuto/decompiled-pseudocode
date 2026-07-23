/*
 * XREFs of KdPullRemoteFile @ 0x140C193B8
 * Callers:
 *     ExpKdPullRemoteFileForUser @ 0x14084A4C4 (ExpKdPullRemoteFileForUser.c)
 *     MiCreateSectionForDriver @ 0x140AEEB60 (MiCreateSectionForDriver.c)
 * Callees:
 *     KdpPullRemoteFile @ 0x140C198F8 (KdpPullRemoteFile.c)
 */

__int64 __fastcall KdPullRemoteFile(int a1, int a2)
{
  _DWORD v3[3]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v4; // [rsp+4Ch] [rbp-1Ch]
  int v5; // [rsp+54h] [rbp-14h]

  v4 = 0LL;
  v5 = 0;
  v3[0] = 128;
  v3[1] = 5;
  v3[2] = 32;
  return KdpPullRemoteFile(
           a1,
           a2,
           0,
           (unsigned int)KdpCreateFileCallback,
           (__int64)&KdpWriteFileCallback,
           (__int64)KdpCloseFileCallback,
           (__int64)v3);
}

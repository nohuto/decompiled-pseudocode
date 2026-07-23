/*
 * XREFs of KdpCloseRemoteFile @ 0x140C19480
 * Callers:
 *     KdpPullRemoteFile @ 0x140C198F8 (KdpPullRemoteFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KdExitDebugger @ 0x140C18008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140C1D858 (KdEnterDebugger.c)
 */

__int64 __fastcall KdpCloseRemoteFile(int a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // di
  int v6; // eax
  int v7; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v8[2]; // [rsp+40h] [rbp-31h] BYREF
  __int128 v9; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v10[8]; // [rsp+68h] [rbp-9h] BYREF

  v1 = (unsigned int)(a1 - 1);
  memset_0(v10, 0, sizeof(v10));
  if ( (unsigned int)v1 >= 0x10 )
    return 3221225485LL;
  v5 = KdEnterDebugger(0LL, 0LL);
  if ( KdpRemoteFiles[v1] )
  {
    while ( 1 )
    {
      v10[1] = KdpRemoteFiles[v1];
      v8[0] = 4194368LL;
      v7 = 0;
      v10[0] = 13363LL;
      v8[1] = v10;
      v9 = 0LL;
      KdSendPacket(11LL, v8, 0LL, &KdpContext);
      if ( (_BYTE)KdDebuggerNotPresent )
        break;
      WORD1(v9) = 12288;
      *((_QWORD *)&v9 + 1) = &KdpMessageBuffer;
      if ( !(unsigned int)KdReceivePacket(11LL, v8, &v9, &v7, &KdpContext) )
      {
        v6 = HIDWORD(v10[0]);
        goto LABEL_9;
      }
    }
    v6 = -1073740972;
    HIDWORD(v10[0]) = -1073740972;
LABEL_9:
    if ( v6 >= 0 )
      KdpRemoteFiles[v1] = 0LL;
  }
  else
  {
    HIDWORD(v10[0]) = -1073741811;
  }
  LOBYTE(v4) = v5;
  KdExitDebugger(v4, v3);
  return HIDWORD(v10[0]);
}

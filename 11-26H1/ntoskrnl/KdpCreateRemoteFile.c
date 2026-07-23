/*
 * XREFs of KdpCreateRemoteFile @ 0x140C196D0
 * Callers:
 *     KdpPullRemoteFile @ 0x140C198F8 (KdpPullRemoteFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KdExitDebugger @ 0x140C18008 (KdExitDebugger.c)
 *     KdpCopyMemoryChunks @ 0x140C1D780 (KdpCopyMemoryChunks.c)
 *     KdEnterDebugger @ 0x140C1D858 (KdEnterDebugger.c)
 */

__int64 __fastcall KdpCreateRemoteFile(__int64 *a1, __int64 *a2, unsigned __int16 *a3)
{
  _QWORD *v7; // rdx
  char v8; // si
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // r8d
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  int v16; // [rsp+30h] [rbp-79h] BYREF
  __int128 v17; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v18[3]; // [rsp+48h] [rbp-61h] BYREF
  __int64 v19; // [rsp+60h] [rbp-49h] BYREF
  int v20; // [rsp+68h] [rbp-41h]
  int v21; // [rsp+6Ch] [rbp-3Dh]
  int v22; // [rsp+70h] [rbp-39h]
  __int64 v23; // [rsp+74h] [rbp-35h]
  __int64 v24; // [rsp+80h] [rbp-29h]
  unsigned __int64 v25; // [rsp+88h] [rbp-21h]

  memset_0(&v19, 0, 0x40uLL);
  if ( *a3 > (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 64 )
    return 3221225485LL;
  if ( (_BYTE)KdDebuggerNotPresent )
    return 3221226324LL;
  v8 = KdEnterDebugger(0LL, 0LL);
  v9 = (__int64)KdpRemoteFiles;
  v10 = 0;
  while ( *(_QWORD *)v9 )
  {
    ++v10;
    v9 += 8LL;
    if ( v10 >= 0x10 )
    {
      HIDWORD(v19) = -1073741801;
      goto LABEL_18;
    }
  }
  while ( 1 )
  {
    v11 = *a3;
    v18[1] = &v19;
    v18[0] = 4194368LL;
    v12 = *((_QWORD *)a3 + 1);
    v17 = 0LL;
    v16 = 0;
    v19 = 13360LL;
    v20 = 1179785;
    v21 = 128;
    v22 = 1;
    v23 = 1LL;
    KdpCopyMemoryChunks(v12, (unsigned int)&KdpMessageBuffer, v11, 0, 4, (__int64)&v16);
    LOWORD(v17) = v16 + 2;
    *((_QWORD *)&v17 + 1) = &KdpMessageBuffer;
    *(_WORD *)((char *)&KdpMessageBuffer + (unsigned __int16)(v16 + 2) - 2) = 0;
    KdSendPacket(11LL, v18, &v17, &KdpContext);
    if ( (_BYTE)KdDebuggerNotPresent )
      break;
    WORD1(v17) = 12288;
    *((_QWORD *)&v17 + 1) = &KdpMessageBuffer;
    v13 = KdReceivePacket(11LL, v18, &v17, &v16, &KdpContext);
    v9 = (__int64)&KdpMessageBuffer;
    if ( !v13 )
    {
      v14 = HIDWORD(v19);
      goto LABEL_13;
    }
  }
  v14 = -1073740972;
  HIDWORD(v19) = -1073740972;
LABEL_13:
  if ( v14 >= 0 )
  {
    v7 = KdpRemoteFiles;
    KdpRemoteFiles[v10] = v24;
    v9 = v10 + 1;
    *a1 = v9;
    if ( a2 )
    {
      v15 = v25;
      v9 = 4096LL;
      if ( v25 >= 0x10000000 )
        v15 = 4096LL;
      *a2 = v15;
    }
  }
LABEL_18:
  LOBYTE(v9) = v8;
  KdExitDebugger(v9, (__int64)v7);
  return HIDWORD(v19);
}

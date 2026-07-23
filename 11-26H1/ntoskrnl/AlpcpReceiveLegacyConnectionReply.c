/*
 * XREFs of AlpcpReceiveLegacyConnectionReply @ 0x1408EC084
 * Callers:
 *     NtSecureConnectPort @ 0x1408EC280 (NtSecureConnectPort.c)
 * Callees:
 *     AlpcpGetDataFromMessage @ 0x1408EC974 (AlpcpGetDataFromMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x140991460 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcpQueryRemoteView @ 0x140AA4FC8 (AlpcpQueryRemoteView.c)
 */

__int64 __fastcall AlpcpReceiveLegacyConnectionReply(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // r13
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // r8
  int RemoteView; // ebx
  __int64 v13; // rcx
  __int16 v14; // si
  _WORD *v15; // r14
  unsigned int v16; // eax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v19[16]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v20; // [rsp+60h] [rbp-38h]
  char PreviousMode; // [rsp+A0h] [rbp+8h]

  v8 = a2;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  BugCheckParameter2[0] = 0LL;
  v9 = *a1;
  LOBYTE(a2) = PreviousMode;
  v10 = AlpcpReceiveSynchronousReply((_DWORD)a1, a2, (unsigned int)BugCheckParameter2, 0, 0LL);
  RemoteView = v10;
  if ( !v10 )
  {
    if ( a4 )
    {
      *(_QWORD *)(a5 + 40) = 0LL;
      v20 = 0LL;
      if ( (*(_DWORD *)(BugCheckParameter2[0] + 40) & 0x4000) == 0 )
      {
        RemoteView = -1073741790;
LABEL_19:
        AlpcpUnlockMessage(BugCheckParameter2[0]);
        return (unsigned int)RemoteView;
      }
      RemoteView = AlpcpQueryRemoteView(v9, a4, v19);
      if ( RemoteView < 0 )
        goto LABEL_19;
      *(_QWORD *)(a5 + 40) = v20;
    }
    if ( a6 )
    {
      v13 = *(_QWORD *)(BugCheckParameter2[0] + 144);
      if ( v13 )
      {
        *(_DWORD *)a6 = 24;
        *(_QWORD *)(a6 + 16) = *(_QWORD *)(v13 + 40);
        *(_QWORD *)(a6 + 8) = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 40LL);
      }
    }
    if ( v8 )
    {
      v14 = 0;
      v15 = (_WORD *)(BugCheckParameter2[0] + 240);
      BugCheckParameter2[1] = BugCheckParameter2[0] + 240;
      v16 = *(unsigned __int16 *)(BugCheckParameter2[0] + 240);
      if ( *a3 >= v16 )
      {
        *a3 = v16;
      }
      else
      {
        v14 = *(_WORD *)(BugCheckParameter2[0] + 240);
        *v15 = *(_WORD *)a3;
      }
      LOBYTE(v11) = PreviousMode;
      AlpcpGetDataFromMessage(BugCheckParameter2[0], v8, v11);
      if ( v14 )
        *v15 = v14;
    }
    goto LABEL_19;
  }
  if ( (*(_DWORD *)(v9 + 416) & 0x10) != 0 || v10 == -1073740031 )
    return (unsigned int)-1073741759;
  return (unsigned int)RemoteView;
}

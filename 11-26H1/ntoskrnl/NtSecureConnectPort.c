/*
 * XREFs of NtSecureConnectPort @ 0x1408EC280
 * Callers:
 *     DifNtSecureConnectPortWrapper @ 0x14068E0B0 (DifNtSecureConnectPortWrapper.c)
 *     NtConnectPort @ 0x1408EC230 (NtConnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     AlpcpLogConnectFail @ 0x1407C4B10 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1407C4B84 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1407C4BF4 (AlpcpLogConnectSuccess.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1408EC084 (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpFormatConnectionRequest @ 0x1408EE1CC (AlpcpFormatConnectionRequest.c)
 *     AlpcpDispatchConnectionRequest @ 0x1408EE608 (AlpcpDispatchConnectionRequest.c)
 *     SeCaptureSid @ 0x1408EFCE0 (SeCaptureSid.c)
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     SeReleaseSid @ 0x140A9E228 (SeReleaseSid.c)
 */

NTSTATUS __cdecl NtSecureConnectPort(
        PHANDLE PortHandle,
        PUNICODE_STRING PortName,
        PSECURITY_QUALITY_OF_SERVICE SecurityQos,
        PPORT_VIEW ClientView,
        PSID RequiredServerSid,
        PREMOTE_PORT_VIEW ServerView,
        PULONG MaxMessageLength,
        PVOID ConnectionInformation,
        PULONG ConnectionInformationLength)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  __int64 ULong64FromUser; // rax
  int v14; // eax
  NTSTATUS ClientPort; // edi
  ULONG v16; // r13d
  void *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *v20; // r13
  __int64 v21; // r15
  int v22; // eax
  void *v23; // r15
  int v24; // eax
  int v25; // eax
  int v27; // [rsp+20h] [rbp-1C8h]
  int v28; // [rsp+40h] [rbp-1A8h]
  unsigned __int64 v29; // [rsp+48h] [rbp-1A0h]
  int v30; // [rsp+48h] [rbp-1A0h]
  unsigned int ULongFromUser; // [rsp+64h] [rbp-184h] BYREF
  int v32; // [rsp+68h] [rbp-180h]
  __int64 v33; // [rsp+70h] [rbp-178h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-170h] BYREF
  volatile void *Address; // [rsp+88h] [rbp-160h]
  _QWORD *v36; // [rsp+90h] [rbp-158h]
  PVOID Object; // [rsp+98h] [rbp-150h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-148h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-140h]
  void *v40; // [rsp+B0h] [rbp-138h]
  ULONG_PTR v41; // [rsp+B8h] [rbp-130h] BYREF
  unsigned int *v42; // [rsp+C0h] [rbp-128h]
  void *v43; // [rsp+C8h] [rbp-120h]
  PULONG v44; // [rsp+D0h] [rbp-118h]
  __int128 Src; // [rsp+D8h] [rbp-110h] BYREF
  __int128 v46; // [rsp+E8h] [rbp-100h]
  __int128 v47; // [rsp+F8h] [rbp-F0h]
  __int128 v48; // [rsp+108h] [rbp-E0h] BYREF
  __int64 v49; // [rsp+118h] [rbp-D0h]
  _OWORD v50[2]; // [rsp+120h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+140h] [rbp-A8h]
  __int64 v52[6]; // [rsp+150h] [rbp-98h] BYREF
  int v53; // [rsp+180h] [rbp-68h]
  __int64 v54; // [rsp+190h] [rbp-58h] BYREF
  int v55; // [rsp+198h] [rbp-50h]

  v39 = (__int64)PortName;
  v36 = PortHandle;
  v40 = RequiredServerSid;
  v43 = ServerView;
  v42 = MaxMessageLength;
  Address = ConnectionInformation;
  v44 = ConnectionInformationLength;
  Object = 0LL;
  memset_0(v52, 0, 0x40uLL);
  Handle = 0LL;
  v41 = 0LL;
  memset(v50, 0, sizeof(v50));
  v51 = 0LL;
  ULongFromUser = 0;
  v54 = 0LL;
  v55 = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v48 = 0LL;
  v49 = 0LL;
  Src = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    if ( ConnectionInformationLength )
    {
      v16 = *ConnectionInformationLength;
      ULongFromUser = *ConnectionInformationLength;
    }
    else
    {
      LOWORD(v16) = ULongFromUser;
    }
    if ( ClientView )
    {
      Src = *(_OWORD *)&ClientView->Length;
      v46 = *(_OWORD *)&ClientView->SectionOffset;
      v47 = *(_OWORD *)&ClientView->ViewBase;
    }
    if ( SecurityQos )
    {
      v54 = *(_QWORD *)&SecurityQos->Length;
      v55 = *(_DWORD *)&SecurityQos->ContextTrackingMode;
    }
    v33 = (__int64)RequiredServerSid;
    goto LABEL_20;
  }
  ULong64FromUser = RtlReadULong64FromUser(v36);
  RtlWriteULong64ToUser(v36, ULong64FromUser);
  if ( ConnectionInformationLength )
  {
    ULongFromUser = RtlReadULongFromUser(ConnectionInformationLength);
    ProbeForWrite(Address, ULongFromUser, 1u);
  }
  if ( ClientView )
  {
    RtlCopyFromUser(&Src, ClientView, 0x30uLL);
    if ( (_DWORD)Src != 48 )
    {
      ClientPort = -1073741811;
      v32 = -1073741811;
      goto LABEL_53;
    }
    ProbeForWrite(ClientView, 0x30uLL, 4u);
  }
  if ( ServerView )
  {
    if ( (unsigned int)RtlReadULongFromUser(&ServerView->Length) != 24 )
    {
      ClientPort = -1073741811;
      v32 = -1073741811;
      goto LABEL_53;
    }
    ProbeForWrite(ServerView, 0x18uLL, 4u);
  }
  if ( v42 )
  {
    v14 = RtlReadULongFromUser(v42);
    RtlWriteULongToUser(v42, v14);
  }
  if ( SecurityQos )
    RtlCopyFromUser(&v54, SecurityQos, 0xCuLL);
  v33 = (__int64)v40;
  if ( !v40 || (ClientPort = SeCaptureSid(v40, v27, 1, (__int64)&v33), v32 = ClientPort, ClientPort >= 0) )
  {
    LOWORD(v16) = ULongFromUser;
LABEL_20:
    v29 = (unsigned __int64)&v54 & -(__int64)(SecurityQos != 0LL);
    v17 = (void *)v33;
    ClientPort = AlpcpCreateClientPort(
                   (unsigned int)&Handle,
                   (unsigned int)&Object,
                   0,
                   v39,
                   0LL,
                   0LL,
                   0LL,
                   0LL,
                   v33,
                   v29,
                   1);
    if ( v17 != v40 )
    {
      LOBYTE(v19) = 1;
      LOBYTE(v18) = PreviousMode;
      SeReleaseSid(v17, v18, v19);
    }
    if ( ClientPort >= 0 )
    {
      LOWORD(v50[0]) = v16;
      v39 = (unsigned __int64)&Src & -(__int64)(ClientView != 0LL);
      LOBYTE(v30) = PreviousMode;
      LOBYTE(v28) = 1;
      v20 = Object;
      ClientPort = AlpcpFormatConnectionRequest(
                     &v41,
                     0LL,
                     Object,
                     Address,
                     v50,
                     0LL,
                     v39,
                     &BugCheckParameter2,
                     v28,
                     v30);
      if ( ClientPort >= 0 )
      {
        v21 = v41;
        LODWORD(v33) = *(_DWORD *)(v41 + 264);
        if ( LOBYTE(stru_140E66D40.CycleTime) )
          AlpcpLogConnectRequest(v41);
        v52[0] = (__int64)v20;
        v52[1] = v21;
        v53 = 0x20000;
        v22 = AlpcpDispatchConnectionRequest(v52);
        ClientPort = v22;
        if ( v22 < 0 )
        {
          if ( LOBYTE(stru_140E66D40.CycleTime) )
            AlpcpLogConnectFail(v33, v22);
          AlpcpUnlockMessage(v21);
        }
        else
        {
          v23 = v43;
          v24 = AlpcpReceiveLegacyConnectionReply(
                  v52,
                  (__int64)Address,
                  &ULongFromUser,
                  BugCheckParameter2,
                  v39,
                  (unsigned __int64)&v48 & -(__int64)(v43 != 0LL));
          ClientPort = v24;
          if ( v24 )
          {
            if ( LOBYTE(stru_140E66D40.CycleTime) )
              AlpcpLogConnectFail(v33, v24);
          }
          else
          {
            if ( LOBYTE(stru_140E66D40.CycleTime) )
              AlpcpLogConnectSuccess(v33);
            if ( PreviousMode )
              RtlWriteULong64ToUser(v36, (__int64)Handle);
            else
              *v36 = Handle;
            if ( ClientView )
            {
              if ( PreviousMode )
                RtlCopyToUser(ClientView, &Src, 0x30uLL);
              else
                RtlCopyVolatileMemory(ClientView, &Src, 0x30uLL);
            }
            if ( v23 )
            {
              if ( PreviousMode )
                RtlCopyToUser(v23, &v48, 0x18uLL);
              else
                RtlCopyVolatileMemory(v23, &v48, 0x18uLL);
            }
            if ( v44 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(v44, ULongFromUser);
              else
                *v44 = ULongFromUser;
            }
            if ( v42 )
            {
              v25 = v20[68];
              if ( PreviousMode )
                RtlWriteULongToUser(v42, v25);
              else
                *v42 = v25;
            }
          }
        }
      }
      ObfDereferenceObject(v20);
      if ( BugCheckParameter2 )
        AlpcpDereferenceBlobEx(BugCheckParameter2);
      if ( ClientPort )
        NtClose(Handle);
    }
  }
LABEL_53:
  KeLeaveCriticalRegion();
  return ClientPort;
}

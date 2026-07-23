/*
 * XREFs of AlpcpProcessConnectionRequest @ 0x1408EDC14
 * Callers:
 *     AlpcpConnectPort @ 0x1408EF8A0 (AlpcpConnectPort.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     AlpcpLogConnectFail @ 0x1407C4B10 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1407C4B84 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1407C4BF4 (AlpcpLogConnectSuccess.c)
 *     AlpcpGetDataFromMessage @ 0x1408EC974 (AlpcpGetDataFromMessage.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1408ECEA0 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpFormatConnectionRequest @ 0x1408EE1CC (AlpcpFormatConnectionRequest.c)
 *     AlpcpDispatchConnectionRequest @ 0x1408EE608 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140925A30 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpProbeMessageAttributes @ 0x140925AE0 (AlpcpProbeMessageAttributes.c)
 *     AlpcpReceiveSynchronousReply @ 0x140991460 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcpExposeAttributes @ 0x1409B93B0 (AlpcpExposeAttributes.c)
 */

__int64 __fastcall AlpcpProcessConnectionRequest(
        __int64 a1,
        int a2,
        char *a3,
        _QWORD *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 *a7,
        char a8)
{
  __int64 v11; // r8
  __int64 v12; // rax
  char PreviousMode; // r12
  __int64 v14; // rbx
  __int64 result; // rax
  ULONG_PTR v16; // rsi
  int v17; // edx
  unsigned int v18; // ebx
  int v19; // eax
  unsigned int v20; // esi
  int v21; // eax
  ULONG_PTR v22; // rbx
  void *v23; // rdx
  int v24; // ecx
  __int64 v25; // rax
  int v26; // r12d
  char *v27; // rdx
  unsigned __int16 v28; // dx
  __int64 v29; // r12
  int v30; // [rsp+50h] [rbp-128h]
  int v31; // [rsp+58h] [rbp-120h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-118h] BYREF
  __int64 *v33; // [rsp+68h] [rbp-110h]
  __int64 v34; // [rsp+70h] [rbp-108h]
  unsigned __int64 ULong64FromUser; // [rsp+88h] [rbp-F0h]
  __int64 v36; // [rsp+90h] [rbp-E8h] BYREF
  _DWORD *v37; // [rsp+98h] [rbp-E0h]
  __int128 v38; // [rsp+A0h] [rbp-D8h] BYREF
  __int128 v39; // [rsp+B0h] [rbp-C8h]
  __int64 v40; // [rsp+C0h] [rbp-B8h]
  unsigned __int64 v41; // [rsp+C8h] [rbp-B0h]
  __int64 *v42; // [rsp+D0h] [rbp-A8h]
  _QWORD v43[6]; // [rsp+E0h] [rbp-98h] BYREF
  int v44; // [rsp+110h] [rbp-68h]
  __int128 Src; // [rsp+120h] [rbp-58h] BYREF
  __int64 v46; // [rsp+130h] [rbp-48h]

  v34 = a1;
  v37 = a6;
  v33 = a7;
  memset_0(v43, 0, 0x40uLL);
  BugCheckParameter2 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v36 = 0LL;
  if ( (a2 & 0x10000) != 0 )
    return 3221225485LL;
  v30 = 0;
  ULong64FromUser = -1LL;
  if ( a8 )
  {
    if ( a3 )
    {
      AlpcpProbeForWriteMessageHeader(a3, (unsigned int)a2);
      AlpcpProbeAndCaptureMessageHeader(a3, &v38, a2);
    }
    if ( a4 )
    {
      ULong64FromUser = RtlReadULong64FromUser(a4);
      v41 = ULong64FromUser;
      v12 = RtlReadULong64FromUser(a4);
      RtlWriteULong64ToUser(a4, v12);
    }
    PreviousMode = 1;
    if ( a6 )
    {
      LOBYTE(v11) = 1;
      v30 = AlpcpProbeMessageAttributes((unsigned int)a2, a6, v11);
    }
    if ( a7 )
    {
      v36 = RtlReadULong64FromUser(a7);
      v33 = &v36;
      v42 = &v36;
    }
  }
  else
  {
    if ( a3 )
    {
      v38 = *(_OWORD *)a3;
      v39 = *((_OWORD *)a3 + 1);
      v40 = *((_QWORD *)a3 + 4);
    }
    if ( a4 )
      ULong64FromUser = *a4;
    PreviousMode = 1;
    if ( a6 )
      v30 = *a6;
  }
  v14 = v34;
  result = AlpcpFormatConnectionRequest(&BugCheckParameter2, (unsigned int)a2, v34, a3, &v38, a5, 0LL, 0LL, 0, a8);
  if ( (int)result >= 0 )
  {
    v16 = BugCheckParameter2;
    v31 = *(_DWORD *)(BugCheckParameter2 + 264);
    if ( LOBYTE(stru_140E66D40.CycleTime) )
      AlpcpLogConnectRequest(BugCheckParameter2);
    v43[0] = v14;
    v43[1] = v16;
    v44 = a2;
    result = AlpcpDispatchConnectionRequest(v43);
    v18 = result;
    if ( (int)result >= 0 )
    {
      if ( (a2 & 0x20000) == 0 )
        return result;
      if ( (a2 & 0x100000) == 0 )
        PreviousMode = KeGetCurrentThread()->PreviousMode;
      BugCheckParameter2 = 0LL;
      LOBYTE(v17) = PreviousMode;
      v19 = AlpcpReceiveSynchronousReply((unsigned int)v43, v17, (unsigned int)&BugCheckParameter2, v30, (__int64)v33);
      v20 = v19;
      if ( v19 )
      {
        if ( LOBYTE(stru_140E66D40.CycleTime) )
          AlpcpLogConnectFail(v31, v19);
        if ( (*(_BYTE *)(v34 + 416) & 0x10) != 0 )
          return (unsigned int)-1073741759;
      }
      else
      {
        if ( LOBYTE(stru_140E66D40.CycleTime) )
          AlpcpLogConnectSuccess(v31);
        if ( a2 >= 0 || (a2 & 0x40000000) != 0 )
          v21 = 40;
        else
          v21 = 24;
        v22 = BugCheckParameter2;
        v23 = (void *)(BugCheckParameter2 + 240);
        v24 = *(unsigned __int16 *)(BugCheckParameter2 + 240);
        v25 = (unsigned int)(v24 + v21);
        LODWORD(v33) = v25;
        if ( a4 )
        {
          v29 = (unsigned int)v25;
          if ( (unsigned int)v25 > ULong64FromUser )
          {
            AlpcpUnlockMessage(BugCheckParameter2);
            if ( a8 )
              RtlWriteULong64ToUser(a4, (unsigned int)v29);
            else
              *a4 = v29;
            return 3221225507LL;
          }
        }
        if ( a3 )
        {
          if ( a2 >= 0 || (a2 & 0x40000000) != 0 )
          {
            if ( a8 )
              RtlCopyToUser(a3, v23, 0x28uLL);
            else
              RtlCopyVolatileMemory(a3, v23, 0x28uLL);
            v26 = v34;
            if ( _bittest((const signed __int32 *)(v34 + 256), 0xCu) )
              *((_WORD *)a3 + 2) = *(_WORD *)(v22 + 244) & 0xC00F;
            v27 = a3 + 40;
          }
          else
          {
            Src = 0LL;
            v46 = 0LL;
            LOWORD(Src) = v24;
            WORD1(Src) = v24 + 24;
            v28 = *(_WORD *)(BugCheckParameter2 + 244) | 0x1000;
            DWORD1(Src) = v28;
            DWORD2(Src) = *(_DWORD *)(BugCheckParameter2 + 248);
            HIDWORD(Src) = *(_DWORD *)(BugCheckParameter2 + 256);
            LODWORD(v46) = *(_DWORD *)(BugCheckParameter2 + 264);
            HIDWORD(v46) = *(_DWORD *)(BugCheckParameter2 + 272);
            v26 = v34;
            if ( (*(_DWORD *)(v34 + 256) & 0x1000) != 0 )
              WORD2(Src) = v28 & 0xC00F;
            if ( a8 )
              RtlCopyToUser(a3, &Src, 0x18uLL);
            else
              RtlCopyVolatileMemory(a3, &Src, 0x18uLL);
            v27 = a3 + 24;
          }
          AlpcpGetDataFromMessage(v22, v27, a8);
          v25 = (unsigned int)v33;
        }
        else
        {
          v26 = v34;
        }
        if ( a4 )
        {
          if ( a8 )
            RtlWriteULong64ToUser(a4, (unsigned int)v25);
          else
            *a4 = v25;
        }
        if ( v37 )
          AlpcpExposeAttributes(v26, a2, v22, v30, (__int64)v37, a8);
        AlpcpUnlockMessage(v22);
      }
      return v20;
    }
    if ( LOBYTE(stru_140E66D40.CycleTime) )
      AlpcpLogConnectFail(v31, result);
    AlpcpUnlockMessage(v16);
    return v18;
  }
  return result;
}

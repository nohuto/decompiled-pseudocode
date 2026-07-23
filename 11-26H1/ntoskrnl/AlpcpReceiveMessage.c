/*
 * XREFs of AlpcpReceiveMessage @ 0x140927FFC
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x140929090 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1407C3910 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpGetDataFromMessage @ 0x1408EC974 (AlpcpGetDataFromMessage.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140925A30 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpProbeMessageAttributes @ 0x140925AE0 (AlpcpProbeMessageAttributes.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcpExposeAttributes @ 0x1409B93B0 (AlpcpExposeAttributes.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x140A82078 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpReceiveMessagePort @ 0x140ACE424 (AlpcpReceiveMessagePort.c)
 *     AlpcpCancelMessage @ 0x140ACF05C (AlpcpCancelMessage.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x140AE4528 (AlpcpExposeCapturedContextAttribute.c)
 */

__int64 __fastcall AlpcpReceiveMessage(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3,
        unsigned int *a4,
        volatile void *a5)
{
  unsigned __int64 v6; // r14
  struct _KTHREAD *CurrentThread; // r10
  int v8; // r12d
  int v9; // esi
  int v10; // edi
  int ULongFromUser; // eax
  unsigned int *v12; // rcx
  unsigned int v13; // r15d
  __int64 v14; // rax
  int v15; // r8d
  unsigned int v16; // eax
  __int64 v17; // r9
  unsigned int v18; // esi
  int v19; // eax
  __int16 v20; // cx
  ULONG_PTR v21; // rdi
  _WORD *v22; // rdx
  unsigned __int16 v23; // cx
  unsigned __int16 v24; // dx
  char *v25; // rdx
  char PreviousMode; // [rsp+30h] [rbp-D8h]
  int v28; // [rsp+34h] [rbp-D4h]
  unsigned __int16 v29; // [rsp+34h] [rbp-D4h]
  __int64 v30; // [rsp+40h] [rbp-C8h]
  __int64 v31; // [rsp+48h] [rbp-C0h]
  __int64 *p_ULong64FromUser; // [rsp+50h] [rbp-B8h]
  unsigned __int16 v33; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v34; // [rsp+58h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-A8h] BYREF
  int v36; // [rsp+68h] [rbp-A0h]
  int v37; // [rsp+6Ch] [rbp-9Ch]
  unsigned int v38; // [rsp+78h] [rbp-90h]
  unsigned int *v39; // [rsp+80h] [rbp-88h]
  __int64 ULong64FromUser; // [rsp+88h] [rbp-80h] BYREF
  struct _KTHREAD *v41; // [rsp+90h] [rbp-78h]
  __int64 v42; // [rsp+98h] [rbp-70h]
  __int64 *v43; // [rsp+A0h] [rbp-68h]
  __int128 Src; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v45; // [rsp+B8h] [rbp-50h]

  v39 = a4;
  v6 = a2;
  v31 = a1;
  LODWORD(p_ULong64FromUser) = (_DWORD)a5;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v41 = CurrentThread;
  v8 = *(_DWORD *)(a1 + 48);
  v30 = *(_QWORD *)a1;
  v42 = *(_QWORD *)a1;
  PreviousMode = CurrentThread->PreviousMode;
  LOBYTE(a2) = PreviousMode;
  ULong64FromUser = 0LL;
  v34 = -1LL;
  v9 = 0;
  v28 = 0;
  if ( PreviousMode )
  {
    if ( a5 )
    {
      ULong64FromUser = RtlReadULong64FromUser(a5);
      p_ULong64FromUser = &ULong64FromUser;
      v43 = &ULong64FromUser;
    }
    AlpcpProbeForWriteMessageHeader(v6, v8);
    v10 = v8 & 0x1000000;
    if ( (v8 & 0x1000000) != 0 )
    {
      if ( v8 >= 0 || (v8 & 0x40000000) != 0 )
      {
        ULongFromUser = RtlReadULongFromUser((unsigned int *)(v6 + 24));
        v12 = (unsigned int *)(v6 + 32);
      }
      else
      {
        ULongFromUser = RtlReadULongFromUser((unsigned int *)(v6 + 16));
        v12 = (unsigned int *)(v6 + 20);
      }
      v9 = ULongFromUser;
      v36 = ULongFromUser;
      v37 = RtlReadULongFromUser(v12);
      v28 = v37;
    }
    if ( v39 )
      v13 = AlpcpProbeMessageAttributes(v8, v39, 1);
    else
      v13 = 0;
    if ( a3 )
    {
      v34 = RtlReadULong64FromUser(a3);
      v14 = RtlReadULong64FromUser(a3);
      RtlWriteULong64ToUser(a3, v14);
    }
    v15 = v28;
    a1 = v31;
    LOBYTE(a2) = PreviousMode;
  }
  else
  {
    v10 = v8 & 0x1000000;
    if ( (v8 & 0x1000000) != 0 )
    {
      v9 = *(_DWORD *)(v6 + 24);
      v15 = *(_DWORD *)(v6 + 32);
    }
    else
    {
      v15 = 0;
    }
    if ( a4 )
      v13 = *a4;
    else
      v13 = 0;
    if ( a3 )
      v34 = *a3;
    if ( (CurrentThread->MiscFlags & 0x400) != 0 )
      LOBYTE(a2) = 1;
  }
  if ( v10 )
    v16 = AlpcpReceiveDirectMessagePort((__int64 *)a1, v9, v15, &BugCheckParameter2, v13);
  else
    v16 = AlpcpReceiveMessagePort(a1, a2, (_DWORD)p_ULong64FromUser, (unsigned int)&BugCheckParameter2, v13);
  v18 = v16;
  if ( !v16 )
  {
    if ( v8 >= 0 || (v8 & 0x40000000) != 0 )
    {
      v19 = v8 & 0x40000000;
      v20 = 40;
    }
    else
    {
      v19 = 0;
      v20 = 24;
    }
    v21 = BugCheckParameter2;
    v22 = (_WORD *)(BugCheckParameter2 + 240);
    v23 = *(_WORD *)(BugCheckParameter2 + 240) + v20;
    v29 = v23;
    v33 = v23;
    if ( a3 && v23 > v34 )
    {
      Src = 0LL;
      v45 = 0LL;
      v18 = AlpcpReturnMessageOnInsufficientBuffer(v30, BugCheckParameter2, &Src, v17);
      v38 = v18;
      if ( v18 == -1073741789 )
      {
        if ( PreviousMode )
          RtlWriteULong64ToUser(a3, v29);
        else
          *a3 = v29;
        AlpcpExposeCapturedContextAttribute((unsigned int)v8, &Src, v13, v39);
      }
    }
    else
    {
      *(_QWORD *)(BugCheckParameter2 + 200) = v41;
      if ( v8 >= 0 || v19 )
      {
        if ( PreviousMode )
          RtlCopyToUser((void *)v6, v22, 0x28uLL);
        else
          RtlCopyVolatileMemory((void *)v6, v22, 0x28uLL);
        if ( _bittest((const signed __int32 *)(v30 + 256), 0xCu) )
          *(_WORD *)(v6 + 4) = *(_WORD *)(v21 + 244) & 0xC00F;
        v25 = (char *)(v6 + 40);
      }
      else
      {
        Src = 0LL;
        *(_QWORD *)&v45 = 0LL;
        LOWORD(Src) = *v22;
        WORD1(Src) = Src + 24;
        v24 = *(_WORD *)(v21 + 244) | 0x1000;
        DWORD1(Src) = v24;
        DWORD2(Src) = *(_DWORD *)(v21 + 248);
        HIDWORD(Src) = *(_DWORD *)(v21 + 256);
        LODWORD(v45) = *(_DWORD *)(v21 + 264);
        DWORD1(v45) = *(_DWORD *)(v21 + 272);
        if ( (*(_DWORD *)(v30 + 256) & 0x1000) != 0 )
          WORD2(Src) = v24 & 0xC00F;
        if ( PreviousMode )
          RtlCopyToUser((void *)v6, &Src, 0x18uLL);
        else
          RtlCopyVolatileMemory((void *)v6, &Src, 0x18uLL);
        v25 = (char *)(v6 + 24);
      }
      AlpcpGetDataFromMessage(v21, v25, PreviousMode);
      if ( a3 )
      {
        if ( PreviousMode )
          RtlWriteULong64ToUser(a3, v29);
        else
          *a3 = v33;
      }
      if ( v39 )
        AlpcpExposeAttributes(v30, v8, v21, v13, (__int64)v39, PreviousMode);
    }
    if ( v18 != -1073741789 && *(_QWORD *)(v21 + 64) == v30 )
    {
      *(_QWORD *)(v21 + 64) = 0LL;
      *(_QWORD *)(v21 + 56) = 0LL;
    }
    if ( (int)(v18 + 0x80000000) < 0 || v18 == -1073741789 )
    {
      AlpcpUnlockMessage(v21);
    }
    else
    {
      *(_QWORD *)(v21 + 200) = 0LL;
      AlpcpCancelMessage(v30, v21, 0x10000LL);
    }
  }
  return v18;
}

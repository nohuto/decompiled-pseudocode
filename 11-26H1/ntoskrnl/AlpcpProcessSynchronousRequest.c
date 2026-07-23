/*
 * XREFs of AlpcpProcessSynchronousRequest @ 0x1409276C0
 * Callers:
 *     NtReplyWaitReplyPort @ 0x1407C3190 (NtReplyWaitReplyPort.c)
 *     NtAlpcSendWaitReceivePort @ 0x140929090 (NtAlpcSendWaitReceivePort.c)
 *     LpcSendWaitReceivePort @ 0x140ACD730 (LpcSendWaitReceivePort.c)
 *     NtRequestWaitReplyPort @ 0x140B0F190 (NtRequestWaitReplyPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ObReferenceObjectSafe @ 0x140441D40 (ObReferenceObjectSafe.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     AlpcpGetDataFromMessage @ 0x1408EC974 (AlpcpGetDataFromMessage.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1408ECA40 (AlpcpGetDataFromUserVaSafe.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ExRaiseAccessViolation @ 0x140925D30 (ExRaiseAccessViolation.c)
 *     AlpcMessageCleanupProcedure @ 0x14098E170 (AlpcMessageCleanupProcedure.c)
 *     AlpcpSendMessage @ 0x14098E2D0 (AlpcpSendMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x140991460 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcpExposeAttributes @ 0x1409B93B0 (AlpcpExposeAttributes.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140A52C1C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x140A82078 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpCancelMessage @ 0x140ACF05C (AlpcpCancelMessage.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x140AE4528 (AlpcpExposeCapturedContextAttribute.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x140B42720 (AlpcpEnterFreeEventMessageLog.c)
 */

__int64 __fastcall AlpcpProcessSynchronousRequest(
        PVOID Object,
        int a2,
        ULONG_PTR a3,
        struct _KLOCK_ENTRIES *a4,
        char *Address,
        __int64 *a6,
        unsigned __int64 a7,
        _QWORD *a8,
        char a9)
{
  struct _KLOCK_ENTRIES *v9; // r11
  ULONG_PTR v10; // r10
  __int64 v13; // rbx
  unsigned __int8 v14; // cl
  unsigned __int64 v15; // rbx
  char UCharFromUser; // al
  int v17; // ebx
  __int64 v18; // rax
  int ULongFromUser; // eax
  int v20; // r13d
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // r15
  char v32; // al
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  unsigned int v37; // eax
  PVOID v38; // r15
  int v39; // eax
  int PreviousMode; // edx
  unsigned int v41; // r13d
  int v42; // ecx
  int v43; // eax
  ULONG_PTR v44; // rbx
  void *v45; // rdx
  int v46; // r8d
  unsigned __int64 v47; // rcx
  char *v48; // r9
  __int64 v49; // rax
  __int64 v50; // rcx
  size_t v51; // rcx
  void *v52; // rdx
  char v53; // r14
  size_t v54; // r8
  char *v55; // rcx
  unsigned __int16 v56; // dx
  signed __int64 *v58; // r13
  void *v59; // rdx
  LegacyAutoBoost *v60; // r15
  unsigned int v61; // [rsp+30h] [rbp-128h]
  unsigned __int64 ULong64FromUser; // [rsp+38h] [rbp-120h]
  size_t v63; // [rsp+38h] [rbp-120h]
  int v64; // [rsp+4Ch] [rbp-10Ch]
  __int64 v65; // [rsp+50h] [rbp-108h]
  size_t v66; // [rsp+50h] [rbp-108h]
  PVOID *v67; // [rsp+50h] [rbp-108h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-100h] BYREF
  _QWORD *v69; // [rsp+60h] [rbp-F8h]
  struct _KLOCK_ENTRIES *v70; // [rsp+68h] [rbp-F0h]
  __int64 *v71; // [rsp+70h] [rbp-E8h]
  char *v72; // [rsp+78h] [rbp-E0h]
  _QWORD v73[2]; // [rsp+90h] [rbp-C8h] BYREF
  _QWORD v74[2]; // [rsp+A0h] [rbp-B8h] BYREF
  __int128 v75; // [rsp+B0h] [rbp-A8h]
  __int128 v76; // [rsp+C0h] [rbp-98h]
  int v77; // [rsp+D0h] [rbp-88h]
  __int64 v78; // [rsp+D4h] [rbp-84h]
  int v79; // [rsp+DCh] [rbp-7Ch]
  _QWORD *v80; // [rsp+E0h] [rbp-78h]
  unsigned __int64 v81; // [rsp+E8h] [rbp-70h]
  __int128 Src; // [rsp+F0h] [rbp-68h] BYREF
  __int128 v83; // [rsp+100h] [rbp-58h]

  v9 = a4;
  v70 = a4;
  v10 = a3;
  BugCheckParameter2 = a3;
  v73[1] = Object;
  v71 = a6;
  v13 = (__int64)a8;
  v69 = a8;
  v74[1] = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v78 = 0LL;
  v79 = 0;
  v73[0] = 0LL;
  v61 = 0;
  ULong64FromUser = -1LL;
  v14 = a9;
  if ( a9 )
  {
    if ( a8 )
    {
      v73[0] = RtlReadULong64FromUser(a8);
      v69 = v73;
      v80 = v73;
    }
    if ( a2 >= 0 || (v17 = a2 & 0x40000000, (a2 & 0x40000000) != 0) )
    {
      v15 = (unsigned __int64)Address;
      if ( ((unsigned __int8)Address & 3) != 0 )
        goto LABEL_51;
      if ( Address + 40 < Address || (unsigned __int64)(Address + 40) > 0x7FFFFFFF0000LL )
        goto LABEL_32;
      do
      {
        UCharFromUser = RtlReadUCharFromUser((volatile void *)v15);
        RtlWriteUCharToUser((_BYTE *)v15, UCharFromUser);
        v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v15 != ((unsigned __int64)(Address + 39) & 0xFFFFFFFFFFFFF000uLL) + 4096 );
      v17 = a2 & 0x40000000;
    }
    else
    {
      ProbeForWrite(Address, 0x18uLL, 4u);
    }
    if ( a6 )
    {
      ULong64FromUser = RtlReadULong64FromUser(a6);
      v81 = ULong64FromUser;
      v18 = RtlReadULong64FromUser(a6);
      RtlWriteULong64ToUser(a6, v18);
    }
    if ( !a7 )
      goto LABEL_36;
    ULongFromUser = RtlReadULongFromUser((unsigned int *)a7);
    v20 = ULongFromUser;
    v61 = ULongFromUser;
    if ( a2 >= 0 || v17 )
    {
      v21 = ((ULongFromUser >> 31) & 0x18) + 8;
      v22 = v21 + 32;
      if ( (v20 & 0x40000000) == 0 )
        v22 = v21;
      v23 = v22 + 32;
      if ( (v20 & 0x20000000) == 0 )
        v23 = v22;
      v24 = v23 + 24;
      if ( (v20 & 0x10000000) == 0 )
        v24 = v23;
      v25 = v24 + 24;
      if ( (v20 & 0x8000000) == 0 )
        v25 = v24;
      v26 = v25 + 8;
      if ( (v20 & 0x4000000) == 0 )
        v26 = v25;
      v27 = v26 + 8;
      if ( (v20 & 0x2000000) == 0 )
        v27 = v26;
      v28 = 7LL;
    }
    else
    {
      v33 = ((ULongFromUser >> 31) & 0xC) + 8;
      v34 = v33 + 16;
      if ( (v20 & 0x40000000) == 0 )
        v34 = v33;
      v35 = v34 + 20;
      if ( (v20 & 0x20000000) == 0 )
        v35 = v34;
      v36 = v35 + 16;
      if ( (v20 & 0x10000000) == 0 )
        v36 = v35;
      v37 = v36 + 24;
      if ( (v20 & 0x8000000) == 0 )
        v37 = v36;
      v27 = v37 + 8;
      if ( (v20 & 0x2000000) == 0 )
        v27 = v37;
      v28 = 3LL;
    }
    v29 = a7;
    if ( (v28 & a7) == 0 )
    {
      v30 = v27 + a7;
      if ( v27 + a7 > a7 )
      {
        if ( v30 > 0x7FFFFFFF0000LL )
          goto LABEL_32;
        goto LABEL_34;
      }
      if ( !(_DWORD)v27 && v30 < 0x7FFFFFFF0000LL )
      {
LABEL_34:
        v31 = ((v30 - 1) & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          v32 = RtlReadUCharFromUser((volatile void *)v29);
          RtlWriteUCharToUser((_BYTE *)v29, v32);
          v29 = (v29 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v29 != v31 );
LABEL_36:
        v14 = a9;
        v13 = (__int64)v69;
        v10 = BugCheckParameter2;
        v9 = v70;
        goto LABEL_52;
      }
LABEL_32:
      ExRaiseAccessViolation();
    }
LABEL_51:
    ExRaiseDatatypeMisalignment();
  }
  if ( a6 )
    ULong64FromUser = *a6;
  if ( a7 )
    v61 = *(_DWORD *)a7;
LABEL_52:
  if ( (*((_BYTE *)Object + 416) & 6) != 6 )
  {
    v38 = Object;
    v69 = Object;
LABEL_54:
    v74[0] = Object;
    v77 = a2;
    if ( (*((_DWORD *)Object + 104) & 0x1000) != 0 )
      v39 = AlpcpSendLegacySynchronousRequest(Object, v74, v10, v14);
    else
      v39 = AlpcpSendMessage(v74, v10, v9, v14);
    v41 = v39;
    if ( v39 >= 0 )
    {
      if ( (a2 & 0x100000) != 0 )
      {
        LOBYTE(PreviousMode) = 1;
      }
      else if ( (a2 & 0x2000000) != 0 && (a2 & 2) != 0 )
      {
        LOBYTE(PreviousMode) = 0;
      }
      else
      {
        PreviousMode = (unsigned __int8)KeGetCurrentThread()->PreviousMode;
      }
      BugCheckParameter2 = 0LL;
      v74[0] = v38;
      v41 = AlpcpReceiveSynchronousReply((unsigned int)v74, PreviousMode, (unsigned int)&BugCheckParameter2, v61, v13);
      if ( !v41 )
      {
        if ( a2 >= 0 || (a2 & 0x40000000) != 0 )
        {
          v42 = 40;
          v43 = a2 & 0x40000000;
        }
        else
        {
          v42 = 24;
          v43 = 0;
        }
        v64 = v42;
        v44 = BugCheckParameter2;
        v45 = (void *)(BugCheckParameter2 + 240);
        v46 = *(unsigned __int16 *)(BugCheckParameter2 + 240);
        LODWORD(v70) = v46;
        v47 = (unsigned int)(v46 + v42);
        if ( v71 && (v65 = v47, v47 > ULong64FromUser) )
        {
          Src = 0LL;
          v83 = 0LL;
          v41 = AlpcpReturnMessageOnInsufficientBuffer(v38, BugCheckParameter2, &Src, 0LL);
          if ( v41 == -1073741789 )
          {
            AlpcpUnlockMessage(v44);
            if ( a9 )
              RtlWriteULong64ToUser(v71, v65);
            else
              *v71 = v65;
            AlpcpExposeCapturedContextAttribute((unsigned int)a2, &Src, v61, a7);
          }
          else
          {
            AlpcpCancelMessage(v38, v44, 0x10000LL);
          }
        }
        else
        {
          if ( a2 >= 0 || v43 )
          {
            if ( a9 )
              RtlCopyToUser(Address, v45, 0x28uLL);
            else
              RtlCopyVolatileMemory(Address, v45, 0x28uLL);
            if ( (*((_DWORD *)Object + 64) & 0x1000) != 0 )
              *((_WORD *)Address + 2) = *(_WORD *)(v44 + 244) & 0xC00F;
            v48 = Address + 40;
            v72 = Address + 40;
            v49 = *(_QWORD *)(v44 + 176);
            if ( !v49 || (char *)(v49 & 0xFFFFFFFFFFFFFFFEuLL) == v48 )
            {
              v50 = *(_QWORD *)(v44 + 96);
              if ( v50 )
                v51 = *(_QWORD *)(v50 + 32) - 40LL;
              else
                v51 = 512LL;
              v66 = v51;
              v63 = *(unsigned __int16 *)(v44 + 240);
              v52 = (void *)(v44 + 280);
              v53 = a9;
              if ( v63 > v51 )
              {
                if ( a9 )
                  RtlCopyToUser(v48, v52, v51);
                else
                  RtlCopyVolatileMemory(v48, v52, v51);
                v54 = v63 - v66;
                v52 = *(void **)(v44 + 224);
                v55 = &v72[v66];
              }
              else
              {
                v54 = *(unsigned __int16 *)(v44 + 240);
                v55 = Address + 40;
              }
              if ( a9 )
                RtlCopyToUser(v55, v52, v54);
              else
                RtlCopyVolatileMemory(v55, v52, v54);
            }
            else
            {
              v53 = a9;
              AlpcpGetDataFromUserVaSafe(v44, v48, a9);
            }
          }
          else
          {
            Src = 0LL;
            *(_QWORD *)&v83 = 0LL;
            LOWORD(Src) = v46;
            WORD1(Src) = v46 + 24;
            v56 = *(_WORD *)(BugCheckParameter2 + 244) | 0x1000;
            DWORD1(Src) = v56;
            DWORD2(Src) = *(_DWORD *)(BugCheckParameter2 + 248);
            HIDWORD(Src) = *(_DWORD *)(BugCheckParameter2 + 256);
            LODWORD(v83) = *(_DWORD *)(BugCheckParameter2 + 264);
            DWORD1(v83) = *(_DWORD *)(BugCheckParameter2 + 272);
            if ( (*((_DWORD *)Object + 64) & 0x1000) != 0 )
              WORD2(Src) = v56 & 0xC00F;
            if ( a9 )
              RtlCopyToUser(Address, &Src, 0x18uLL);
            else
              RtlCopyVolatileMemory(Address, &Src, 0x18uLL);
            v53 = a9;
            AlpcpGetDataFromMessage(v44, Address + 24, a9);
          }
          if ( v71 )
          {
            if ( v53 )
              RtlWriteULong64ToUser(v71, (unsigned int)((_DWORD)v70 + v64));
            else
              *v71 = (unsigned int)(v64 + (_DWORD)v70);
          }
          if ( a7 )
            AlpcpExposeAttributes((_DWORD)Object, a2, v44, v61, a7, v53);
          if ( (*(_DWORD *)(v44 + 40) & 0x200) != 0
            && !*(_QWORD *)(v44 + 96)
            && (*((_DWORD *)Object + 104) & 0x2000) != 0
            && !_InterlockedCompareExchange64((volatile signed __int64 *)Object + 55, v44, 0LL) )
          {
            ++*(_WORD *)(v44 - 30);
            AlpcMessageCleanupProcedure(v44);
            if ( AlpcpMessageLogEnabled )
              AlpcpEnterFreeEventMessageLog(v44);
          }
          AlpcpUnlockMessage(v44);
        }
      }
    }
    if ( v38 != Object )
      ObfDereferenceObject(v38);
    return v41;
  }
  v67 = (PVOID *)*((_QWORD *)Object + 2);
  v58 = (signed __int64 *)(v67 - 2);
  v60 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v67 - 2), 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v67 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v58, 0, v60, (struct _KTHREAD *)v58);
  if ( v60 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v60, v59);
    else
      *((_BYTE *)v60 + 10) = 1;
  }
  v38 = *v67;
  v69 = v38;
  if ( v38 && ObReferenceObjectSafe((__int64)v38) )
  {
    if ( _InterlockedCompareExchange64(v58, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v58);
    KeAbPostRelease((unsigned __int64)v58);
    v14 = a9;
    v10 = BugCheckParameter2;
    v9 = v70;
    goto LABEL_54;
  }
  if ( _InterlockedCompareExchange64(v58, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v58);
  KeAbPostRelease((unsigned __int64)v58);
  return 3221225527LL;
}

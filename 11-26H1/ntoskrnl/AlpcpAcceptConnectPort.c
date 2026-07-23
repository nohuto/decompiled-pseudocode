/*
 * XREFs of AlpcpAcceptConnectPort @ 0x1408ECFF0
 * Callers:
 *     NtAcceptConnectPort @ 0x1408EC8F0 (NtAcceptConnectPort.c)
 *     NtAlpcAcceptConnectPort @ 0x1408ECF60 (NtAlpcAcceptConnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     AlpcpMapLegacyPortView @ 0x1408EB9BC (AlpcpMapLegacyPortView.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1408ECEA0 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpValidateConnectionMessage @ 0x1408EDB40 (AlpcpValidateConnectionMessage.c)
 *     AlpcpCreatePort @ 0x1408EDBA8 (AlpcpCreatePort.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x1408EE3C0 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpInitializePort @ 0x1408F08D0 (AlpcpInitializePort.c)
 *     AlpcpLockBlobExclusive @ 0x1408F10DC (AlpcpLockBlobExclusive.c)
 *     AlpcpUnlockBlobUncachedExclusive @ 0x1408F1140 (AlpcpUnlockBlobUncachedExclusive.c)
 *     AlpcpFlushResourcesPort @ 0x1408F1178 (AlpcpFlushResourcesPort.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x1408F1C4C (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcpSetOwnerProcessPort @ 0x1408F2334 (AlpcpSetOwnerProcessPort.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     AlpcpReleaseAttributes @ 0x14098DA90 (AlpcpReleaseAttributes.c)
 *     PsReleaseProcessWakeCounter @ 0x14098F1E0 (PsReleaseProcessWakeCounter.c)
 *     AlpcpCaptureAttributes @ 0x14098F668 (AlpcpCaptureAttributes.c)
 *     AlpcpLookupMessage @ 0x14098FA50 (AlpcpLookupMessage.c)
 *     AlpcpReferenceBlob @ 0x14098FE98 (AlpcpReferenceBlob.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x14098FFA0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x140990410 (AlpcpDispatchNewMessage.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcpLockBlobShared @ 0x140A53460 (AlpcpLockBlobShared.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140A732B8 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpCancelMessage @ 0x140ACF05C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140B73328 (AlpcpDispatchReplyToPort.c)
 */

NTSTATUS __fastcall AlpcpAcceptConnectPort(
        HANDLE *a1,
        int a2,
        void *a3,
        __int64 a4,
        _OWORD *a5,
        void *a6,
        __int128 *a7,
        __int64 a8,
        char a9,
        void *a10,
        volatile void *a11,
        char a12)
{
  int v14; // r9d
  _DWORD *v15; // r15
  KPROCESSOR_MODE PreviousMode; // al
  char v17; // bl
  __int64 ULong64FromUser; // rax
  NTSTATUS result; // eax
  int ULongFromUser; // eax
  void ***v21; // r13
  signed int inserted; // esi
  __int64 v23; // r8
  ULONG_PTR v24; // r14
  void ***v25; // rcx
  int v26; // edx
  bool v27; // si
  struct _KTHREAD *CurrentThread; // rcx
  struct _KLOCK_ENTRIES *v29; // r9
  __int64 v30; // rbx
  _QWORD *v31; // r12
  int v32; // ecx
  void *v33; // r12
  __int64 v34; // rcx
  __int64 v35; // rcx
  HANDLE v36; // rax
  int v37; // ebx
  int v38; // r12d
  int v39; // eax
  void **v40; // rax
  AutoBoost *v41; // rax
  void *v42; // rdx
  AutoBoost *v43; // r12
  int v44; // eax
  __int64 v45; // rsi
  PVOID *v46; // rbx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-238h]
  int v49; // [rsp+54h] [rbp-224h]
  HANDLE Handle; // [rsp+58h] [rbp-220h] BYREF
  PVOID Object; // [rsp+60h] [rbp-218h] BYREF
  HANDLE *v52; // [rsp+68h] [rbp-210h]
  PVOID v53; // [rsp+70h] [rbp-208h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+78h] [rbp-200h] BYREF
  void *v55; // [rsp+88h] [rbp-1F0h]
  volatile void *Address; // [rsp+90h] [rbp-1E8h]
  __int128 v57; // [rsp+98h] [rbp-1E0h] BYREF
  __int128 v58; // [rsp+A8h] [rbp-1D0h]
  __int64 v59; // [rsp+B8h] [rbp-1C0h]
  __int64 v60; // [rsp+C0h] [rbp-1B8h]
  void *v61; // [rsp+C8h] [rbp-1B0h]
  int v62[2]; // [rsp+D0h] [rbp-1A8h]
  void ***v63; // [rsp+D8h] [rbp-1A0h]
  PVOID v64; // [rsp+E0h] [rbp-198h]
  __int128 v65; // [rsp+E8h] [rbp-190h] BYREF
  __int64 v66; // [rsp+F8h] [rbp-180h]
  __int128 v67; // [rsp+100h] [rbp-178h] BYREF
  __int64 v68; // [rsp+110h] [rbp-168h]
  _OWORD Src[2]; // [rsp+118h] [rbp-160h] BYREF
  __int128 v70; // [rsp+138h] [rbp-140h]
  _QWORD v71[6]; // [rsp+150h] [rbp-128h] BYREF
  int v72; // [rsp+180h] [rbp-F8h]
  __int16 v73; // [rsp+184h] [rbp-F4h]
  __int16 v74; // [rsp+186h] [rbp-F2h]
  _OWORD v75[4]; // [rsp+190h] [rbp-E8h] BYREF
  __int64 v76; // [rsp+1D0h] [rbp-A8h]
  _OWORD v77[4]; // [rsp+1E0h] [rbp-98h] BYREF
  __int64 v78; // [rsp+220h] [rbp-58h]

  v60 = a4;
  v52 = a1;
  v55 = a7;
  *(_QWORD *)v62 = a8;
  v61 = a10;
  Address = a11;
  memset_0(v71, 0, 0x40uLL);
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  memset_0(v77, 0, 0x48uLL);
  memset_0(v75, 0, 0x48uLL);
  memset(Src, 0, sizeof(Src));
  v70 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v15 = 0LL;
  v53 = 0LL;
  v49 = 0;
  BugCheckParameter2[0] = 0LL;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode )
  {
    v17 = a12;
    if ( a12 || a9 )
    {
      if ( a2 < 0 )
      {
        ULongFromUser = RtlReadULongFromUser((unsigned int *)a1);
        RtlWriteULongToUser(a1, ULongFromUser);
      }
      else
      {
        ULong64FromUser = RtlReadULong64FromUser(a1);
        RtlWriteULong64ToUser(a1, ULong64FromUser);
      }
    }
    AlpcpProbeAndCaptureMessageHeader(v55, &v57, a2);
    if ( a5 )
      RtlCopyFromUser(v77, a5, 0x48uLL);
    if ( a10 )
    {
      RtlCopyFromUser(Src, a10, 0x30uLL);
      if ( LODWORD(Src[0]) != 48 )
        return -1073741811;
      ProbeForWrite(a10, 0x30uLL, 4u);
    }
    if ( Address )
    {
      if ( (unsigned int)RtlReadULongFromUser((unsigned int *)Address) != 24 )
        return -1073741811;
      ProbeForWrite(Address, 0x18uLL, 4u);
    }
    PreviousMode = AccessMode;
  }
  else
  {
    if ( a5 )
    {
      v77[0] = *a5;
      v77[1] = a5[1];
      v77[2] = a5[2];
      v77[3] = a5[3];
      v78 = *((_QWORD *)a5 + 8);
    }
    v57 = *a7;
    v58 = a7[1];
    v59 = *((_QWORD *)a7 + 4);
    v17 = a12;
  }
  if ( !DWORD2(v58) )
    return -1073741281;
  v21 = 0LL;
  if ( a3 )
  {
    Object = 0LL;
    result = ObReferenceObjectByHandle(a3, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    v21 = (void ***)Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    if ( !v17 )
      return -1073741504;
    LODWORD(v59) = 0;
  }
  v64 = v21;
  inserted = AlpcpLookupMessage((_DWORD)v21, DWORD2(v58), v59, v14, (__int64)BugCheckParameter2);
  v24 = BugCheckParameter2[0];
  if ( inserted < 0 )
    goto LABEL_87;
  v25 = *(void ****)(BugCheckParameter2[0] + 16);
  inserted = v25 == 0LL ? 0xC0000702 : 0;
  if ( !v25 )
    goto LABEL_87;
  if ( !v21 )
    v21 = *(void ****)(BugCheckParameter2[0] + 16);
  v63 = v21;
  v26 = *(_DWORD *)(BugCheckParameter2[0] + 40);
  if ( (v26 & 0x80u) != 0 )
  {
    inserted = -1073740029;
    goto LABEL_106;
  }
  if ( (*(unsigned __int16 *)(BugCheckParameter2[0] + 244) & 0xFFFF00FF) != 0xA )
  {
LABEL_140:
    inserted = -1073741281;
    goto LABEL_87;
  }
  if ( v25 != *(void ****)(BugCheckParameter2[0] + 192) )
  {
LABEL_86:
    inserted = -1073740030;
    goto LABEL_87;
  }
  if ( v25 == v21 )
    goto LABEL_29;
  if ( (v26 & 7) != 0 )
  {
    if ( ((_BYTE)v21[52] & 6) != 6 )
      goto LABEL_86;
    v40 = v21[2];
    if ( !v40 || *v40 != v25 )
      goto LABEL_86;
LABEL_29:
    if ( (v26 & 7) != 3 || (v26 & 0x2000) != 0 )
      goto LABEL_86;
    v27 = 1;
    goto LABEL_32;
  }
  v45 = *(_QWORD *)(BugCheckParameter2[0] + 24);
  if ( !v45 )
    goto LABEL_86;
  v46 = *(PVOID **)(v45 + 16);
  AlpcpLockBlobShared(v46);
  if ( ((*(_DWORD *)(v45 + 416) >> 1) & 3) == 2 )
    v27 = *v46 == v21 || v46[1] == v21;
  else
    v27 = v46[2] == v21;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v46 - 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v46 - 2);
  KeAbPostRelease((unsigned __int64)(v46 - 2));
LABEL_32:
  if ( !v27 )
    goto LABEL_86;
  LOBYTE(v23) = a12;
  inserted = AlpcpValidateConnectionMessage(v21, &v57, v23);
  if ( inserted < 0 )
    goto LABEL_87;
  v30 = *(_QWORD *)(v24 + 24);
  Object = *(PVOID *)(v30 + 16);
  if ( (*(_DWORD *)(v30 + 416) & 0x20) != 0 )
  {
    inserted = -1073741769;
LABEL_106:
    v37 = 1;
    v38 = 0;
    goto LABEL_78;
  }
  if ( ((_DWORD)v21[32] & 0x100000) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (void **)CurrentThread->ApcState.Process != v21[3] )
      goto LABEL_140;
  }
  if ( !a9 )
  {
    v41 = (AutoBoost *)KeAbPreAcquire(v30 + 352, 0LL, 0LL, v29);
    v43 = v41;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 352), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v30 + 352), v41, v30 + 352);
    if ( v43 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v43, v42);
      else
        *((_BYTE *)v43 + 10) = 1;
    }
    v44 = *(_DWORD *)(v30 + 416) | 0x10;
    *(_DWORD *)(v30 + 416) = v44;
    if ( (v44 & 0x100) != 0 )
      *(_QWORD *)(v30 + 56) = a6;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v30 + 352));
    KeAbPostRelease(v30 + 352);
    v37 = 1;
    inserted = 0;
    v38 = 0;
    goto LABEL_78;
  }
  LOBYTE(CurrentThread) = AccessMode;
  inserted = AlpcpCreatePort(CurrentThread, v60, &v53);
  v15 = v53;
  if ( inserted >= 0 )
  {
    inserted = AlpcpInitializePort(v53, 3LL);
    if ( inserted >= 0 )
    {
      inserted = AlpcpValidateAndSetPortAttributes(
                   (_DWORD)v15,
                   (unsigned __int64)v77 & ((unsigned __int128)-(__int128)(unsigned __int64)a5 >> 64),
                   (_DWORD)v21,
                   0,
                   0,
                   0,
                   a12);
      if ( inserted >= 0 )
      {
        AlpcpSetOwnerProcessPort(v15, (unsigned __int64)v77 & -(__int64)(a5 != 0LL));
        if ( a12 )
          v15[104] |= 0x1000u;
        v31 = Object;
        AlpcpReferenceBlob((ULONG_PTR)Object);
        AlpcpLockBlobExclusive(v31);
        *((_QWORD *)v15 + 2) = v31;
        v31[1] = v15;
        *(_QWORD *)(v30 + 424) = v21;
        *(_QWORD *)(v30 + 432) = v15;
        *((_QWORD *)v15 + 53) = v30;
        *((_QWORD *)v15 + 54) = v30;
        v32 = *(_DWORD *)(v30 + 416);
        if ( (v32 & 0x1000) != 0 && (v15[104] & 0x1000) != 0 )
        {
          *(_DWORD *)(v30 + 416) = v32 | 0x2000;
          v15[104] |= 0x2000u;
        }
        AlpcpUnlockBlobUncachedExclusive(v31);
        v73 = v57 + 40;
        v74 = 11;
        inserted = AlpcpSetupMessageDataForDeferredCopy(v24, (_DWORD)v55, a2, (unsigned __int16)v57, 0, AccessMode);
        if ( inserted >= 0 )
        {
          if ( !a12 || !*(_QWORD *)(v24 + 144) )
          {
LABEL_46:
            v49 = 1;
            v33 = v61;
            if ( v61 )
            {
              v65 = 0LL;
              LODWORD(v66) = 0;
              inserted = AlpcpMapLegacyPortView((__int64)v15, (__int64)Src, (__int64)v75);
              if ( inserted >= 0 )
              {
                inserted = AlpcpMapLegacyPortRemoteView(v30, v75, &v65);
                if ( inserted >= 0 )
                  *((_QWORD *)&v70 + 1) = v66;
              }
            }
            else
            {
              inserted = AlpcpCaptureAttributes((int)v21, a2, v62[0], v24, v75);
            }
            if ( inserted >= 0 )
            {
              PsReferenceSiloContext(v15);
              inserted = ObInsertObjectEx(v15, 0LL, 2031617LL, 0LL, 0, 0LL, &Handle);
              if ( inserted >= 0 )
              {
                AlpcpReleaseAttributes(v24, v24 + 104);
                *(_OWORD *)(v24 + 104) = v75[0];
                *(_OWORD *)(v24 + 120) = v75[1];
                *(_OWORD *)(v24 + 136) = v75[2];
                *(_OWORD *)(v24 + 152) = v75[3];
                *(_QWORD *)(v24 + 168) = v76;
                v49 = 0;
                v34 = *(_QWORD *)(v24 + 208);
                if ( v34 )
                {
                  PsReleaseProcessWakeCounter(v34, *(unsigned int *)(v24 + 264));
                  *(_QWORD *)(v24 + 208) = 0LL;
                }
                v35 = *(_QWORD *)(v24 + 216);
                if ( v35 )
                {
                  PsReleaseProcessWakeCounter(v35, *(unsigned int *)(v24 + 264));
                  *(_QWORD *)(v24 + 216) = 0LL;
                }
                if ( a2 < 0 )
                {
                  if ( AccessMode )
                    RtlWriteULongToUser(v52, (int)Handle);
                  else
                    *(_DWORD *)v52 = (_DWORD)Handle;
                }
                else if ( AccessMode )
                {
                  RtlWriteULong64ToUser(v52, (__int64)Handle);
                }
                else
                {
                  *v52 = Handle;
                }
                v36 = a6;
                if ( !a6 )
                  v36 = Handle;
                *((_QWORD *)v15 + 7) = v36;
                if ( v33 )
                {
                  if ( AccessMode )
                    RtlCopyToUser(v33, Src, 0x30uLL);
                  else
                    RtlCopyVolatileMemory(v33, Src, 0x30uLL);
                }
                if ( Address )
                {
                  if ( AccessMode )
                    RtlCopyToUser((void *)Address, &v67, 0x18uLL);
                  else
                    RtlCopyVolatileMemory((void *)Address, &v67, 0x18uLL);
                }
                v37 = 0;
                v38 = 0;
                v71[0] = v15;
                v71[1] = v24;
                v72 = 0x10000;
                if ( *(_QWORD *)(v24 + 24) )
                {
                  if ( *(_QWORD *)(v24 + 32) )
                    v39 = AlpcpDispatchReplyToWaitingThread(v71);
                  else
                    v39 = AlpcpDispatchReplyToPort(v71);
                }
                else
                {
                  v39 = AlpcpDispatchNewMessage(v71);
                }
                inserted = v39;
                if ( v39 >= 0 )
                  Handle = 0LL;
                v24 = 0LL;
                goto LABEL_78;
              }
            }
            goto LABEL_87;
          }
          inserted = AlpcpMapLegacyPortRemoteView(v15, v24 + 104, &v67);
          if ( inserted >= 0 )
          {
            *(_DWORD *)(v24 + 40) |= 0x4000u;
            goto LABEL_46;
          }
        }
      }
    }
  }
LABEL_87:
  v37 = 0;
  v38 = 0;
LABEL_78:
  if ( v24 )
  {
    if ( v49 )
    {
      AlpcpReleaseAttributes(0LL, v75);
      v38 = 1;
    }
    if ( v37 )
      AlpcpCancelMessage(v21, v24, 0x10000LL);
    else
      AlpcpUnlockMessage(v24);
  }
  if ( v64 )
    ObfDereferenceObject(v64);
  if ( v15 )
  {
    if ( v38 )
      AlpcpFlushResourcesPort(v15);
    ObfDereferenceObject(v15);
  }
  if ( Handle )
    NtClose(Handle);
  return inserted;
}

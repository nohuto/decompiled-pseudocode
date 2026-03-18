/*
 * XREFs of NtAlpcOpenSenderProcess @ 0x1408E6510
 * Callers:
 *     DifNtAlpcOpenSenderProcessWrapper @ 0x14066CFA0 (DifNtAlpcOpenSenderProcessWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1408E68E0 (AlpcpProbeAndCaptureMessageHeader.c)
 *     PsOpenProcess @ 0x1408EFC40 (PsOpenProcess.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     AlpcpLookupMessage @ 0x1409BEA70 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1409C07A0 (AlpcpUnlockMessage.c)
 */

__int64 __fastcall NtAlpcOpenSenderProcess(
        _QWORD *a1,
        void *a2,
        __int128 *a3,
        __int64 a4,
        unsigned int a5,
        __int128 *Src)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r13
  NTSTATUS v10; // ebx
  int v11; // r9d
  __int64 ULong64FromUser; // rax
  PVOID v13; // rsi
  struct _KLOCK_ENTRIES *v14; // r9
  ULONG_PTR v15; // rdi
  _QWORD *v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // r14
  __int64 v20; // r14
  signed __int64 *v21; // rbx
  void *v22; // rdx
  LegacyAutoBoost *v23; // r15
  signed __int64 v24; // r9
  signed __int64 v25; // r8
  int Object; // [rsp+20h] [rbp-A8h]
  int HandleInformation; // [rsp+28h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+38h] [rbp-90h] BYREF
  PVOID v29; // [rsp+48h] [rbp-80h] BYREF
  __int64 v30; // [rsp+50h] [rbp-78h] BYREF
  __int128 v31; // [rsp+58h] [rbp-70h] BYREF
  __int128 v32; // [rsp+68h] [rbp-60h]
  __int64 v33; // [rsp+78h] [rbp-50h]
  __int128 v34; // [rsp+80h] [rbp-48h] BYREF
  __int128 v35; // [rsp+90h] [rbp-38h]
  __int128 v36; // [rsp+A0h] [rbp-28h]

  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  *(_QWORD *)&v36 = 0LL;
  DWORD2(v36) = 0;
  v30 = 0LL;
  BugCheckParameter2[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v29 = 0LL;
  v10 = ObReferenceObjectByHandle(a2, 0x20000u, AlpcPortObjectType, PreviousMode, &v29, 0LL);
  if ( v10 < 0 )
    goto LABEL_12;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
    AlpcpProbeAndCaptureMessageHeader(a3, &v31);
    RtlCopyFromUser(&v34, Src, 0x30uLL);
  }
  else
  {
    v31 = *a3;
    v32 = a3[1];
    v33 = *((_QWORD *)a3 + 4);
    v34 = *Src;
    v35 = Src[1];
    v36 = Src[2];
  }
  v13 = v29;
  v10 = AlpcpLookupMessage((_DWORD)v29, DWORD2(v32), v33, v11, (__int64)BugCheckParameter2);
  if ( v10 < 0 )
  {
    ObfDereferenceObject(v13);
    goto LABEL_12;
  }
  v15 = BugCheckParameter2[0];
  if ( (*(_DWORD *)(BugCheckParameter2[0] + 40) & 0x80u) != 0 )
  {
    AlpcpUnlockMessage(BugCheckParameter2[0]);
    ObfDereferenceObject(v13);
    v10 = -1073740029;
    goto LABEL_12;
  }
  v16 = *(_QWORD **)(BugCheckParameter2[0] + 32);
  if ( v16 )
  {
    v17 = v16[161] - *((_QWORD *)&v31 + 1);
    if ( !v17 )
      v17 = v16[162] - v32;
    if ( v17 )
    {
      AlpcpUnlockMessage(BugCheckParameter2[0]);
      ObfDereferenceObject(v13);
      v10 = -1073741813;
      goto LABEL_12;
    }
    v18 = (_QWORD *)v16[68];
    ObfReferenceObjectWithTag(v18, 0x63706C41u);
    goto LABEL_11;
  }
  v20 = *(_QWORD *)(BugCheckParameter2[0] + 24);
  if ( !v20 )
  {
LABEL_34:
    AlpcpUnlockMessage(v15);
    ObfDereferenceObject(v13);
    v10 = -1073741790;
    goto LABEL_12;
  }
  v21 = (signed __int64 *)(v20 + 352);
  v23 = (LegacyAutoBoost *)KeAbPreAcquire(v20 + 352, 0LL, 0LL, v14);
  v24 = 17LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 352), 17LL, 0LL) )
  {
    ExfAcquirePushLockSharedEx((signed __int64 *)(v20 + 352), 0, v23, (struct _KTHREAD *)(v20 + 352));
    v24 = 17LL;
  }
  v25 = 0LL;
  if ( v23 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v23, v22);
    else
      *((_BYTE *)v23 + 10) = 1;
  }
  if ( (*(_DWORD *)(v20 + 416) & 0x40) == 0 )
  {
    v18 = *(_QWORD **)(v20 + 24);
    if ( v18[58] == *((_QWORD *)&v31 + 1) )
    {
      ObfReferenceObjectWithTag(v18, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v21);
      KeAbPostRelease((unsigned __int64)v21);
LABEL_11:
      AlpcpUnlockMessage(v15);
      *(_QWORD *)&v32 = 0LL;
      LOBYTE(HandleInformation) = PreviousMode;
      LOBYTE(Object) = 0;
      v10 = PsOpenProcess(&v30, a5, &v34, (char *)&v31 + 8, Object, HandleInformation);
      ObfDereferenceObjectWithTag(v18, 0x63706C41u);
      ObfDereferenceObject(v13);
      if ( v10 >= 0 )
      {
        if ( PreviousMode )
          RtlWriteULong64ToUser(a1, v30);
        else
          *a1 = v30;
      }
      goto LABEL_12;
    }
    if ( v24 != _InterlockedCompareExchange64(v21, v25, v24) )
      ExfReleasePushLockShared(v21);
    KeAbPostRelease((unsigned __int64)v21);
    goto LABEL_34;
  }
  if ( v24 != _InterlockedCompareExchange64(v21, v25, v24) )
    ExfReleasePushLockShared((signed __int64 *)(v20 + 352));
  KeAbPostRelease(v20 + 352);
  AlpcpUnlockMessage(v15);
  ObfDereferenceObject(v13);
  v10 = -1073741769;
LABEL_12:
  KeLeaveCriticalRegion();
  return (unsigned int)v10;
}

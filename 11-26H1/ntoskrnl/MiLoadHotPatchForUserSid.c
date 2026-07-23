/*
 * XREFs of MiLoadHotPatchForUserSid @ 0x140877654
 * Callers:
 *     NtManageHotPatch @ 0x140A9D550 (NtManageHotPatch.c)
 * Callees:
 *     RtlHashBytes2 @ 0x14024D064 (RtlHashBytes2.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiAllocateHotPatchRecord @ 0x140873D80 (MiAllocateHotPatchRecord.c)
 *     MiCompareUserSidHotPatchNodes @ 0x140875ABC (MiCompareUserSidHotPatchNodes.c)
 *     MiHotPatchAllProcesses @ 0x1408764F0 (MiHotPatchAllProcesses.c)
 *     MiInsertHotPatchRecord @ 0x140876C5C (MiInsertHotPatchRecord.c)
 *     MiOpenHotPatchFile @ 0x140879388 (MiOpenHotPatchFile.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     RtlCopySid @ 0x140A3DEA0 (RtlCopySid.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiLoadHotPatchForUserSid(const void **a1, void *a2, _DWORD *a3)
{
  int inserted; // esi
  unsigned int v6; // r13d
  unsigned int v7; // edi
  void *HotPatchRecord; // r15
  struct _KTHREAD *CurrentThread; // r14
  ULONG v10; // ebx
  struct _KLOCK_ENTRIES *v11; // r9
  AutoBoost *v12; // rax
  void *v13; // rdx
  signed __int8 v14; // cf
  AutoBoost *v15; // rsi
  _QWORD *v16; // rsi
  bool v17; // r12
  int v18; // eax
  struct _KLOCK_ENTRIES *v19; // r9
  _QWORD *v20; // rax
  int CurrentProcessorColor; // eax
  _QWORD *PoolMm; // rax
  _QWORD *v23; // r13
  __int64 v24; // rdx
  bool v25; // zf
  PSID v26; // r8
  ULONG v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // ebx
  _DWORD *v31; // rax
  unsigned int v33; // [rsp+48h] [rbp-29h] BYREF
  ULONG DestinationSidLength; // [rsp+4Ch] [rbp-25h]
  PVOID Object; // [rsp+50h] [rbp-21h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-19h] BYREF
  __int128 v37; // [rsp+60h] [rbp-11h] BYREF
  int v38; // [rsp+78h] [rbp+7h]
  PSID SourceSid; // [rsp+80h] [rbp+Fh]
  _DWORD *v40; // [rsp+88h] [rbp+17h]
  unsigned __int64 v41[2]; // [rsp+90h] [rbp+1Fh] BYREF

  v40 = a3;
  v38 = 0;
  SourceSid = a2;
  v33 = 0;
  Handle = 0LL;
  Object = 0LL;
  v37 = 0LL;
  inserted = MiOpenHotPatchFile(
               (_DWORD)a1,
               1,
               0,
               (unsigned int)&Handle,
               (__int64)&Object,
               0LL,
               (__int64)&v37,
               (__int64)&v33);
  if ( inserted >= 0 )
  {
    v6 = DWORD1(v37);
    v7 = v33;
    HotPatchRecord = (void *)MiAllocateHotPatchRecord(v37, SDWORD1(v37), v38, a1, v33);
    if ( !HotPatchRecord )
    {
      inserted = -1073741670;
      goto LABEL_35;
    }
    CurrentThread = KeGetCurrentThread();
    v10 = RtlLengthSid(a2);
    DestinationSidLength = v10;
    v41[0] = RtlHashBytes2((__int64)a2, v10);
    v41[1] = (unsigned __int64)a2;
    v33 = v10 + 40;
    --CurrentThread->SpecialApcDisable;
    v12 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E366D8, 0LL, 0LL, v11);
    v14 = _interlockedbittestandset64(&stru_140E366D8.Header.Lock, 0LL);
    v15 = v12;
    if ( v14 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E366D8, v12, (__int64)&stru_140E366D8);
    if ( v15 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v15, v13);
      else
        *((_BYTE *)v15 + 10) = 1;
    }
    v16 = (_QWORD *)qword_140E366B8;
    v17 = 0;
    if ( qword_140E366B8 )
    {
      while ( 1 )
      {
        v18 = MiCompareUserSidHotPatchNodes(v41, (__int64)v16);
        if ( v18 <= 0 )
        {
          if ( v18 >= 0 )
            goto LABEL_25;
          v20 = (_QWORD *)*v16;
          if ( !*v16 )
            break;
        }
        else
        {
          v20 = (_QWORD *)v16[1];
          if ( !v20 )
          {
            v17 = 1;
            break;
          }
        }
        v16 = v20;
      }
    }
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (_QWORD *)ExAllocatePoolMm(256LL, v33, 1934126413, CurrentProcessorColor | 0x80000000);
    v23 = PoolMm;
    if ( !PoolMm )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E366D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E366D8.Header.Lock);
      KeAbPostRelease((unsigned __int64)&stru_140E366D8);
      v25 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v25
        && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(1LL, v24);
      }
      inserted = -1073741670;
LABEL_34:
      ExFreePoolWithTag(HotPatchRecord, 0);
      goto LABEL_35;
    }
    v26 = SourceSid;
    v27 = DestinationSidLength;
    PoolMm[3] = 0LL;
    PoolMm[4] = v41[0];
    RtlCopySid(v27, PoolMm + 5, v26);
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E366B8, (unsigned __int64)v16, v17, v23);
    v16 = v23;
    v6 = DWORD1(v37);
LABEL_25:
    inserted = MiInsertHotPatchRecord(v16 + 3, (__int64)HotPatchRecord, 1LL, v19);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E366D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E366D8.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140E366D8);
    v25 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v25 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v29, v28);
    if ( inserted < 0 )
      goto LABEL_34;
    v30 = v37;
    if ( inserted != 255 )
      HotPatchRecord = 0LL;
    MiHotPatchAllProcesses(v37, v6, v7);
    v31 = v40;
    *v40 = v30;
    v31[1] = v6;
    inserted = 0;
    if ( HotPatchRecord )
      goto LABEL_34;
  }
LABEL_35:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x70486D4Du);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)inserted;
}

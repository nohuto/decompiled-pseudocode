/*
 * XREFs of MiGetAllRegisteredPatches @ 0x14087607C
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x140874C78 (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiDuplicateUnicodeString @ 0x14086DC40 (MiDuplicateUnicodeString.c)
 *     MiCompareHotPatchNodes @ 0x140875A8C (MiCompareHotPatchNodes.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A9DB18 (MiFindProcessImageHotPatchRecord.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetAllRegisteredPatches(int a1, unsigned int a2, unsigned int a3, char **a4)
{
  char *v5; // r14
  struct _KTHREAD *CurrentThread; // r15
  struct _KLOCK_ENTRIES *v8; // r9
  void *v9; // rdx
  LegacyAutoBoost *v10; // rbx
  _QWORD *v11; // rbx
  unsigned __int64 v12; // rdi
  int v13; // eax
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  char *v16; // rbx
  NTSTATUS v17; // esi
  unsigned __int64 v18; // rax
  _QWORD **v19; // rcx
  _QWORD *i; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  bool v23; // zf
  int ProcessImageHotPatchRecord; // eax
  int v25; // eax
  __int64 v26; // rax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  __int128 v29; // [rsp+48h] [rbp-38h] BYREF
  __int128 v30; // [rsp+58h] [rbp-28h]
  __int128 v31; // [rsp+68h] [rbp-18h]
  __int64 v32; // [rsp+78h] [rbp-8h]

  v32 = 0LL;
  v5 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  CurrentThread = KeGetCurrentThread();
  *((_QWORD *)&v30 + 1) = __PAIR64__(a3, a2);
  --CurrentThread->SpecialApcDisable;
  v10 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140E366D8, 0LL, 0LL, v8);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E366D8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140E366D8.Header.Lock, 0, v10, &stru_140E366D8);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  v11 = (_QWORD *)*((_QWORD *)&xmmword_140E366C0 + 1);
  v12 = 0LL;
  while ( v11 )
  {
    v13 = MiCompareHotPatchNodes((__int64)&v29, (__int64)v11);
    if ( v13 < 0 )
      goto LABEL_12;
    if ( v13 <= 0 )
    {
      v12 = (unsigned __int64)v11;
LABEL_12:
      v11 = (_QWORD *)*v11;
    }
    else
    {
      v11 = (_QWORD *)v11[1];
    }
  }
  while ( v12 && !(unsigned int)MiCompareHotPatchNodes((__int64)&v29, v12) )
  {
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = ExAllocatePoolMm(256LL, 0x38uLL, 1917349197, CurrentProcessorColor | 0x80000000);
    v16 = (char *)PoolMm;
    if ( !PoolMm )
    {
      v17 = -1073741670;
      goto LABEL_27;
    }
    v17 = MiDuplicateUnicodeString((UNICODE_STRING *)(PoolMm + 40), (const UNICODE_STRING *)(v12 + 40), 0);
    if ( v17 < 0 )
      goto LABEL_27;
    *(_QWORD *)v16 = v5;
    v18 = v12;
    v19 = *(_QWORD ***)(v12 + 8);
    v5 = v16;
    if ( v19 )
    {
      v12 = *(_QWORD *)(v12 + 8);
      for ( i = *v19; i; i = (_QWORD *)*i )
        v12 = (unsigned __int64)i;
    }
    else
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v12 || *(_QWORD *)v12 == v18 )
          break;
        v18 = v12;
      }
    }
  }
  ProcessImageHotPatchRecord = MiFindProcessImageHotPatchRecord(a1, a2, a3, 1, (__int64)&DestinationString);
  v17 = ProcessImageHotPatchRecord;
  if ( ProcessImageHotPatchRecord >= 0 )
  {
    v25 = MmGetCurrentProcessorColor();
    v26 = ExAllocatePoolMm(256LL, 0x38uLL, 1917349197, v25 | 0x80000000);
    v16 = (char *)v26;
    if ( v26 )
    {
      *(UNICODE_STRING *)(v26 + 40) = DestinationString;
      RtlInitUnicodeString(&DestinationString, 0LL);
      *(_QWORD *)v16 = v5;
      v5 = v16;
      v16 = 0LL;
      goto LABEL_40;
    }
    v17 = -1073741670;
  }
  else
  {
    v16 = 0LL;
    if ( ProcessImageHotPatchRecord == -1073741275 )
    {
LABEL_40:
      v17 = 0;
      *a4 = v5;
      v5 = 0LL;
    }
  }
LABEL_27:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E366D8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140E366D8.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E366D8);
  v23 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v23 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v22, v21);
  if ( !v16 )
    goto LABEL_43;
  while ( 1 )
  {
    RtlFreeAnsiString((PUNICODE_STRING)(v16 + 40));
    ExFreePoolWithTag(v16, 0);
LABEL_43:
    if ( !v5 )
      break;
    v16 = v5;
    v5 = *(char **)v5;
  }
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v17;
}

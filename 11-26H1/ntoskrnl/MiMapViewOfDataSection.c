/*
 * XREFs of MiMapViewOfDataSection @ 0x140995790
 * Callers:
 *     MiMapViewOfSection @ 0x1409941C8 (MiMapViewOfSection.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403175E4 (LOCK_ADDRESS_SPACE.c)
 *     MiInsertVad @ 0x140318030 (MiInsertVad.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiAllocateDataVad @ 0x140995980 (MiAllocateDataVad.c)
 *     MiPrepareDataViewSubsections @ 0x140995B50 (MiPrepareDataViewSubsections.c)
 *     MiInitializeDataMapParameters @ 0x140995CF8 (MiInitializeDataMapParameters.c)
 *     MiSelectDataMapAddress @ 0x140995DF0 (MiSelectDataMapAddress.c)
 *     MiHandleInsertedDataVad @ 0x140996734 (MiHandleInsertedDataVad.c)
 *     MiInitializeDataVad @ 0x140996B10 (MiInitializeDataVad.c)
 *     MiDataVadErrorCleanup @ 0x1409976EC (MiDataVadErrorCleanup.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140AED468 (MiPreparePlaceholderVadReplacement.c)
 */

__int64 __fastcall MiMapViewOfDataSection(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  __int64 result; // rax
  __int64 v13; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  int DataVad; // ebx
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  ULONG_PTR v18; // rbp
  __int64 v19; // r8
  struct _KLOCK_ENTRIES *v20; // r9
  struct _KLOCK_ENTRIES *v21; // r9
  AutoBoost *v22; // rax
  void *v23; // rdx
  AutoBoost *v24; // rbx
  _QWORD v25[4]; // [rsp+20h] [rbp-A8h] BYREF
  int v26; // [rsp+40h] [rbp-88h]
  __int64 v27; // [rsp+48h] [rbp-80h]
  __int64 v28; // [rsp+50h] [rbp-78h]
  int v29; // [rsp+58h] [rbp-70h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-40h]
  int v31; // [rsp+94h] [rbp-34h]
  __int64 v32; // [rsp+98h] [rbp-30h]
  ULONG_PTR v33; // [rsp+A8h] [rbp-20h]

  memset_0(v25, 0, 0x98uLL);
  v25[1] = a5;
  v26 = a7;
  v27 = *a3;
  v28 = a8;
  v31 = a6;
  v25[0] = a2;
  v25[3] = a1;
  v25[2] = a4;
  result = MiInitializeDataMapParameters(v25);
  if ( (int)result >= 0 )
  {
    result = MiPrepareDataViewSubsections(v25);
    if ( (int)result >= 0 )
    {
      v13 = *(_QWORD *)(a2 + 88);
      CurrentThread = KeGetCurrentThread();
      DataVad = MiAllocateDataVad(v25);
      if ( DataVad < 0
        || (v18 = BugCheckParameter2,
            v29 |= 1u,
            LOCK_ADDRESS_SPACE((__int64)CurrentThread, v13, v16, v17),
            DataVad = MiSelectDataMapAddress(v25),
            DataVad < 0)
        || (DataVad = MiInitializeDataVad(v25), DataVad < 0) )
      {
        MiDataVadErrorCleanup(v25);
        return (unsigned int)DataVad;
      }
      else
      {
        if ( v33 )
        {
          MiPreparePlaceholderVadReplacement(v33);
          v22 = (AutoBoost *)KeAbPreAcquire(v18 + 40, 0LL, 0LL, v21);
          v24 = v22;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 40), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v18 + 40), v22, v18 + 40);
          if ( v24 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v24, v23);
            else
              *((_BYTE *)v24 + 10) = 1;
          }
        }
        else
        {
          MiLockVad((__int64)CurrentThread, v18, v19, v20);
        }
        MiInsertVad(v18, v13, 0);
        result = MiHandleInsertedDataVad(v25);
        if ( (int)result >= 0 )
          *a3 = v32;
      }
    }
  }
  return result;
}

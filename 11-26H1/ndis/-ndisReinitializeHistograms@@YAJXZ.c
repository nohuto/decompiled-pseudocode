/*
 * XREFs of ?ndisReinitializeHistograms@@YAJXZ @ 0x14013BA78
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1401832D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 * Callees:
 *     GetGlobalNamespace @ 0x1400A6440 (GetGlobalNamespace.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ??3?$KALLOCATOR@$0GHGIEEEO@$00@@SAXPEAX@Z @ 0x14013B518 (--3-$KALLOCATOR@$0GHGIEEEO@$00@@SAXPEAX@Z.c)
 *     ndisHistogramDeleteAllEntries @ 0x14013B9FC (ndisHistogramDeleteAllEntries.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x140164E70 (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
 */

NTSTATUS ndisReinitializeHistograms(void)
{
  NTSTATUS result; // eax
  _DWORD *PoolWithTag; // rax
  void *v2; // rdi
  _DWORD *v3; // rsi
  _DWORD *v4; // r14
  KnobNamespace *GlobalNamespace; // rax
  int v6; // ebx
  void *v7; // rbx
  unsigned __int8 (*v8)(void *, const struct KnobDescriptor *, unsigned __int64 *); // [rsp+28h] [rbp-E0h]
  void *v9; // [rsp+38h] [rbp-D0h]
  char v10; // [rsp+48h] [rbp-C0h] BYREF
  KLockThisExclusive v11; // [rsp+50h] [rbp-B8h] BYREF
  struct KnobDescriptor v12; // [rsp+68h] [rbp-A0h] BYREF
  const wchar_t *v13; // [rsp+98h] [rbp-70h]
  char *v14; // [rsp+A0h] [rbp-68h]
  __int64 v15; // [rsp+A8h] [rbp-60h]
  __int128 v16; // [rsp+B0h] [rbp-58h]
  __int64 v17; // [rsp+C0h] [rbp-48h]
  const wchar_t *v18; // [rsp+C8h] [rbp-40h]
  char *v19; // [rsp+D0h] [rbp-38h]
  __int64 v20; // [rsp+D8h] [rbp-30h]
  __int128 v21; // [rsp+E0h] [rbp-28h]
  __int64 v22; // [rsp+F0h] [rbp-18h]
  const wchar_t *v23; // [rsp+F8h] [rbp-10h]
  char *v24; // [rsp+100h] [rbp-8h]
  __int64 v25; // [rsp+108h] [rbp+0h]
  __int128 v26; // [rsp+110h] [rbp+8h]
  __int64 v27; // [rsp+120h] [rbp+18h]
  const wchar_t *v28; // [rsp+128h] [rbp+20h]
  char *v29; // [rsp+130h] [rbp+28h]
  __int64 v30; // [rsp+138h] [rbp+30h]
  __int128 v31; // [rsp+140h] [rbp+38h]
  __int64 v32; // [rsp+150h] [rbp+48h]
  const wchar_t *v33; // [rsp+158h] [rbp+50h]
  char *v34; // [rsp+160h] [rbp+58h]
  __int64 v35; // [rsp+168h] [rbp+60h]
  __int128 v36; // [rsp+170h] [rbp+68h]
  __int64 v37; // [rsp+180h] [rbp+78h]

  result = RtlRunOnceExecuteOnce(&RunOnce, (PRTL_RUN_ONCE_INIT_FN)ndisHistogramRunOnceCallback, 0LL, 0LL);
  if ( !result )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x6768444Eu);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      v3 = PoolWithTag + 8;
      *((_QWORD *)PoolWithTag + 3) = 1440LL;
      v4 = PoolWithTag + 9;
      PoolWithTag[8] = 20;
      PoolWithTag[9] = 100000;
      *((_QWORD *)PoolWithTag + 1) = PoolWithTag;
      *(_QWORD *)PoolWithTag = PoolWithTag;
      v12.Name = L"SharedMemoryAllocationDurationHistogram";
      v12.Value = &v10;
      v13 = L"SharedMemoryAllocationDurationHistogramAutoReset";
      v14 = (char *)(PoolWithTag + 5);
      v10 = 0;
      v12.DefaultValue = 0LL;
      v12.Flags = BooleanDatatype;
      *(_OWORD *)&v12.MinimumValue = 0LL;
      v15 = (unsigned int)PoolWithTag[5];
      v17 = 0LL;
      v18 = L"SharedMemoryAllocationDurationHistogramMaxHistograms";
      v19 = (char *)(PoolWithTag + 6);
      v16 = 0LL;
      v20 = (unsigned int)PoolWithTag[6];
      v22 = 0LL;
      v23 = L"SharedMemoryAllocationDurationHistogramStart";
      v21 = 0LL;
      v24 = (char *)(PoolWithTag + 8);
      v25 = (unsigned int)PoolWithTag[8];
      v27 = 0LL;
      v28 = L"SharedMemoryAllocationDurationHistogramNumIntervals";
      v26 = 0LL;
      v29 = (char *)(PoolWithTag + 8);
      v30 = (unsigned int)PoolWithTag[8];
      v32 = 0LL;
      v33 = L"SharedMemoryAllocationDurationHistogramIntervalLength";
      v31 = 0LL;
      v34 = (char *)(PoolWithTag + 9);
      v35 = (unsigned int)PoolWithTag[9];
      v37 = 0LL;
      v36 = 0LL;
      GlobalNamespace = GetGlobalNamespace();
      v6 = KnobNamespace::BuildCollection(GlobalNamespace, &v12, 6uLL, 0, v8, 0LL, v9);
      if ( v6 )
      {
LABEL_8:
        KALLOCATOR<1734886478,1>::operator delete(v2);
        return v6;
      }
      if ( v10 && (*v3 < 2u || !*v4) )
      {
        v6 = -1073741811;
        goto LABEL_8;
      }
      KLockThisExclusive::KLockThisExclusive(&v11, &stru_14011E828);
      if ( qword_14011EE68 )
      {
        ndisHistogramDeleteAllEntries();
        KALLOCATOR<1734886478,1>::operator delete(qword_14011EE68);
        qword_14011EE68 = 0LL;
      }
      v7 = v2;
      if ( v10 )
      {
        v7 = 0LL;
        qword_14011EE68 = v2;
      }
      KLockHolder::~KLockHolder(&v11);
      if ( v7 )
        KALLOCATOR<1734886478,1>::operator delete(v7);
      return 0;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}

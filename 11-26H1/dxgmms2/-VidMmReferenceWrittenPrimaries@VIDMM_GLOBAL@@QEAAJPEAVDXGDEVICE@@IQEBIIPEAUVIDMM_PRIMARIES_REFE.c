/*
 * XREFs of ?VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJPEAVDXGDEVICE@@IQEBIIPEAUVIDMM_PRIMARIES_REFERENCES@@@Z @ 0x1400FE610
 * Callers:
 *     VidMmReferenceWrittenPrimaries @ 0x140037930 (VidMmReferenceWrittenPrimaries.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14002E900 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?Add@InterlockedCounterWithHistoryRelease@@QEAAJJPEAI_K@Z @ 0x14003BF28 (-Add@InterlockedCounterWithHistoryRelease@@QEAAJJPEAI_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReferenceWrittenPrimaries(
        VIDMM_GLOBAL *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const unsigned int *a4,
        int a5,
        struct VIDMM_PRIMARIES_REFERENCES *a6)
{
  const unsigned int *v7; // rdi
  struct DXGPROCESS *Current; // rax
  unsigned int v10; // ebp
  struct DXGPROCESS *v11; // r13
  unsigned int v12; // r14d
  char *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  unsigned int i; // esi
  unsigned int v20; // edx
  unsigned int v21; // eax
  __int64 v22; // rdi
  int v23; // ecx
  __int64 v24; // rdi
  struct DXGDEVICE *v25; // rdx
  __int64 **v26; // r9
  __int64 v27; // r8
  unsigned int v28; // ecx
  unsigned int v29; // edx
  int *v30; // rcx
  signed __int32 v31; // edx
  int v32; // eax
  int v33; // eax
  __int64 **v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rcx
  struct VIDMM_PRIMARIES_REFERENCES *v40; // [rsp+B8h] [rbp+30h]

  v7 = a4;
  Current = DXGPROCESS::GetCurrent();
  v10 = 0;
  v11 = Current;
  v12 = 0;
  v13 = (char *)Current + 248;
  if ( Current != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)Current + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1495;
    DxgkLogInternalTriageEvent(v14, 262146LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v13, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v17 = *((_DWORD *)v13 + 6);
      if ( v17 != -1 && (byte_14008A201 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, &EventBlockThread, v16, v17);
    }
    ExAcquirePushLockSharedEx(v13, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)v13 + 4);
  *(_DWORD *)a6 = 0;
  for ( i = 0; i < a3; ++i )
  {
    v20 = v7[i];
    v21 = (v20 >> 6) & 0xFFFFFF;
    if ( v21 >= *((_DWORD *)v11 + 74) )
      goto LABEL_16;
    v22 = *((_QWORD *)v11 + 35) + 16LL * v21;
    if ( ((v20 >> 25) & 0x60) != (*(_BYTE *)(v22 + 8) & 0x60) )
      goto LABEL_16;
    if ( (*(_DWORD *)(v22 + 8) & 0x2000) != 0 )
      goto LABEL_16;
    v23 = *(_DWORD *)(v22 + 8) & 0x1F;
    if ( !v23 )
      goto LABEL_16;
    if ( v23 != 5 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(v36, 0x40000LL);
LABEL_16:
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 22290;
      v12 = -1073741811;
LABEL_37:
      if ( *(_DWORD *)a6 )
      {
        do
          InterlockedCounterWithHistoryRelease::Add(
            (InterlockedCounterWithHistoryRelease *)(*((_QWORD *)a6 + ++v10) + 104LL),
            -a5,
            (unsigned int *)a6 + 34);
        while ( v10 < *(_DWORD *)a6 );
      }
      break;
    }
    v24 = *(_QWORD *)v22;
    if ( !v24 )
      goto LABEL_16;
    v25 = *(struct DXGDEVICE **)(v24 + 8);
    if ( v25 != a2 )
    {
      WdLogSingleEntry2(1LL, v25, a2);
      WdLogGlobalForLineNumber = 22298;
      DxgkLogInternalTriageEvent(v35, 0x40000LL);
      v12 = -1073741811;
      goto LABEL_37;
    }
    v26 = *(__int64 ***)(v24 + 24);
    v40 = (struct VIDMM_PRIMARIES_REFERENCES *)v26;
    v27 = **v26;
    v28 = **(_DWORD **)(v27 + 368);
    v29 = (v28 >> 12) | (v28 | ((v28 | (v28 >> 5)) >> 6)) & 0x80000;
    if ( (v28 & 0x200000) != 0 )
    {
      *((_DWORD *)a6 + 35) |= 1u;
      if ( v29 < 0x80000 )
        goto LABEL_31;
    }
    else if ( v29 < 0x80000 )
    {
      if ( (**(_DWORD **)(v27 + 368) & 0x100000) == 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 22322;
        v12 = -1073741811;
        goto LABEL_37;
      }
      goto LABEL_31;
    }
    if ( *(_BYTE *)(v27 + 41) )
    {
      WdLogSingleEntry1(3LL, v27);
      WdLogGlobalForLineNumber = 22346;
      v12 = -1071775482;
      goto LABEL_37;
    }
    v30 = (int *)((char *)a6 + 136);
    v31 = a5 + _InterlockedExchangeAdd((volatile signed __int32 *)v26 + 26, a5);
    if ( a6 != (struct VIDMM_PRIMARIES_REFERENCES *)-136LL )
    {
      v32 = *v30;
      if ( a5 < 0 )
        v33 = v32 - 1;
      else
        v33 = v32 + 1;
      *v30 = v33;
    }
    v34 = &v26[8 * (unsigned __int64)*((unsigned int *)v26 + 156)];
    *((_DWORD *)v26 + 156) = ((unsigned __int8)*((_DWORD *)v26 + 156) + 1) & 7;
    *((_DWORD *)v34 + 42) = v31;
    v34[14] = 0LL;
    *((_WORD *)v34 + 86) = RtlCaptureStackBackTrace(1u, 6u, (PVOID *)v34 + 15, 0LL);
    *((_QWORD *)a6 + *(unsigned int *)a6 + 1) = v40;
    if ( *(_DWORD *)a6 >= 0x10u )
      _InterlockedIncrement((volatile signed __int32 *)this + 1796);
    ++*(_DWORD *)a6;
LABEL_31:
    v7 = a4;
  }
  _InterlockedDecrement((volatile signed __int32 *)v13 + 4);
  ExReleasePushLockSharedEx(v13, 0LL);
  KeLeaveCriticalRegion();
  return v12;
}

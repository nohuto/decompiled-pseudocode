/*
 * XREFs of ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x140099DDC
 * Callers:
 *     EditionUpdateInputTransformFromHitTest @ 0x1400981B0 (EditionUpdateInputTransformFromHitTest.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x140099894 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x14008C1D8 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x14008D9DC (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?InitInputTransformList@@YAPEAUtagINPUTTRANSFORMLIST@@PEAUtagWND@@@Z @ 0x14009A48C (-InitInputTransformList@@YAPEAUtagINPUTTRANSFORMLIST@@PEAUtagWND@@@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall InputTransform::StoreTransform(
        InputTransform *this,
        struct tagWND *a2,
        const struct tagINPUT_TRANSFORM *a3,
        unsigned __int64 *a4)
{
  __int64 v4; // rax
  __int128 v6; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  _DWORD *v13; // rsi
  const struct tagWND *v14; // rcx
  struct tagWND *v15; // rax
  __int64 TopLevelWindow; // rax
  __int64 v17; // rdi
  float *v18; // rcx
  float *v19; // rax
  float v20; // xmm2_4
  __int128 v21; // xmm1
  __int128 Source1; // [rsp+30h] [rbp-50h] BYREF
  __int128 v23; // [rsp+40h] [rbp-40h]
  __int128 v24; // [rsp+50h] [rbp-30h]
  __int128 v25; // [rsp+60h] [rbp-20h]

  v4 = *((_QWORD *)this + 5);
  v6 = *((_OWORD *)a2 + 1);
  Source1 = *(_OWORD *)a2;
  v8 = *((_OWORD *)a2 + 2);
  v23 = v6;
  v9 = *((_OWORD *)a2 + 3);
  v24 = v8;
  v25 = v9;
  if ( (*(_DWORD *)(v4 + 288) & 0xF) != 2 )
  {
    v15 = (unsigned int)IsIndependentInputWindow(this) ? GetCompositionInputWindowUIOwner(v14) : this;
    TopLevelWindow = GetTopLevelWindow((__int64)v15);
    v17 = TopLevelWindow;
    if ( TopLevelWindow )
    {
      v18 = *(float **)(TopLevelWindow + 216);
      if ( v18 )
      {
        if ( *v18 != v18[5] )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 343LL);
        if ( *((float *)&Source1 + 2) != 0.0
          || *((float *)&Source1 + 3) != 0.0
          || *((float *)&v23 + 2) != 0.0
          || *((float *)&v23 + 3) != 0.0
          || *(float *)&v24 != 0.0
          || *((float *)&v24 + 1) != 0.0
          || *((float *)&v24 + 2) != 1.0
          || *((float *)&v24 + 3) != 0.0
          || *((float *)&v25 + 2) != 0.0
          || *((float *)&v25 + 3) != 1.0 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 355LL);
        }
        *(float *)&Source1 = *(float *)&Source1 / **(float **)(v17 + 216);
        *((float *)&Source1 + 1) = *((float *)&Source1 + 1) / **(float **)(v17 + 216);
        *(float *)&v23 = *(float *)&v23 / **(float **)(v17 + 216);
        *((float *)&v23 + 1) = *((float *)&v23 + 1) / **(float **)(v17 + 216);
        v19 = *(float **)(v17 + 216);
        v20 = *((float *)&v25 + 1) - v19[13];
        *(float *)&v25 = (float)(*(float *)&v25 - v19[12]) / *v19;
        *((float *)&v25 + 1) = v20 / **(float **)(v17 + 216);
      }
    }
  }
  result = (__int64)InitInputTransformList(this);
  v11 = result;
  if ( result )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    v12 = *(_QWORD *)(v11 + 8);
    if ( v12 == v11 + 8 )
    {
      v13 = (_DWORD *)(v11 + 88);
    }
    else
    {
      if ( a3 && *(_QWORD *)(v12 + 16) == *(_QWORD *)a3 )
      {
        W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)v11, 0);
        return 1LL;
      }
      v13 = (_DWORD *)(v11 + 88);
      if ( (*(_DWORD *)(v11 + 88) & 1) == 0 && RtlCompareMemory(&Source1, (const void *)(v12 + 24), 0x40uLL) == 64 )
      {
LABEL_8:
        ExReleasePushLockExclusiveEx(v11, 0LL);
        KeLeaveCriticalRegion();
        return 1LL;
      }
    }
    *(_OWORD *)(v11 + 24) = Source1;
    *(_OWORD *)(v11 + 40) = v23;
    *(_OWORD *)(v11 + 56) = v24;
    v21 = v25;
    *v13 |= 1u;
    *(_OWORD *)(v11 + 72) = v21;
    goto LABEL_8;
  }
  return result;
}

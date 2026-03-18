/*
 * XREFs of VidSchSetMonitorPowerState @ 0x140042540
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAX_K0@Z @ 0x14001C390 (-ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAX_K0@Z.c)
 *     RtlULongLongMult @ 0x1400359C0 (RtlULongLongMult.c)
 *     ?MonitorPowerStateChange@VSYNC_TIME_STATS@@QEAAXW4VSYNC_TIME_STATS_TYPE@@@Z @ 0x1400429BC (-MonitorPowerStateChange@VSYNC_TIME_STATS@@QEAAXW4VSYNC_TIME_STATS_TYPE@@@Z.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x14004BA9C (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     VidSchiControlVSync @ 0x1400FDFF0 (VidSchiControlVSync.c)
 */

__int64 __fastcall VidSchSetMonitorPowerState(__int64 a1, unsigned int a2, char a3, unsigned int *a4, _DWORD *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rbp
  struct _ERESOURCE *v10; // rsi
  __int64 v11; // rdx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rsi
  void (*v19)(_QWORD, __int64, __int64, const wchar_t *, ...); // rax
  unsigned __int64 v20; // rcx
  unsigned int v21; // r12d
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rdx
  _DWORD *v24; // rcx
  __int64 v25; // rdi
  bool v26; // zf
  ULONGLONG v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r9
  ULONGLONG v30; // rdx
  int v31; // ecx
  int v32; // r8d
  _QWORD v33[4]; // [rsp+50h] [rbp-58h] BYREF
  __int16 v34; // [rsp+70h] [rbp-38h]
  ULONGLONG pullResult; // [rsp+B0h] [rbp+8h] BYREF

  v5 = 0;
  v6 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    v19 = (void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[88];
    WdLogGlobalForLineNumber = 9558;
    v19(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"NULL pointer in pVidSchGlobal, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( a2 >= *(_DWORD *)(a1 + 48) )
  {
    WdLogSingleEntry2(3LL, a2, -1073741811LL);
    WdLogGlobalForLineNumber = 9572;
    return 3221225485LL;
  }
  _mm_lfence();
  v10 = (struct _ERESOURCE *)(a1 + 1360);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1360), 1u);
  LOBYTE(v11) = *(_BYTE *)(a1 + 2500);
  v12 = 1 << v6;
  v13 = *(_DWORD *)(a1 + 2496);
  if ( a3 )
  {
    *(_DWORD *)(a1 + 2496) = v12 | v13;
    if ( (_BYTE)v11 )
      v26 = *(_DWORD *)(a1 + 4 * v6 + 2112) == 0;
    else
      v26 = *(_DWORD *)(a1 + 2112) == 0;
    if ( v26 )
      goto LABEL_9;
    v15 = (unsigned int)v6;
    v16 = 65538LL;
    if ( !(_BYTE)v11 )
      v15 = 4294967293LL;
    LOBYTE(v11) = 1;
    goto LABEL_8;
  }
  v14 = v13 & ~v12;
  *(_DWORD *)(a1 + 2496) = v14;
  if ( (_BYTE)v11 )
  {
    v15 = (unsigned int)v6;
    goto LABEL_7;
  }
  if ( !v14 )
  {
    v15 = 4294967293LL;
LABEL_7:
    v11 = 0LL;
    v16 = 2LL;
LABEL_8:
    VidSchiControlVSync(a1, v11, v16, v15);
  }
LABEL_9:
  ExReleaseResourceLite(v10);
  v34 = 0;
  v33[0] = a1 + 2016;
  AcquireSpinLock::Acquire((Acquire *)v33);
  v17 = *(_QWORD *)(a1 + 8 * v6 + 3448);
  if ( *(_BYTE *)(a1 + 67) )
    VSYNC_TIME_STATS::MonitorPowerStateChange(v17 + 78656, 2 - (unsigned int)(a3 != 0));
  if ( a3 )
  {
    v20 = a4[3];
    if ( (_DWORD)v20 )
    {
      v21 = 0x3E8 / (unsigned int)v20;
      v22 = 0x989680 / v20;
      if ( *(_DWORD *)(v17 + 83104) != 0x3E8 / (unsigned int)v20 && *(_BYTE *)(a1 + 7074) )
      {
        v27 = *(_QWORD *)(a1 + 2904);
        pullResult = 0LL;
        if ( RtlULongLongMult(0x989680 / v20, v27, &pullResult) >= 0 )
          v30 = pullResult / 0x989680;
        else
          v30 = v29 * (v22 / 0x989680) + v29 * (v28 - 10000000 * (v22 / 0x989680)) / 0x989680;
        VIDSCH_VSYNC_SMOOTHER::ResetSmoother(*(VIDSCH_VSYNC_SMOOTHER **)(v17 + 44408), *(_QWORD *)(v17 + 83112), v30);
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, v6);
      WdLogGlobalForLineNumber = 9651;
      v22 = 160000LL;
      v21 = 0;
    }
    *(_DWORD *)(v17 + 83104) = v21;
    if ( is_mul_ok(v22, *(_QWORD *)(a1 + 2904)) )
      v23 = v22 * *(_QWORD *)(a1 + 2904) / 0x989680;
    else
      v23 = *(_QWORD *)(a1 + 2904) * (v22 / 0x989680) + *(_QWORD *)(a1 + 2904) * (v22 % 0x989680) / 0x989680;
    v24 = a5;
    v25 = a1 + 16;
    *(_QWORD *)(v17 + 83112) = v23;
    if ( v24 && *(int *)(*(_QWORD *)v25 + 3044LL) >= 2600 )
      *(_DWORD *)(v17 + 83108) ^= ((unsigned __int8)*(_DWORD *)(v17 + 83108) ^ (unsigned __int8)(*v24 >> 11)) & 1;
    else
      *(_DWORD *)(v17 + 83108) &= ~1u;
    if ( *(int *)(*(_QWORD *)v25 + 3044LL) >= 2900 )
    {
      if ( a4[15] * a4[4] != a4[14] * a4[5] )
        v5 = 10000000 * (unsigned __int64)a4[5] / a4[4];
      if ( v5 != *(_DWORD *)(v17 + 83096) )
      {
        WdLogSingleEntry4(4LL, v5, v6, *(unsigned int *)(v17 + 83096), *(unsigned int *)(v17 + 3192));
        WdLogGlobalForLineNumber = 9716;
        if ( (byte_14008A204 & 0x20) != 0 )
          McTemplateK0qqqq_EtwWriteTransfer(
            v31,
            (unsigned int)&EventSetBaseDesktopDuration,
            v32,
            v6,
            *(_DWORD *)(v17 + 83096),
            *(_DWORD *)(v17 + 3192),
            v5);
        *(_DWORD *)(v17 + 83096) = v5;
      }
      *(_DWORD *)(v17 + 83092) = 1;
    }
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v33);
  return 0LL;
}

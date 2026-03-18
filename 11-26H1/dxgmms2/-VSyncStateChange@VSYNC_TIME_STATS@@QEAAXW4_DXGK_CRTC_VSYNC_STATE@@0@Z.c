/*
 * XREFs of ?VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z @ 0x14001D7BC
 * Callers:
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14001CCCC (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 * Callees:
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x14001970C (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     RtlULongLongMult @ 0x1400359C0 (RtlULongLongMult.c)
 */

void __fastcall VSYNC_TIME_STATS::VSyncStateChange(VSYNC_TIME_STATS *this, enum _DXGK_CRTC_VSYNC_STATE a2, int a3)
{
  LARGE_INTEGER v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rtt
  ULONGLONG v11; // r8
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rtt
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rtt
  ULONGLONG pullResult[2]; // [rsp+40h] [rbp-10h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp+28h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( !a3 )
  {
    if ( (unsigned int)(a2 - 1) > 1 )
      return;
    pullResult[0] = 0LL;
    if ( RtlULongLongMult(v6.QuadPart - *(_QWORD *)this, 0x3E8uLL, pullResult) >= 0 )
    {
      v11 = pullResult[0] / v12;
    }
    else
    {
      v13 = v7;
      v7 /= v12;
      v11 = 1000 * v7 + 1000 * (v13 % v12) / v12;
    }
    if ( a2 != DXGK_VSYNC_DISABLE_KEEP_PHASE )
    {
      *((_QWORD *)this + 4) += v11;
      goto LABEL_21;
    }
LABEL_20:
    *((_QWORD *)this + 3) += v11;
LABEL_21:
    *(_QWORD *)this = v8;
    if ( (byte_14008A204 & 0x20) != 0 )
      McTemplateK0qxxx_EtwWriteTransfer(
        v7,
        &EventVSyncTimeStatistics,
        v11,
        a3,
        *((_QWORD *)this + 2),
        *((_QWORD *)this + 3),
        *((_QWORD *)this + 4));
    return;
  }
  if ( a3 == 1 )
  {
    if ( a2 )
      return;
    pullResult[0] = 0LL;
    if ( RtlULongLongMult(v6.QuadPart - *(_QWORD *)this, 0x3E8uLL, pullResult) >= 0 )
    {
      v11 = pullResult[0] / v14;
    }
    else
    {
      v15 = v7;
      v7 /= v14;
      v11 = 1000 * v7 + 1000 * (v15 % v14) / v14;
    }
    *((_QWORD *)this + 2) += v11;
    goto LABEL_21;
  }
  if ( a2 == DXGK_VSYNC_DISABLE_KEEP_PHASE && a3 == 2 )
  {
    pullResult[0] = 0LL;
    if ( RtlULongLongMult(v6.QuadPart - *(_QWORD *)this, 0x3E8uLL, pullResult) >= 0 )
    {
      v11 = pullResult[0] / v9;
    }
    else
    {
      v10 = v7;
      v7 /= v9;
      v11 = 1000 * v7 + 1000 * (v10 % v9) / v9;
    }
    goto LABEL_20;
  }
}

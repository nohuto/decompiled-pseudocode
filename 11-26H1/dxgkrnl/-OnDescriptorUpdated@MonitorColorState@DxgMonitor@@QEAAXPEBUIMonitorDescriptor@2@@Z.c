/*
 * XREFs of ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x14027C314
 * Callers:
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1403F3AF8 (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 * Callees:
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x140056424 (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DolbyVisionSourceLedHDRFlags__private_IsEnabledDeviceUsageNoInline @ 0x140098C6C (Feature_DolbyVisionSourceLedHDRFlags__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DolbyVisionVSVDBFallbackWithZeroMinLuminance__private_IsEnabledDeviceUsageNoInline @ 0x140098CC4 (Feature_DolbyVisionVSVDBFallbackWithZeroMinLuminance__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?_RetrieveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x14027DD54 (-_RetrieveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x140362598 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 */

void __fastcall DxgMonitor::MonitorColorState::OnDescriptorUpdated(
        DxgMonitor::MonitorColorState *this,
        const struct DxgMonitor::IMonitorDescriptor *a2)
{
  int v4; // eax
  __int64 v5; // rbx
  unsigned int v6; // eax
  int v7; // eax
  __int64 v8; // rbx
  unsigned int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // r15d
  bool v17; // bl
  __m128i v18; // xmm6
  int v19; // esi
  int v20; // r14d
  bool v21; // zf
  __int64 (*v22)(void); // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  bool v27; // al
  __int64 v28; // rax
  __m128i v29; // xmm8
  int v30; // ebx
  char v31; // dl
  __m128i v32; // xmm6
  __m128i v33; // xmm7
  __int64 v34; // rax
  __int64 v35; // rax
  double v36; // xmm0_8
  double v37; // xmm1_8
  int v38; // eax
  double v39; // xmm0_8
  int v40; // eax
  double v41; // xmm0_8
  int v42; // eax
  double v43; // xmm1_8
  int v44; // eax
  double v45; // xmm0_8
  int v46; // eax
  double v47; // xmm1_8
  int v48; // eax
  double v49; // xmm0_8
  __m128i v50; // [rsp+38h] [rbp-D0h]
  _OWORD v51[3]; // [rsp+48h] [rbp-C0h] BYREF
  double v52[10]; // [rsp+78h] [rbp-90h] BYREF
  double v53[14]; // [rsp+C8h] [rbp-40h]

  DxgMonitor::MonitorColorState::_RetrieveHDRParamDriverOverrides(this);
  memset(v51, 0, 36);
  *((_OWORD *)this + 1) = v51[0];
  *(_OWORD *)((char *)v51 + 4) = 0LL;
  LOBYTE(v51[0]) = 0;
  *((_OWORD *)this + 2) = 0u;
  *((_DWORD *)this + 12) = 0;
  *(_WORD *)((char *)v51 + 1) = 0;
  BYTE3(v51[0]) = 0;
  *((_OWORD *)this + 8) = v51[0];
  *((_OWORD *)this + 9) = v51[1];
  *((_DWORD *)this + 40) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
  *(_OWORD *)((char *)this + 328) = 0u;
  if ( !a2 )
    goto LABEL_103;
  *((_BYTE *)this + 48) = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *))(*(_QWORD *)a2 + 176LL))(a2);
  if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() && *((_BYTE *)this + 48) )
    *((_DWORD *)this + 115) |= 1u;
  v4 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, char *, char *))(*(_QWORD *)a2 + 128LL))(
         a2,
         (char *)this + 40,
         (char *)this + 20);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *((_BYTE *)this + 16) = 1;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    WdLogSingleEntry2(3LL, v5, v6);
    WdLogGlobalForLineNumber = 264;
  }
  v7 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, char *))(*(_QWORD *)a2 + 120LL))(
         a2,
         (char *)this + 132);
  v8 = v7;
  if ( v7 >= 0 )
  {
    *((_BYTE *)this + 128) = 1;
    *((_DWORD *)this + 33) <<= 10;
    *((_DWORD *)this + 34) <<= 10;
    *((_DWORD *)this + 35) <<= 10;
    *((_DWORD *)this + 36) <<= 10;
    *((_DWORD *)this + 37) <<= 10;
    *((_DWORD *)this + 38) <<= 10;
    *((_DWORD *)this + 39) <<= 10;
    *((_DWORD *)this + 40) <<= 10;
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    WdLogSingleEntry2(3LL, v8, v9);
    WdLogGlobalForLineNumber = 275;
  }
  v10 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, char *, char *, char *))(*(_QWORD *)a2 + 160LL))(
          a2,
          (char *)this + 332,
          (char *)this + 336,
          (char *)this + 340);
  v13 = v10;
  if ( v10 >= 0 )
  {
    *((_BYTE *)this + 328) = 1;
  }
  else
  {
    v14 = WdLogNewEntry5_WdTrace(v12, v11);
    *(_QWORD *)(v14 + 24) = v13;
    *(_QWORD *)(v14 + 32) = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    WdLogGlobalForLineNumber = 301;
  }
  memset(v52, 0, sizeof(v52));
  v15 = *(_QWORD *)a2;
  *(_OWORD *)v53 = 0LL;
  if ( (*(int (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, double *))(v15 + 168))(a2, v52) < 0 )
    goto LABEL_103;
  if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
  {
    v16 = *((_DWORD *)this + 40);
    v17 = 1;
    v18 = *((__m128i *)this + 9);
    LODWORD(v51[2]) = v16;
    v51[0] = *((_OWORD *)this + 8);
    v51[1] = v18;
    v50 = *(__m128i *)((char *)this + 328);
    if ( v52[3] == 0.0 || v52[4] == 0.0 || v52[5] == 0.0 || v52[6] == 0.0 || v52[7] == 0.0 || v52[8] == 0.0 )
    {
      if ( !*((_BYTE *)this + 128)
        || !DWORD1(v51[0])
        || !DWORD2(v51[0])
        || !HIDWORD(v51[0])
        || !_mm_cvtsi128_si32(v18)
        || !_mm_cvtsi128_si32(_mm_srli_si128(v18, 4))
        || !_mm_cvtsi128_si32(_mm_srli_si128(v18, 8)) )
      {
        v17 = 0;
      }
    }
    else
    {
      DWORD1(v51[0]) = (int)(v52[3] * 1048576.0 + 0.5);
      DWORD2(v51[0]) = (int)(v52[4] * 1048576.0 + 0.5);
      HIDWORD(v51[0]) = (int)(v52[5] * 1048576.0 + 0.5);
      LODWORD(v51[1]) = (int)(v52[6] * 1048576.0 + 0.5);
      DWORD1(v51[1]) = (int)(v52[7] * 1048576.0 + 0.5);
      DWORD2(v51[1]) = (int)(v52[8] * 1048576.0 + 0.5);
      v18 = (__m128i)v51[1];
    }
    if ( v53[0] == 0.0 || v53[1] == 0.0 )
    {
      if ( _mm_cvtsi128_si32(_mm_srli_si128(v18, 12)) || v16 )
        goto LABEL_38;
      HIDWORD(v51[1]) = 327680;
      v16 = 345088;
    }
    else
    {
      v16 = (int)(v53[1] * 1048576.0 + 0.5);
      HIDWORD(v51[1]) = (int)(v53[0] * 1048576.0 + 0.5);
    }
    v18 = (__m128i)v51[1];
    LODWORD(v51[2]) = v16;
LABEL_38:
    if ( v52[2] == 0.0 )
    {
      v19 = v50.m128i_i32[3];
      if ( (unsigned int)Feature_DolbyVisionVSVDBFallbackWithZeroMinLuminance__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( !v17 || !*((_BYTE *)this + 328) || !v50.m128i_i32[2] || (v17 = 1, !v50.m128i_i32[3]) )
          v17 = 0;
        v20 = v50.m128i_i32[1];
      }
      else
      {
        v20 = v50.m128i_i32[1];
        v17 = v17 && *((_BYTE *)this + 328) && v50.m128i_i32[2] && v50.m128i_i32[1] && v50.m128i_i32[3];
      }
    }
    else
    {
      v19 = (int)(v52[2] * 10000.0);
      v50.m128i_i32[3] = v19;
      v20 = (int)(v52[1] * 10000.0);
      *(__int64 *)((char *)v50.m128i_i64 + 4) = __PAIR64__(v19, v20);
    }
    v21 = (unsigned int)Feature_DolbyVisionSourceLedHDRFlags__private_IsEnabledDeviceUsageNoInline() == 0;
    v22 = *(__int64 (**)(void))(**(_QWORD **)this + 32LL);
    if ( v21 )
    {
      v24 = v22();
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v24 + 64LL))(v24) && v17 )
      {
        *((_BYTE *)this + 413) = 1;
        if ( !(unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
          goto LABEL_103;
        goto LABEL_59;
      }
    }
    else
    {
      v23 = v22();
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v23 + 64LL))(v23) && LOBYTE(v52[9]) && v17 )
      {
        *((_BYTE *)this + 413) = 1;
LABEL_59:
        *((_DWORD *)this + 115) |= 2u;
        LOBYTE(v51[0]) = 1;
        v50.m128i_i8[0] = 1;
        *(_OWORD *)((char *)this + 276) = v51[0];
        *(__m128i *)((char *)this + 292) = v18;
        *((_DWORD *)this + 77) = v16;
        *(__m128i *)((char *)this + 396) = v50;
        goto LABEL_103;
      }
    }
    v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v25 + 64LL))(v25)
      || (v26 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this),
          (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v26 + 72LL))(v26)) )
    {
      if ( v17 )
      {
        v27 = LOBYTE(v52[0]) != 0;
        *((_DWORD *)this + 112) = v20;
        *((_BYTE *)this + 412) = v27;
        *((_OWORD *)this + 26) = *(_OWORD *)((char *)v51 + 4);
        *((_DWORD *)this + 113) = v19;
        *((_OWORD *)this + 27) = *(_OWORD *)((char *)&v51[1] + 4);
      }
    }
    goto LABEL_103;
  }
  v28 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v28 + 64LL))(v28) && LOBYTE(v52[9]) )
  {
    v29 = *((__m128i *)this + 8);
    v30 = *((_DWORD *)this + 40);
    v31 = 1;
    v32 = *((__m128i *)this + 9);
    v33 = *(__m128i *)((char *)this + 328);
    v51[0] = v29;
    v51[1] = v32;
    v50 = v33;
    if ( v52[3] == 0.0 || v52[4] == 0.0 || v52[5] == 0.0 || v52[6] == 0.0 || v52[7] == 0.0 || v52[8] == 0.0 )
    {
      if ( !*((_BYTE *)this + 128)
        || !_mm_cvtsi128_si32(_mm_srli_si128(v29, 4))
        || !_mm_cvtsi128_si32(_mm_srli_si128(v29, 8))
        || !_mm_cvtsi128_si32(_mm_srli_si128(v29, 12))
        || !_mm_cvtsi128_si32(v32)
        || !_mm_cvtsi128_si32(_mm_srli_si128(v32, 4))
        || !_mm_cvtsi128_si32(_mm_srli_si128(v32, 8)) )
      {
        v31 = 0;
      }
    }
    else
    {
      DWORD1(v51[0]) = (int)(v52[3] * 1048576.0 + 0.5);
      DWORD2(v51[0]) = (int)(v52[4] * 1048576.0 + 0.5);
      HIDWORD(v51[0]) = (int)(v52[5] * 1048576.0 + 0.5);
      v29 = (__m128i)v51[0];
      LODWORD(v51[1]) = (int)(v52[6] * 1048576.0 + 0.5);
      DWORD1(v51[1]) = (int)(v52[7] * 1048576.0 + 0.5);
      DWORD2(v51[1]) = (int)(v52[8] * 1048576.0 + 0.5);
      v32 = (__m128i)v51[1];
    }
    if ( v53[0] != 0.0 && v53[1] != 0.0 )
    {
      v30 = (int)(v53[1] * 1048576.0 + 0.5);
      HIDWORD(v51[1]) = (int)(v53[0] * 1048576.0 + 0.5);
      v32 = (__m128i)v51[1];
    }
    if ( v52[2] == 0.0 )
    {
      if ( !v31
        || !*((_BYTE *)this + 328)
        || !_mm_cvtsi128_si32(_mm_srli_si128(v33, 8))
        || !_mm_cvtsi128_si32(_mm_srli_si128(v33, 4))
        || !_mm_cvtsi128_si32(_mm_srli_si128(v33, 12)) )
      {
        goto LABEL_103;
      }
    }
    else
    {
      v50.m128i_i32[2] = (int)(v52[2] * 10000.0);
      v50.m128i_i32[3] = v50.m128i_i32[2];
      v50.m128i_i32[1] = (int)(v52[1] * 10000.0);
      if ( !v31 )
        goto LABEL_103;
      v33 = v50;
    }
    *((_BYTE *)this + 413) = 1;
    if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
    {
      *((_DWORD *)this + 115) |= 2u;
      LOBYTE(v51[0]) = 1;
      v50.m128i_i8[0] = 1;
      *(_OWORD *)((char *)this + 276) = v51[0];
      *(__m128i *)((char *)this + 292) = v32;
      *((_DWORD *)this + 77) = v30;
      *(__m128i *)((char *)this + 396) = v50;
    }
    else
    {
      *((_DWORD *)this + 122) = 964069926;
      *((_DWORD *)this + 123) = -1686232824;
      *((_DWORD *)this + 124) = 138811898;
      *((_DWORD *)this + 125) = 1076903406;
      *((__m128i *)this + 8) = v29;
      *((_BYTE *)this + 516) = 1;
      *((__m128i *)this + 9) = v32;
      *((_DWORD *)this + 40) = v30;
      *((_QWORD *)this + 63) = 1000LL;
      *((_DWORD *)this + 128) = 61473790;
      *(__m128i *)((char *)this + 328) = v33;
    }
    goto LABEL_103;
  }
  v34 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v34 + 64LL))(v34)
    || (v35 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this),
        (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v35 + 72LL))(v35)) )
  {
    v36 = v52[1] * 10000.0;
    v37 = v52[3] * 1048576.0;
    *((_BYTE *)this + 412) = LOBYTE(v52[0]) != 0;
    v38 = (int)v36;
    *((_DWORD *)this + 110) = 327680;
    *((_DWORD *)this + 111) = 345088;
    v39 = v52[2] * 10000.0;
    *((_DWORD *)this + 112) = v38;
    v40 = (int)v39;
    v41 = v52[4] * 1048576.0;
    *((_DWORD *)this + 113) = v40;
    v42 = (int)(v37 + 0.5);
    v43 = v52[5];
    *((_DWORD *)this + 104) = v42;
    v44 = (int)(v41 + 0.5);
    v45 = v52[6] * 1048576.0;
    *((_DWORD *)this + 105) = v44;
    v46 = (int)(v43 * 1048576.0 + 0.5);
    v47 = v52[7];
    *((_DWORD *)this + 106) = v46;
    v48 = (int)(v45 + 0.5);
    v49 = v52[8];
    *((_DWORD *)this + 107) = v48;
    *((_DWORD *)this + 108) = (int)(v47 * 1048576.0 + 0.5);
    *((_DWORD *)this + 109) = (int)(v49 * 1048576.0 + 0.5);
  }
LABEL_103:
  DxgMonitor::MonitorColorState::_ReevaluateColorAndLuminanceSources(this);
}

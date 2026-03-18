/*
 * XREFs of ?SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1403633A8
 * Callers:
 *     ?SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z @ 0x14027D6E0 (-SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z.c)
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x140362598 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 *     ?OnOutputColorspaceUpdated@MonitorColorState@DxgMonitor@@QEAAXXZ @ 0x14036338C (-OnOutputColorspaceUpdated@MonitorColorState@DxgMonitor@@QEAAXXZ.c)
 *     ?OnBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z @ 0x140416F3C (-OnBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x140416EE8 (-_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     ?_SetColorPrimariesToBT709@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1404309CC (-_SetColorPrimariesToBT709@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::SendAdjustedHDRParamsToDriver(__m128i *this, char a2)
{
  __int64 v3; // rax
  __m128i v5; // xmm6
  __m128i v6; // xmm7
  __int32 v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // edi
  __int64 *v13; // r9
  __int64 v14; // rax
  int v15; // edi
  DxgMonitor::MonitorColorState *v16; // rcx
  _BYTE v17[48]; // [rsp+38h] [rbp-49h] BYREF
  _OWORD v18[3]; // [rsp+78h] [rbp-9h] BYREF
  int v19; // [rsp+A8h] [rbp+27h]

  if ( a2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this->m128i_i64[0] + 32LL))(this->m128i_i64[0]);
    if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3) < 2500 )
      return 0LL;
  }
  *(_DWORD *)&v17[44] = 0;
  v5 = _mm_srli_epi32(_mm_loadu_si128(this + 15), 0xAu);
  v6 = _mm_srli_epi32(_mm_loadu_si128(this + 16), 0xAu);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)this->m128i_i64[0] + 56LL))(this->m128i_i64[0]) )
  {
    *(_QWORD *)&v17[32] = *(__int64 *)((char *)&this[23].m128i_i64[1] + 4);
    v7 = this[24].m128i_i32[1];
  }
  else
  {
    *(_QWORD *)&v17[32] = *(__int64 *)((char *)&this[22].m128i_i64[1] + 4);
    v7 = this[23].m128i_i32[1];
  }
  *(_DWORD *)&v17[40] = v7;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this->m128i_i64[0] + 112LL))(this->m128i_i64[0]);
  if ( v8 && ((v9 = v8 - 12) == 0 || (v10 = v9 - 18) != 0 && (v11 = v10 - 1) != 0 && (unsigned int)(v11 - 1) <= 1) )
    v12 = this[29].m128i_i32[3];
  else
    v12 = 1000;
  v13 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this->m128i_i64[0] + 24LL))(this->m128i_i64[0]);
  v18[0] = v5;
  v18[1] = v6;
  v18[2] = *(_OWORD *)&v17[32];
  v14 = *v13;
  v19 = 0;
  v15 = (*(__int64 (__fastcall **)(__int64 *, _OWORD *, _QWORD))(v14 + 88))(v13, v18, 80 * v12 / 0x3E8u);
  if ( v15 < 0 )
  {
    memset(v17, 0, 36);
    *(__m128i *)((char *)this + 236) = *(__m128i *)v17;
    *(__m128i *)((char *)this + 252) = *(__m128i *)&v17[16];
    *(__m128i *)((char *)&this[22] + 8) = 0u;
    this[16].m128i_i32[3] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
    DxgMonitor::MonitorColorState::_SetColorPrimariesToBT709((DxgMonitor::MonitorColorState *)this);
    DxgMonitor::MonitorColorState::_SetLuminanceValuesToSDR(v16);
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1354;
  }
  return (unsigned int)v15;
}

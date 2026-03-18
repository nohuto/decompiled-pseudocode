/*
 * XREFs of ?_RetrieveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x14027DD54
 * Callers:
 *     ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x14027C314 (-OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x140362598 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::_RetrieveHDRParamDriverOverrides(DxgMonitor::MonitorColorState *this)
{
  __int128 v2; // xmm1
  __int64 v3; // rcx
  __int64 v4; // rax
  int v5; // edi
  unsigned int v6; // edx
  unsigned __int8 v7; // cl
  char v8; // cl
  int v9; // eax
  _BYTE v11[48]; // [rsp+30h] [rbp-40h] BYREF
  int v12; // [rsp+60h] [rbp-10h]

  memset(v11, 0, 20);
  *(_OWORD *)((char *)this + 52) = *(_OWORD *)v11;
  v11[0] = 0;
  *(_OWORD *)&v11[4] = 0LL;
  *(_OWORD *)((char *)this + 68) = 0u;
  *((_DWORD *)this + 21) = 0;
  *(_OWORD *)&v11[20] = 0LL;
  *(_WORD *)&v11[1] = 0;
  v2 = *(_OWORD *)&v11[16];
  v11[3] = 0;
  *(_OWORD *)((char *)this + 164) = *(_OWORD *)v11;
  v12 = 0;
  *(_OWORD *)((char *)this + 180) = v2;
  *((_DWORD *)this + 49) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
  memset(v11, 0, 32);
  *(_OWORD *)((char *)this + 312) = 0u;
  v3 = *(_QWORD *)this;
  *(_OWORD *)&v11[32] = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  v5 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v4 + 32LL))(v4, v11);
  if ( v5 >= 0 )
  {
    v6 = *(_DWORD *)&v11[44];
    v7 = v11[44];
    *((_BYTE *)this + 52) = 1;
    *((_DWORD *)this + 14) = v7 >> 2;
    *((_DWORD *)this + 16) = (v6 >> 14) & 0x3F;
    *((_DWORD *)this + 15) = (v6 >> 8) & 0x3F;
    v8 = v12;
    *((_DWORD *)this + 17) = (v6 >> 20) & 0x3F;
    *((_BYTE *)this + 82) = v12 & 1;
    *((_BYTE *)this + 83) = (v8 & 2) != 0;
    *((_DWORD *)this + 42) = *(_DWORD *)v11 << 10;
    *((_DWORD *)this + 43) = *(_DWORD *)&v11[4] << 10;
    *((_DWORD *)this + 44) = *(_DWORD *)&v11[8] << 10;
    *((_DWORD *)this + 45) = *(_DWORD *)&v11[12] << 10;
    *((_DWORD *)this + 46) = *(_DWORD *)&v11[16] << 10;
    *((_DWORD *)this + 47) = *(_DWORD *)&v11[20] << 10;
    *((_DWORD *)this + 48) = *(_DWORD *)&v11[24] << 10;
    *((_DWORD *)this + 49) = *(_DWORD *)&v11[28] << 10;
    *((_DWORD *)this + 80) = *(_DWORD *)&v11[36];
    *((_DWORD *)this + 79) = *(_DWORD *)&v11[32];
    v9 = *(_DWORD *)&v11[40];
    *((_BYTE *)this + 84) = (v8 & 4) != 0;
    *((_DWORD *)this + 81) = v9;
    *((_DWORD *)this + 18) = v6 >> 26;
    *((_DWORD *)this + 19) = 0;
    *((_WORD *)this + 40) = 0;
    *((_BYTE *)this + 164) = 1;
    *((_BYTE *)this + 312) = 1;
    DxgMonitor::MonitorColorState::_ReevaluateColorAndLuminanceSources(this);
  }
  return (unsigned int)v5;
}

/*
 * XREFs of ??0CSwapChainRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1802AC6F0
 * Callers:
 *     ?Create@CSwapChainRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1802ACC7C (-Create@CSwapChainRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AE.c)
 * Callees:
 *     ??0?$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCDecodeBitmap@@@Z @ 0x1801B90B4 (--0-$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCDecodeBitmap@@@Z.c)
 *     ??0?$CMILCOMBaseT@VISwapChainRealization@@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x1802AC68C (--0-$CMILCOMBaseT@VISwapChainRealization@@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 */

__int64 __fastcall CSwapChainRealization::CSwapChainRealization(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // r8
  _OWORD *v10; // r9
  __int64 result; // rax

  *(_QWORD *)(a1 + 24) = 0LL;
  CMILCOMBaseT<ISwapChainRealization,IDeviceResource,CMilObjectDeleter>::CMILCOMBaseT<ISwapChainRealization,IDeviceResource,CMilObjectDeleter>();
  *(_QWORD *)(v7 + 32) = 0LL;
  *(_QWORD *)(v7 + 40) = 0LL;
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_QWORD *)v7 = &CSwapChainRealization::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(v7 + 8) = &CSwapChainRealization::`vftable'{for `IBitmapRealization'};
  *(_QWORD *)(v7 + 16) = &CSwapChainRealization::`vftable'{for `IOverlayPlaneResource'};
  *(_QWORD *)(v7 + 56) = &CSwapChainRealization::`vftable';
  *(_DWORD *)(v7 + 64) = v8;
  *(_QWORD *)(v7 + 68) = v9;
  *(_OWORD *)(v7 + 80) = *v10;
  *(_OWORD *)(v7 + 96) = v10[1];
  *(_OWORD *)(v7 + 112) = v10[2];
  *(_OWORD *)(v7 + 128) = v10[3];
  *(_OWORD *)(v7 + 144) = v10[4];
  *(_OWORD *)(v7 + 160) = v10[5];
  *(_OWORD *)(v7 + 176) = v10[6];
  *(_OWORD *)(a1 + 192) = v10[7];
  *(_OWORD *)(a1 + 208) = v10[8];
  *(_OWORD *)(a1 + 224) = *(_OWORD *)a5;
  *(_OWORD *)(a1 + 240) = *(_OWORD *)(a5 + 16);
  *(_OWORD *)(a1 + 256) = *(unsigned __int64 *)(a5 + 32);
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  wil::com_ptr_t<CDecodeBitmap,wil::err_returncode_policy>::com_ptr_t<CDecodeBitmap,wil::err_returncode_policy>(
    (_QWORD *)(a1 + 288),
    a6);
  *(_QWORD *)(a1 + 296) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_WORD *)(a1 + 312) = 0;
  *(_BYTE *)(a1 + 314) = 1;
  return result;
}

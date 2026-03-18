/*
 * XREFs of ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x1801495EC
 * Callers:
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x180149494 (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERREN.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800224D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessUpdateParams(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct MAGN_UPDATE_TEXTURES_PARAM *a3)
{
  char *v4; // rsi
  unsigned int v6; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  float v10; // xmm0_4
  unsigned __int64 v11; // xmm2_8
  _BYTE v12[20]; // [rsp+34h] [rbp-24h]

  v4 = (char *)this + 2592;
  if ( memcmp_0((char *)this + 2592, a3, 0x28uLL) )
  {
    v8 = *((_QWORD *)this + 24);
    *(_OWORD *)v4 = *(_OWORD *)a3;
    *((_OWORD *)v4 + 1) = *((_OWORD *)a3 + 1);
    *((_QWORD *)v4 + 4) = *((_QWORD *)a3 + 4);
    *((float *)this + 50) = (float)*(int *)a3;
    *((float *)this + 51) = (float)*((int *)a3 + 1);
    if ( v8 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 64LL))(v8, 85LL) )
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0xE5u, 0LL);
        return v6;
      }
      v9 = *((_QWORD *)this + 24);
      *(_OWORD *)v12 = 0LL;
      v10 = *((double *)a3 + 1);
      *(float *)&v12[4] = v10;
      *(float *)&v12[16] = *((double *)a3 + 2);
      v11 = _mm_unpacklo_ps(
              _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 3)),
              _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 4))).m128_u64[0];
      *(_OWORD *)(v9 + 160) = *(_OWORD *)&v12[4];
      *(_QWORD *)(v9 + 176) = v11;
      CResource::NotifyOnChanged(v9, 0, 0LL);
    }
  }
  return 0;
}

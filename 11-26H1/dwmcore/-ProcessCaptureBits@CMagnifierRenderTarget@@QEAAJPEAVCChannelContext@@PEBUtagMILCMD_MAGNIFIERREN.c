/*
 * XREFs of ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x180149494
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x18007AFB8 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x1801495EC (-ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_P.c)
 *     ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x180149728 (--0MagnifierCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCMagnifierRenderTarget@@PEA.c)
 *     ??2MagnifierCaptureBitsResponse@@SAPEAX_K@Z @ 0x1801497B0 (--2MagnifierCaptureBitsResponse@@SAPEAX_K@Z.c)
 *     McTemplateU0xxddffff_EventWriteTransfer @ 0x1802587B0 (McTemplateU0xxddffff_EventWriteTransfer.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessCaptureBits(
        CMagnifierRenderTarget *this,
        struct CChannelContext *a2,
        const struct tagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS *a3)
{
  int updated; // eax
  unsigned __int64 v7; // rcx
  unsigned int v8; // ebx
  MagnifierCaptureBitsResponse *v9; // rax
  MagnifierCaptureBitsResponse *v11; // rax
  volatile signed __int32 *v12; // rsi
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  struct WICRect v16; // [rsp+50h] [rbp-18h] BYREF

  *(_QWORD *)&v16.X = 0LL;
  v16.Width = *((_DWORD *)a3 + 2);
  v16.Height = *((_DWORD *)a3 + 3);
  *((_BYTE *)this + 2640) = 1;
  updated = CMagnifierRenderTarget::ProcessUpdateParams(
              this,
              a2,
              (const struct tagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS *)((char *)a3 + 32));
  v8 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x74u, 0LL);
  }
  else
  {
    *((_DWORD *)this + 46) = ((*((_DWORD *)a3 + 6) & 1) == 0) + 1;
    v9 = (MagnifierCaptureBitsResponse *)MagnifierCaptureBitsResponse::operator new(v7);
    if ( v9
      && (v11 = MagnifierCaptureBitsResponse::MagnifierCaptureBitsResponse(
                  v9,
                  *((struct CGlobalSurfaceManager **)g_pComposition + 78),
                  this,
                  a2,
                  &v16,
                  *((_QWORD *)a3 + 2)),
          (v12 = (volatile signed __int32 *)v11) != 0LL) )
    {
      *((_DWORD *)v11 + 4) = 0;
      v13 = CResponseItem::QueueResponse(v11);
      v8 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x8Fu, 0LL);
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        McTemplateU0xxddffff_EventWriteTransfer(
          v15,
          v14,
          *((_QWORD *)this + 296),
          *((_QWORD *)a3 + 2),
          *((_DWORD *)a3 + 8),
          *((_DWORD *)a3 + 9),
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 5)).m128_i8[0],
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 6)).m128_i8[0],
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 7)).m128_i8[0],
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 8)).m128_i8[0]);
      }
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v12);
    }
    else
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x86u, 0LL);
    }
  }
  return v8;
}

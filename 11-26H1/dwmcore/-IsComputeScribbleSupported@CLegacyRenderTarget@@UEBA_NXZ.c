/*
 * XREFs of ?IsComputeScribbleSupported@CLegacyRenderTarget@@UEBA_NXZ @ 0x1801D9FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x1800ED670 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CLegacyRenderTarget::IsComputeScribbleSupported(CLegacyRenderTarget *this)
{
  __int64 v3; // r8

  if ( *((_QWORD *)this + 5) )
  {
    if ( !(unsigned int)COverlayContext::GetEffectiveDirectFlipMode((__int64)this + 56) )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 5) + 256LL) + 24LL))(*((_QWORD *)this + 5) + 256LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    {
      v3 = 1LL;
      goto LABEL_8;
    }
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
  {
    v3 = 10LL;
LABEL_8:
    McTemplateU0t_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
      v3);
  }
  return 0;
}

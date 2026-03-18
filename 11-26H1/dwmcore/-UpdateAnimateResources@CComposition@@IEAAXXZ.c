/*
 * XREFs of ?UpdateAnimateResources@CComposition@@IEAAXXZ @ 0x180176910
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18002D828 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComposition::UpdateAnimateResources(CComposition *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  int i; // ebx
  __int64 (__fastcall ***v6)(_QWORD); // rcx
  char v7; // al
  unsigned int v8; // ecx
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Start,
      a3,
      1u,
      &v9);
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(Microsoft_Windows_Dwm_Compositor_Context, &UpdateAnimations_Start, a3, 1u, &v9);
  for ( i = *((_DWORD *)this + 1474); i; v3 = v8 )
  {
    v6 = *(__int64 (__fastcall ****)(_QWORD))(*((_QWORD *)this + 734) + 8LL * (unsigned int)--i);
    v7 = (**v6)(v6);
    v8 = v3 + 1;
    if ( !v7 )
      v8 = v3;
  }
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    McTemplateU0t_EventWriteTransfer(Microsoft_Windows_Dwm_Compositor_Context, &UpdateAnimations_Stop, v3);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Stop,
      a3,
      1u,
      &v9);
}

/*
 * XREFs of ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180070D10
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180069EE0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x1800700A0 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DLayer::RestoreState(CD2DLayer *this, struct CDrawingContext *a2, __int64 a3)
{
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // r8
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-28h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_EndLayer_Start,
      a3,
      1u,
      &v9);
  v4 = *((_QWORD *)a2 + 4);
  CD2DContext::FlushDrawList((CD2DContext *)(v4 + 16), (__int64)a2, a3);
  v5 = *(_DWORD *)(v4 + 360);
  v6 = 0LL;
  if ( v5 )
    v6 = *(_QWORD *)(*(_QWORD *)(v4 + 336) + 8LL * (unsigned int)(v5 - 1));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v6 + 16) + 200LL) + 328LL))(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 200LL));
  CD2DTarget::ApplyCurrentClip((CD2DTarget *)v6);
  --*(_DWORD *)(v6 + 48);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      (const EVENT_DESCRIPTOR *)" ",
      v7,
      1u,
      &v9);
  return 0LL;
}

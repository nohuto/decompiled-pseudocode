/*
 * XREFs of VidSchSetVidPnSourceAddress @ 0x140123A10
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x14004176C (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VidSchSetVidPnSourceAddress(_QWORD *a1, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  void (__fastcall *v7)(_QWORD); // rax
  void (__fastcall *v8)(_QWORD); // rax

  v4 = a1[a2->VidPnSourceId + 431];
  if ( *(_DWORD *)(v4 + 44488) != -1 )
  {
    v7 = (void (__fastcall *)(_QWORD))a1[413];
    if ( v7 )
      v7(a1[421]);
  }
  v5 = ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(*(ADAPTER_DISPLAY **)(a1[2] + 3160LL), a2);
  if ( *(_DWORD *)(v4 + 44488) != -1 )
  {
    v8 = (void (__fastcall *)(_QWORD))a1[415];
    if ( v8 )
      v8(a1[421]);
  }
  return v5;
}

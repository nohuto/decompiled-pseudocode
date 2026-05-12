/*
 * XREFs of SrbShimHookDeviceControl @ 0x14003C2B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SrbShimHookDeviceControl(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // r8
  __int64 v5; // rsi
  __int64 v6; // rax
  _DWORD *v8; // rax

  v2 = *(unsigned __int8 **)(a2 + 184);
  v5 = *v2;
  if ( *((_DWORD *)v2 + 6) == 2954240 )
  {
    v8 = *(_DWORD **)(a2 + 24);
    if ( v8 )
    {
      if ( !v8[1] && *v8 == 1 && *((_DWORD *)v2 + 2) >= 0x20u )
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_fe72def4f0e53774ce5a7c656d2dd319_Traceguids);
        }
        (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(), _QWORD))(qword_140172300 + 8))(
          a1,
          a2,
          SrbShimStorageAdapterPropertyCompletionHook,
          0LL);
      }
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))qword_140172300)(*(_QWORD *)(a1 + 8));
  return (*(__int64 (__fastcall **)(__int64, __int64))(v6 + 8 * v5 + 32))(a1, a2);
}

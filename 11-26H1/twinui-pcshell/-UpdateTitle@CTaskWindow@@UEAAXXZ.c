/*
 * XREFs of ?UpdateTitle@CTaskWindow@@UEAAXXZ @ 0x1800C0460
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0dz_EventWriteTransfer @ 0x18005B378 (McTemplateU0dz_EventWriteTransfer.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetApplicationViewTitle@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800BFA2C (-GetApplicationViewTitle@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTaskWindow::UpdateTitle(CTaskWindow *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  HWND v4; // rdi

  v4 = (HWND)(*(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)this + 32LL))(this);
  if ( v4 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 64);
    *((_QWORD *)this + 9) = -1LL;
    *((_QWORD *)this + 10) = -1LL;
    GetApplicationViewTitle(v4, (unsigned __int16 **)this + 8);
  }
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    McTemplateU0dz_EventWriteTransfer(v3, v2, (unsigned int)v4, *((const wchar_t **)this + 8));
}

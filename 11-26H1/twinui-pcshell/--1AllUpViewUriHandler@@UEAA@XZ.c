/*
 * XREFs of ??1AllUpViewUriHandler@@UEAA@XZ @ 0x180496CF4
 * Callers:
 *     ??_GAllUpViewUriHandler@@UEAAPEAXI@Z @ 0x180496D40 (--_GAllUpViewUriHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall AllUpViewUriHandler::~AllUpViewUriHandler(AllUpViewUriHandler *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}

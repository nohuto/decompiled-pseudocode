/*
 * XREFs of ??1CAudioSessionPropertyStore@@EEAA@XZ @ 0x180003E70
 * Callers:
 *     ??_ECAudioSessionPropertyStore@@EEAAPEAXI@Z @ 0x180003E30 (--_ECAudioSessionPropertyStore@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Commit@CAudioSessionPropertyStore@@UEAAJXZ @ 0x180003F70 (-Commit@CAudioSessionPropertyStore@@UEAAJXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800399D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 */

void __fastcall CAudioSessionPropertyStore::~CAudioSessionPropertyStore(CAudioSessionPropertyStore *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rax
  HKEY v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rcx

  *(_QWORD *)this = &CAudioSessionPropertyStore::`vftable';
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,IPropertyStore>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &CAudioSessionPropertyStore::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IPropertyStore>'};
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  CAudioSessionPropertyStore::Commit((CAudioSessionPropertyStore *)((char *)this + 16));
  while ( 1 )
  {
    v3 = *((_QWORD *)this + 6);
    if ( !v3 )
      break;
    PropVariantClear((PROPVARIANT *)(v3 + 24));
    v7 = (_QWORD *)*((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = v7[6];
    operator delete(v7, 0LL);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  DeleteCriticalSection(v2);
  v4 = (HKEY)*((_QWORD *)this + 7);
  if ( v4 )
    RegCloseKey(v4);
  v5 = (void *)*((_QWORD *)this + 5);
  if ( v5 )
    CoTaskMemFree(v5);
  v6 = *((_QWORD *)this + 4);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(2 * v6);
}

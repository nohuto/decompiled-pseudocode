/*
 * XREFs of ?Release@CLaunchActivatedEventArgs@@UEAAKXZ @ 0x1801A9F30
 * Callers:
 *     ?Release@CLaunchActivatedEventArgs@@W7EAAKXZ @ 0x18065AFB0 (-Release@CLaunchActivatedEventArgs@@W7EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WBA@EAAKXZ @ 0x18065AFC0 (-Release@CLaunchActivatedEventArgs@@WBA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WBAA@EAAKXZ @ 0x18065AFD0 (-Release@CLaunchActivatedEventArgs@@WBAA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WBI@EAAKXZ @ 0x18065AFF0 (-Release@CLaunchActivatedEventArgs@@WBI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WCA@EAAKXZ @ 0x18065B000 (-Release@CLaunchActivatedEventArgs@@WCA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WJI@EAAKXZ @ 0x18065B010 (-Release@CLaunchActivatedEventArgs@@WJI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WKA@EAAKXZ @ 0x18065B030 (-Release@CLaunchActivatedEventArgs@@WKA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WKI@EAAKXZ @ 0x18065B050 (-Release@CLaunchActivatedEventArgs@@WKI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WNI@EAAKXZ @ 0x18065B070 (-Release@CLaunchActivatedEventArgs@@WNI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WOI@EAAKXZ @ 0x18065B090 (-Release@CLaunchActivatedEventArgs@@WOI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WPA@EAAKXZ @ 0x18065B0B0 (-Release@CLaunchActivatedEventArgs@@WPA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WPI@EAAKXZ @ 0x18065B0D0 (-Release@CLaunchActivatedEventArgs@@WPI@EAAKXZ.c)
 * Callees:
 *     ?DecrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180069E3C (-DecrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLaunchActivatedEventArgs::Release(CLaunchActivatedEventArgs *this)
{
  signed __int64 v1; // rax
  CLaunchActivatedEventArgs *v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 34);
  v2 = this;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 34, v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_5;
  }
  v3 = Microsoft::WRL::Details::StrongReference::DecrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v1 + 16));
LABEL_5:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(CLaunchActivatedEventArgs *, __int64))(*(_QWORD *)v2 + 72LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}

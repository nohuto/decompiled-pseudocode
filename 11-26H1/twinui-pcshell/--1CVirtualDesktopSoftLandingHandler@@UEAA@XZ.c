/*
 * XREFs of ??1CVirtualDesktopSoftLandingHandler@@UEAA@XZ @ 0x1805685D0
 * Callers:
 *     ??_ECVirtualDesktopSoftLandingHandler@@UEAAPEAXI@Z @ 0x180568660 (--_ECVirtualDesktopSoftLandingHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x1800DB40C (--1SmartCookie@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CVirtualDesktopSoftLandingHandler::~CVirtualDesktopSoftLandingHandler(
        CVirtualDesktopSoftLandingHandler *this)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*((_QWORD *)this + 23);
  *v1[1] = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16>(v3, (struct std::nothrow_t *)0x18);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16>(*((void **)this + 23), (struct std::nothrow_t *)0x18);
  SmartCookie::~SmartCookie((CVirtualDesktopSoftLandingHandler *)((char *)this + 56));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 5);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 4);
  *((_DWORD *)this + 7) = -1073741823;
}

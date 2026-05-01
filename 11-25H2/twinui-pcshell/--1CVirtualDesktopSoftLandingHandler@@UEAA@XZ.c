/*
 * XREFs of ??1CVirtualDesktopSoftLandingHandler@@UEAA@XZ @ 0x1805446A8
 * Callers:
 *     ??_ECVirtualDesktopSoftLandingHandler@@UEAAPEAXI@Z @ 0x180544730 (--_ECVirtualDesktopSoftLandingHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x1800E1A08 (--1SmartCookie@@QEAA@XZ.c)
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
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x18);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*((void **)this + 23), (const struct std::nothrow_t *)0x18);
  SmartCookie::~SmartCookie((CVirtualDesktopSoftLandingHandler *)((char *)this + 56));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 5);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 4);
  *((_DWORD *)this + 7) = -1073741823;
}

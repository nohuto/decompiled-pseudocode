/*
 * XREFs of ?GetPosition@GamingPosturePositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1804FD260
 * Callers:
 *     ?GetPosition@GamingPosturePositioner@@W7EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1804FD330 (-GetPosition@GamingPosturePositioner@@W7EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Z @ 0x180141C28 (--$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationV_ea_180141C28.c)
 *     ?copy_to@?$com_ptr_t@UIApplicationViewArrangePosition@@Uerr_exception_policy@wil@@@wil@@QEBAXAEBU_GUID@@PEAPEAX@Z @ 0x1804F23FC (-copy_to@-$com_ptr_t@UIApplicationViewArrangePosition@@Uerr_exception_policy@wil@@@wil@@QEBAXAEB.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GamingPosturePositioner::GetPosition(
        GamingPosturePositioner *this,
        HWND a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 result; // rax
  int v7; // eax
  unsigned int v8; // edi
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD); // [rsp+30h] [rbp+8h] BYREF
  HWND v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  *a4 = 0LL;
  if ( *((_BYTE *)this + 648) )
  {
    v11 = 0LL;
    v7 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewArrangePositionSnapshot,IApplicationViewArrangePosition,HWND__ * &>(
           &v11,
           &v12);
    v8 = v7;
    if ( v7 >= 0 )
    {
      try
      {
        wil::com_ptr_t<IApplicationViewArrangePosition,wil::err_exception_policy>::copy_to(&v11, (__int64)a3, a4);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
        result = 0LL;
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x2D1,
                               (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
                               v9);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2CD,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
        (const char *)(unsigned int)v7);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
      return v8;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CB,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  return result;
}

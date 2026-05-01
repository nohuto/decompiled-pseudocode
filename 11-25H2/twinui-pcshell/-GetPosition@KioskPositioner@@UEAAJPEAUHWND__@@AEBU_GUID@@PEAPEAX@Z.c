/*
 * XREFs of ?GetPosition@KioskPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1804DE0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Z @ 0x18014C79C (--$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationV_ea_18014C79C.c)
 *     ?copy_to@?$com_ptr_t@UIApplicationViewArrangePosition@@Uerr_exception_policy@wil@@@wil@@QEBAXAEBU_GUID@@PEAPEAX@Z @ 0x1804DFCBC (-copy_to@-$com_ptr_t@UIApplicationViewArrangePosition@@Uerr_exception_policy@wil@@@wil@@QEBAXAEB.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KioskPositioner::GetPosition(KioskPositioner *this, HWND a2, const struct _GUID *a3, void **a4)
{
  __int64 result; // rax
  int v5; // eax
  unsigned int v6; // edi
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  HWND v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  *a4 = 0LL;
  if ( *((_BYTE *)this + 528) )
  {
    v9 = 0LL;
    v5 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewArrangePositionSnapshot,IApplicationViewArrangePosition,HWND__ * &>(
           &v9,
           &v10);
    v6 = v5;
    if ( v5 >= 0 )
    {
      try
      {
        wil::com_ptr_t<IApplicationViewArrangePosition,wil::err_exception_policy>::copy_to();
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
        result = 0LL;
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x256,
                               (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                               v7);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x252,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v5);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
      return v6;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x250,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  return result;
}

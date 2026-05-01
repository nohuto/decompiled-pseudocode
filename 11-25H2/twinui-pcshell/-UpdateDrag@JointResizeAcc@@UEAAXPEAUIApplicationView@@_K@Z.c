/*
 * XREFs of ?UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@_K@Z @ 0x180519070
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1800550A4 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1801E9770 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ?RaisePropertyChangeNotification@JointResizeAcc@@AEAAXH@Z @ 0x180518C80 (-RaisePropertyChangeNotification@JointResizeAcc@@AEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall JointResizeAcc::UpdateDrag(
        IRawElementProviderSimple *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        __int64 a3)
{
  unsigned __int16 **v6; // r8
  int ViewTitle; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rdx
  const WCHAR *v10; // r9
  unsigned __int16 *v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v11);
  v12 = -1LL;
  v13 = -1LL;
  ViewTitle = ApplicationViewHelpers::GetViewTitle(a2, &v11, v6);
  v8 = retaddr;
  if ( ViewTitle >= 0 )
  {
    v10 = &LocaleName;
    if ( v11 )
      v10 = v11;
    ViewTitle = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
                  (__int64)&this[10],
                  (__int64)&_ImageBase,
                  2012LL,
                  v10,
                  a3);
    v8 = retaddr;
    if ( ViewTitle >= 0 )
    {
      JointResizeAcc::RaisePropertyChangeNotification(this - 2, 30139);
      JointResizeAcc::RaisePropertyChangeNotification(this - 2, 30140);
      goto LABEL_9;
    }
    v9 = 252LL;
  }
  else
  {
    v9 = 246LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v8,
    (void *)v9,
    (int)"pcshell\\twinui\\jointresize\\lib\\jointresizeacc.cpp",
    (const char *)(unsigned int)ViewTitle);
LABEL_9:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v11);
}

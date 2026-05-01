/*
 * XREFs of ?SetNonShownViews@ViewEventArgsForWindowingSettings@@UEAAJPEAU?$IVectorView@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18041DEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventArgsForWindowingSettings::SetNonShownViews(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v6; // eax
  __int64 v7; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+38h] [rbp+10h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  try
  {
    v10 = 0;
    if ( a2 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 56LL))(a2, &v10);
      if ( v6 >= 0 )
      {
        if ( v10 )
        {
          v11 = a2;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
          v7 = *(_QWORD *)(a1 + 56);
          *(_QWORD *)(a1 + 56) = 0LL;
          if ( v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
          *(_QWORD *)(a1 + 56) = a2;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x494,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\ViewEventArgs.h",
          (const char *)(unsigned int)v6);
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x49A,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\ViewEventArgs.h",
                           a4);
  }
  return result;
}

/*
 * XREFs of ?get_RequestedDisplayRegionIds@PresentationRequestedArgs@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1802EE8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PresentationRequestedArgs::get_RequestedDisplayRegionIds(
        PresentationRequestedArgs *this,
        struct IInspectable **a2)
{
  __int64 v3; // rax
  __int64 (*v4)(void); // rax
  int v5; // ebx
  const char *v6; // r9
  __int64 result; // rax
  int v8; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct IInspectable **); // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  v3 = **((_QWORD **)this + 7);
  v11 = 0LL;
  v4 = *(__int64 (**)(void))(v3 + 64);
  try
  {
    v5 = v4();
    if ( v5 >= 0 )
    {
      if ( v11 )
      {
        v8 = (**v11)(v11, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a2);
        if ( v8 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x1C60,
            (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
            (const char *)(unsigned int)v8,
            v9);
      }
      else
      {
        *a2 = 0LL;
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
      result = 0LL;
    }
    else
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
      result = (unsigned int)v5;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x29E,
                           (int)"pcshell\\twinui\\appmanager\\lib\\amcommon.cpp",
                           v6);
  }
  return result;
}

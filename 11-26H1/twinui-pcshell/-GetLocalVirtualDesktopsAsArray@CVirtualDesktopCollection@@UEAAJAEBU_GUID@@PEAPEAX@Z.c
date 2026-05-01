/*
 * XREFs of ?GetLocalVirtualDesktopsAsArray@CVirtualDesktopCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18054EA80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800464B8 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopCollection::GetLocalVirtualDesktopsAsArray(
        CVirtualDesktopCollection *this,
        const struct _GUID *a2,
        void **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  _QWORD *v8; // rbx
  _QWORD *v9; // rbp
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v16; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v16 = 0LL;
  v6 = CEnumerableObjectCollection::CreateInstance((__int64)this, a2, &v16);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = (_QWORD *)*((_QWORD *)this + 6);
    v9 = &v8[*((_QWORD *)this + 7)];
    while ( v8 != v9 )
    {
      v10 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v16 + 40LL))(v16, *v8);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x106,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
          (const char *)(unsigned int)v10);
        v7 = v11;
        goto LABEL_11;
      }
      ++v8;
    }
    if ( v16 )
    {
      v12 = (**(__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v16)(v16, a2, a3);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1C89,
          (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
          (const char *)(unsigned int)v12,
          v14);
    }
    else
    {
      *a3 = 0LL;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v16);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x103,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v6);
LABEL_11:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v16);
    return v7;
  }
}

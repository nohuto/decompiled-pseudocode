/*
 * XREFs of ?CachePersistingStateName@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18004C394
 * Callers:
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18004BB0C (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     _lambda_eb4780c1661a573af0d01df637dfa0a8_::operator() @ 0x180127F64 (_lambda_eb4780c1661a573af0d01df637dfa0a8_--operator().c)
 * Callees:
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x18004D95C (-Release@String@Internal@Windows@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall UwpWindowWrapperBase::CachePersistingStateName(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64 **); // r14
  __int64 *v8; // rcx
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64); // rsi
  int v14; // eax
  __int64 v15; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 *v17; // [rsp+60h] [rbp+30h] BYREF
  __int64 v18; // [rsp+70h] [rbp+40h] BYREF
  __int64 v19; // [rsp+78h] [rbp+48h] BYREF

  if ( *(_DWORD *)(a1 + 328) == 1 )
  {
    if ( a2 )
    {
      v17 = 0LL;
      v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 280) + 152LL))(
                       *(_QWORD *)(a1 + 280),
                       &v15);
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v4 + 48LL))(*v4, &v19);
      v6 = *(_QWORD *)v5;
      v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 **))(**(_QWORD **)v5 + 80LL);
      v8 = v17;
      v17 = 0LL;
      if ( v8 )
        (*(void (__fastcall **)(__int64 *))(*v8 + 16))(v8);
      v9 = v7(v6, a2, &v17);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x6B3,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v9,
          v15);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      v18 = 0LL;
      v10 = *v17;
      v18 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v10 + 48))(v17, &v18);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x6B6,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v11,
          v15);
      v19 = 0LL;
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v18)(v18, &GUID_43c44496_73a7_4b25_b876_1df2708e3e45, &v19);
      v12 = v19;
      if ( v19 )
      {
        v13 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 360LL);
        WindowsDeleteString(*(HSTRING *)(a1 + 536));
        *(_QWORD *)(a1 + 536) = 0LL;
        v14 = v13(v12, a1 + 536);
        if ( v14 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x6BA,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
            (const char *)(unsigned int)v14,
            v15);
        v12 = v19;
      }
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      if ( v17 )
        (*(void (__fastcall **)(__int64 *))(*v17 + 16))(v17);
    }
    else
    {
      Windows::Internal::String::Release((Windows::Internal::String *)(a1 + 536));
    }
  }
}

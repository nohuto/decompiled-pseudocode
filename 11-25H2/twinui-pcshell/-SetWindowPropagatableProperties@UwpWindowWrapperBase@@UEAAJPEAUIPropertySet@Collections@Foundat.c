/*
 * XREFs of ?SetWindowPropagatableProperties@UwpWindowWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18043B730
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$initializer_list@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@std@@QEAA@PEBV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0@Z @ 0x180230458 (--0-$initializer_list@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@@.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6054a4b6f872076a3e05612aa9944cd9___ @ 0x18043740C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_6054a4b6f872076a3e05612aa9944cd9.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapperBase::SetWindowPropagatableProperties(
        UwpWindowWrapperBase *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rax
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v10; // [rsp+40h] [rbp+8h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v3 = *((_QWORD *)this + 33);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 208LL))(v3);
    if ( *((_QWORD *)this + 14) )
    {
      v4 = std::initializer_list<std::vector<Windows::UI::Color>>::initializer_list<std::vector<Windows::UI::Color>>(
             v8,
             (__int64)this - 16,
             (__int64)&v11);
      v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6054a4b6f872076a3e05612aa9944cd9___((__int64)v4);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x5C0,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v5,
          v8[0]);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5C5,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v6);
  }
  return result;
}

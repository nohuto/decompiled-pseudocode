/*
 * XREFs of ?get_PersistingStateName@UwpWindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801E6C00
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$initializer_list@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@std@@QEAA@PEBV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0@Z @ 0x180230458 (--0-$initializer_list@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@@.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a742079b4f288dc5c41d6ea5a73a25fb___ @ 0x180437BDC (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_a742079b4f288dc5c41d6ea5a73a25fb.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapperBase::get_PersistingStateName(UwpWindowWrapperBase *this, HSTRING *a2)
{
  __int64 v3; // rcx
  const char *v4; // r9
  __int64 result; // rax
  __int64 v6; // rax
  int v7; // eax
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp+8h]
  HSTRING *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  *a2 = 0LL;
  v3 = *((_QWORD *)this + 33);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 216LL))(v3);
    if ( *((_DWORD *)this + 78) == 1 )
    {
      v6 = std::initializer_list<std::vector<Windows::UI::Color>>::initializer_list<std::vector<Windows::UI::Color>>(
             v8,
             (char *)this - 16,
             &v11);
      v7 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a742079b4f288dc5c41d6ea5a73a25fb___(v6);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x547,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v7,
          v8[0]);
    }
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x54C,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v4);
  }
  return result;
}

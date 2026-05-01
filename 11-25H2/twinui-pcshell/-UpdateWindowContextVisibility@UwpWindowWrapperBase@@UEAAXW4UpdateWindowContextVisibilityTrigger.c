/*
 * XREFs of ?UpdateWindowContextVisibility@UwpWindowWrapperBase@@UEAAXW4UpdateWindowContextVisibilityTrigger@@W4AppModelVisibility@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801ABC50
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowWrapperBase::UpdateWindowContextVisibility(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  _BOOL8 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 232LL))(*(_QWORD *)(a1 + 264));
  v7 = *(_QWORD *)(a1 + 96);
  if ( v7 )
  {
    v8 = 1LL;
    if ( *(_DWORD *)(a1 + 468) != 4 )
    {
      v8 = a3 != 0;
LABEL_4:
      result = (*(__int64 (__fastcall **)(__int64, _BOOL8))(*(_QWORD *)v7 + 112LL))(v7, v8);
      if ( (int)result < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x769,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)result,
          v9);
      return result;
    }
    if ( a3 || a2 != 1 )
      goto LABEL_4;
  }
  return result;
}

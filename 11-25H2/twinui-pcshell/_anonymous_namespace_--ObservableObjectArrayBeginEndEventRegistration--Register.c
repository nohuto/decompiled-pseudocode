/*
 * XREFs of _anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration::Register @ 0x1804A2850
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration::Register(
        __int64 a1,
        __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 56LL))(a2, a1, a1 + 24);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 32), a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x80,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\ObservableArray.h",
      (const char *)(unsigned int)v4);
    return v5;
  }
}

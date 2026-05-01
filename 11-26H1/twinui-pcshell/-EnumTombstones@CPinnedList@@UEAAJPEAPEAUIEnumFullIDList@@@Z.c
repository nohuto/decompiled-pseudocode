/*
 * XREFs of ?EnumTombstones@CPinnedList@@UEAAJPEAPEAUIEnumFullIDList@@@Z @ 0x18068EBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Attach@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAXPEAUIUnknown@@@Z @ 0x1801B8C04 (-Attach@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAXPEAUIUnknown@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0CPinnedListEnum@@QEAA@PEAVCPinnedList@@W4PinnedListEnumFlags@@@Z @ 0x18068BEA8 (--0CPinnedListEnum@@QEAA@PEAVCPinnedList@@W4PinnedListEnumFlags@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPinnedList::EnumTombstones(CPinnedList *this, struct IEnumFullIDList **a2)
{
  _OWORD *v4; // rax
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  int v11[2]; // [rsp+20h] [rbp-18h] BYREF
  _OWORD *v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  *(_QWORD *)v11 = 0LL;
  v4 = operator new(0x38uLL);
  v12 = v4;
  *v4 = 0LL;
  v4[1] = 0LL;
  v4[2] = 0LL;
  *((_QWORD *)v4 + 6) = 0LL;
  v5 = CPinnedListEnum::CPinnedListEnum((__int64)v4, (__int64)this - 32, 1);
  Microsoft::WRL::ComPtr<IUnknown>::Attach((__int64 *)v11, v5);
  if ( *(_QWORD *)v11 )
  {
    v9 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct IEnumFullIDList **))v11)(
           *(_QWORD *)v11,
           &GUID_d0191542_7954_4908_bc06_b2360bbe45ba,
           a2);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = (unsigned int)v9;
    v8 = 2763LL;
  }
  else
  {
    v6 = -2147024882;
    v7 = 2147942414LL;
    v8 = 2762LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
    (const char *)v7);
LABEL_7:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v11);
  return v6;
}

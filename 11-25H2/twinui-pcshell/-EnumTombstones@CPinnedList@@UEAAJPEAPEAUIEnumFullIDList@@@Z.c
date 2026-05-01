/*
 * XREFs of ?EnumTombstones@CPinnedList@@UEAAJPEAPEAUIEnumFullIDList@@@Z @ 0x180668480
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Attach@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAXPEAUIUnknown@@@Z @ 0x1801C3134 (-Attach@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAXPEAUIUnknown@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??0CPinnedListEnum@@QEAA@PEAVCPinnedList@@W4PinnedListEnumFlags@@@Z @ 0x180665790 (--0CPinnedListEnum@@QEAA@PEAVCPinnedList@@W4PinnedListEnumFlags@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPinnedList::EnumTombstones(CPinnedList *this, struct IEnumFullIDList **a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  _OWORD *v10; // [rsp+20h] [rbp-28h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct IEnumFullIDList **); // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  v11 = 0LL;
  v10 = operator new(0x38uLL);
  *v10 = 0LL;
  v10[1] = 0LL;
  v10[2] = 0LL;
  *((_QWORD *)v10 + 6) = 0LL;
  v4 = CPinnedListEnum::CPinnedListEnum((__int64)v10, (__int64)this - 32, 1);
  Microsoft::WRL::ComPtr<IUnknown>::Attach((__int64 *)&v11, v4);
  if ( v11 )
  {
    v8 = (**v11)(v11, &GUID_d0191542_7954_4908_bc06_b2360bbe45ba, a2);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    v6 = (unsigned int)v8;
    v7 = 2752LL;
  }
  else
  {
    v5 = -2147024882;
    v6 = 2147942414LL;
    v7 = 2751LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
    (const char *)v6);
LABEL_7:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  return v5;
}

/*
 * XREFs of ?EnumObjects@CPinnedList@@UEAAJPEAPEAUIEnumFullIDList@@@Z @ 0x18068EAB0
 * Callers:
 *     ?EnumObjects@CPinnedList@@W7EAAJPEAPEAUIEnumFullIDList@@@Z @ 0x180688B80 (-EnumObjects@CPinnedList@@W7EAAJPEAPEAUIEnumFullIDList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0CPinnedListEnum@@QEAA@PEAVCPinnedList@@W4PinnedListEnumFlags@@@Z @ 0x18068BEA8 (--0CPinnedListEnum@@QEAA@PEAVCPinnedList@@W4PinnedListEnumFlags@@@Z.c)
 *     ?Attach@?$ComPtr@VCPinnedListEnum@@@WRL@Microsoft@@QEAAXPEAVCPinnedListEnum@@@Z @ 0x18068D630 (-Attach@-$ComPtr@VCPinnedListEnum@@@WRL@Microsoft@@QEAAXPEAVCPinnedListEnum@@@Z.c)
 *     ?Release@CPinnedListEnum@@UEAAKXZ @ 0x180695A60 (-Release@CPinnedListEnum@@UEAAKXZ.c)
 */

__int64 __fastcall CPinnedList::EnumObjects(CPinnedList *this, struct IEnumFullIDList **a2)
{
  _OWORD *v4; // rax
  CPinnedListEnum *v5; // rax
  CPinnedListEnum *v6; // rbx
  HRESULT v8; // eax
  unsigned int v9; // edi
  void *that[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  that[0] = 0LL;
  v4 = operator new(0x38uLL);
  that[1] = v4;
  *v4 = 0LL;
  v4[1] = 0LL;
  v4[2] = 0LL;
  *((_QWORD *)v4 + 6) = 0LL;
  v5 = (CPinnedListEnum *)CPinnedListEnum::CPinnedListEnum((__int64)v4, (__int64)this - 16, 0);
  Microsoft::WRL::ComPtr<CPinnedListEnum>::Attach((CPinnedListEnum **)that, v5);
  v6 = (CPinnedListEnum *)that[0];
  if ( that[0] )
  {
    v8 = QISearch(that[0], &pqit, &GUID_d0191542_7954_4908_bc06_b2360bbe45ba, (void **)a2);
    v9 = v8;
    if ( v8 >= 0 )
      v9 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x824,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v8);
    CPinnedListEnum::Release(v6);
    return v9;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x823,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}

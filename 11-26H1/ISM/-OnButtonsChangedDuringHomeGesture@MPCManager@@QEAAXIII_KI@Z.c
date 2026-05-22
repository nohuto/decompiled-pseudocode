/*
 * XREFs of ?OnButtonsChangedDuringHomeGesture@MPCManager@@QEAAXIII_KI@Z @ 0x1800B794C
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x180024E38 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180057428 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCManager::OnButtonsChangedDuringHomeGesture(
        MPCManager *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned int v7; // ebp
  unsigned __int64 v9; // r14
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v7 = a6;
  v9 = a5;
  v11 = **((_QWORD **)this + 9);
  v15 = v11;
  while ( !*(_BYTE *)(v11 + 25) )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned __int64, unsigned int))(**(_QWORD **)(v11 + 40) + 80LL))(
            *(_QWORD *)(v11 + 40),
            a2,
            a3,
            a4,
            v9,
            v7);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB0,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v12);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
      &v15,
      v13);
    v11 = v15;
  }
}

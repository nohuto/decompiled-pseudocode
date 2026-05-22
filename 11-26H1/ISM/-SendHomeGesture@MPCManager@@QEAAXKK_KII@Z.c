/*
 * XREFs of ?SendHomeGesture@MPCManager@@QEAAXKK_KII@Z @ 0x1800B8618
 * Callers:
 *     ?TriggerHomeGesture@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@W4InputType@@I@Z @ 0x1800B9250 (-TriggerHomeGesture@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@W4InputType@@I@Z.c)
 *     _lambda_a8ea4032c7598feaa37b761b815ce0d1_::operator() @ 0x1800BF738 (_lambda_a8ea4032c7598feaa37b761b815ce0d1_--operator().c)
 *     ?Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801BE6B0 (-Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?SendHomeEvent@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C17D0 (-SendHomeEvent@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXPEAUKeyboardInputInfo@@@Z @ 0x1801C4C9C (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXPEAUKeyboardInputInfo@@@Z.c)
 *     ?Process3DInput@MPCHomeGestureProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C8B60 (-Process3DInput@MPCHomeGestureProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18000D7E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000DE08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180057428 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MPCManager_SendHomeGesture_@ISMTracing@@QEAAXKK_KII@Z @ 0x1800B6F98 (-MPCManager_SendHomeGesture_@ISMTracing@@QEAAXKK_KII@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCManager::SendHomeGesture(
        MPCManager *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v7; // ebp
  unsigned int v9; // r14d
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  ISMTracing *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v7 = a6;
  v9 = a5;
  v11 = **((_QWORD **)this + 9);
  v16 = v11;
  while ( !*(_BYTE *)(v11 + 25) )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, unsigned int, unsigned int))(**(_QWORD **)(v11 + 40)
                                                                                                 + 64LL))(
            *(_QWORD *)(v11 + 40),
            a3,
            a2,
            a4,
            v9,
            v7);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x87,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v12);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
      &v16,
      v13);
    v11 = v16;
  }
  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::MPCManager_SendHomeGesture_(v14, a3, a2, a4, v9, v7);
  }
}

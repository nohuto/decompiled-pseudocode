/*
 * XREFs of ??$?0AEAPEAVCProjectedShadowReceiver@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@1@AEAPEAVCProjectedShadowReceiver@@@Z @ 0x18020946C
 * Callers:
 *     ??$emplace_back@AEAPEAVCProjectedShadowReceiver@@@?$list@UReceiverEntry@CProjectedShadowScene@@V?$allocator@UReceiverEntry@CProjectedShadowScene@@@std@@@std@@QEAAAEAUReceiverEntry@CProjectedShadowScene@@AEAPEAVCProjectedShadowReceiver@@@Z @ 0x18027E1A0 (--$emplace_back@AEAPEAVCProjectedShadowReceiver@@@-$list@UReceiverEntry@CProjectedShadowScene@@V.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  __int64 *result; // rax

  *a1 = a2;
  a1[1] = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits>(0x78uLL, a2);
  v6 = *a3;
  v7 = v5;
  a1[1] = (__int64)v5;
  v5[2] = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7[3] = 0LL;
  v7[4] = 0LL;
  v8 = operator new(0x30uLL);
  *v8 = v8;
  v8[1] = v8;
  v8[2] = v8;
  *((_WORD *)v8 + 12) = 257;
  v7[3] = v8;
  result = a1;
  v7[5] = 0LL;
  *((_DWORD *)v7 + 28) = 0;
  *((_BYTE *)v7 + 116) = 0;
  return result;
}

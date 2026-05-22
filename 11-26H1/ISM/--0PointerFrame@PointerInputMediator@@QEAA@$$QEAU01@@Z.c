/*
 * XREFs of ??0PointerFrame@PointerInputMediator@@QEAA@$$QEAU01@@Z @ 0x180010340
 * Callers:
 *     ?OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180010060 (-OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x18008A9A0 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$?0U_Move_allocator_tag@std@@V?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@$0A@@?$list@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@2@@std@@AEAA@U_Move_allocator_tag@1@AEAV?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@@Z @ 0x1800F49A8 (--$-0U_Move_allocator_tag@std@@V-$allocator@U-$_List_node@U-$pair@$$CBIUContactData@PointerInput.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall PointerInputMediator::PointerFrame::PointerFrame(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // r15
  __int64 v11; // rbx
  _QWORD *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 56);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 72);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 88);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 104);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 120);
  *(_OWORD *)(a1 + 136) = *(_OWORD *)(a2 + 136);
  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 152);
  v4 = *(_QWORD *)(a2 + 176);
  *(_QWORD *)(a2 + 176) = 0LL;
  v5 = *(_QWORD *)(a2 + 168);
  *(_QWORD *)(a2 + 168) = 0LL;
  v6 = *(_QWORD *)(a2 + 160);
  *(_QWORD *)(a2 + 160) = 0LL;
  *(_QWORD *)(a1 + 160) = v6;
  *(_QWORD *)(a1 + 168) = v5;
  *(_QWORD *)(a1 + 176) = v4;
  v7 = *(_QWORD *)(a2 + 200);
  *(_QWORD *)(a2 + 200) = 0LL;
  v8 = *(_QWORD *)(a2 + 192);
  *(_QWORD *)(a2 + 192) = 0LL;
  v9 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)(a2 + 184) = 0LL;
  *(_QWORD *)(a1 + 184) = v9;
  *(_QWORD *)(a1 + 192) = v8;
  *(_QWORD *)(a1 + 200) = v7;
  *(_DWORD *)(a1 + 208) = *(_DWORD *)(a2 + 208);
  v10 = (__int64 *)(a1 + 216);
  std::list<std::pair<unsigned int const,PointerInputMediator::ContactData>>::list<std::pair<unsigned int const,PointerInputMediator::ContactData>>(a1 + 216);
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  v11 = *(_QWORD *)(a1 + 216);
  v12 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(128LL);
  v13 = *(_QWORD *)(a1 + 232);
  v14 = (*(_QWORD *)(a1 + 248) - v13) >> 3;
  if ( v14 )
    std::_Deallocate<16>(v13, 8 * v14);
  *(_QWORD *)(a1 + 232) = v12;
  v15 = v12 + 16;
  *(_QWORD *)(a1 + 240) = v12 + 16;
  *(_QWORD *)(a1 + 248) = v12 + 16;
  while ( v12 != v15 )
    *v12++ = v11;
  v16 = *v10;
  *v10 = *(_QWORD *)(a2 + 216);
  *(_QWORD *)(a2 + 216) = v16;
  v17 = *(_QWORD *)(a1 + 224);
  *(_QWORD *)(a1 + 224) = *(_QWORD *)(a2 + 224);
  *(_QWORD *)(a2 + 224) = v17;
  v18 = *(_QWORD *)(a1 + 232);
  *(_QWORD *)(a1 + 232) = *(_QWORD *)(a2 + 232);
  *(_QWORD *)(a2 + 232) = v18;
  v19 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 240) = *(_QWORD *)(a2 + 240);
  *(_QWORD *)(a2 + 240) = v19;
  v20 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 248) = *(_QWORD *)(a2 + 248);
  *(_QWORD *)(a2 + 248) = v20;
  v21 = *(_QWORD *)(a2 + 256);
  *(_QWORD *)(a2 + 256) = 7LL;
  *(_QWORD *)(a1 + 256) = v21;
  v22 = *(_QWORD *)(a2 + 264);
  *(_QWORD *)(a2 + 264) = 8LL;
  *(_QWORD *)(a1 + 264) = v22;
  return a1;
}

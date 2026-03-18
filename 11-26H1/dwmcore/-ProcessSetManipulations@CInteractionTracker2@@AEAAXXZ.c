/*
 * XREFs of ?ProcessSetManipulations@CInteractionTracker2@@AEAAXXZ @ 0x180274F98
 * Callers:
 *     ?CleanDirties@CInteractionTracker2@@IEAAXXZ @ 0x180272760 (-CleanDirties@CInteractionTracker2@@IEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@U?$pair@PEAVCResource@@W4MIL_RESOURCE_TYPE@@@std@@@?$vector@U?$pair@PEAVCResource@@W4MIL_RESOURCE_TYPE@@@std@@V?$allocator@U?$pair@PEAVCResource@@W4MIL_RESOURCE_TYPE@@@std@@@2@@std@@AEAAPEAU?$pair@PEAVCResource@@W4MIL_RESOURCE_TYPE@@@1@QEAU21@$$QEAU21@@Z @ 0x18019CF50 (--$_Emplace_reallocate@U-$pair@PEAVCResource@@W4MIL_RESOURCE_TYPE@@@std@@@-$vector@U-$pair@PEAVC.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAXAEBV?$vector@U?$pair@PEAVCManipulation@@PEAVCInteraction@@@std@@V?$allocator@U?$pair@PEAVCManipulation@@PEAVCInteraction@@@std@@@2@@std@@@Z @ 0x18028E2F4 (-ProcessSetManipulations@InteractionSourceManager@@QEAAXAEBV-$vector@U-$pair@PEAVCManipulation@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker2::ProcessSetManipulations(
        CInteractionTracker2 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 *v4; // rsi
  _DWORD *v6; // rdi
  __int64 *v7; // r13
  __int64 *v8; // r15
  int v9; // r12d
  __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // rax
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v18; // [rsp+90h] [rbp+30h] BYREF

  v4 = (__int64 *)*((_QWORD *)this + 125);
  v6 = (_DWORD *)*((_QWORD *)this + 50);
  if ( (((*((_QWORD *)this + 51) - (_QWORD)v6) ^ ((__int64)(*((_QWORD *)this + 126) - (_QWORD)v4) >> 1)) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker2.cpp",
      a4);
  v7 = (__int64 *)*((_QWORD *)this + 123);
  v8 = (__int64 *)*((_QWORD *)this + 122);
  v9 = 0;
  v15 = 0LL;
  v16 = 0LL;
  while ( v8 != v7 )
  {
    v10 = *v8;
    v18 = *v8;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v18);
    if ( v6 == *((_DWORD **)this + 51) || *v6 != v9 )
    {
      v14 = (unsigned __int64)v10;
      if ( *((_QWORD *)&v15 + 1) == v16 )
      {
        std::vector<std::pair<CResource *,enum MIL_RESOURCE_TYPE>>::_Emplace_reallocate<std::pair<CResource *,enum MIL_RESOURCE_TYPE>>(
          (void **)&v15,
          *((__int64 *)&v15 + 1),
          &v14,
          v11);
      }
      else
      {
        **((_OWORD **)&v15 + 1) = v14;
        *((_QWORD *)&v15 + 1) += 16LL;
      }
    }
    else
    {
      v12 = *v4;
      *(_QWORD *)&v13 = v10;
      *((_QWORD *)&v13 + 1) = v12;
      if ( *((_QWORD *)&v15 + 1) == v16 )
      {
        std::vector<std::pair<CResource *,enum MIL_RESOURCE_TYPE>>::_Emplace_reallocate<std::pair<CResource *,enum MIL_RESOURCE_TYPE>>(
          (void **)&v15,
          *((__int64 *)&v15 + 1),
          &v13,
          v11);
      }
      else
      {
        **((_OWORD **)&v15 + 1) = v13;
        *((_QWORD *)&v15 + 1) += 16LL;
      }
      ++v6;
      ++v4;
    }
    ++v9;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    ++v8;
  }
  InteractionSourceManager::ProcessSetManipulations((CInteractionTracker2 *)((char *)this + 528));
  if ( (_QWORD)v15 )
    std::_Deallocate<16>((void *)v15, (v16 - v15) & 0xFFFFFFFFFFFFFFF0uLL);
}

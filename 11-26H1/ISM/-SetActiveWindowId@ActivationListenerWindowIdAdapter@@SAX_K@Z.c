/*
 * XREFs of ?SetActiveWindowId@ActivationListenerWindowIdAdapter@@SAX_K@Z @ 0x18002CC5C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_09fdcce89584389a1a7da2575b3d008b__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call @ 0x1800AE4C0 (std--_Func_impl_no_alloc__lambda_09fdcce89584389a1a7da2575b3d008b__void__MIT_INPUT__ea_1800AE4C0.c)
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002C510 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18002CE78 (--$_Emplace_reallocate@AEBV-$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@-$vec.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall ActivationListenerWindowIdAdapter::SetActiveWindowId(__int64 a1)
{
  unsigned int v1; // edi
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *v3; // rsi
  __int64 *v4; // r13
  __int64 v5; // rax
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r15
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // r14
  int (__fastcall *v11)(_QWORD, GUID *, __int64 *); // r12
  _QWORD *v12; // rbx
  _QWORD *v13; // r14
  _QWORD *v14; // r14
  __int64 v15; // rcx
  HWND v16; // r13
  int v17; // eax
  HWND v18; // rax
  __int64 v19; // rdx
  __int128 v20; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21; // [rsp+30h] [rbp-18h]
  __int64 v22; // [rsp+98h] [rbp+50h] BYREF
  HWND Ancestor; // [rsp+A0h] [rbp+58h]
  __int64 *v24; // [rsp+A8h] [rbp+60h]

  v1 = 0;
  Ancestor = 0LL;
  if ( a1 )
    Ancestor = GetAncestor((HWND)(int)a1, 2u);
  InputSiteManager = ISMStatics::GetInputSiteManager();
  v3 = (__int64 *)*((_QWORD *)InputSiteManager + 7);
  v4 = (__int64 *)*((_QWORD *)InputSiteManager + 8);
  v24 = v4;
  if ( v3 != v4 )
  {
    while ( 1 )
    {
      v5 = *v3;
      v20 = 0LL;
      v21 = 0LL;
      v6 = v1 | 1;
      v7 = 0LL;
      v22 = 0LL;
      v8 = *(_QWORD *)(v5 + 488);
      v9 = *(_QWORD *)(v5 + 496);
      if ( v8 != v9 )
        break;
LABEL_10:
      if ( v7 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      v13 = (_QWORD *)*((_QWORD *)&v20 + 1);
      v12 = (_QWORD *)v20;
      if ( (_QWORD)v20 != *((_QWORD *)&v20 + 1) )
      {
        v16 = Ancestor;
        do
        {
          v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 32LL))(*v12);
          v18 = GetAncestor((HWND)v17, 2u);
          v19 = 3LL;
          if ( v18 != v16 )
            v19 = 1LL;
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v12 + 24LL))(*v12, v19);
          ++v12;
        }
        while ( v12 != v13 );
        v12 = (_QWORD *)v20;
        v4 = v24;
      }
      v1 = v6 & 0xFFFFFFFE;
      if ( v12 )
      {
        v14 = (_QWORD *)*((_QWORD *)&v20 + 1);
        if ( v12 != *((_QWORD **)&v20 + 1) )
        {
          do
          {
            v15 = *v12;
            if ( *v12 )
            {
              *v12 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
            }
            ++v12;
          }
          while ( v12 != v14 );
          v12 = (_QWORD *)v20;
        }
        std::_Deallocate<16>(v12, (v21 - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      if ( ++v3 == v4 )
        return;
    }
    while ( 1 )
    {
      v10 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v8 + 8);
      v11 = **v10;
      if ( v7 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      if ( v11(v10, &GUID_a1cdc933_ea3a_72de_bea8_f0397564bae3, &v22) >= 0 )
      {
        if ( *((_QWORD *)&v20 + 1) != v21 )
        {
          **((_QWORD **)&v20 + 1) = v22;
          v7 = v22;
          if ( v22 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
            v7 = v22;
          }
          *((_QWORD *)&v20 + 1) += 8LL;
          goto LABEL_9;
        }
        std::vector<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy> const &>(
          &v20,
          *((_QWORD *)&v20 + 1),
          &v22);
      }
      v7 = v22;
LABEL_9:
      v8 += 16LL;
      if ( v8 == v9 )
        goto LABEL_10;
    }
  }
}

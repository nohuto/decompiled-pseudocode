/*
 * XREFs of ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x1801B60C4
 * Callers:
 *     ?OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801B5530 (-OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 * Callees:
 *     ?GetKeyboardInputData@KeyboardInputInfo@@QEAA?AU_KEYBOARD_INPUT_DATA@@XZ @ 0x180060C20 (-GetKeyboardInputData@KeyboardInputInfo@@QEAA-AU_KEYBOARD_INPUT_DATA@@XZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     _lambda_7f079bc5e87df2e09bd622ff86c26e64_::_lambda_7f079bc5e87df2e09bd622ff86c26e64_ @ 0x1800A7A50 (_lambda_7f079bc5e87df2e09bd622ff86c26e64_--_lambda_7f079bc5e87df2e09bd622ff86c26e64_.c)
 *     ??4?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800FAB94 (--4-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$_Assign_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801B5B98 (--$_Assign_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@UKeyEv.c)
 *     ??$_Construct_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801B5C50 (--$_Construct_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_typ.c)
 *     ??$_Emplace@AEBUKeyEventData@VirtualHotKeyTracker@@@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@QEAAPEAU?$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@1@QEAU21@AEBUKeyEventData@VirtualHotKeyTracker@@@Z @ 0x1801B5D00 (--$_Emplace@AEBUKeyEventData@VirtualHotKeyTracker@@@-$list@UKeyEventData@VirtualHotKeyTracker@@V.c)
 *     ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@UCompareGuids@VirtualHotKeyTracker@@V?$allocator@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@std@@_N@1@AEBU_GUID@@@Z @ 0x1801B5DB4 (--$_Try_emplace@AEBU_GUID@@$$V@-$map@U_GUID@@V-$list@UKeyEventData@VirtualHotKeyTracker@@V-$allo.c)
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData_______lambda_7f079bc5e87df2e09bd622ff86c26e64___ @ 0x1801B5EF8 (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_VirtualHotKeyTracker--.c)
 *     ?SynthesizeKeyEvent@VirtualHotKeyTracker@@AEAAXAEBUKeyEventData@1@U_GUID@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@@Z @ 0x1801B65E4 (-SynthesizeKeyEvent@VirtualHotKeyTracker@@AEAAXAEBUKeyEventData@1@U_GUID@@W4_SYNTHESIZE_KEYBOARD.c)
 *     ?_Unchecked_erase@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAPEAU?$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1801B6688 (-_Unchecked_erase@-$list@UKeyEventData@VirtualHotKeyTracker@@V-$allocator@UKeyEventData@VirtualH.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualHotKeyTracker::OnInput(
        VirtualHotKeyTracker *this,
        struct KeyboardInputInfo *a2,
        struct _GUID *a3,
        const struct HotKeyDetectionResult *a4)
{
  const struct HotKeyDetectionResult *v4; // r15
  struct _GUID *v5; // rdi
  __int64 *v6; // r13
  char v7; // r12
  __int64 v8; // r11
  __int16 v9; // dx
  __int64 **v10; // rcx
  __int64 *v11; // rax
  __int64 *v12; // rdx
  __int64 *v13; // r8
  __int128 v14; // xmm1
  __m128i *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 **v18; // rsi
  __int64 *v19; // rbx
  __int64 *v20; // r15
  __int64 *v21; // r13
  __int64 *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  __m128i *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 *v29; // rsi
  __int64 *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 *v34; // rdi
  __m128i *v35; // rax
  __int64 v36; // xmm0_8
  __int64 *v37; // rdx
  _QWORD *v38; // rax
  __int128 *v39; // rcx
  _QWORD **v40; // rcx
  _QWORD *v41; // rcx
  _QWORD *v42; // rdi
  __m128i **v43; // rcx
  __m128i *i; // rax
  __m128i *j; // rcx
  __int64 v47; // [rsp+20h] [rbp-E0h]
  struct _GUID *v48; // [rsp+28h] [rbp-D8h]
  const struct HotKeyDetectionResult *v49; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v50; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+50h] [rbp-B0h]
  _BYTE v52[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v53[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v54[16]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v55[16]; // [rsp+90h] [rbp-70h] BYREF
  char v56[16]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v57; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v58; // [rsp+C0h] [rbp-40h]
  __m128i v59; // [rsp+D0h] [rbp-30h] BYREF
  __m128i v60; // [rsp+E0h] [rbp-20h]
  __int128 v61; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v62; // [rsp+100h] [rbp+0h] BYREF
  __int128 v63; // [rsp+110h] [rbp+10h]

  v4 = a4;
  v49 = a4;
  v5 = a3;
  v48 = a3;
  v6 = (__int64 *)this;
  v50.m128i_i64[0] = (__int64)this;
  v7 = *((_BYTE *)a2 + 94) & 1;
  LOBYTE(v47) = v7;
  v57 = 0LL;
  v58 = 0LL;
  *(_QWORD *)&v58 = *((unsigned int *)a2 + 1);
  *(struct _KEYBOARD_INPUT_DATA *)&v57 = *KeyboardInputInfo::GetKeyboardInputData(
                                            a2,
                                            (struct _KEYBOARD_INPUT_DATA *)&v59);
  WORD4(v58) = *(_WORD *)(v8 + 58);
  v9 = *(_WORD *)(v8 + 60);
  WORD5(v58) = v9;
  v10 = (__int64 **)v6[4];
  v11 = *v10;
  if ( v7 )
  {
    while ( v11 != (__int64 *)v10 && v9 != *((_WORD *)v11 + 21) )
      v11 = (__int64 *)*v11;
    v12 = v11;
    if ( v11 != (__int64 *)v10 )
    {
      while ( 1 )
      {
        v13 = (__int64 *)*v11;
        v11 = v13;
        if ( v13 == (__int64 *)v10 )
          break;
        if ( *(_WORD *)(v8 + 60) != *((_WORD *)v13 + 21) )
        {
          v14 = *((_OWORD *)v13 + 2);
          *((_OWORD *)v12 + 1) = *((_OWORD *)v13 + 1);
          *((_OWORD *)v12 + 2) = v14;
          v12 = (__int64 *)*v12;
        }
      }
    }
    std::list<VirtualHotKeyTracker::KeyEventData>::_Unchecked_erase(v6 + 4, v12, v10);
  }
  else
  {
    while ( v11 != (__int64 *)v10 )
    {
      if ( *((_WORD *)v11 + 21) == v9 )
        goto LABEL_14;
      v11 = (__int64 *)*v11;
    }
    std::list<VirtualHotKeyTracker::KeyEventData>::_Emplace<VirtualHotKeyTracker::KeyEventData const &>(
      (__int64)(v6 + 4),
      v6[4],
      &v57);
  }
LABEL_14:
  if ( *(_QWORD *)v4 && !v7 )
  {
    v15 = (__m128i *)((char *)v4 + 16);
    v16 = *((_QWORD *)v4 + 2) - *(_QWORD *)&GUID_NULL.Data1;
    if ( !v16 )
      v16 = *((_QWORD *)v4 + 3) - *(_QWORD *)GUID_NULL.Data4;
    if ( v16 )
    {
      v17 = *(_QWORD *)&v5->Data1 - v15->m128i_i64[0];
      if ( *(_QWORD *)&v5->Data1 == v15->m128i_i64[0] )
        v17 = *(_QWORD *)v5->Data4 - *((_QWORD *)v4 + 3);
      if ( v17 )
      {
        v18 = (__int64 **)v6[4];
        v19 = *v18;
        v20 = v6;
        while ( v19 != (__int64 *)v18 )
        {
          v62 = *((_OWORD *)v19 + 1);
          v63 = *((_OWORD *)v19 + 2);
          v10 = (__int64 **)((unsigned __int64)v19[5] >> 16);
          if ( (unsigned __int16)((_WORD)v10 - 160) <= 5u
            || (LOWORD(v10) = (_WORD)v10 - 91, (unsigned __int16)v10 <= 1u) )
          {
            v21 = *(__int64 **)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                             v20 + 6,
                                             (__int64)v52,
                                             v15)
                              + 48LL);
            v22 = *(__int64 **)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                             v20 + 6,
                                             (__int64)v53,
                                             v15)
                              + 48LL);
            do
              v22 = (__int64 *)*v22;
            while ( v22 != v21 && *((_WORD *)v22 + 21) != WORD5(v63) );
            if ( v22 == *(__int64 **)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                                   v20 + 6,
                                                   (__int64)v54,
                                                   v15)
                                    + 48LL) )
            {
              v23 = std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                      v20 + 6,
                      (__int64)v55,
                      v15);
              std::list<VirtualHotKeyTracker::KeyEventData>::_Emplace<VirtualHotKeyTracker::KeyEventData const &>(
                *(_QWORD *)v23 + 48LL,
                *(_QWORD *)(*(_QWORD *)v23 + 48LL),
                &v62);
              v59 = *v15;
              VirtualHotKeyTracker::SynthesizeKeyEvent(v24, &v62, &v59, 2LL, v47, v48);
            }
          }
          v19 = (__int64 *)*v19;
        }
        v4 = v49;
        v5 = v48;
        v6 = (__int64 *)v50.m128i_i64[0];
        v7 = v47;
      }
    }
  }
  if ( *(_QWORD *)v4 && *((_BYTE *)v4 + 32) )
  {
    v59 = *(__m128i *)v5;
    VirtualHotKeyTracker::SynthesizeKeyEvent(v10, &v57, &v59, 1LL, v47, v48);
  }
  v25 = *(__m128i **)v6[6];
  while ( !v25[1].m128i_i8[9] )
  {
    v60 = v25[2];
    v61 = 0LL;
    std::list<VirtualHotKeyTracker::KeyEventData>::_Construct_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>>(
      &v61,
      *(__int64 **)v25[3].m128i_i64[0],
      (__int64 *)v25[3].m128i_i64[0]);
    v59 = v60;
    v26 = *(_QWORD *)&v5->Data1 - v60.m128i_i64[0];
    if ( *(_QWORD *)&v5->Data1 == v60.m128i_i64[0] )
      v26 = *(_QWORD *)v5->Data4 - _mm_srli_si128(v60, 8).m128i_u64[0];
    if ( v26 )
    {
      if ( v7 )
      {
        v34 = (__int64 *)v61;
        v35 = (__m128i *)lambda_7f079bc5e87df2e09bd622ff86c26e64_::_lambda_7f079bc5e87df2e09bd622ff86c26e64_(
                           &v62,
                           (__int64)&v57,
                           (__int64)v6,
                           (__int64)&v59);
        v36 = v35[1].m128i_i64[0];
        v37 = (__int64 *)*v34;
        v50 = *v35;
        v51 = v36;
        v38 = std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData_______lambda_7f079bc5e87df2e09bd622ff86c26e64___(
                &v49,
                v37,
                v34,
                (__int64)&v50);
        std::list<VirtualHotKeyTracker::KeyEventData>::_Unchecked_erase(&v61, *v38, v34);
        v39 = (__int128 *)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                        v6 + 6,
                                        (__int64)v56,
                                        &v59)
                         + 48LL);
        if ( v39 != &v61 )
          std::list<VirtualHotKeyTracker::KeyEventData>::_Assign_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>>(
            (__int64)v39,
            *(_QWORD *)v61,
            (__int64 *)v61);
      }
      else if ( *(_QWORD *)v4 )
      {
        v27 = *((_QWORD *)v4 + 2) - v60.m128i_i64[0];
        if ( !v27 )
          v27 = *((_QWORD *)v4 + 3) - _mm_srli_si128(v60, 8).m128i_u64[0];
        if ( !v27 )
        {
          v28 = v6[2];
          if ( *(_QWORD *)v4 != v28 || (*(_WORD *)(v28 + 24) & 0x4000) == 0 )
          {
            v29 = *(__int64 **)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                             v6 + 6,
                                             (__int64)v55,
                                             &v59)
                              + 48LL);
            v30 = *(__int64 **)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                             v6 + 6,
                                             (__int64)v54,
                                             &v59)
                              + 48LL);
            do
              v30 = (__int64 *)*v30;
            while ( v30 != v29 && WORD5(v58) != *((_WORD *)v30 + 21) );
            v31 = std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                    v6 + 6,
                    (__int64)v53,
                    &v59);
            v32 = *(_QWORD *)v31;
            if ( v30 == *(__int64 **)(*(_QWORD *)v31 + 48LL) )
            {
              v33 = std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                      v6 + 6,
                      (__int64)v52,
                      &v59);
              std::list<VirtualHotKeyTracker::KeyEventData>::_Emplace<VirtualHotKeyTracker::KeyEventData const &>(
                *(_QWORD *)v33 + 48LL,
                *(_QWORD *)(*(_QWORD *)v33 + 48LL),
                &v57);
            }
            v50 = v59;
            VirtualHotKeyTracker::SynthesizeKeyEvent(v32, &v57, &v50, 2LL, v47, v48);
          }
        }
      }
    }
    v40 = (_QWORD **)v61;
    **(_QWORD **)(v61 + 8) = 0LL;
    v41 = *v40;
    if ( v41 )
    {
      do
      {
        v42 = (_QWORD *)*v41;
        std::_Deallocate<16>(v41, (struct std::nothrow_t *)0x30);
        v41 = v42;
      }
      while ( v42 );
    }
    std::_Deallocate<16>((void *)v61, (struct std::nothrow_t *)0x30);
    v43 = (__m128i **)v25[1].m128i_i64[0];
    if ( *((_BYTE *)v43 + 25) )
    {
      for ( i = (__m128i *)v25->m128i_i64[1];
            !i[1].m128i_i8[9] && v25 == (__m128i *)i[1].m128i_i64[0];
            i = (__m128i *)i->m128i_i64[1] )
      {
        v25 = i;
      }
      v25 = i;
    }
    else
    {
      v25 = (__m128i *)v25[1].m128i_i64[0];
      for ( j = *v43; !j[1].m128i_i8[9]; j = (__m128i *)j->m128i_i64[0] )
        v25 = j;
    }
    v5 = v48;
  }
  std::shared_ptr<SystemCursorShapeBitmap2>::operator=(v6 + 2, v4);
  return 0LL;
}

/*
 * XREFs of ?GetViewOptions@@YA?AUViewOptions@@AEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@AEBV?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1800284E8
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x1800278A0 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@45678@@Z @ 0x18047BB10 (-OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 * Callees:
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x180028798 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Copy_memmove_n@PEBURect@Foundation@Windows@winrt@@PEAU1234@@std@@YAPEAURect@Foundation@Windows@winrt@@PEBU1234@_KPEAU1234@@Z @ 0x1800BB94C (--$_Copy_memmove_n@PEBURect@Foundation@Windows@winrt@@PEAU1234@@std@@YAPEAURect@Foundation@Windo.c)
 *     ?_Clear_and_reserve_geometric@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x180285244 (-_Clear_and_reserve_geometric@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@W.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__m128 *__fastcall GetViewOptions(__m128 *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // rax
  int v6; // edi
  int v7; // r14d
  BOOL v8; // r13d
  __int64 v9; // r15
  __int64 v10; // rdx
  unsigned __int64 v11; // r12
  void *Src; // [rsp+30h] [rbp-50h]
  bool v14; // [rsp+38h] [rbp-48h]
  bool v15; // [rsp+39h] [rbp-47h]
  bool v16; // [rsp+3Ah] [rbp-46h]
  bool v17; // [rsp+3Bh] [rbp-45h]
  int v18; // [rsp+3Ch] [rbp-44h]
  __m128 v19; // [rsp+48h] [rbp-38h]
  __int128 v20; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp-18h]

  v20 = 0LL;
  v5 = 0LL;
  v21 = 0LL;
  v14 = *(_BYTE *)(a2 + 44) != 0;
  v15 = *(_BYTE *)(a2 + 45) != 0;
  v16 = *(_BYTE *)(a2 + 46) != 0;
  v17 = *(_BYTE *)(a2 + 47) != 0;
  v6 = 1;
  if ( *(_DWORD *)(a2 + 28) == 1 )
  {
    v7 = 1;
    v18 = 1;
  }
  else
  {
    v7 = 0;
    if ( *(_DWORD *)(a2 + 28) == 2 )
      v7 = 2;
    v18 = v7;
  }
  v8 = *(_DWORD *)(a2 + 32) == 1;
  if ( *(_DWORD *)(a2 + 36) != 1 )
  {
    v6 = 0;
    if ( *(_DWORD *)(a2 + 36) == 2 )
      v6 = 2;
  }
  v19 = _mm_div_ps(
          _mm_mul_ps(
            *(__m128 *)(a2 + 56),
            _mm_shuffle_ps((__m128)COERCE_UNSIGNED_INT((float)a4), (__m128)COERCE_UNSIGNED_INT((float)a4), 0)),
          (__m128)_xmm);
  if ( &v20 == (__int128 *)a3 )
  {
    v9 = *((_QWORD *)&v20 + 1);
  }
  else
  {
    Src = *(void **)a3;
    v9 = 16 * ((__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 4);
    v10 = (__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 4;
    if ( v10 )
    {
      std::vector<Windows::Foundation::Rect>::_Clear_and_reserve_geometric(&v20, v10);
      v11 = v20;
      std::_Copy_memmove_n<winrt::Windows::Foundation::Rect const *,winrt::Windows::Foundation::Rect *>(Src);
      v9 += v11;
      v5 = v21;
      v7 = v18;
      goto LABEL_8;
    }
    std::_Copy_memmove_n<winrt::Windows::Foundation::Rect const *,winrt::Windows::Foundation::Rect *>(*(void **)a3);
    v5 = 0LL;
  }
  v11 = v20;
LABEL_8:
  a1->m128_i8[0] = v14;
  a1->m128_i8[1] = v15;
  a1->m128_i8[2] = v16;
  a1->m128_i8[3] = v17;
  a1->m128_i32[1] = v7;
  a1->m128_i32[2] = v8;
  a1->m128_i32[3] = v6;
  a1[1] = v19;
  v21 = 0LL;
  v20 = 0uLL;
  a1[2].m128_u64[0] = v11;
  a1[2].m128_u64[1] = v9;
  a1[3].m128_u64[0] = v5;
  std::vector<Geometry::CRect>::_Tidy(&v20);
  return a1;
}

/*
 * XREFs of ?GetViewOptions@@YA?AUViewOptions@@AEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@AEBV?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1800A8B94
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x1800A7510 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@45678@@Z @ 0x18046D950 (-OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 * Callees:
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x1800A982C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ?_Clear_and_reserve_geometric@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1802BD268 (-_Clear_and_reserve_geometric@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@W.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=1
__m128 *__fastcall GetViewOptions(__m128 *a1, __int64 a2, __int64 a3, int a4)
{
  bool v5; // r13
  int v6; // edi
  int v7; // r14d
  BOOL v8; // r12d
  const void *v9; // r15
  __int64 v10; // rdx
  char *v11; // rsi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r15
  const void *v15; // rdx
  bool v16; // [rsp+31h] [rbp-3Fh]
  bool v17; // [rsp+32h] [rbp-3Eh]
  bool v18; // [rsp+33h] [rbp-3Dh]
  int v19; // [rsp+34h] [rbp-3Ch]
  __m128 v20; // [rsp+40h] [rbp-30h]
  void *v21[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp-10h]

  *(_OWORD *)v21 = 0LL;
  v22 = 0LL;
  v5 = *(_BYTE *)(a2 + 44) != 0;
  v16 = *(_BYTE *)(a2 + 45) != 0;
  v17 = *(_BYTE *)(a2 + 46) != 0;
  v18 = *(_BYTE *)(a2 + 47) != 0;
  v6 = 1;
  if ( *(_DWORD *)(a2 + 28) == 1 )
  {
    v7 = 1;
    v19 = 1;
  }
  else
  {
    v7 = 0;
    if ( *(_DWORD *)(a2 + 28) == 2 )
      v7 = 2;
    v19 = v7;
  }
  v8 = *(_DWORD *)(a2 + 32) == 1;
  if ( *(_DWORD *)(a2 + 36) != 1 )
  {
    v6 = 0;
    if ( *(_DWORD *)(a2 + 36) == 2 )
      v6 = 2;
  }
  v20 = _mm_div_ps(
          _mm_mul_ps(
            *(__m128 *)(a2 + 56),
            _mm_shuffle_ps((__m128)COERCE_UNSIGNED_INT((float)a4), (__m128)COERCE_UNSIGNED_INT((float)a4), 0)),
          (__m128)_xmm);
  if ( v21 == (void **)a3 )
  {
    v11 = (char *)v21[1];
  }
  else
  {
    v9 = *(const void **)a3;
    v10 = (__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 4;
    v11 = (char *)(16 * v10);
    if ( v10 )
    {
      std::vector<Windows::Foundation::Rect>::_Clear_and_reserve_geometric(v21, v10);
      v15 = v9;
      v13 = (unsigned __int64)v21[0];
      memmove_0(v21[0], v15, (size_t)v11);
      v11 += v13;
      v12 = v22;
      v7 = v19;
      goto LABEL_8;
    }
    memmove_0(0LL, v9, 16 * ((__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 4));
  }
  v12 = 0LL;
  v13 = (unsigned __int64)v21[0];
LABEL_8:
  a1->m128_i8[0] = v5;
  a1->m128_i8[1] = v16;
  a1->m128_i8[2] = v17;
  a1->m128_i8[3] = v18;
  a1->m128_i32[1] = v7;
  a1->m128_i32[2] = v8;
  a1->m128_i32[3] = v6;
  a1[1] = v20;
  v22 = 0LL;
  v21[1] = 0LL;
  v21[0] = 0LL;
  a1[2].m128_u64[0] = v13;
  a1[2].m128_u64[1] = (unsigned __int64)v11;
  a1[3].m128_u64[0] = v12;
  std::vector<Geometry::CRect>::_Tidy(v21);
  return a1;
}

/*
 * XREFs of ?OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x180046170
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_82f4e949cc86c4cc5d6fceb255c2514d__void__MIT_INPUT_CONFIG_MESSAGE_const___::_Do_call @ 0x180093460 (std--_Func_impl_no_alloc__lambda_82f4e949cc86c4cc5d6fceb255c2514d__void__MIT_INPUT_CONFIG_MESSAG.c)
 * Callees:
 *     ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x180045EAC (-Broadcast@InputConfigContextProvider@@AEAAXXZ.c)
 *     ?ClearConfigs@InputConfigContextProvider@@AEAAXAEAV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x1800462F8 (-ClearConfigs@InputConfigContextProvider@@AEAAXAEAV-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@U.c)
 *     ?_Tidy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x180046678 (-_Tidy@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAPEAUINPUT_SPACE_PAYLOAD@@QEAU2@AEAU2@@Z @ 0x180046710 (--$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UIN.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009C94C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 */

void __fastcall InputConfigContextProvider::OnInputConfigMessageReceived(
        InputConfigContextProvider *this,
        const struct _MIT_INPUT_CONFIG_MESSAGE *a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  char *v6; // rsi
  __int64 v7; // rdi
  __m128i v8; // xmm2
  char *v9; // xmm1_8
  unsigned __int64 v10; // xmm0_8
  __m128i *v11; // rdx
  __m128i v12; // [rsp+20h] [rbp-40h]
  __m128i v13; // [rsp+38h] [rbp-28h] BYREF
  char *v14; // [rsp+48h] [rbp-18h]

  v3 = *(unsigned int *)a2;
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 == 1 )
    {
      InputConfigContextProvider::ClearConfigs(v3, (char *)this + 256);
      v4 = (_QWORD *)((char *)this + 232);
      v5 = (_QWORD *)((char *)this + 240);
      if ( (char *)this + 256 != (char *)this + 232 )
      {
        std::vector<INPUT_SPACE_PAYLOAD>::_Tidy((char *)this + 256);
        *((_QWORD *)this + 32) = *v4;
        *((_QWORD *)this + 33) = *v5;
        *((_QWORD *)this + 34) = *((_QWORD *)this + 31);
        *v4 = 0LL;
        *v5 = 0LL;
        *((_QWORD *)this + 31) = 0LL;
      }
      if ( *v4 != *v5 )
        *v5 = *v4;
      InputConfigContextProvider::Broadcast(this);
    }
  }
  else
  {
    v6 = (char *)a2 + 20;
    v7 = *((unsigned int *)a2 + 4);
    v12 = *(__m128i *)((char *)a2 + 4);
    v8 = v12;
    v9 = (char *)a2 + 20;
    v14 = (char *)a2 + 20;
    v10 = _mm_srli_si128(v12, 8).m128i_u64[0];
    v13 = v12;
    if ( HIDWORD(v10) )
    {
      v14 = (char *)operator new[](saturated_mul(HIDWORD(v10), 0xC8uLL));
      memcpy_0(v14, v6, 200 * v7);
      v9 = v14;
      v8 = v12;
    }
    v11 = (__m128i *)*((_QWORD *)this + 30);
    if ( v11 == *((__m128i **)this + 31) )
    {
      std::vector<INPUT_SPACE_PAYLOAD>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD &>((char *)this + 232, v11, &v13);
    }
    else
    {
      *v11 = v8;
      v11[1].m128i_i64[0] = (__int64)v9;
      *((_QWORD *)this + 30) += 24LL;
    }
  }
}

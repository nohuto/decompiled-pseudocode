/*
 * XREFs of ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x180029CCC
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180027FE4 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?ScheduleToRun@CStoryboard@@QEAAXXZ @ 0x18002AFDC (-ScheduleToRun@CStoryboard@@QEAAXXZ.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18006DA44 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?Initialize@CStoryboard@@MEAAJXZ @ 0x18007C650 (-Initialize@CStoryboard@@MEAAJXZ.c)
 *     ?Block@CStoryboard@@QEAAXXZ @ 0x1800C69C8 (-Block@CStoryboard@@QEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004911C (-reset@-$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     McTemplateU0qd_EtwEventWriteTransfer @ 0x1800CE1F4 (McTemplateU0qd_EtwEventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CStoryboard::_LogStoryboardEvent(__m128i *this, __int64 a2)
{
  __int32 v3; // edx
  unsigned __int64 v4; // rcx
  __m128i *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdi
  void (__fastcall *v8)(__int64, __int128 *, _QWORD, _QWORD, _BYTE *, _QWORD, int); // rbx
  int v9; // eax
  __int128 v10; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B0h]
  int v12; // [rsp+58h] [rbp-A8h]
  __int128 v13; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+70h] [rbp-90h]
  int v15; // [rsp+78h] [rbp-88h]
  _BYTE v16[128]; // [rsp+80h] [rbp-80h] BYREF

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qd_EtwEventWriteTransfer(this, a2, this[1].m128i_u32[2], this[1].m128i_u32[3]);
  if ( this[1].m128i_i32[3] != -1 )
  {
    v3 = this[1].m128i_i32[2];
    if ( (unsigned int)(v3 - 3) <= 1 )
    {
      v4 = this[2].m128i_u64[0];
      if ( !v4 )
        v4 = _mm_srli_si128(this[2], 8).m128i_u64[0] - _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
      if ( v4 )
      {
        v5 = this + 5;
        if ( v3 == 3 )
        {
          wil::com_ptr_t<IDCompositionAnimationStats,wil::err_returncode_policy>::reset(&this[5]);
          if ( (int)DCompositionCreateAnimationStats(&this[5]) >= 0 )
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5->m128i_i64[0] + 24LL))(v5->m128i_i64[0], 0LL);
        }
        else if ( v5->m128i_i64[0] )
        {
          GetAnimationScenarioNameFromGUID(&this[2], v16, 64LL);
          v6 = v5->m128i_i64[0];
          v14 = 0LL;
          v15 = 0;
          v13 = 0LL;
          if ( (*(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v6 + 88LL))(v6, &v13) >= 0 )
          {
            v7 = v5->m128i_i64[0];
            v8 = *(void (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD, _BYTE *, _QWORD, int))(*(_QWORD *)v5->m128i_i64[0]
                                                                                                  + 216LL);
            v9 = (*(__int64 (__fastcall **)(__m128i *))(this->m128i_i64[0] + 32))(this);
            v12 = v15;
            v10 = v13;
            v11 = v14;
            v8(v7, &v10, 0LL, 0LL, v16, 0LL, v9);
          }
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5->m128i_i64[0] + 40LL))(v5->m128i_i64[0], 0LL);
          wil::com_ptr_t<IDCompositionAnimationStats,wil::err_returncode_policy>::reset(&this[5]);
        }
      }
    }
  }
}

/*
 * XREFs of _lambda_e56d8910bbf57adb71c0704c39bb5897_::operator() @ 0x180100F20
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_e56d8910bbf57adb71c0704c39bb5897__bool_ISaDeviceProxy___::_Do_call @ 0x180102620 (std--_Func_impl_no_alloc__lambda_e56d8910bbf57adb71c0704c39bb5897__bool_ISaDeviceProxy___--_Do_c.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     WPP_SF_qdd @ 0x1800CFF08 (WPP_SF_qdd.c)
 *     WPP_SF_qDD @ 0x180102780 (WPP_SF_qDD.c)
 *     WPP_SF_qdddd @ 0x1801027E8 (WPP_SF_qdddd.c)
 *     WPP_SF_qii @ 0x180102870 (WPP_SF_qii.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall lambda_e56d8910bbf57adb71c0704c39bb5897_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  _DWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // edi
  __int64 v16; // rax
  unsigned __int16 *v17; // rdi
  size_t v18; // rsi
  const void *v19; // rax
  __int64 v21; // rcx
  int v22; // edi
  int v23; // esi
  int v24; // ebx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // [rsp+20h] [rbp-48h]
  int v29; // [rsp+28h] [rbp-40h]
  _BYTE v30[16]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*a1 + 32);
  if ( v4 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) )
  {
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 40LL))(a2, v30);
    v9 = *a1;
    v10 = *(_QWORD *)(*a1 + 48) - *v8;
    if ( !v10 )
      v10 = *(_QWORD *)(v9 + 56) - v8[1];
    if ( v10 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v11 = *(_DWORD *)(v9 + 48);
        v12 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 40LL))(a2, v30);
        WPP_SF_qDD(*((_QWORD *)WPP_GLOBAL_Control + 2), v13, v14, a2, *v12, v11);
      }
    }
    else
    {
      v15 = *(_DWORD *)(v9 + 8);
      if ( v15 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 96LL))(a2) )
      {
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
        v17 = *(unsigned __int16 **)(*a1 + 16);
        v18 = v17[8] + 18LL;
        if ( v18 == *(unsigned __int16 *)(v16 + 16) + 18LL )
        {
          v19 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
          if ( !memcmp_0(v17, v19, v18) )
            return 1;
        }
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v21 = *(_QWORD *)(*a1 + 16);
          v22 = *(unsigned __int16 *)(v21 + 2);
          v23 = *(_DWORD *)(v21 + 4);
          v24 = *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) + 2);
          v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
          WPP_SF_qdddd(*((_QWORD *)WPP_GLOBAL_Control + 2), v26, v27, a2, *(_DWORD *)(v25 + 4), v24, v23, v22);
        }
      }
      else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v29 = v15;
        v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 96LL))(a2);
        WPP_SF_qdd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xCu,
          (__int64)&WPP_315cf95596543faf822237737ca2f47c_Traceguids,
          a2,
          v28,
          v29);
      }
    }
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
    WPP_SF_qii(*((_QWORD *)WPP_GLOBAL_Control + 2), v6, v7, a2, v5, v4);
  }
  return 0;
}

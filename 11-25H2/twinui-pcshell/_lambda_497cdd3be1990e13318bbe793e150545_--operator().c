/*
 * XREFs of _lambda_497cdd3be1990e13318bbe793e150545_::operator() @ 0x1801AE108
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_497cdd3be1990e13318bbe793e150545___::Run @ 0x180240C20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_497cdd3be1990e13318bbe793e150545___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_497cdd3be1990e13318bbe793e150545_::operator()(_QWORD *a1)
{
  __int64 result; // rax
  unsigned int i; // r14d
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 *v6; // rax
  unsigned int j; // esi
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // [rsp+30h] [rbp-18h] BYREF
  __int64 v17; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v18; // [rsp+80h] [rbp+38h] BYREF
  unsigned int v19; // [rsp+88h] [rbp+40h] BYREF
  __int64 v20; // [rsp+90h] [rbp+48h] BYREF
  __int64 v21; // [rsp+98h] [rbp+50h] BYREF

  v19 = 0;
  result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)a1[1] + 24LL))(a1[1], &v19);
  for ( i = 0; i < v19; ++i )
  {
    v16 = 0LL;
    v4 = a1[1];
    v5 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v4 + 32LL);
    v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v16);
    result = v5(v4, i, &GUID_2ccdcaf2_ca4f_45b0_940b_d5b78a628060, v6);
    if ( (int)result >= 0 )
    {
      v18 = 0;
      result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a1 + 24LL))(*a1, &v18);
      for ( j = 0; j < v18; ++j )
      {
        v20 = 0LL;
        v8 = *a1;
        v9 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)*a1 + 32LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
        result = v9(v8, j, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v20);
        if ( (int)result >= 0 )
        {
          v21 = 0LL;
          v10 = v20;
          v11 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v20 + 24LL);
          v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v21);
          result = v11(v10, 0LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v12);
          if ( (int)result >= 0 )
          {
            v17 = 0LL;
            (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 32LL))(v21, &v17);
            result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v16 + 24LL))(
                       v16,
                       v20,
                       *((unsigned int *)a1 + 4),
                       v17);
          }
          v13 = v21;
          if ( v21 )
          {
            v21 = 0LL;
            result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          }
        }
        v14 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    v15 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  return result;
}

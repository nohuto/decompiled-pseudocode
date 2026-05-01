/*
 * XREFs of _lambda_7695e591477d8b1c45133260318902fa_::operator() @ 0x18017EAB8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7695e591477d8b1c45133260318902fa___::Run @ 0x18017E7F0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_7695e591477d8b1c45133260318902fa___--.c)
 * Callees:
 *     ?PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x18017EC68 (-PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_7695e591477d8b1c45133260318902fa_::operator()(_QWORD *a1)
{
  float v2; // xmm7_4
  float v3; // xmm6_4
  float v4; // xmm9_4
  int v5; // eax
  float v6; // xmm8_4
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rdx
  const char *v11; // r9
  float *v12; // rax
  __int64 result; // rax
  RTL_SRWLOCK *SRWLock; // [rsp+20h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = (float)**(int **)*a1;
  v3 = (float)*(int *)(*(_QWORD *)*a1 + 4LL);
  v4 = (float)(*(_DWORD *)(*(_QWORD *)*a1 + 8LL) - **(_DWORD **)*a1);
  v5 = *(_DWORD *)(*(_QWORD *)*a1 + 12LL) - *(_DWORD *)(*(_QWORD *)*a1 + 4LL);
  v6 = (float)v5;
  v7 = *(_QWORD *)(a1[1] + 280LL);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 208LL))(v7);
    v8 = a1[1];
    v9 = 3;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 280) + 224LL))(*(_QWORD *)(v8 + 280));
    *(_BYTE *)(v8 + 488) = 1;
    v12 = (float *)(v8 + 476);
    if ( *(float *)(v8 + 472) == v2 && *v12 == v3 )
    {
      v9 = 2;
    }
    else
    {
      *(float *)(v8 + 472) = v2;
      *v12 = v3;
    }
    LOBYTE(v10) = 0;
    if ( *(float *)(v8 + 480) == v4 && *(float *)(v8 + 484) == v6 )
    {
      v9 &= ~2u;
    }
    else
    {
      *(float *)(v8 + 480) = v4;
      *(float *)(v8 + 484) = v6;
      LOBYTE(v10) = 1;
    }
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v8 + 168LL))(v8, v10, 0LL);
      UwpWindowWrapperBase::PushBoundsToWindow(v8, v9);
      if ( (v9 & 2) != 0 && !*(_BYTE *)(v8 + 548) )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 224LL))(v8);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xE0,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v11);
  }
  return result;
}

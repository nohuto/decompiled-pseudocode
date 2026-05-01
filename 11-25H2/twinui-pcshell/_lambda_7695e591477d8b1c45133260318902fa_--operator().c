/*
 * XREFs of _lambda_7695e591477d8b1c45133260318902fa_::operator() @ 0x18011280C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7695e591477d8b1c45133260318902fa___::Run @ 0x180112540 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_7695e591477d8b1c45133260318902fa___--.c)
 * Callees:
 *     ?PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1801129B4 (-PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_7695e591477d8b1c45133260318902fa_::operator()(_QWORD *a1)
{
  float v1; // xmm7_4
  float v2; // xmm6_4
  float v3; // xmm9_4
  int v4; // eax
  float v5; // xmm8_4
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // rdx
  const char *v9; // r9
  float *v10; // rax
  __int64 result; // rax
  RTL_SRWLOCK *SRWLock; // [rsp+20h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = (float)**(int **)*a1;
  v2 = (float)*(int *)(*(_QWORD *)*a1 + 4LL);
  v3 = (float)(*(_DWORD *)(*(_QWORD *)*a1 + 8LL) - **(_DWORD **)*a1);
  v4 = *(_DWORD *)(*(_QWORD *)*a1 + 12LL) - *(_DWORD *)(*(_QWORD *)*a1 + 4LL);
  v5 = (float)v4;
  v6 = a1[1];
  try
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 280) + 208LL))(*(_QWORD *)(v6 + 280));
    v7 = 3;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 280) + 224LL))(*(_QWORD *)(v6 + 280));
    *(_BYTE *)(v6 + 504) = 1;
    v10 = (float *)(v6 + 492);
    if ( *(float *)(v6 + 488) == v1 && *v10 == v2 )
    {
      v7 = 2;
    }
    else
    {
      *(float *)(v6 + 488) = v1;
      *v10 = v2;
    }
    LOBYTE(v8) = 0;
    if ( *(float *)(v6 + 496) == v3 && *(float *)(v6 + 500) == v5 )
    {
      v7 &= ~2u;
    }
    else
    {
      *(float *)(v6 + 496) = v3;
      *(float *)(v6 + 500) = v5;
      LOBYTE(v8) = 1;
    }
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v6 + 168LL))(v6, v8, 0LL);
      UwpWindowWrapperBase::PushBoundsToWindow(v6, v7);
      if ( (v7 & 2) != 0 && !*(_BYTE *)(v6 + 564) )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 224LL))(v6);
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
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v9);
  }
  return result;
}

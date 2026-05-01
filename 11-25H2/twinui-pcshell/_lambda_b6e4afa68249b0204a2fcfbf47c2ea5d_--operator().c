/*
 * XREFs of _lambda_b6e4afa68249b0204a2fcfbf47c2ea5d_::operator() @ 0x180190E44
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b6e4afa68249b0204a2fcfbf47c2ea5d___::Run @ 0x18020A750 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b6e4afa68249b0204a2fcfbf47c2ea5d___--Run.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_b6e4afa68249b0204a2fcfbf47c2ea5d_::operator()(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  PCWSTR StringRawBuffer; // rdi
  int v5; // edx
  int v6; // edx
  int v7; // esi
  __int64 v8; // [rsp+50h] [rbp+20h] BYREF
  __int64 v9; // [rsp+58h] [rbp+28h] BYREF
  PSRWLOCK SRWLock; // [rsp+60h] [rbp+30h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*a1 + 280LL) + 192LL))(
             *(_QWORD *)(*a1 + 280LL),
             &v8);
  v3 = v8;
  if ( !v8 )
    goto LABEL_9;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*a1 + 312LL), 0LL);
  v9 = -1LL;
  result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*a1 + 8LL) + 584LL))(*a1 + 8LL, &v9);
  v5 = *((_DWORD *)a1 + 6);
  if ( !v5 )
  {
    (*(void (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, _DWORD))(*(_QWORD *)v8 + 24LL))(
      v8,
      StringRawBuffer,
      v9,
      a1[2],
      0);
    goto LABEL_5;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
LABEL_5:
      (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*a1 + 280LL) + 216LL))(
        *(_QWORD *)(*a1 + 280LL),
        &SRWLock);
      v7 = ((*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 144LL))(*a1) - 4 > 1) + 2;
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      result = (*(__int64 (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, int))(*(_QWORD *)v8 + 24LL))(
                 v8,
                 StringRawBuffer,
                 v9,
                 a1[2],
                 v7);
    }
  }
  else
  {
    result = (*(__int64 (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, int))(*(_QWORD *)v8 + 24LL))(
               v8,
               StringRawBuffer,
               v9,
               a1[2],
               1);
  }
  v3 = v8;
LABEL_9:
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return result;
}

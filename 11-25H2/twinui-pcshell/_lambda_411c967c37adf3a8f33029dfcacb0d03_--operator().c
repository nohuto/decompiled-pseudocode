/*
 * XREFs of _lambda_411c967c37adf3a8f33029dfcacb0d03_::operator() @ 0x180308C68
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_411c967c37adf3a8f33029dfcacb0d03___::Run @ 0x180309A10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_411c967c37adf3a8f33029dfcacb0d03___--Run.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall lambda_411c967c37adf3a8f33029dfcacb0d03_::operator()(__int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 120LL) + 112LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL),
      4LL,
      *(_BYTE *)(a1 + 24) != 0 ? 4 : 0);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 8) + 208LL);
  ReleaseSRWLockExclusive(v3);
}

/*
 * XREFs of ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x1800138E8
 * Callers:
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x180013620 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     _lambda_0181179693446beb1d5841bdc72a572d_::operator() @ 0x1804694FC (_lambda_0181179693446beb1d5841bdc72a572d_--operator().c)
 *     _lambda_3b092b602b32291197616247ac44fb10_::operator() @ 0x180469BA8 (_lambda_3b092b602b32291197616247ac44fb10_--operator().c)
 *     _lambda_9bbb35718b31022091a790d2d74f2a46_::operator() @ 0x18046AA34 (_lambda_9bbb35718b31022091a790d2d74f2a46_--operator().c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x18046E964 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 * Callees:
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x180289FE8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::FindFrameWrapper(RTL_SRWLOCK *a1, __int64 a2, __int64 *a3)
{
  RTL_SRWLOCK *v6; // rdi
  char *Ptr; // rbx
  char *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx

  v6 = a1 + 53;
  AcquireSRWLockShared(a1 + 53);
  Ptr = (char *)a1[54].Ptr;
  v8 = (char *)a1[55].Ptr;
  while ( Ptr != v8
       && ((unsigned __int8)std::_Atomic_storage<bool,1>::load(*(_QWORD *)Ptr + 32LL)
        || !*(_BYTE *)(v9 + 33)
        || !*(_QWORD *)(v9 + 56)
        || *(_DWORD *)(**(_QWORD **)(v9 + 48) + 16LL) == -1
        || *(_DWORD *)(v9 + 104) == -1
        || (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)Ptr + 8LL) + 24LL))(
             *(_QWORD *)(*(_QWORD *)Ptr + 8LL),
             a2) != 1) )
    Ptr += 16;
  if ( Ptr == a1[55].Ptr )
  {
    if ( v6 )
      ReleaseSRWLockShared(v6);
    return 2147943568LL;
  }
  else
  {
    v10 = *(_QWORD *)(*(_QWORD *)Ptr + 8LL);
    if ( *a3 != v10 )
    {
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v11 = *a3;
      *a3 = v10;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( v6 )
      ReleaseSRWLockShared(v6);
    return 0LL;
  }
}

/*
 * XREFs of ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x1802DD7EC
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_fee8cea507d2413a58be13acfb66740a_@@CA@PEAX@Z @ 0x1802DBC30 (-_lambda_invoker_cdecl_@_lambda_fee8cea507d2413a58be13acfb66740a_@@CA@PEAX@Z.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

void __fastcall wil::details::EnabledStateManager::OnStateChange(RTL_SRWLOCK *this)
{
  volatile signed __int32 **Ptr; // rax
  volatile signed __int32 **v3; // r8
  int v4; // eax
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( LOBYTE(this->Ptr) )
  {
    wil::AcquireSRWLockExclusive(&v5, this + 1);
    Ptr = (volatile signed __int32 **)this[10].Ptr;
    v3 = (volatile signed __int32 **)this[11].Ptr;
    while ( Ptr != v3 )
    {
      _InterlockedAnd(Ptr[1], *(_DWORD *)Ptr != 0 ? -5 : -2111);
      Ptr += 2;
    }
    this[11].Ptr = this[10].Ptr;
    v4 = 1;
    if ( HIDWORD(this[3].Ptr) != -1 )
      v4 = HIDWORD(this[3].Ptr) + 1;
    HIDWORD(this[3].Ptr) = v4;
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
  }
}

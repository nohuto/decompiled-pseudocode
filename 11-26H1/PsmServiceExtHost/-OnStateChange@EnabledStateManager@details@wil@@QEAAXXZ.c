/*
 * XREFs of ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x18006CA74
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_fee8cea507d2413a58be13acfb66740a_@@CA@PEAX@Z @ 0x180070F90 (-_lambda_invoker_cdecl_@_lambda_fee8cea507d2413a58be13acfb66740a_@@CA@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::EnabledStateManager::OnStateChange(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  volatile signed __int32 **Ptr; // rax
  volatile signed __int32 **v4; // rdx
  int v5; // edx

  if ( LOBYTE(this->Ptr) )
  {
    v2 = this + 1;
    AcquireSRWLockExclusive(this + 1);
    Ptr = (volatile signed __int32 **)this[10].Ptr;
    v4 = (volatile signed __int32 **)this[11].Ptr;
    while ( Ptr != v4 )
    {
      _InterlockedAnd(Ptr[1], *(_DWORD *)Ptr != 0 ? -5 : -2111);
      Ptr += 2;
    }
    v5 = 1;
    this[11].Ptr = this[10].Ptr;
    if ( HIDWORD(this[3].Ptr) != -1 )
      v5 = HIDWORD(this[3].Ptr) + 1;
    HIDWORD(this[3].Ptr) = v5;
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
}

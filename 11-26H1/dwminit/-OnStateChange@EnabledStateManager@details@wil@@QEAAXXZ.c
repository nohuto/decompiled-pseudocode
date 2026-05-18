/*
 * XREFs of ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x18000A158
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_1_@?4??EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ@SA@PEAX@Z @ 0x180006E30 (-_lambda_invoker_cdecl_@_lambda_1_@-4--EnsureSubscribedToFeatureConfigurationChangesImpl@Enabled.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::EnabledStateManager::OnStateChange(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  volatile signed __int32 **Ptr; // rax
  volatile signed __int32 **v4; // rdx
  int v5; // edx

  if ( LODWORD(this->Ptr) )
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

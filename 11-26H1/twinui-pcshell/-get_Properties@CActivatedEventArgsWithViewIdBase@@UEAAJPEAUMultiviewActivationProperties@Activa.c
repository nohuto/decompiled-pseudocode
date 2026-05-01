/*
 * XREFs of ?get_Properties@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUMultiviewActivationProperties@Activation@ApplicationModel@Windows@@@Z @ 0x1801EF590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActivatedEventArgsWithViewIdBase::get_Properties(
        CActivatedEventArgsWithViewIdBase *this,
        struct Windows::ApplicationModel::Activation::MultiviewActivationProperties *a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = (RTL_SRWLOCK *)((char *)this + 40);
  AcquireSRWLockShared((PSRWLOCK)this + 5);
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 24);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}

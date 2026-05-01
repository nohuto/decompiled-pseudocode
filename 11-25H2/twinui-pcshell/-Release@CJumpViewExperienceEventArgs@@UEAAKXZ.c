/*
 * XREFs of ?Release@CJumpViewExperienceEventArgs@@UEAAKXZ @ 0x1802CFFB0
 * Callers:
 *     ?Release@?$EventInvocationContext@$00@details@wil@@W7EAAKXZ @ 0x180366FB0 (-Release@-$EventInvocationContext@$00@details@wil@@W7EAAKXZ.c)
 *     ?Release@CJumpViewExperienceEventArgs@@WBA@EAAKXZ @ 0x180366FC0 (-Release@CJumpViewExperienceEventArgs@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CJumpViewExperienceEventArgs::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceEventArgs,Microsoft::WRL::FtmBase>::Release(this);
}

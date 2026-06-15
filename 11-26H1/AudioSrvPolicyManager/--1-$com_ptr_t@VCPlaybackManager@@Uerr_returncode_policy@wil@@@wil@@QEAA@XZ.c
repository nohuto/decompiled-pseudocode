/*
 * XREFs of ??1?$com_ptr_t@VCPlaybackManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180045EC8
 * Callers:
 *     ??1CWindowsPolicyManager@@UEAA@XZ @ 0x18004605C (--1CWindowsPolicyManager@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800413E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 */

__int64 __fastcall wil::com_ptr_t<CPlaybackManager,wil::err_returncode_policy>::~com_ptr_t<CPlaybackManager,wil::err_returncode_policy>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(
             v2,
             a2);
  return result;
}

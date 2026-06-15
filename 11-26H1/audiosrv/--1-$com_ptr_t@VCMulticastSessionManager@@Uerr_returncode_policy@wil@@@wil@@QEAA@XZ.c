/*
 * XREFs of ??1?$com_ptr_t@VCMulticastSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18010719C
 * Callers:
 *     _dynamic_atexit_destructor_for__s_MulticastSessionManager__ @ 0x18016D2C0 (_dynamic_atexit_destructor_for__s_MulticastSessionManager__.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMulticastSessionManager@@UIMulticastManagerNotificationClient@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801082D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMulticastSessio.c)
 */

__int64 __fastcall wil::com_ptr_t<CMulticastSessionManager,wil::err_returncode_policy>::~com_ptr_t<CMulticastSessionManager,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMulticastSessionManager,IMulticastManagerNotificationClient>::Release(v1);
  return result;
}

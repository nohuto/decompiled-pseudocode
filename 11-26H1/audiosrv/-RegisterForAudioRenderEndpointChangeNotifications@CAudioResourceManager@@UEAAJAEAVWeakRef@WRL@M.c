/*
 * XREFs of ?RegisterForAudioRenderEndpointChangeNotifications@CAudioResourceManager@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x1800ADD40
 * Callers:
 *     ?ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ @ 0x1800B0748 (-ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_f7a716bfe224096f553bb41568304cf0_::_lambda_f7a716bfe224096f553bb41568304cf0_ @ 0x1800ADDB8 (_lambda_f7a716bfe224096f553bb41568304cf0_--_lambda_f7a716bfe224096f553bb41568304cf0_.c)
 *     wil::init_once__lambda_b97ad778945d7336730384125f54d282___ @ 0x1800ADDC8 (wil--init_once__lambda_b97ad778945d7336730384125f54d282___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioResourceManager::RegisterForAudioRenderEndpointChangeNotifications(
        union _RTL_RUN_ONCE *this,
        struct Microsoft::WRL::WeakRef *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v8; // [rsp+30h] [rbp+8h] BYREF

  lambda_f7a716bfe224096f553bb41568304cf0_::_lambda_f7a716bfe224096f553bb41568304cf0_(&v8, &this[-4]);
  wil::init_once__lambda_b97ad778945d7336730384125f54d282___(this + 4);
  v4 = (*(__int64 (__fastcall **)(__int64, struct Microsoft::WRL::WeakRef *))(*((_QWORD *)this[5].Ptr + 1) + 24LL))(
         (__int64)this[5].Ptr + 8,
         a2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE77,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}

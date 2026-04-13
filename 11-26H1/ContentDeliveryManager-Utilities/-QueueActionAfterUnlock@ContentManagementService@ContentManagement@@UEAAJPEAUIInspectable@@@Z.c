/*
 * XREFs of ?QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z @ 0x180056890
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VUnlockActionHelper@@V1@AEAPEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEAPEAVUnlockActionHelper@@AEAPEAUIInspectable@@@Z @ 0x1800477A4 (--$MakeAndInitialize@VUnlockActionHelper@@V1@AEAPEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEA.c)
 *     ?InternalRelease@?$ComPtr@VUnlockActionHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x180053EE8 (-InternalRelease@-$ComPtr@VUnlockActionHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ @ 0x180090320 (-QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::ContentManagementService::QueueActionAfterUnlock(
        ContentManagement::ContentManagementService *this,
        struct IInspectable *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IInspectable *v7; // [rsp+38h] [rbp+10h] BYREF
  UnlockActionHelper *v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = a2;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<UnlockActionHelper>::InternalRelease((__int64 *)&v8);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<UnlockActionHelper,UnlockActionHelper,IInspectable * &>(&v8, &v7);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v2 = UnlockActionHelper::QueueActionAfterUnlock(v8);
    v3 = v2;
    if ( v2 >= 0 )
    {
      v3 = 0;
      goto LABEL_7;
    }
    v4 = 911LL;
  }
  else
  {
    v4 = 910LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v2);
LABEL_7:
  Microsoft::WRL::ComPtr<UnlockActionHelper>::InternalRelease((__int64 *)&v8);
  return v3;
}

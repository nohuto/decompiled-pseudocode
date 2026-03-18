/*
 * XREFs of UserDetachQueueFromInputWindow @ 0x1400D81D8
 * Callers:
 *     UserDetachQueueFromInputWindowApiExt @ 0x1400D81C0 (UserDetachQueueFromInputWindowApiExt.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x14005C540 (IsWindowBeingDestroyed.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400C7970 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400D882C (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?DetachInputQueueFromWindow@@YAXPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1401F7BE0 (-DetachInputQueueFromWindow@@YAXPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 */

void __fastcall UserDetachQueueFromInputWindow(__int64 a1, struct IInputQueue *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  struct tagWND *v6; // r8
  bool v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = IS_USERCRIT_OWNED_EXCLUSIVE();
  if ( !v7 )
    EnterCrit(1LL, 0LL);
  LOBYTE(v4) = 1;
  v5 = HMValidateHandleNoSecure(a1, v4);
  if ( v5 && !(unsigned int)IsWindowBeingDestroyed(v5) )
    DetachInputQueueFromWindow(v6, a2);
  ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v7);
}

/*
 * XREFs of NtUserDestroyAcceleratorTable @ 0x140202140
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 */

__int64 __fastcall NtUserDestroyAcceleratorTable(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdi

  EnterCrit(0LL, 0LL);
  LOBYTE(v2) = 8;
  v3 = HMValidateHandleWithDescriptor(a1, v2);
  v5 = 0LL;
  v6 = v3;
  if ( v3 )
  {
    if ( (unsigned int)HMMarkObjectDestroy(v3) )
      HMFreeObject(v6);
    v5 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}

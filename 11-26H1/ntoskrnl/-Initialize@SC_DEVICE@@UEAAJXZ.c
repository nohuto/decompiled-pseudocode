/*
 * XREFs of ?Initialize@SC_DEVICE@@UEAAJXZ @ 0x140721110
 * Callers:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x14071FE30 (-Initialize@SC_DISK@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PspUserApcKernelRoutine @ 0x1409FEEE0 (PspUserApcKernelRoutine.c)
 */

__int64 __fastcall SC_DEVICE::Initialize(SC_DEVICE *this)
{
  int v2; // ebx
  DEVPROPKEY v4; // [rsp+28h] [rbp-30h] BYREF

  v4 = DEVPKEY_Device_ClassGuid;
  v2 = guard_dispatch_icall_no_overrides(this, &v4);
  if ( v2 < 0 )
  {
    return 0;
  }
  else
  {
    *(_OWORD *)((char *)this + 8) = MEMORY[0];
    PspUserApcKernelRoutine(0LL);
  }
  return (unsigned int)v2;
}

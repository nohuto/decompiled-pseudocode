/*
 * XREFs of IommupHvInitializeLibrary @ 0x140CBAB84
 * Callers:
 *     IommuInitializeLibrary @ 0x14059ECE4 (IommuInitializeLibrary.c)
 * Callees:
 *     IommuHvInitializeSvmLibrary @ 0x14059FD9C (IommuHvInitializeSvmLibrary.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvInitializeLibrary(__int64 a1, __int64 a2)
{
  int v2; // edi
  char v3; // al
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v8; // [rsp+30h] [rbp-30h]
  __int128 v9; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v10; // [rsp+50h] [rbp-10h]

  v2 = 0;
  v10 = 0;
  v9 = 0LL;
  if ( !qword_140FBB4B8 )
    return 3221225659LL;
  guard_dispatch_icall_no_overrides((__int64)&v9, a2);
  v3 = v9;
  if ( (v9 & 1) == 0 && (!HalpHvParaVirtIommuDomain || (v9 & 4) == 0) )
    return 3221225659LL;
  v4 = v10;
  v5 = DWORD1(v9);
  if ( v10 && v10 < DWORD1(v9) )
    v5 = v10;
  if ( HalpHvParaVirtIommuDomain && (v9 & 4) != 0 )
  {
    LOBYTE(IommuInterfaceStateChangeCallbackPushLock.StackLimit) = 1;
    v4 = v10;
    LODWORD(IommuInterfaceStateChangeCallbackPushLock.CycleTime) = _InterlockedIncrement(&HalpIommuDomainId);
    v3 = v9;
  }
  if ( (v3 & 1) == 0 || (v8 = v4, v7 = v9, v2 = IommuHvInitializeSvmLibrary((__int64)&v7), v2 >= 0) )
  {
    LODWORD(IommuInterfaceStateChangeCallbackPushLock.KernelStack) = v5;
    IommuInterfaceStateChangeCallbackPushLock.StackBase = 0LL;
  }
  return (unsigned int)v2;
}

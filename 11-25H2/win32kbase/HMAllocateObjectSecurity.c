/*
 * XREFs of HMAllocateObjectSecurity @ 0x140127118
 * Callers:
 *     ?UserSetWindowMessageCapability@@YAHPEAUHWND__@@IPEAXH@Z @ 0x140126640 (-UserSetWindowMessageCapability@@YAHPEAUHWND__@@IPEAXH@Z.c)
 *     ?UserSetUserObjectCapability@@YAHPEAXK0H@Z @ 0x140169480 (-UserSetUserObjectCapability@@YAHPEAXK0H@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall HMAllocateObjectSecurity(__int64 a1, char a2)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // rax

  if ( a2 == 1 || a2 == 23 )
    v3 = 144LL;
  else
    v3 = 40LL;
  v4 = Win32AllocPoolZInitImpl(256LL, v3, 0x736F7355u);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 24) = v4;
    return 1LL;
  }
  else
  {
    UserSetLastError(8);
    return 0LL;
  }
}

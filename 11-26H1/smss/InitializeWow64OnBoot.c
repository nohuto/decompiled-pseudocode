/*
 * XREFs of InitializeWow64OnBoot @ 0x14000B860
 * Callers:
 *     SmpInit @ 0x140014CEC (SmpInit.c)
 * Callees:
 *     CreateRegistryLinksForMachine @ 0x14000B980 (CreateRegistryLinksForMachine.c)
 *     __chkstk_0 @ 0x14001E81F (__chkstk_0.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

__int64 InitializeWow64OnBoot()
{
  unsigned int v0; // ecx
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rcx
  void *v3; // rsp
  void *v4; // rsp
  unsigned int v6; // [rsp+30h] [rbp+0h]
  __int64 v7; // [rsp+38h] [rbp+8h] BYREF

  v7 = 0LL;
  v6 = 0;
  v0 = NtQuerySystemInformationEx(230LL, &v7, 8LL);
  if ( v0 == -1073741789 )
  {
    v1 = v6 + 15LL;
    if ( v1 <= v6 )
      v1 = 0xFFFFFFFFFFFFFF0LL;
    v2 = v1 & 0xFFFFFFFFFFFFFFF0uLL;
    v3 = alloca(v2);
    v4 = alloca(v2);
    return (unsigned int)NtQuerySystemInformationEx(230LL, &v7, 8LL);
  }
  return v0;
}

/*
 * XREFs of HalpTscGetAttributes @ 0x14059BA64
 * Callers:
 *     HalpTscDiscover @ 0x14059B918 (HalpTscDiscover.c)
 *     HalpTscInitialize @ 0x14059BC20 (HalpTscInitialize.c)
 * Callees:
 *     HalSocRequestApi @ 0x1404E885C (HalSocRequestApi.c)
 *     HalSocRequestConfigurationData @ 0x14059BCDC (HalSocRequestConfigurationData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTscGetAttributes(_BYTE *a1, _BYTE *a2, _BYTE *a3)
{
  int v7; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+38h] [rbp-20h] BYREF
  char v9; // [rsp+88h] [rbp+30h]
  int v10; // [rsp+90h] [rbp+38h] BYREF
  int v11; // [rsp+98h] [rbp+40h]

  *a1 = 0;
  *a2 = 0;
  *a3 = 0;
  v11 = 0;
  v10 = 0;
  v7 = 0;
  v9 = 0;
  v8 = 0LL;
  if ( (int)HalSocRequestApi((__int64)a1, 0LL, 2, 16LL, &v8) < 0 )
    goto LABEL_6;
  guard_dispatch_icall_no_overrides(2147483649LL, &v10);
  if ( (v11 & 0x8000000) != 0 )
    *a3 = 1;
  if ( (unsigned __int8)guard_dispatch_icall_no_overrides(0LL, 0LL) )
  {
    guard_dispatch_icall_no_overrides(0x80000000LL, &v7);
    return 3221225659LL;
  }
  else
  {
LABEL_6:
    *a1 = 1;
    *a2 = 1;
    return 0LL;
  }
}

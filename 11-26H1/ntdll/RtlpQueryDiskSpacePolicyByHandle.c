/*
 * XREFs of RtlpQueryDiskSpacePolicyByHandle @ 0x18015AC68
 * Callers:
 *     RtlpQueryDiskSpacePolicy @ 0x18015AB18 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     ZwQueryVolumeInformationFile @ 0x18015F860 (ZwQueryVolumeInformationFile.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpQueryDiskSpacePolicyByHandle(__int64 a1, int *a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  int v5; // eax
  __int128 v6; // [rsp+30h] [rbp-48h] BYREF
  __int128 v7; // [rsp+40h] [rbp-38h] BYREF
  __int128 v8; // [rsp+50h] [rbp-28h]

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  result = ZwQueryVolumeInformationFile(a1, &v6, &v7, 32LL, 7);
  if ( (int)result >= 0 )
  {
    v4 = v7 * DWORD2(v8) * (unsigned __int64)HIDWORD(v8);
    if ( v4 > 0x200000000LL )
    {
      if ( v4 > 0x800000000LL )
      {
        v5 = 20;
        if ( v4 <= 0x2000000000LL )
          v5 = 15;
        *a2 = v5;
      }
      else
      {
        *a2 = 10;
      }
    }
    else
    {
      *a2 = 5;
    }
    return 0LL;
  }
  return result;
}

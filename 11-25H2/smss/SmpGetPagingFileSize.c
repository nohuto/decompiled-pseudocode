/*
 * XREFs of SmpGetPagingFileSize @ 0x1400110CC
 * Callers:
 *     SmpCreatePagefileOnVolume @ 0x14000FA5C (SmpCreatePagefileOnVolume.c)
 * Callees:
 *     SmpLogFailureString @ 0x1400010B8 (SmpLogFailureString.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpGetPagingFileSize(void *a1, __int64 a2, _QWORD *a3)
{
  NTSTATUS v5; // eax
  __int64 v6; // r8
  unsigned int v7; // edi
  struct _IO_STATUS_BLOCK v9; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v9 = 0LL;
  v5 = NtQueryInformationFile(a1, &v9, &v10, 0x18u, FileStandardInformation);
  v6 = 0LL;
  v7 = v5;
  if ( v5 >= 0 )
  {
    *a3 = v10;
    return 0LL;
  }
  else
  {
    if ( a2 )
      v6 = *(_QWORD *)(a2 + 8);
    SmpLogFailureString((__int64)"SmpGetPagingFileSize", 0xFE7u, v6, v5);
    return v7;
  }
}

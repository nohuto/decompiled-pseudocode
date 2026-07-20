/*
 * XREFs of SmpTrimPagingFileExtents @ 0x14001187C
 * Callers:
 *     SmpCreatePagefileOnVolume @ 0x14000FA5C (SmpCreatePagefileOnVolume.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14001078C (SmpCreateWorkingSetSwapPagingFile.c)
 * Callees:
 *     SmpLogFailureString @ 0x1400010B8 (SmpLogFailureString.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpTrimPagingFileExtents(void *a1, __int64 a2)
{
  __int64 v2; // rbx
  NTSTATUS v4; // eax
  unsigned int v5; // edi
  struct _IO_STATUS_BLOCK v7; // [rsp+50h] [rbp-38h] BYREF
  _DWORD v8[2]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v9; // [rsp+68h] [rbp-20h]
  __int64 v10; // [rsp+70h] [rbp-18h]

  v2 = 0LL;
  v8[1] = 1;
  v8[0] = 0;
  v10 = -1LL;
  v7 = 0LL;
  v9 = 0LL;
  v4 = NtFsControlFile(a1, 0LL, 0LL, 0LL, &v7, 0x98208u, v8, 0x18u, 0LL, 0);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( a2 )
      v2 = *(_QWORD *)(a2 + 8);
    SmpLogFailureString((__int64)"SmpTrimPagingFileExtents", 0x102Eu, v2, v4);
  }
  return v5;
}

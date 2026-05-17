/*
 * XREFs of RtlpLookupCurDirSetting @ 0x18009B4AC
 * Callers:
 *     RtlpComputeSearchPath @ 0x18009AC60 (RtlpComputeSearchPath.c)
 *     RtlpComputeDllPath @ 0x18009BCE0 (RtlpComputeDllPath.c)
 * Callees:
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLookupCurDirSetting(__int64 a1, unsigned __int32 a2, volatile signed __int32 *a3)
{
  HANDLE v6; // rbx
  unsigned __int32 v7; // ecx
  __int64 result; // rax
  HANDLE Handle; // [rsp+30h] [rbp-30h] BYREF
  int v10; // [rsp+38h] [rbp-28h] BYREF
  __int128 v11; // [rsp+40h] [rbp-20h] BYREF

  v11 = 0LL;
  Handle = 0LL;
  v10 = 0;
  if ( !LdrpIsSecureProcess )
  {
    v6 = (HANDLE)qword_1801CB330;
    Handle = (HANDLE)qword_1801CB330;
    if ( !qword_1801CB330 )
    {
      if ( (int)NtOpenKey(&Handle, 1LL, &unk_180171BC8) < 0 )
      {
LABEL_7:
        v7 = a2;
        goto LABEL_8;
      }
      v6 = (HANDLE)_InterlockedCompareExchange64(&qword_1801CB330, (signed __int64)Handle, 0LL);
      if ( v6 )
      {
        NtClose(Handle);
        Handle = v6;
      }
      else
      {
        v6 = Handle;
      }
    }
    if ( (int)NtQueryValueKey(v6, a1, 2LL, &v11, 16, &v10) >= 0 && v10 == 16 )
    {
      v7 = HIDWORD(v11);
      if ( HIDWORD(v11) < 2 )
        goto LABEL_8;
    }
    goto LABEL_7;
  }
  v7 = 1;
LABEL_8:
  result = (unsigned int)_InterlockedCompareExchange(a3, v7, 0);
  if ( !(_DWORD)result )
    return v7;
  return result;
}

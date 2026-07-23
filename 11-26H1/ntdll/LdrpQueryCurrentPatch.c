/*
 * XREFs of LdrpQueryCurrentPatch @ 0x1800CB3C0
 * Callers:
 *     LdrpLoadDllInternal @ 0x18003C630 (LdrpLoadDllInternal.c)
 *     LdrpLoadPatchedNtdll @ 0x1800CB24C (LdrpLoadPatchedNtdll.c)
 *     LdrpMapAndSnapDependency @ 0x18011A410 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     LdrpIsImageAddress @ 0x18015CBF8 (LdrpIsImageAddress.c)
 *     ZwManageHotPatch @ 0x180161170 (ZwManageHotPatch.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpQueryCurrentPatch(__int64 a1, char *a2)
{
  char v2; // bl
  __int64 result; // rax
  unsigned int v6; // [rsp+20h] [rbp-40h] BYREF
  int v7; // [rsp+24h] [rbp-3Ch] BYREF
  _QWORD v8[3]; // [rsp+28h] [rbp-38h] BYREF
  __int128 v9; // [rsp+40h] [rbp-20h]
  __int64 v10; // [rsp+50h] [rbp-10h]

  v2 = 1;
  v8[2] = a1;
  v8[0] = 1LL;
  v10 = 0LL;
  v8[1] = -1LL;
  v9 = 0LL;
  result = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, int *, _QWORD))ZwManageHotPatch)(8LL, v8, 48LL, &v7, v6);
  if ( (_DWORD)result == -1073741800 )
  {
    v6 = 0;
    if ( (int)LdrpIsImageAddress(a1, &v6) >= 0 && !v6 )
    {
      result = 0LL;
      goto LABEL_4;
    }
LABEL_10:
    result = 3221226668LL;
    goto LABEL_4;
  }
  if ( (_DWORD)result == -1073741789 )
  {
    result = 0LL;
    goto LABEL_5;
  }
  if ( (_DWORD)result )
    goto LABEL_10;
LABEL_4:
  v2 = 0;
LABEL_5:
  *a2 = v2;
  return result;
}

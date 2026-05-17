/*
 * XREFs of RtlCreateVirtualAccountSid @ 0x180039D50
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     SymCryptSha1Result @ 0x180039BD0 (SymCryptSha1Result.c)
 *     SymCryptSha1Append @ 0x180039CF0 (SymCryptSha1Append.c)
 *     SymCryptSha1Init @ 0x180039D20 (SymCryptSha1Init.c)
 *     RtlUpcaseUnicodeString @ 0x18003AB90 (RtlUpcaseUnicodeString.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCreateVirtualAccountSid(__int64 a1, int a2, __int64 a3, unsigned int *a4)
{
  __int64 v8; // r8
  unsigned int v9; // eax
  __int64 result; // rax
  __int64 v11; // rdi
  unsigned int v12; // eax
  unsigned int v13[32]; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v14; // [rsp+A0h] [rbp-38h] BYREF
  int v15; // [rsp+B0h] [rbp-28h]

  v13[1] = 0;
  v14 = 0LL;
  memset_thunk_772440563353939046(v13, 0, 0x7CuLL);
  if ( !a1 || !a4 || (unsigned int)(a2 - 80) > 0x1F )
    return 3221225485LL;
  v9 = *a4;
  *a4 = 32;
  if ( v9 < 0x20 )
    return 3221225507LL;
  LOBYTE(v8) = 1;
  result = RtlUpcaseUnicodeString(&v14, a1, v8);
  if ( (int)result >= 0 )
  {
    SymCryptSha1Init((__int64)v13);
    v11 = *((_QWORD *)&v14 + 1);
    SymCryptSha1Append(v13, *((char **)&v14 + 1), (unsigned __int16)v14);
    SymCryptSha1Result(v13, &v14);
    if ( v11 )
      RtlpSysVolFree(v11);
    *(_WORD *)a3 = 1537;
    *(_DWORD *)(a3 + 2) = RtlpNtAuthority;
    *(_WORD *)(a3 + 6) = 1280;
    v12 = v14;
    *(_DWORD *)(a3 + 8) = a2;
    *(_QWORD *)(a3 + 12) = __PAIR64__(DWORD1(v14), v12);
    *(_QWORD *)(a3 + 20) = *((_QWORD *)&v14 + 1);
    *(_DWORD *)(a3 + 28) = v15;
    return 0LL;
  }
  return result;
}

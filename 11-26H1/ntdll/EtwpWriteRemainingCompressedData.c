/*
 * XREFs of EtwpWriteRemainingCompressedData @ 0x180078EC4
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x180078A04 (EtwpFinalizeLogFileHeader.c)
 * Callees:
 *     NtWriteFile @ 0x18015F040 (NtWriteFile.c)
 */

__int64 __fastcall EtwpWriteRemainingCompressedData(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  bool v3; // zf
  _QWORD *v8; // rsi
  int v9; // edx
  __int128 v10; // [rsp+50h] [rbp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 436) == 0;
  v10 = 0LL;
  *a2 = 0;
  *a3 = 0;
  if ( v3 )
    return 0LL;
  v8 = (_QWORD *)(a1 + 344);
  v9 = NtWriteFile(
         *(_QWORD *)(a1 + 128),
         0LL,
         0LL,
         0LL,
         &v10,
         *(_QWORD *)(a1 + 424),
         *(_DWORD *)(a1 + 192),
         a1 + 344,
         0LL);
  if ( v9 >= 0 )
  {
    *v8 += *(unsigned int *)(a1 + 436);
    *a2 = *(_DWORD *)(a1 + 440);
  }
  else
  {
    *a3 = *(_DWORD *)(a1 + 440);
  }
  return (unsigned int)v9;
}

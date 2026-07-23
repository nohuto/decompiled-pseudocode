/*
 * XREFs of I_MinCryptVerifySignerAuthenticatedAttributes @ 0x1408A8DE8
 * Callers:
 *     I_MinCryptVerifyAuthenticodeTimeStamp @ 0x1408A891C (I_MinCryptVerifyAuthenticodeTimeStamp.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x1408A8ED4 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     MinCryptHashMemory @ 0x1407215D0 (MinCryptHashMemory.c)
 *     I_MinCryptVerifyHashSignerAuthenticatedAttributes @ 0x1408A8B38 (I_MinCryptVerifyHashSignerAuthenticatedAttributes.c)
 */

__int64 __fastcall I_MinCryptVerifySignerAuthenticatedAttributes(unsigned int a1, void *a2, int *a3, __int64 a4)
{
  __int64 result; // rax
  char v7; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+38h] [rbp-30h]
  char *v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+48h] [rbp-20h]
  __int64 v11; // [rsp+50h] [rbp-18h]

  v7 = 49;
  result = I_MinCryptVerifyHashSignerAuthenticatedAttributes(a2, *a3, a4);
  if ( (int)result >= 0 )
  {
    v9 = &v7;
    v8 = 1;
    v11 = *(_QWORD *)(a4 + 8) + 1LL;
    v10 = *(_DWORD *)a4 - 1;
    return MinCryptHashMemory(a1);
  }
  return result;
}

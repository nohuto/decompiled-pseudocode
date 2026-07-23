/*
 * XREFs of I_MinCryptVerifyReturnSignerAuthenticatedAttributes @ 0x1408A8D68
 * Callers:
 *     MinCrypK_VerifySignedDataKModeEx @ 0x1408A8ED4 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     I_MinCryptVerifyHashSignerAuthenticatedAttributes @ 0x1408A8B38 (I_MinCryptVerifyHashSignerAuthenticatedAttributes.c)
 */

__int64 __fastcall I_MinCryptVerifyReturnSignerAuthenticatedAttributes(
        void *a1,
        int a2,
        _BYTE *a3,
        _DWORD *a4,
        __int64 a5)
{
  int v7; // ebx

  if ( *(_DWORD *)a5 > *a4 || !*a4 )
    return 3221225507LL;
  v7 = I_MinCryptVerifyHashSignerAuthenticatedAttributes(a1, a2, a5);
  if ( v7 >= 0 )
  {
    *a4 = *(_DWORD *)a5;
    *a3 = 49;
    memmove(a3 + 1, (const void *)(*(_QWORD *)(a5 + 8) + 1LL), (unsigned int)(*a4 - 1));
  }
  return (unsigned int)v7;
}

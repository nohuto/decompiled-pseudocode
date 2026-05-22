/*
 * XREFs of ?InitializeFromData@SipcSectionId@@QEAAJ_KPEBX@Z @ 0x1801121BC
 * Callers:
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXPEAPEAX@Z @ 0x1801113C0 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXPEAPEAX@Z.c)
 * Callees:
 *     ?IsInitialized@SipcSectionId@@QEBA_NXZ @ 0x180112378 (-IsInitialized@SipcSectionId@@QEBA_NXZ.c)
 *     SipcFailFast @ 0x18011347C (SipcFailFast.c)
 */

__int64 __fastcall SipcSectionId::InitializeFromData(UCHAR *this, ULONG cbInput, PUCHAR pbInput)
{
  NTSTATUS v6; // eax
  BCRYPT_ALG_HANDLE v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  NTSTATUS v11; // eax
  BCRYPT_HASH_HANDLE v12; // rcx
  int v13; // eax
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+40h] [rbp-10h] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+78h] [rbp+28h] BYREF

  phAlgorithm = 0LL;
  v6 = BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA256", 0LL, 0);
  v7 = phAlgorithm;
  if ( v6 < 0 )
  {
    v8 = v6 | 0x10000000;
    v9 = -2147418113;
    if ( v8 < 0 )
      v9 = v8;
LABEL_4:
    if ( v7 )
      BCryptCloseAlgorithmProvider(v7, 0);
    return v9;
  }
  phHash = 0LL;
  v11 = BCryptCreateHash(phAlgorithm, &phHash, 0LL, 0, 0LL, 0, 0);
  v12 = phHash;
  if ( v11 < 0 || (v11 = BCryptHashData(phHash, pbInput, cbInput, 0), v12 = phHash, v11 < 0) )
  {
LABEL_8:
    v13 = v11 | 0x10000000;
    v9 = -2147418113;
    if ( v13 < 0 )
      v9 = v13;
    if ( v12 )
    {
      BCryptDestroyHash(v12);
      phHash = 0LL;
    }
    v7 = phAlgorithm;
    goto LABEL_4;
  }
  v11 = BCryptFinishHash(phHash, this, 0x20u, 0);
  if ( v11 < 0 )
  {
    v12 = phHash;
    goto LABEL_8;
  }
  if ( !SipcSectionId::IsInitialized((SipcSectionId *)this) )
  {
    SipcFailFast(2147549183LL);
    __debugbreak();
  }
  if ( phHash )
  {
    BCryptDestroyHash(phHash);
    phHash = 0LL;
  }
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  return 0LL;
}

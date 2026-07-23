/*
 * XREFs of I_MinCryptCheckEKURequirements @ 0x1408A9CB0
 * Callers:
 *     I_MinCryptFindIssuerCertificateByName @ 0x1408A6B84 (I_MinCryptFindIssuerCertificateByName.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408A6EB4 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     MinAsn1StringToOid @ 0x1408AAF70 (MinAsn1StringToOid.c)
 */

char __fastcall I_MinCryptCheckEKURequirements(unsigned int a1, __int64 a2, __int64 a3)
{
  char v3; // bp
  unsigned int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rcx
  size_t v10; // r15
  unsigned int i; // esi
  size_t Size; // [rsp+20h] [rbp-C8h] BYREF
  void *Buf2; // [rsp+28h] [rbp-C0h]
  char v15; // [rsp+30h] [rbp-B8h] BYREF

  v3 = 0;
  HIDWORD(Size) = 0;
  if ( !a1 )
    return 1;
  if ( !a3 )
    return 1;
  v7 = *(_DWORD *)(a3 + 8);
  if ( !v7 )
    return 1;
  if ( v7 <= a1 )
  {
    v8 = 0LL;
    Buf2 = &v15;
LABEL_6:
    if ( (unsigned int)v8 >= *(_DWORD *)(a3 + 8) )
      return v3;
    v9 = *(_QWORD *)(a3 + 8 * v8 + 16);
    v3 = 0;
    LODWORD(Size) = 127;
    if ( (int)MinAsn1StringToOid(v9, &Size) >= 0 )
    {
      v10 = (unsigned int)Size;
      for ( i = 0; i < a1; ++i )
      {
        if ( *(_DWORD *)(a2 + 16LL * i) == (_DWORD)v10 && !memcmp(*(const void **)(a2 + 16LL * i + 8), Buf2, v10) )
        {
          v3 = 1;
          v8 = (unsigned int)(v8 + 1);
          goto LABEL_6;
        }
      }
      return v3;
    }
  }
  return 0;
}

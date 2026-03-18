/*
 * XREFs of AslpFileHasSecuromWrapper @ 0x14088E7E0
 * Callers:
 *     AslpFileGetExeWrapper @ 0x14088CBA4 (AslpFileGetExeWrapper.c)
 * Callees:
 *     MmIsUserAddress @ 0x14044E7C0 (MmIsUserAddress.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     strncmp @ 0x14073D360 (strncmp.c)
 */

__int64 __fastcall AslpFileHasSecuromWrapper(unsigned __int64 a1, unsigned __int16 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  bool IsUserAddress; // bp
  unsigned int i; // esi
  char *v7; // rcx
  char Str1[16]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+30h] [rbp-38h]
  __int64 v11; // [rsp+40h] [rbp-28h]

  v2 = a2;
  v3 = 0;
  *(_OWORD *)Str1 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  IsUserAddress = MmIsUserAddress(a1);
  for ( i = 0; i < v2; ++i )
  {
    v7 = (char *)(a1 + 40LL * i);
    if ( IsUserAddress )
    {
      RtlCopyFromUser(Str1, (void *)(a1 + 40LL * i), 0x28uLL);
      v7 = Str1;
    }
    if ( *((_DWORD *)v7 + 3) && *((_DWORD *)v7 + 2) && !strncmp(v7, ".securom", 8uLL) )
      return 1;
  }
  return v3;
}

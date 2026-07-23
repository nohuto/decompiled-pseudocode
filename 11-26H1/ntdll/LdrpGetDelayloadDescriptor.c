/*
 * XREFs of LdrpGetDelayloadDescriptor @ 0x18015C30C
 * Callers:
 *     LdrQueryOptionalDelayLoadedAPI @ 0x180114880 (LdrQueryOptionalDelayLoadedAPI.c)
 *     LdrResolveDelayLoadsFromDll @ 0x18015C190 (LdrResolveDelayLoadsFromDll.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1800785F0 (RtlImageDirectoryEntryToData.c)
 *     _stricmp @ 0x1801285A0 (_stricmp.c)
 */

char *__fastcall LdrpGetDelayloadDescriptor(void *a1, const char *a2)
{
  __int64 v4; // rdi
  char *v5; // r14
  ULONG v6; // esi
  ULONG i; // ebx
  char *v8; // rbp
  ULONG v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0;
  v4 = 0LL;
  v5 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 0xDu, &v10);
  if ( v5 )
  {
    v6 = v10 >> 5;
    for ( i = 0; ; ++i )
    {
      v8 = &v5[32 * i];
      if ( !*((_DWORD *)v8 + 1) || i >= v6 )
        break;
      if ( !stricmp((const char *)a1 + *((unsigned int *)v8 + 1), a2) )
        return &v5[32 * i];
    }
  }
  return (char *)v4;
}

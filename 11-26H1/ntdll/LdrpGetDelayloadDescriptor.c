/*
 * XREFs of LdrpGetDelayloadDescriptor @ 0x18015C44C
 * Callers:
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1801150A0 (LdrQueryOptionalDelayLoadedAPI.c)
 *     LdrResolveDelayLoadsFromDll @ 0x18015C2D0 (LdrResolveDelayLoadsFromDll.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180081250 (RtlImageDirectoryEntryToData.c)
 *     _stricmp @ 0x180128830 (_stricmp.c)
 */

_DWORD *__fastcall LdrpGetDelayloadDescriptor(unsigned __int64 a1, const char *a2)
{
  __int64 v4; // rdi
  _DWORD *v5; // r14
  unsigned int v6; // esi
  unsigned int i; // ebx
  _DWORD *v8; // rbp
  unsigned int v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0;
  v4 = 0LL;
  v5 = RtlImageDirectoryEntryToData(a1, 1, 0xDu, &v10);
  if ( v5 )
  {
    v6 = v10 >> 5;
    for ( i = 0; ; ++i )
    {
      v8 = &v5[8 * i];
      if ( !v8[1] || i >= v6 )
        break;
      if ( !stricmp((const char *)(a1 + (unsigned int)v8[1]), a2) )
        return &v5[8 * i];
    }
  }
  return (_DWORD *)v4;
}

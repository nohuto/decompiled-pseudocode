/*
 * XREFs of LdrpNameToOrdinal @ 0x1800B7B90
 * Callers:
 *     LdrpSnapModule @ 0x18011B2E0 (LdrpSnapModule.c)
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 */

__int64 __fastcall LdrpNameToOrdinal(
        const char *a1,
        unsigned int a2,
        _BYTE *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // ebx
  int v7; // r11d
  int v8; // r10d
  const char *v10; // rcx
  signed __int64 v11; // rdx
  unsigned __int8 v12; // al
  int v13; // ecx
  int v15; // eax

  v6 = 0;
  v7 = a4 - 1;
  v8 = a2;
  if ( a2 >= a4 )
    v8 = v7 / 2;
  while ( v7 >= v6 )
  {
    v10 = a1;
    v11 = &a3[*(unsigned int *)(a5 + 4LL * v8)] - a1;
    while ( 1 )
    {
      v12 = *v10;
      if ( *v10 != v10[v11] )
        break;
      ++v10;
      if ( !v12 )
      {
        v13 = 0;
        goto LABEL_8;
      }
    }
    v13 = v12 < (unsigned int)v10[v11] ? -1 : 1;
LABEL_8:
    if ( !v13 )
      return *(unsigned __int16 *)(a6 + 2LL * v8);
    if ( v13 >= 0 )
      v6 = v8 + 1;
    v15 = v8 - 1;
    if ( v13 >= 0 )
      v15 = v7;
    v7 = v15;
    v8 = (v6 + v15) / 2;
  }
  LdrpLogInternal(
    "minkernel\\ldr\\ldrsnap.c",
    2286,
    (__int64)"LdrpNameToOrdinal",
    1,
    "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
    a1,
    a3);
  return 0xFFFFFFFFLL;
}

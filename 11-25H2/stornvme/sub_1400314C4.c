/*
 * XREFs of sub_1400314C4 @ 0x1400314C4
 * Callers:
 *     sub_14002EBF8 @ 0x14002EBF8 (sub_14002EBF8.c)
 *     sub_14002EE7C @ 0x14002EE7C (sub_14002EE7C.c)
 *     sub_140031208 @ 0x140031208 (sub_140031208.c)
 * Callees:
 *     sub_140001EB0 @ 0x140001EB0 (sub_140001EB0.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

bool __fastcall sub_1400314C4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned int *a5,
        unsigned int *a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9)
{
  char v12; // al
  char v13; // bl
  __int64 RegistryBuffer; // rax
  __int64 v15; // rdi
  unsigned int v17; // eax
  unsigned int v18; // eax
  _BYTE *v19; // rdi
  int i; // ecx
  int v21; // eax
  _WORD *v22; // r10
  _BYTE *v23; // r9
  unsigned int v24; // ecx
  unsigned int v25; // edx
  unsigned int v26; // ecx
  unsigned int v27; // ecx

  v12 = StorPortRegistryRead(a1, a2, 1LL);
  v13 = 0;
  if ( v12 )
  {
LABEL_13:
    if ( v12 == 1 && *a6 >= 2 && *a5 >= 2 )
    {
      v19 = (_BYTE *)*a4;
      if ( *(_BYTE *)*a4 || v19[1] )
      {
        for ( i = 0; i < 2; ++i )
        {
          v21 = *a5 - i;
          v19[v21 - 1] = 0;
        }
        v22 = v19;
        v23 = v19;
        if ( v19 )
        {
          v24 = *a6;
          if ( *a6 >= 4 )
          {
            v25 = 0;
            if ( v24 >> 1 == 1 )
              goto LABEL_27;
            do
            {
              if ( !*v22 && !v22[1] )
                break;
              ++v25;
              *v23++ = *(_BYTE *)v22++;
            }
            while ( v25 < (v24 >> 1) - 1 );
            if ( v24 > v25 )
            {
LABEL_27:
              v26 = v24 - v25;
              if ( (v26 & 3) != 0 )
              {
                if ( v26 )
                  sub_140032C80(v23, 0LL, v26);
              }
              else
              {
                v27 = v26 >> 2;
                if ( v27 )
                  sub_140032C80(v23, 0LL, 4LL * v27);
              }
            }
          }
        }
        return sub_140001EB0(a7, a8, (unsigned __int64)v19, *a6, a9);
      }
    }
    return v13;
  }
  if ( *a6 > *a5 )
  {
    StorPortFreeRegistryBuffer(a1);
    *a5 = *a6;
    RegistryBuffer = StorPortAllocateRegistryBuffer(a1, a6);
    *a4 = RegistryBuffer;
    v15 = RegistryBuffer;
    if ( !RegistryBuffer )
      return 0;
    v17 = *a5;
    if ( *a6 < *a5 )
    {
      StorPortFreeRegistryBuffer(a1);
      *a4 = 0LL;
      return 0;
    }
    if ( (v17 & 3) != 0 )
    {
      if ( v17 )
        sub_140032C80(v15, 0LL, *a5);
    }
    else
    {
      v18 = v17 >> 2;
      if ( v18 )
        sub_140032C80(v15, 0LL, 4LL * v18);
    }
    v12 = StorPortRegistryRead(a1, a2, 1LL);
    goto LABEL_13;
  }
  return v13;
}

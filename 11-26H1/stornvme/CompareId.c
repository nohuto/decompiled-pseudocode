/*
 * XREFs of CompareId @ 0x14000F8E0
 * Callers:
 *     IoctlToNVMe @ 0x1400104F0 (IoctlToNVMe.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1400304D0 (ReadMultiSzRegistryValueAndCompareId.c)
 * Callees:
 *     StringToULONG @ 0x140030884 (StringToULONG.c)
 */

bool __fastcall CompareId(__int64 a1, unsigned int a2, _BYTE *a3, unsigned int a4, __int64 a5)
{
  _BYTE *v7; // rdi
  char *v9; // rcx
  unsigned int v10; // eax
  _BYTE *v11; // rdx
  unsigned int v12; // r9d
  _BYTE *v13; // rax
  char v14; // bl
  __int64 v15; // r11
  unsigned int i; // edx
  char v17; // al
  char v18; // r8
  unsigned int v20; // eax
  _BYTE *v21; // rcx

  v7 = a3;
  v9 = a3;
  if ( !a1 || !a3 )
    return 1;
LABEL_3:
  if ( *v7 || (v14 = 0, v7[1]) )
  {
    v10 = 0;
    if ( a4 )
    {
      v11 = v7;
      while ( *v11 )
      {
        ++v10;
        ++v11;
        if ( v10 >= a4 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      v10 = a4;
    }
    if ( a2 < v10 )
    {
      v12 = a2;
    }
    else
    {
      v12 = 0;
      if ( a4 )
      {
        v13 = v7;
        while ( *v13 )
        {
          ++v12;
          ++v13;
          if ( v12 >= a4 )
            goto LABEL_14;
        }
      }
      else
      {
LABEL_14:
        v12 = a4;
      }
    }
    if ( !v12 )
      return 0;
    v14 = 1;
    v15 = a1 - (_QWORD)v9;
    for ( i = 0; i < v12; ++i )
    {
      v17 = *v9;
      if ( *v9 == 42 )
      {
        ++v9;
        break;
      }
      v18 = v9[v15];
      if ( !v18 || !v17 || v18 != v17 && v17 != 63 )
      {
        v20 = 0;
        if ( a4 )
        {
          v21 = v7;
          while ( *v21 )
          {
            ++v20;
            ++v21;
            if ( v20 >= a4 )
              goto LABEL_30;
          }
        }
        else
        {
LABEL_30:
          v20 = a4;
        }
        v7 += v20 + 1;
        v9 = v7;
        goto LABEL_3;
      }
      ++v9;
    }
  }
  if ( a5 && v14 == 1 && *v9 == 32 )
    return (unsigned __int8)StringToULONG(v9 + 1) != 0;
  return v14;
}

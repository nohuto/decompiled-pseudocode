/*
 * XREFs of LdrResFallbackLangList @ 0x140A9F048
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1403DDCD8 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     LdrpGetParentLangId @ 0x1404ED6B0 (LdrpGetParentLangId.c)
 */

__int64 __fastcall LdrResFallbackLangList(__int64 a1, __int64 a2, __int16 a3, char a4, unsigned __int16 *a5)
{
  unsigned __int16 *v5; // rdi
  unsigned int v6; // ebx
  __int16 v9; // cx
  int v10; // r10d
  int v11; // edx
  int v12; // esi
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  __int64 v19; // r8
  int v20; // r9d
  __int64 v22; // [rsp+58h] [rbp+38h] BYREF

  v22 = a2;
  v5 = a5;
  v6 = 0;
  LOWORD(v22) = 0;
  v9 = 0;
  if ( !a5 )
    return (unsigned int)-1073741811;
  *a5 = 0;
  *((_BYTE *)v5 + 516) = 0;
  v10 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = v10;
      v12 = v10++;
      if ( v11 )
        break;
      v9 = a3;
      v18 = 1;
LABEL_11:
      LOWORD(v22) = v9;
LABEL_12:
      if ( v9 != -4370 )
        goto LABEL_13;
    }
    v13 = v11 - 1;
    if ( !v13 )
      break;
    v14 = v13 - 1;
    if ( !v14 )
    {
      v9 = PsMachineUILanguageId;
      if ( !PsMachineUILanguageId )
        v9 = -4370;
      v18 = 5;
      goto LABEL_11;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v9 = PsInstallUILanguageId;
      if ( !PsInstallUILanguageId )
        v9 = -4370;
      v18 = 6;
      goto LABEL_11;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      v9 = PsDefaultSystemLocaleId;
      if ( !PsDefaultSystemLocaleId )
        v9 = -4370;
      v18 = 7;
      goto LABEL_11;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      if ( v17 != 1 )
        return v6;
      v9 = 4660;
      v18 = 9;
      LOWORD(v22) = 4660;
    }
    else
    {
      v9 = 1033;
      v18 = 8;
      LOWORD(v22) = 1033;
    }
LABEL_13:
    v19 = *v5;
    v20 = 0;
    if ( *v5 )
    {
      while ( v5[4 * v20 + 2] != v9 )
      {
        if ( ++v20 >= (unsigned int)v19 )
          goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      if ( (unsigned int)v19 >= 0x40 )
        return v6;
      v5[4 * v19 + 2] = v9;
      *(_DWORD *)&v5[4 * (*v5)++ + 4] = v18;
    }
  }
  if ( (a4 & 4) == 0 )
  {
    if ( (a3 & 0x3FF) != 0 )
    {
      *((_BYTE *)v5 + 516) = 1;
      if ( (int)LdrpGetParentLangId(v9, &v22) >= 0 )
      {
        v9 = v22;
      }
      else
      {
        v9 = 0;
        LOWORD(v22) = 0;
      }
      v10 = v12;
      if ( !v9 )
        v10 = -1;
    }
    else
    {
      v9 = -4370;
      LOWORD(v22) = -4370;
    }
    v18 = 2;
    goto LABEL_12;
  }
  *((_BYTE *)v5 + 516) = 1;
  return v6;
}

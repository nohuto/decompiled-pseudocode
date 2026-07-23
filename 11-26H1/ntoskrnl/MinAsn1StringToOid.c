/*
 * XREFs of MinAsn1StringToOid @ 0x1408AAF70
 * Callers:
 *     I_MinCryptCheckEKURequirements @ 0x1408A9CB0 (I_MinCryptCheckEKURequirements.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall MinAsn1StringToOid(_BYTE *a1, _BYTE **a2)
{
  __int64 v2; // rbx
  int v3; // r8d
  _BYTE *v5; // r9
  int v6; // r10d
  unsigned int v7; // edx
  unsigned int v8; // r10d
  unsigned int v9; // ebx
  char v10; // dl
  int v11; // eax
  unsigned int v12; // esi
  char v13; // cl
  unsigned int v14; // r15d
  char *v15; // r12
  unsigned int v16; // eax
  size_t v17; // rax
  char v18; // cl
  char v19; // al
  char v20; // dl
  char v21; // r8
  size_t v22; // r14
  _BYTE *v23; // rax
  char Src; // [rsp+20h] [rbp-69h] BYREF
  char v26; // [rsp+21h] [rbp-68h]
  char v27; // [rsp+22h] [rbp-67h]
  char v28; // [rsp+23h] [rbp-66h]
  char v29; // [rsp+24h] [rbp-65h]
  int v30; // [rsp+30h] [rbp-59h]
  unsigned int v31; // [rsp+34h] [rbp-55h]

  v2 = 0LL;
  v3 = 0;
  v5 = a1;
  if ( !a1 )
    return 0xFFFFFFFFLL;
  v30 = 0;
  while ( 1 )
  {
    v6 = (char)*v5;
    if ( !*v5 )
      break;
    if ( (unsigned __int8)(v6 - 48) > 9u )
    {
      if ( (unsigned int)(v3 - 1) > 9 )
        return 0xFFFFFFFFLL;
      if ( (_BYTE)v6 != 46 )
        return 0xFFFFFFFFLL;
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= 0x1F )
        return 0xFFFFFFFFLL;
      *(&v30 + v2) = 0;
      v3 = 0;
    }
    else
    {
      v7 = *(&v30 + v2);
      v8 = v6 + 2 * (v7 + 4 * (v7 - 6));
      if ( v8 < v7 )
        return 0xFFFFFFFFLL;
      *(&v30 + v2) = v8;
      ++v3;
    }
    ++v5;
  }
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v9 = v2 + 1;
  if ( v9 < 2 )
    return 0xFFFFFFFFLL;
  v10 = v31;
  if ( v31 >= 0x28 || v31 + 40 * v30 > 0x7F || *(_DWORD *)a2 < 3u )
    return 0xFFFFFFFFLL;
  v11 = 130;
  v12 = 3;
  if ( *(_DWORD *)a2 < 0x82u )
    v11 = *(_DWORD *)a2;
  v13 = v30;
  *(_DWORD *)a2 = v11;
  v14 = 2;
  *a2[1] = 6;
  a2[1][2] = v10 + 40 * v13;
  v15 = a2[1] + 3;
  while ( v14 < v9 )
  {
    v16 = *(&v30 + v14);
    if ( v16 >= 0x80 )
    {
      v18 = (v16 >> 7) | 0x80;
      if ( v16 >= 0x4000 )
      {
        v20 = *(_BYTE *)(&v30 + v14) & 0x7F;
        v21 = (v16 >> 14) | 0x80;
        if ( v16 >= 0x200000 )
        {
          if ( v16 >= 0x10000000 )
          {
            v26 = (v16 >> 21) | 0x80;
            Src = (v16 >> 28) | 0x80;
            v17 = 5LL;
            v27 = v21;
            v28 = v18;
            v29 = v20;
          }
          else
          {
            Src = (v16 >> 21) | 0x80;
            v17 = 4LL;
            v26 = v21;
            v27 = v18;
            v28 = v20;
          }
        }
        else
        {
          Src = (v16 >> 14) | 0x80;
          v17 = 3LL;
          v26 = v18;
          v27 = v20;
        }
      }
      else
      {
        v19 = *(_BYTE *)(&v30 + v14) & 0x7F;
        Src = v18;
        v26 = v19;
        v17 = 2LL;
      }
    }
    else
    {
      Src = *(&v30 + v14);
      v17 = 1LL;
    }
    v22 = v17;
    v12 += v17;
    if ( v12 > *(_DWORD *)a2 )
      return 0xFFFFFFFFLL;
    memmove(v15, &Src, v17);
    v15 += v22;
    ++v14;
  }
  v23 = a2[1];
  *(_DWORD *)a2 = v12;
  v23[1] = v12 - 2;
  return *(unsigned int *)a2;
}

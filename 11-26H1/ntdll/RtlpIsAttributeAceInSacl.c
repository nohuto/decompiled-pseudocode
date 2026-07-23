/*
 * XREFs of RtlpIsAttributeAceInSacl @ 0x1800D69F8
 * Callers:
 *     RtlpMergeSecurityAttributeInformation @ 0x1800D65D0 (RtlpMergeSecurityAttributeInformation.c)
 * Callees:
 *     memcmp @ 0x1801648D0 (memcmp.c)
 */

char __fastcall RtlpIsAttributeAceInSacl(__int64 a1, __int64 a2, char a3, _BYTE *a4)
{
  unsigned int v6; // edx
  int v7; // r15d
  int *v8; // rdi
  unsigned int v9; // edx
  _WORD *v10; // rcx
  unsigned __int64 v11; // rax
  int i; // edx
  int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // r13d
  __int64 v16; // rbx
  unsigned int j; // r14d
  char result; // al
  __int64 v19; // rcx
  int v20; // ebp
  unsigned int *v21; // rsi
  unsigned int v22; // edx
  _WORD *v23; // rcx
  unsigned __int64 v24; // rax
  int k; // edx
  int v26; // edx
  unsigned int v27; // ebp
  unsigned int v28; // r14d
  unsigned int v29; // [rsp+68h] [rbp+10h]
  char v30; // [rsp+70h] [rbp+18h]
  __int64 v31; // [rsp+78h] [rbp+20h]

  v30 = a3;
  *a4 = 0;
  if ( !a2 )
    return 0;
  v6 = 4 * *(unsigned __int8 *)(a1 + 9) + 8;
  v7 = *(unsigned __int16 *)(a1 + 2) - v6 - 8;
  if ( v7 <= 20 )
    return 1;
  v8 = (int *)(a1 + v6 + 8LL);
  if ( v7 < (unsigned int)*v8 )
    return 1;
  v9 = v7 - *v8;
  if ( v9 < 4 )
    return 1;
  v10 = (_WORD *)((char *)v8 + (unsigned int)*v8);
  if ( !v10 )
    return 1;
  v11 = (unsigned __int64)v9 >> 1;
  for ( i = v11; v11; --v11 )
  {
    if ( !*v10 )
      break;
    ++v10;
  }
  v13 = v11 ? i - v11 : 0;
  if ( !v11 )
    return 1;
  v14 = *(unsigned __int16 *)(a2 + 4);
  v15 = 2 * v13;
  v29 = v14;
  v16 = a2 + 8;
  for ( j = 0; ; ++j )
  {
    result = 0;
    if ( j >= v14 )
      break;
    if ( *(_BYTE *)v16 == 18 && (!a3 || (*(_BYTE *)(v16 + 1) & 0x10) != 0) )
    {
      v19 = 4 * (unsigned int)*(unsigned __int8 *)(v16 + 9) + 8;
      v20 = *(unsigned __int16 *)(v16 + 2) - (_DWORD)v19 - 8;
      if ( v20 > 20 )
      {
        v21 = (unsigned int *)(v16 + v19 + 8);
        v31 = (unsigned int)v19;
        if ( v20 >= *v21 )
        {
          v22 = v20 - *v21;
          if ( v22 >= 4 )
          {
            v23 = (_WORD *)((char *)v21 + *v21);
            if ( v23 )
            {
              v24 = (unsigned __int64)v22 >> 1;
              for ( k = v24; v24; --v24 )
              {
                if ( !*v23 )
                  break;
                ++v23;
              }
              v26 = v24 ? k - v24 : 0;
              if ( v24 && 2 * v26 == v15 )
              {
                if ( !memcmp((char *)v21 + *v21, (char *)v8 + (unsigned int)*v8, v15) )
                {
                  result = 1;
                  if ( !v30 || v20 != v7 )
                    return result;
                  v27 = v8[2];
                  v28 = v21[2];
                  *((_BYTE *)v8 + 10) = 0;
                  *(_BYTE *)(v31 + v16 + 18) = 0;
                  if ( !memcmp(v21, v8, (unsigned int)v7) )
                    *a4 = 1;
                  v8[2] = v27;
                  v21[2] = v28;
                  return 1;
                }
                a3 = v30;
              }
            }
          }
        }
      }
      v14 = v29;
    }
    v16 += *(unsigned __int16 *)(v16 + 2);
  }
  return result;
}

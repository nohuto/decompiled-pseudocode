/*
 * XREFs of sub_14000B3D0 @ 0x14000B3D0
 * Callers:
 *     sub_140026970 @ 0x140026970 (sub_140026970.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14000B3D0(__int64 a1, _DWORD *a2, _QWORD *a3, _QWORD *a4, _BYTE *a5)
{
  _BYTE *v5; // rax
  __int64 v6; // r11
  char v7; // bl
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx

  v5 = (_BYTE *)(a1 + 2);
  v6 = 0LL;
  v7 = 0;
  if ( *(_BYTE *)(a1 + 2) == 40 )
  {
    v5 = (_BYTE *)(a1 + 2);
    if ( !*(_DWORD *)(a1 + 20) )
    {
      v11 = 0LL;
      v5 = (_BYTE *)(a1 + 2);
      if ( *(_DWORD *)(a1 + 56) )
      {
        while ( 1 )
        {
          v12 = *(unsigned int *)(a1 + 4 * v11 + 120);
          if ( (unsigned int)v12 >= 0x80 && (unsigned int)v12 <= *(_DWORD *)(a1 + 16) )
          {
            v13 = a1 + v12;
            switch ( *(_DWORD *)(a1 + v12) )
            {
              case '@':
                v7 = 1;
                if ( a2 )
                  *a2 = *(unsigned __int8 *)(v13 + 10);
                v18 = v13 + 24;
                if ( !*(_BYTE *)(v13 + 10) )
                  v18 = v6;
                v6 = v18;
                if ( a3 )
                  *a3 = v13 + 8;
                if ( a4 )
                  *a4 = *(_QWORD *)(v13 + 16);
                if ( !a5 )
                  goto LABEL_9;
                break;
              case 'A':
                v7 = 1;
                if ( a2 )
                  *a2 = *(unsigned __int8 *)(v13 + 10);
                v17 = v13 + 24;
                if ( !*(_BYTE *)(v13 + 10) )
                  v17 = v6;
                v6 = v17;
                if ( a3 )
                  *a3 = v13 + 8;
                if ( a4 )
                  *a4 = *(_QWORD *)(v13 + 16);
                if ( !a5 )
                  goto LABEL_9;
                break;
              case 'B':
                v7 = 1;
                if ( a2 )
                  *a2 = *(_DWORD *)(v13 + 12);
                v16 = v13 + 32;
                if ( !*(_DWORD *)(v13 + 12) )
                  v16 = v6;
                v6 = v16;
                if ( a3 )
                  *a3 = v13 + 8;
                if ( a4 )
                  *a4 = *(_QWORD *)(v13 + 24);
                if ( !a5 )
                  goto LABEL_9;
                break;
              default:
                goto LABEL_9;
            }
            *a5 = *(_BYTE *)(v13 + 9);
          }
LABEL_9:
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= *(_DWORD *)(a1 + 56) )
          {
            v5 = (_BYTE *)(a1 + 2);
            break;
          }
        }
      }
    }
  }
  if ( *v5 )
  {
    if ( v7 )
    {
      return v6;
    }
    else
    {
      if ( a2 )
        *a2 = 0;
      if ( a3 )
        *a3 = 0LL;
      if ( a4 )
        *a4 = 0LL;
      result = v6;
      if ( a5 )
        *a5 = 0;
    }
  }
  else
  {
    if ( a2 )
      *a2 = *(unsigned __int8 *)(a1 + 10);
    v15 = a1 + 72;
    if ( !*(_BYTE *)(a1 + 10) )
      v15 = v6;
    if ( a3 )
      *a3 = a1 + 4;
    if ( a4 )
      *a4 = *(_QWORD *)(a1 + 32);
    if ( a5 )
      *a5 = *(_BYTE *)(a1 + 11);
    return v15;
  }
  return result;
}

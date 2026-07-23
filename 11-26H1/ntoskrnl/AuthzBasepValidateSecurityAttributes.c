/*
 * XREFs of AuthzBasepValidateSecurityAttributes @ 0x1403B011C
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403AFD64 (AuthzBasepSetSecurityAttributesToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepValidateSecurityAttributes(__int64 a1, int *a2)
{
  int v2; // r8d
  int v3; // r15d
  unsigned int v4; // r14d
  __int64 v5; // r9
  unsigned int i; // ebp
  bool v7; // zf
  unsigned int v9; // edi
  unsigned int j; // eax
  __int64 v11; // r11
  unsigned __int16 v12; // si
  unsigned __int16 v13; // bx
  unsigned int v14; // edi
  unsigned int k; // ecx
  int v16; // ecx
  unsigned int v17; // ebx
  unsigned int n; // eax
  __int64 v19; // r11
  unsigned int v20; // ebx
  __int64 v21; // rax
  unsigned __int16 v22; // si
  unsigned __int16 v23; // bx
  unsigned int m; // r11d

  v2 = 0;
  if ( *(_WORD *)a1 != 1 )
    return (unsigned int)-1073741811;
  v3 = *a2;
  if ( *(_WORD *)(a1 + 2) )
    return (unsigned int)-1073741811;
  v4 = *(_DWORD *)(a1 + 4);
  if ( v3 != 1 )
  {
    if ( !v4 )
      return (unsigned int)-1073741811;
    goto LABEL_5;
  }
  if ( v4 )
  {
LABEL_5:
    v5 = *(_QWORD *)(a1 + 8);
    if ( v5 )
    {
LABEL_6:
      for ( i = 0; ; ++i )
      {
        if ( i >= v4 )
          return (unsigned int)v2;
        if ( !*(_WORD *)(v5 + 40LL * i)
          || !*(_WORD *)(v5 + 40LL * i + 2)
          || !*(_QWORD *)(v5 + 40LL * i + 8)
          || *(_WORD *)(v5 + 40LL * i + 18)
          || (*(_DWORD *)(v5 + 40LL * i + 20) & 0xFF00) != 0 )
        {
          return (unsigned int)-1073741811;
        }
        if ( i )
        {
          if ( v3 == 1 )
            goto LABEL_16;
          v16 = a2[i];
          if ( v16 == 1 )
            return (unsigned int)-1073741811;
          v7 = v16 == 2;
        }
        else
        {
          v7 = v3 == 1;
        }
        if ( v7 && !*(_DWORD *)(v5 + 40LL * i + 24) )
          return (unsigned int)-1073741811;
LABEL_16:
        switch ( *(_WORD *)(v5 + 40LL * i + 16) )
        {
          case 1:
          case 2:
            if ( *(_DWORD *)(v5 + 40LL * i + 24) && !*(_QWORD *)(v5 + 40LL * i + 32) )
              return (unsigned int)-1073741811;
            break;
          case 3:
            v9 = *(_DWORD *)(v5 + 40LL * i + 24);
            if ( v9 && !*(_QWORD *)(v5 + 40LL * i + 32) )
              return (unsigned int)-1073741811;
            for ( j = 0; j < v9; ++j )
            {
              v11 = *(_QWORD *)(v5 + 40LL * i + 32);
              v12 = *(_WORD *)(v11 + 16LL * j);
              if ( !v12 )
                goto LABEL_56;
              v13 = *(_WORD *)(v11 + 16LL * j + 2);
              if ( !v13 || v12 > v13 || !*(_QWORD *)(v11 + 16LL * j + 8) )
                goto LABEL_56;
            }
            break;
          case 4:
            v14 = *(_DWORD *)(v5 + 40LL * i + 24);
            if ( v14 && !*(_QWORD *)(v5 + 40LL * i + 32) )
              return (unsigned int)-1073741811;
            for ( k = 0; k < v14; ++k )
            {
              v21 = *(_QWORD *)(v5 + 40LL * i + 32);
              v22 = *(_WORD *)(v21 + 24LL * k + 8);
              if ( v22 )
              {
                v23 = *(_WORD *)(v21 + 24LL * k + 10);
                if ( v23 )
                {
                  if ( v22 <= v23 && *(_QWORD *)(v21 + 24LL * k + 16) )
                    continue;
                }
              }
LABEL_56:
              v2 = -1073741811;
              goto LABEL_34;
            }
            break;
          case 5:
            goto LABEL_46;
          case 6:
            v20 = *(_DWORD *)(v5 + 40LL * i + 24);
            if ( v20 && !*(_QWORD *)(v5 + 40LL * i + 32) )
              return (unsigned int)-1073741811;
            for ( m = 0; m < v20; ++m )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v5 + 40LL * i + 32) + 8LL * m) > 1uLL )
              {
LABEL_65:
                v2 = -1073741811;
                goto LABEL_34;
              }
            }
            break;
          case 0x10:
LABEL_46:
            v17 = *(_DWORD *)(v5 + 40LL * i + 24);
            if ( v17 && !*(_QWORD *)(v5 + 40LL * i + 32) )
              return (unsigned int)-1073741811;
            for ( n = 0; n < v17; ++n )
            {
              v19 = *(_QWORD *)(v5 + 40LL * i + 32);
              if ( !*(_DWORD *)(v19 + 16LL * n + 8) || !*(_QWORD *)(v19 + 16LL * n) )
                goto LABEL_65;
            }
            break;
          default:
            return (unsigned int)-1073741811;
        }
LABEL_34:
        if ( v2 < 0 )
          return (unsigned int)v2;
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( !*(_QWORD *)(a1 + 8) )
  {
    v5 = *(_QWORD *)(a1 + 8);
    goto LABEL_6;
  }
  return (unsigned int)-1073741811;
}

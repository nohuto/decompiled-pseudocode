/*
 * XREFs of PnpNeedToReleaseBootResources @ 0x140B3A660
 * Callers:
 *     IopReleaseFilteredBootResources @ 0x1407A9034 (IopReleaseFilteredBootResources.c)
 * Callees:
 *     PnpIsRangeWithin @ 0x140B3A7A0 (PnpIsRangeWithin.c)
 */

__int64 __fastcall PnpNeedToReleaseBootResources(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int *v3; // rax
  unsigned int v4; // ebx
  bool v5; // zf
  unsigned int v6; // ecx
  _DWORD *v7; // rax
  unsigned int v8; // ebp
  _DWORD *v9; // rdi
  unsigned int v10; // r15d
  unsigned int v11; // eax
  unsigned __int8 v12; // si
  __int64 v13; // rax
  unsigned int v14; // eax
  _DWORD *v15; // r14
  int v16; // r12d
  unsigned int i; // r13d
  __int64 v18; // rax
  unsigned int v20; // [rsp+24h] [rbp-54h]
  unsigned int v21; // [rsp+28h] [rbp-50h]
  _DWORD *v22; // [rsp+88h] [rbp+10h]
  unsigned int v24; // [rsp+98h] [rbp+20h]

  v22 = a2;
  v3 = *(unsigned int **)(a1 + 544);
  v4 = 0;
  v5 = *a2 == 1;
  *a3 = 0;
  if ( v5 )
  {
    if ( v3 )
    {
      v6 = *v3;
      v21 = *v3;
      if ( *v3 )
      {
        v7 = v3 + 1;
        v8 = 0;
LABEL_5:
        if ( v8 < v6 )
        {
          v9 = v7 + 4;
          v10 = 0;
          v11 = v7[3];
          v20 = v11;
          while ( 1 )
          {
            if ( v10 >= v11 )
            {
              v6 = v21;
              v7 = v9;
              ++v8;
              goto LABEL_5;
            }
            v12 = *(_BYTE *)v9;
            v13 = 0LL;
            if ( *(_BYTE *)v9 )
            {
              if ( v12 == 5 )
              {
                v13 = (unsigned int)v9[1];
              }
              else if ( v12 < 8u )
              {
                v14 = a2[4];
                v15 = a2 + 5;
                v24 = v14;
                v16 = 0;
                for ( i = 0; i < v14; ++i )
                {
                  if ( *(_BYTE *)v15 == 5 )
                  {
                    v18 = (unsigned int)v15[1];
                  }
                  else
                  {
                    if ( v12 == *(_BYTE *)v15 )
                    {
                      v16 = 1;
                      if ( (unsigned int)PnpIsRangeWithin(v9, v15) )
                      {
                        v13 = 0LL;
                        a2 = v22;
                        goto LABEL_21;
                      }
                    }
                    v18 = 0LL;
                  }
                  v15 = (_DWORD *)((char *)v15 + v18 + 20);
                  v14 = v24;
                }
                if ( v16 )
                  *a3 = 1;
                else
                  return 1;
                return v4;
              }
            }
LABEL_21:
            v9 = (_DWORD *)((char *)v9 + v13 + 20);
            v11 = v20;
            ++v10;
          }
        }
      }
    }
  }
  return v4;
}

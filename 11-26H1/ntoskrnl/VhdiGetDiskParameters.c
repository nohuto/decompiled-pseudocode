/*
 * XREFs of VhdiGetDiskParameters @ 0x140D08F30
 * Callers:
 *     IopGetBootDiskInformationLite @ 0x140CC4C00 (IopGetBootDiskInformationLite.c)
 *     VhdInitialize @ 0x140D08C34 (VhdInitialize.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VhdiGetDiskParameters(__int64 a1, _DWORD *a2, _QWORD *a3, char *a4, __int64 *a5)
{
  unsigned int v9; // r14d
  unsigned int v10; // ecx
  int v11; // eax
  char v12; // bp
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax

  v9 = -1073741811;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a3 )
      {
        if ( a5 )
        {
          if ( *(_DWORD *)(a1 + 4) == 6 && *(_DWORD *)(a1 + 36) == 6 )
          {
            v10 = *(_DWORD *)(a1 + 12);
            if ( v10 >= 0x5C
              && v10 >= *(_DWORD *)(a1 + 68) + 56
              && !*(_DWORD *)(a1 + 60)
              && *(_DWORD *)(a1 + 76) == 5
              && *(_DWORD *)(a1 + 88) == 5 )
            {
              v11 = *(_DWORD *)(a1 + 92);
              if ( v11 )
              {
                if ( v11 == 6 )
                {
                  v12 = 0;
                  if ( !*(_DWORD *)(a1 + 124) )
                  {
                    memset_0(a2, 0, 0x90uLL);
                    a2[6] = *(_DWORD *)a1;
                    v14 = *(_DWORD *)(a1 + 128);
                    if ( v14 == 1 )
                    {
                      *((_QWORD *)a2 + 1) = *(_QWORD *)(a1 + 108);
                    }
                    else
                    {
                      if ( v14 )
                        return v9;
                      *a2 = 1;
                      *((_OWORD *)a2 + 3) = *(_OWORD *)(a1 + 108);
                    }
                    v13 = a1 + 132;
                    goto LABEL_22;
                  }
                }
              }
              else if ( *(_DWORD *)(a1 + 108) == 3 )
              {
                v12 = 1;
                memset_0(a2, 0, 0x90uLL);
                v13 = 0LL;
LABEL_22:
                *a3 = v13;
                v15 = a1 + 92 + *(unsigned int *)(a1 + 100);
                *a4 = v12;
                *a5 = v15;
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return v9;
}

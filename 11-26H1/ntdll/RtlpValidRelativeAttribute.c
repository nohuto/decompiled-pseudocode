/*
 * XREFs of RtlpValidRelativeAttribute @ 0x180124290
 * Callers:
 *     RtlpValidAttributeAce @ 0x180122C28 (RtlpValidAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x1800DB9A0 (RtlStringCbLengthW.c)
 *     RtlStringLengthWorkerW @ 0x1800DCEC4 (RtlStringLengthWorkerW.c)
 */

char __fastcall RtlpValidRelativeAttribute(unsigned int *a1, unsigned int a2)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // rdx
  _WORD *v6; // rcx
  __int64 v7; // r11
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int k; // ecx
  __int64 v11; // rdx
  unsigned int j; // edx
  __int64 v13; // rcx
  unsigned int v14; // r9d
  unsigned int i; // esi
  __int64 v16; // rcx
  unsigned int v17; // ecx
  __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( a2 >= 0x14 && !*((_WORD *)a1 + 3) && (a1[2] & 0xFFC0) == 0 )
    {
      v4 = a1[3];
      if ( v4 )
      {
        if ( a2 >= *a1 )
        {
          v5 = a2 - *a1;
          if ( (unsigned int)v5 >= 4 )
          {
            v6 = (_WORD *)((char *)a1 + *a1);
            if ( v6 )
            {
              if ( (int)RtlStringLengthWorkerW(v6, v5 >> 1, &v19) >= 0 )
              {
                v8 = 4LL * v4;
                if ( v8 <= 0xFFFFFFFF && a2 - 16 >= (unsigned int)v8 )
                {
                  switch ( *((_WORD *)a1 + 2) )
                  {
                    case 1:
                    case 2:
                      while ( (unsigned int)v7 < v4 )
                      {
                        v17 = a1[(unsigned int)v7 + 4];
                        if ( a2 < v17 || a2 - v17 < 8 )
                          return 0;
                        LODWORD(v7) = v7 + 1;
                      }
                      return 1;
                    case 3:
                      for ( i = v7; i < a1[3]; ++i )
                      {
                        v16 = a1[i + 4];
                        if ( a2 < (unsigned int)v16
                          || a2 - (unsigned int)v16 < 2
                          || (int)RtlStringCbLengthW((unsigned int *)((char *)a1 + v16), a2 - (unsigned int)v16, &v19) < 0 )
                        {
                          return 0;
                        }
                      }
                      return 1;
                    case 5:
                      for ( j = v7; j < v4; ++j )
                      {
                        v13 = a1[j + 4];
                        if ( a2 < (unsigned int)v13 )
                          return 0;
                        if ( a2 - (unsigned int)v13 < 4 )
                          return 0;
                        v14 = *(unsigned int *)((char *)a1 + v13);
                        if ( !v14 || (int)v13 + 4 < (unsigned int)v13 || a2 - ((_DWORD)v13 + 4) < v14 )
                          return 0;
                      }
                      return 1;
                    case 6:
                      for ( k = v7; k < v4; ++k )
                      {
                        v11 = a1[k + 4];
                        if ( a2 < (unsigned int)v11
                          || a2 - (unsigned int)v11 < 8
                          || *(_QWORD *)((char *)a1 + v11) != v7 && *(_QWORD *)((char *)a1 + v11) != 1LL )
                        {
                          return 0;
                        }
                      }
                      return 1;
                    case 0x10:
                      while ( (unsigned int)v7 < v4 )
                      {
                        v9 = a1[(unsigned int)v7 + 4];
                        if ( a2 < (unsigned int)v9
                          || a2 - (unsigned int)v9 < 4
                          || (int)v9 + 4 < (unsigned int)v9
                          || a2 - ((_DWORD)v9 + 4) < *(unsigned int *)((char *)a1 + v9) )
                        {
                          return 0;
                        }
                        LODWORD(v7) = v7 + 1;
                      }
                      return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

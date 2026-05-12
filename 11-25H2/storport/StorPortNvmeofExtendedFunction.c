/*
 * XREFs of StorPortNvmeofExtendedFunction @ 0x1400743C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140037090 @ 0x140037090 (sub_140037090.c)
 *     sub_14006E15C @ 0x14006E15C (sub_14006E15C.c)
 *     sub_14006E36C @ 0x14006E36C (sub_14006E36C.c)
 *     sub_1400CA38C @ 0x1400CA38C (sub_1400CA38C.c)
 *     sub_1400CA6FC @ 0x1400CA6FC (sub_1400CA6FC.c)
 *     sub_1400D41C0 @ 0x1400D41C0 (sub_1400D41C0.c)
 *     sub_1400D4538 @ 0x1400D4538 (sub_1400D4538.c)
 */

__int64 __fastcall StorPortNvmeofExtendedFunction(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 a5,
        _QWORD *a6)
{
  unsigned int v6; // ebx
  __int64 v7; // r9
  _DWORD *v8; // r9
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // r8
  int v15; // ecx
  int v16; // eax

  v6 = 0;
  if ( a2 )
  {
    v7 = *(_QWORD *)(a2 - 16);
    if ( (*(_BYTE *)(v7 + 248) & 1) != 0 )
    {
      v8 = *(_DWORD **)v7;
      if ( *v8 == 1314275652 )
      {
        if ( v8 )
        {
          if ( a1 )
          {
            v9 = a1 - 1;
            if ( v9 )
            {
              v10 = v9 - 1;
              if ( v10 )
              {
                v11 = v10 - 1;
                if ( v11 )
                {
                  v12 = v11 - 1;
                  if ( v12 )
                  {
                    v13 = v12 - 1;
                    if ( v13 )
                    {
                      if ( v13 != 2 )
                        return (unsigned int)-1056964606;
                      if ( a3 && a6 )
                      {
                        if ( *(_DWORD *)a3 == 1314276178 && *(_DWORD *)(a3 + 568) )
                        {
                          if ( !(_WORD)a4 )
                          {
                            v14 = *(_QWORD *)(a3 + 712);
                            goto LABEL_21;
                          }
                          if ( (unsigned __int16)a4 <= *(_WORD *)(a3 + 20) )
                          {
                            v14 = 192LL * (unsigned __int16)a4 + *(_QWORD *)(a3 + 728) - 192LL;
LABEL_21:
                            if ( (unsigned int)a5 < *(_DWORD *)(v14 + 124) )
                              *a6 = *(_QWORD *)(((unsigned __int64)a5 << 7) + *(_QWORD *)(v14 + 32) + 24);
                            else
                              v6 = -1073741582;
                            goto LABEL_26;
                          }
                          v6 = -1073741583;
                        }
                        else
                        {
                          v6 = -1073741637;
                        }
LABEL_26:
                        v15 = v6;
                        return (unsigned int)sub_140037090(v15);
                      }
                      return (unsigned int)-1056964602;
                    }
                    if ( !a3 )
                      return (unsigned int)-1056964602;
                    v16 = sub_1400D4538(v8);
                  }
                  else
                  {
                    if ( !a3 || !a4 )
                      return (unsigned int)-1056964602;
                    v16 = sub_1400CA6FC(v8);
                  }
                }
                else
                {
                  if ( !a3 )
                    return (unsigned int)-1056964602;
                  v16 = sub_1400D41C0(v8);
                }
              }
              else
              {
                if ( !a3 || !a4 )
                  return (unsigned int)-1056964602;
                v16 = sub_1400CA38C(v8);
              }
LABEL_46:
              v15 = v16;
              return (unsigned int)sub_140037090(v15);
            }
            if ( !a3 )
              return (unsigned int)-1056964602;
            if ( !KeGetCurrentIrql() )
            {
              v16 = sub_14006E15C((_OWORD *)a3);
              goto LABEL_45;
            }
          }
          else
          {
            if ( !a3 )
              return (unsigned int)-1056964602;
            if ( !KeGetCurrentIrql() )
            {
              v16 = sub_14006E36C(0, (char *)a3);
LABEL_45:
              if ( v16 >= 0 )
                return v6;
              goto LABEL_46;
            }
          }
          return (unsigned int)-1056964600;
        }
      }
    }
  }
  return 3238002694LL;
}

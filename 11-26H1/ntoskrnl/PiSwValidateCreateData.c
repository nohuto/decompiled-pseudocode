/*
 * XREFs of PiSwValidateCreateData @ 0x140A8D068
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x140A8CB08 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PnpValidateMultiSz @ 0x140952178 (PnpValidateMultiSz.c)
 *     PiSwValidatePropertyArray @ 0x140A195A0 (PiSwValidatePropertyArray.c)
 *     SeValidSecurityDescriptor @ 0x140A8DAC0 (SeValidSecurityDescriptor.c)
 */

__int64 __fastcall PiSwValidateCreateData(__int64 a1)
{
  unsigned int v2; // esi
  _WORD *v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rax
  __int16 *v6; // rdx
  __int16 v7; // cx
  __int16 *v8; // r8
  __int16 *v9; // r8
  __int16 v10; // cx
  _WORD *v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rcx
  _WORD *i; // rdx
  __int16 v17; // cx
  _WORD *v18; // r8
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  void *v22; // rdx
  ULONG v23; // ecx
  unsigned __int64 v25; // rax
  unsigned int v26; // eax
  __int64 v27; // rcx
  _WORD *j; // rdx
  __int16 v29; // cx
  _WORD *v30; // r8
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // edx

  v2 = -1073741811;
  if ( a1 )
  {
    v3 = *(_WORD **)(a1 + 8);
    if ( v3 )
    {
      if ( *v3 )
      {
        v4 = -1LL;
        v5 = -1LL;
        do
          ++v5;
        while ( v3[v5] );
        if ( v5 <= 0xC7 )
        {
          v6 = *(__int16 **)a1;
          if ( *(_QWORD *)a1 )
          {
            v7 = *v6;
            if ( *v6 )
            {
              v8 = *(__int16 **)a1;
              while ( v7 )
              {
                if ( (unsigned __int16)(v7 - 33) > 0x5Eu || v7 == 44 || v7 == 92 )
                  return v2;
                v7 = *++v8;
              }
              v9 = *(__int16 **)(a1 + 16);
              if ( v9 )
              {
                v10 = *v9;
                if ( *v9 )
                {
                  v11 = *(_WORD **)(a1 + 16);
                  while ( v10 )
                  {
                    if ( (unsigned __int16)(v10 - 33) > 0x5Eu || v10 == 44 || v10 == 92 )
                      return v2;
                    v10 = *++v11;
                  }
                  v12 = -1LL;
                  do
                    ++v12;
                  while ( v6[v12] );
                  v13 = -1LL;
                  do
                    ++v13;
                  while ( v9[v13] );
                  if ( (unsigned __int64)(v12 + v13 + 5) <= 0xC7 && (*(_DWORD *)(a1 + 64) & 0xFFFFFFF0) == 0 )
                  {
                    v14 = *(_DWORD *)(a1 + 24);
                    if ( v14 <= 0x3FF && (v14 || !*(_QWORD *)(a1 + 32)) )
                    {
                      v15 = *(_QWORD *)(a1 + 32);
                      if ( v15 )
                      {
                        if ( (int)PnpValidateMultiSz(v15, *(unsigned int *)(a1 + 24)) < 0 )
                          return v2;
                        for ( i = *(_WORD **)(a1 + 32); ; i += v19 + 1 )
                        {
                          v17 = *i;
                          if ( !*i )
                            break;
                          v18 = i;
                          while ( v17 )
                          {
                            if ( (unsigned __int16)(v17 - 33) > 0x5Eu || v17 == 44 )
                              return v2;
                            v17 = *++v18;
                          }
                          v19 = -1LL;
                          do
                            ++v19;
                          while ( i[v19] );
                        }
                      }
                      else if ( v14 )
                      {
                        return v2;
                      }
                      v26 = *(_DWORD *)(a1 + 40);
                      if ( v26 <= 0x3FF && (v26 || !*(_QWORD *)(a1 + 48)) )
                      {
                        v27 = *(_QWORD *)(a1 + 48);
                        if ( v27 )
                        {
                          if ( (int)PnpValidateMultiSz(v27, *(unsigned int *)(a1 + 40)) < 0 )
                            return v2;
                          for ( j = *(_WORD **)(a1 + 48); ; j += v31 + 1 )
                          {
                            v29 = *j;
                            if ( !*j )
                              break;
                            v30 = j;
                            while ( v29 )
                            {
                              if ( (unsigned __int16)(v29 - 33) > 0x5Eu || v29 == 44 )
                                return v2;
                              v29 = *++v30;
                            }
                            v31 = -1LL;
                            do
                              ++v31;
                            while ( j[v31] );
                          }
                        }
                        else if ( v26 )
                        {
                          return v2;
                        }
                        v20 = *(_QWORD *)(a1 + 72);
                        if ( !v20 )
                          goto LABEL_46;
                        v25 = -1LL;
                        do
                          ++v25;
                        while ( *(_WORD *)(v20 + 2 * v25) );
                        if ( v25 <= 0x7FFE )
                        {
LABEL_46:
                          v21 = *(_QWORD *)(a1 + 80);
                          if ( !v21 )
                            goto LABEL_47;
                          do
                            ++v4;
                          while ( *(_WORD *)(v21 + 2 * v4) );
                          if ( v4 <= 0x7FFE )
                          {
LABEL_47:
                            v22 = *(void **)(a1 + 96);
                            if ( v22 )
                            {
                              v23 = *(_DWORD *)(a1 + 88);
                              if ( !v23 || !SeValidSecurityDescriptor(v23, v22) )
                                return v2;
                            }
                            else if ( *(_DWORD *)(a1 + 88) )
                            {
                              return v2;
                            }
                            if ( (*(_DWORD *)(a1 + 64) & 8) == 0 || *(_QWORD *)(a1 + 32) || *(_QWORD *)(a1 + 48) )
                            {
                              v32 = *(_QWORD *)(a1 + 112);
                              if ( !v32 )
                              {
                                if ( *(_DWORD *)(a1 + 104) )
                                  return v2;
                                v33 = *(_DWORD *)(a1 + 104);
                                return (unsigned int)PiSwValidatePropertyArray(v32, v33);
                              }
                              v33 = *(_DWORD *)(a1 + 104);
                              if ( v33 )
                                return (unsigned int)PiSwValidatePropertyArray(v32, v33);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v2;
}

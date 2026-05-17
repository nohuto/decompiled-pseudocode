/*
 * XREFs of WerEscalationReadImageVersionInfoForModuleBase @ 0x1800D6820
 * Callers:
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800D67AC (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     RtlCompareMemory @ 0x1801631E0 (RtlCompareMemory.c)
 */

unsigned __int64 __fastcall WerEscalationReadImageVersionInfoForModuleBase(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned int *v5; // rcx
  __int64 v6; // r9
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // r11d
  unsigned __int64 v11; // rdx
  unsigned int i; // edx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // r10d
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned int v20; // r11d
  unsigned int v21; // edx
  unsigned __int64 v22; // r10
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned int *v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // rbp
  unsigned __int64 v30; // rcx
  _DWORD *v31; // rbp
  char *v32; // rcx
  unsigned __int64 v33; // rdx
  size_t v34; // rax
  _WORD *v35; // rcx
  unsigned __int64 v36; // rdx
  unsigned __int16 v37; // r8
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // rcx
  int v42; // edi
  unsigned __int64 v43; // r10
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  unsigned int *v46; // [rsp+50h] [rbp+8h] BYREF

  *(_OWORD *)a2 = 0LL;
  v46 = 0LL;
  result = RtlImageNtHeaderEx(3, a1, 0LL, &v46);
  if ( (result & 0x80000000) == 0LL )
  {
    v5 = v46;
    *(_DWORD *)a2 = v46[2];
    result = v5[22];
    *(_DWORD *)(a2 + 4) = result;
    v6 = v5[20];
    if ( v5[33] > 2 )
    {
      result = v5[38];
      if ( (_DWORD)result )
      {
        if ( v5[39] >= 0x10 )
        {
          v7 = a1 + result;
          result += a1 + 16;
          v8 = v6 + a1;
          if ( result >= a1 && result <= v8 && result >= v7 && v7 >= a1 && v7 <= v8 && v8 >= a1 )
          {
            if ( v7 )
            {
              v9 = *(unsigned __int16 *)(v7 + 12);
              v10 = *(unsigned __int16 *)(v7 + 14);
              result = v10 + (unsigned int)v9;
              if ( (unsigned int)v9 < (unsigned int)result )
              {
                result = v7 + 8 * (v9 + 2);
                v11 = result + 8;
                if ( result + 8 >= a1 && v11 <= v8 && v11 >= result && result >= a1 && result <= v8 && result )
                {
                  for ( i = 0; i < v10; ++i )
                  {
                    if ( *(int *)result >= 0 && (unsigned __int16)*(_DWORD *)result == 16 )
                    {
                      result = *(unsigned int *)(result + 4);
                      v13 = (unsigned int)result;
                      if ( (result & 0x80000000) != 0LL )
                      {
                        LODWORD(v13) = result & 0x7FFFFFFF;
                        v14 = v6 + a1;
                        v15 = v7 + v13;
                        result = v15 + 16;
                        if ( v15 + 16 >= a1 && result <= v14 && result >= v15 && v15 >= a1 && v15 <= v14 )
                        {
                          v16 = *(unsigned __int16 *)(v15 + 12);
                          v17 = *(unsigned __int16 *)(v15 + 14);
                          result = (unsigned int)v16 + v17;
                          if ( (unsigned int)v16 < (unsigned int)result )
                          {
                            result = v15 + 16 + 8 * v16;
                            v18 = result + 8;
                            v19 = v6 + a1;
                            if ( result + 8 >= a1
                              && v18 <= v19
                              && v18 >= result
                              && result >= a1
                              && result <= v19
                              && result )
                            {
                              v20 = v17;
                              v21 = 0;
                              v22 = v6 + a1;
                              while ( v21 < v20 )
                              {
                                if ( *(int *)result >= 0 && (unsigned __int16)*(_DWORD *)result == 1 )
                                {
                                  result = *(unsigned int *)(result + 4);
                                  v23 = (unsigned int)result;
                                  if ( (result & 0x80000000) != 0LL )
                                  {
                                    LODWORD(v23) = result & 0x7FFFFFFF;
                                    v24 = v23 + v7;
                                    result = v23 + v7 + 16;
                                    v25 = v6 + a1;
                                    if ( result >= a1 && result <= v25 && result >= v24 && v24 >= a1 && v24 <= v25 )
                                    {
                                      result = *(unsigned __int16 *)(v24 + 12);
                                      if ( (_DWORD)result + *(unsigned __int16 *)(v24 + 14) )
                                      {
                                        v26 = v24 + 16;
                                        result = v26 + 8;
                                        if ( v26 + 8 >= a1 && result <= v6 + a1 && result >= v26 && v26 >= a1 )
                                        {
                                          if ( v26 )
                                          {
                                            result = *(unsigned int *)(v26 + 4);
                                            if ( (result & 0x80000000) == 0LL )
                                            {
                                              v27 = (unsigned int *)(v7 + result);
                                              result += v7 + 16;
                                              v28 = v6 + a1;
                                              if ( result >= a1
                                                && result <= v28
                                                && result >= (unsigned __int64)v27
                                                && (unsigned __int64)v27 >= a1
                                                && (unsigned __int64)v27 <= v28
                                                && v27[1] >= 0x5C )
                                              {
                                                v29 = *v27;
                                                v30 = v6 + a1;
                                                v31 = (_DWORD *)(a1 + v29);
                                                result = (unsigned __int64)(v31 + 23);
                                                if ( (unsigned __int64)(v31 + 23) >= a1
                                                  && result <= v30
                                                  && result >= (unsigned __int64)v31
                                                  && (unsigned __int64)v31 >= a1
                                                  && (unsigned __int64)v31 <= v30 )
                                                {
                                                  if ( v31 )
                                                  {
                                                    result = (unsigned __int64)v31 + 6;
                                                    v32 = (char *)v31 + 38;
                                                    v33 = v6 + a1;
                                                    if ( (unsigned __int64)v31 + 38 >= a1
                                                      && (unsigned __int64)v32 <= v33
                                                      && (unsigned __int64)v32 >= result
                                                      && result >= a1
                                                      && result <= v33 )
                                                    {
                                                      v34 = wcslen(L"VS_VERSION_INFO");
                                                      v35 = (_WORD *)v31 + 3;
                                                      v36 = 2 * v34;
                                                      result = 65532LL;
                                                      if ( v36 >= 0xFFFE )
                                                        LOWORD(v36) = -4;
                                                      if ( v31 != (_DWORD *)-6LL )
                                                      {
                                                        result = 16LL;
                                                        do
                                                        {
                                                          if ( !*v35 )
                                                            break;
                                                          ++v35;
                                                          --result;
                                                        }
                                                        while ( result );
                                                        if ( result )
                                                        {
                                                          v37 = 2 * (16 - result);
                                                          v38 = (unsigned __int64)(unsigned __int16)v36 >> 1;
                                                          v39 = v38;
                                                          v40 = (unsigned __int64)v37 >> 1;
                                                          if ( v38 > v40 )
                                                            v39 = (unsigned __int64)v37 >> 1;
                                                          result = RtlCompareMemory(
                                                                     L"VS_VERSION_INFO",
                                                                     (char *)v31 + 6,
                                                                     2 * v39);
                                                          v41 = result >> 1;
                                                          if ( result >> 1 < v39 )
                                                          {
                                                            result = *((unsigned __int16 *)v31 + v41 + 3);
                                                            v42 = aVsVersionInfo[v41] - (_DWORD)result;
                                                          }
                                                          else
                                                          {
                                                            v42 = v38 - v40;
                                                          }
                                                          if ( !v42 )
                                                          {
                                                            *(_DWORD *)(a2 + 8) = v31[12];
                                                            result = (unsigned int)v31[13];
                                                            *(_DWORD *)(a2 + 12) = result;
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
                                  return result;
                                }
                                result += 8LL;
                                v45 = result + 8;
                                if ( result + 8 < a1 || v45 > v22 || v45 < result || result < a1 || result > v22 )
                                  return result;
                                ++v21;
                              }
                            }
                          }
                        }
                      }
                      return result;
                    }
                    result += 8LL;
                    v43 = v6 + a1;
                    v44 = result + 8;
                    if ( result + 8 < a1 || v44 > v43 || v44 < result || result < a1 || result > v43 )
                      return result;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

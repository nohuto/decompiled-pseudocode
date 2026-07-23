/*
 * XREFs of PfVerifyScenarioBuffer @ 0x140987380
 * Callers:
 *     PfSnGetPrefetchInstructions @ 0x140987060 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     StringCbLengthW @ 0x14047D11C (StringCbLengthW.c)
 *     StringCchPrintfW @ 0x1404A5DE0 (StringCchPrintfW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PfVerifyScenarioId @ 0x140987DFC (PfVerifyScenarioId.c)
 */

__int64 __fastcall PfVerifyScenarioBuffer(unsigned __int64 a1, unsigned int a2, int *a3)
{
  __int64 v3; // rdi
  int v4; // r13d
  unsigned int v6; // esi
  unsigned int v7; // r11d
  unsigned int v8; // r9d
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r11
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned int v22; // r9d
  int v23; // r15d
  unsigned int v24; // r10d
  unsigned int *v25; // r14
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rdi
  int v31; // ecx
  __int64 v32; // rsi
  unsigned int v33; // r8d
  int v34; // r15d
  int v35; // r12d
  __int64 v36; // r9
  int *v37; // rax
  int v38; // r11d
  unsigned int v39; // r10d
  unsigned int v41; // ecx
  unsigned int v42; // r12d
  unsigned __int64 v43; // rdi
  unsigned int v44; // r14d
  unsigned __int64 v45; // r10
  unsigned int v46; // r8d
  __int64 v47; // r9
  unsigned int *v48; // rsi
  unsigned __int64 v49; // rdi
  unsigned __int16 *v50; // rcx
  char *v51; // rdx
  int v52; // eax
  int v53; // ecx
  _DWORD *v54; // rcx
  __int64 v55; // rax
  char *v56; // rdx
  int v57; // edx
  int v58; // eax
  int v59; // ecx
  int v60; // eax
  unsigned int v61; // edx
  unsigned __int16 *v62; // rcx
  unsigned int i; // r8d
  __int64 v64; // rax
  unsigned __int16 *v65; // r9
  _DWORD *v66; // rdx
  __int64 v67; // r8
  _DWORD *v68; // r8
  __int64 v69; // r9
  int v70; // eax
  size_t v71; // rdx
  __int64 v72; // r8
  __int64 v73; // [rsp+20h] [rbp-118h]
  __int64 v74; // [rsp+28h] [rbp-110h]
  unsigned __int8 v75; // [rsp+30h] [rbp-108h]
  int v76; // [rsp+34h] [rbp-104h]
  unsigned int v77; // [rsp+38h] [rbp-100h]
  unsigned int v78; // [rsp+3Ch] [rbp-FCh]
  unsigned int v79; // [rsp+40h] [rbp-F8h]
  unsigned int v80; // [rsp+44h] [rbp-F4h]
  unsigned int v81; // [rsp+48h] [rbp-F0h]
  int v82; // [rsp+4Ch] [rbp-ECh]
  unsigned __int64 v84; // [rsp+58h] [rbp-E0h]
  unsigned __int64 v85; // [rsp+60h] [rbp-D8h]
  unsigned __int64 v86; // [rsp+68h] [rbp-D0h]
  unsigned __int64 v87; // [rsp+70h] [rbp-C8h]
  wchar_t pszDest[40]; // [rsp+A0h] [rbp-98h] BYREF

  v3 = a2;
  v4 = 0;
  v75 = 0;
  if ( a2 < 0x128 )
  {
    v4 = 10;
  }
  else if ( (a1 & 7) != 0 )
  {
    v4 = 15;
  }
  else if ( *(_DWORD *)a1 == 31 && *(_DWORD *)(a1 + 4) == 1094927187 )
  {
    if ( a2 > 0x10000000 )
    {
      v4 = 25;
    }
    else if ( a2 == *(_DWORD *)(a1 + 12) )
    {
      if ( *(_DWORD *)(a1 + 80) > 1u )
      {
        v4 = 27;
      }
      else
      {
        v6 = *(_DWORD *)(a1 + 88);
        v81 = v6;
        if ( v6 > 0x4000
          || *(_DWORD *)(a1 + 112) > 0x4000u
          || (v7 = *(_DWORD *)(a1 + 96), v77 = v7, v7 > 0x100000)
          || (v8 = *(_DWORD *)(a1 + 104), v8 > 0x400000) )
        {
          v4 = 30;
        }
        else if ( v6 && v7 && v8 )
        {
          if ( (unsigned int)(*(_DWORD *)(a1 + 204) - 1) > 7 )
          {
            v4 = 35;
          }
          else if ( (unsigned __int8)PfVerifyScenarioId(a1 + 16) )
          {
            v12 = a1 + *(unsigned int *)(a1 + 84);
            v87 = v12;
            if ( (v12 & 3) != 0 )
            {
              v4 = 38;
            }
            else if ( v12 < a1 || (v13 = v3 + a1, v12 >= v3 + a1) )
            {
              v4 = 40;
            }
            else
            {
              v14 = v12 + 32LL * v6 - 1;
              if ( v14 >= v13 || v14 < a1 )
              {
                v4 = 45;
              }
              else
              {
                v15 = a1 + *(unsigned int *)(a1 + 92);
                v85 = v15;
                if ( (v15 & 3) != 0 )
                {
                  v4 = 47;
                }
                else if ( v15 >= v13 || v15 < a1 )
                {
                  v4 = 50;
                }
                else
                {
                  v16 = v15 + 8 * v11 - 1;
                  if ( v16 >= v13 || v16 < a1 )
                  {
                    v4 = 55;
                  }
                  else
                  {
                    v17 = a1 + *(unsigned int *)(a1 + 100);
                    v86 = v17;
                    if ( (v17 & 1) != 0 )
                    {
                      v4 = 57;
                    }
                    else if ( v17 >= v13 || v17 < a1 )
                    {
                      v4 = 60;
                    }
                    else
                    {
                      v18 = v17 + v9 - 1;
                      if ( v18 >= v13 || v18 < a1 )
                      {
                        v4 = 70;
                      }
                      else
                      {
                        v19 = a1 + *(unsigned int *)(a1 + 108);
                        v84 = v19;
                        if ( (v19 & 7) != 0 )
                        {
                          v4 = 72;
                        }
                        else if ( v19 >= v13 || v19 < a1 )
                        {
                          v4 = 73;
                        }
                        else
                        {
                          v20 = v19 + *(unsigned int *)(a1 + 116) - 1LL;
                          if ( v20 >= v13 || v20 < a1 )
                          {
                            v4 = 74;
                          }
                          else
                          {
                            v21 = v19 + 96 * v10 - 1;
                            if ( v21 >= v13 || v21 < a1 )
                            {
                              v4 = 75;
                            }
                            else
                            {
                              v79 = *(_DWORD *)(a1 + 124);
                              if ( v79 > 7 )
                              {
                                v4 = 76;
                              }
                              else
                              {
                                v22 = v11;
                                v23 = 0;
                                v24 = 0;
                                while ( 2 )
                                {
                                  v78 = v24;
                                  if ( v24 >= v6 )
                                  {
                                    if ( v22 )
                                    {
                                      v4 = 190;
                                    }
                                    else
                                    {
                                      v42 = 0;
                                      v43 = v84;
                                      v44 = 0;
                                      v45 = a2 + a1;
LABEL_75:
                                      v46 = *(_DWORD *)(a1 + 112);
                                      if ( v44 >= v46 )
                                      {
                                        if ( v42 == *(_DWORD *)(a1 + 120) )
                                        {
                                          if ( v42 > 0x80000 )
                                          {
                                            v4 = 340;
                                          }
                                          else
                                          {
                                            v71 = *(unsigned int *)(a1 + 216);
                                            v72 = *(unsigned int *)(a1 + 212);
                                            if ( ((_DWORD)v72 == 0) == ((_DWORD)v71 == 0) )
                                            {
                                              if ( (_DWORD)v72
                                                && StringCbLengthW((STRSAFE_PCNZWCH)(a1 + v72), v71, 0LL) < 0 )
                                              {
                                                v4 = 360;
                                              }
                                              else
                                              {
                                                v75 = 1;
                                              }
                                            }
                                            else
                                            {
                                              v4 = 350;
                                            }
                                          }
                                        }
                                        else
                                        {
                                          v4 = 330;
                                        }
                                      }
                                      else
                                      {
                                        v47 = v44 + 1;
                                        v48 = (unsigned int *)(v43 + 96LL * v44);
                                        while ( (unsigned int)v47 < v46 )
                                        {
                                          if ( *(_QWORD *)(96 * v47 + v43 + 8) == *((_QWORD *)v48 + 1)
                                            && *(_DWORD *)(96 * v47 + v43 + 16) == v48[4] )
                                          {
                                            v4 = 192;
                                            goto LABEL_65;
                                          }
                                          v47 = (unsigned int)(v47 + 1);
                                        }
                                        v49 = *v48 + v43;
                                        if ( (v49 & 1) != 0 )
                                        {
                                          v4 = 195;
                                        }
                                        else if ( v49 < a1 || v49 >= v45 )
                                        {
                                          v4 = 200;
                                        }
                                        else
                                        {
                                          v50 = (unsigned __int16 *)(v49 + 2LL * v48[1]);
                                          if ( (unsigned __int64)v50 + 1 < a1 || (unsigned __int64)v50 + 1 >= a2 + a1 )
                                          {
                                            v4 = 210;
                                          }
                                          else if ( *v50 )
                                          {
                                            v4 = 220;
                                          }
                                          else
                                          {
                                            LODWORD(v74) = v48[4];
                                            LODWORD(v73) = v48[2];
                                            StringCchPrintfW(
                                              pszDest,
                                              0x23uLL,
                                              L"\\VOLUME{%08lx%08lx-%08lx}",
                                              v48[3],
                                              v73,
                                              v74);
                                            v51 = (char *)pszDest - v49;
                                            do
                                            {
                                              v52 = *(unsigned __int16 *)&v51[v49];
                                              v53 = *(unsigned __int16 *)v49 - v52;
                                              if ( v53 )
                                                break;
                                              v49 += 2LL;
                                            }
                                            while ( v52 );
                                            if ( v53 )
                                            {
                                              v4 = 222;
                                            }
                                            else
                                            {
                                              v43 = v84;
                                              v54 = (_DWORD *)(v84 + v48[5]);
                                              if ( ((unsigned __int8)v54 & 7) != 0 )
                                              {
                                                v4 = 225;
                                              }
                                              else if ( (unsigned __int64)v54 < a1 || (unsigned __int64)v54 >= a2 + a1 )
                                              {
                                                v4 = 230;
                                              }
                                              else
                                              {
                                                v55 = v48[6];
                                                if ( (unsigned int)v55 < 0x18 )
                                                {
                                                  v4 = 240;
                                                }
                                                else
                                                {
                                                  v56 = (char *)v54 + v55 - 1;
                                                  if ( (unsigned __int64)v56 < a1
                                                    || (v45 = a2 + a1, (unsigned __int64)v56 >= v45) )
                                                  {
                                                    v4 = 245;
                                                  }
                                                  else if ( *v54 == 3 )
                                                  {
                                                    if ( v54[1] > 0x84000u )
                                                    {
                                                      v4 = 260;
                                                    }
                                                    else
                                                    {
                                                      v57 = 0;
                                                      if ( *(_DWORD *)(a1 + 124) )
                                                      {
                                                        v68 = v48 + 9;
                                                        v69 = *(unsigned int *)(a1 + 124);
                                                        do
                                                        {
                                                          v70 = *v68 + v68[7];
                                                          ++v68;
                                                          v57 += v70;
                                                          --v69;
                                                        }
                                                        while ( v69 );
                                                      }
                                                      v58 = v54[1];
                                                      if ( v57 == v58 )
                                                      {
                                                        v59 = 24;
                                                        if ( v58 )
                                                          v59 = 8 * v58 + 16;
                                                        if ( v59 == v48[6] )
                                                        {
                                                          if ( v48[8] > 0x80000 )
                                                          {
                                                            v4 = 280;
                                                          }
                                                          else
                                                          {
                                                            v60 = 0;
                                                            if ( *(_DWORD *)(a1 + 124) )
                                                            {
                                                              v66 = v48 + 16;
                                                              v67 = *(unsigned int *)(a1 + 124);
                                                              do
                                                              {
                                                                v60 += *v66++;
                                                                --v67;
                                                              }
                                                              while ( v67 );
                                                            }
                                                            v61 = v48[8];
                                                            if ( v60 == v61 )
                                                            {
                                                              v42 += v60;
                                                              v62 = (unsigned __int16 *)(v84 + v48[7]);
                                                              if ( ((unsigned __int8)v62 & 1) != 0 )
                                                              {
                                                                v4 = 283;
                                                              }
                                                              else
                                                              {
                                                                for ( i = 0; ; ++i )
                                                                {
                                                                  if ( i >= v61 )
                                                                  {
                                                                    ++v44;
                                                                    goto LABEL_75;
                                                                  }
                                                                  if ( (unsigned __int64)v62 >= v45
                                                                    || (unsigned __int64)v62 < a1 )
                                                                  {
                                                                    v4 = 285;
                                                                    goto LABEL_65;
                                                                  }
                                                                  if ( (unsigned __int64)v62 + 3 < a1
                                                                    || (unsigned __int64)v62 + 3 >= v45 )
                                                                  {
                                                                    break;
                                                                  }
                                                                  v64 = *v62;
                                                                  if ( (unsigned __int16)v64 >= 0x400u )
                                                                  {
                                                                    v4 = 300;
                                                                    goto LABEL_65;
                                                                  }
                                                                  v65 = &v62[v64];
                                                                  v62 = v65 + 2;
                                                                  if ( (unsigned __int64)v65 + 3 < a1
                                                                    || (unsigned __int64)v65 + 3 >= v45 )
                                                                  {
                                                                    v4 = 310;
                                                                    goto LABEL_65;
                                                                  }
                                                                  if ( v65[1] )
                                                                  {
                                                                    v4 = 320;
                                                                    goto LABEL_65;
                                                                  }
                                                                }
                                                                v4 = 290;
                                                              }
                                                            }
                                                            else
                                                            {
                                                              v4 = 281;
                                                            }
                                                          }
                                                        }
                                                        else
                                                        {
                                                          v4 = 270;
                                                        }
                                                      }
                                                      else
                                                      {
                                                        v4 = 265;
                                                      }
                                                    }
                                                  }
                                                  else
                                                  {
                                                    v4 = 250;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  else
                                  {
                                    v25 = (unsigned int *)(v12 + 32LL * v24);
                                    v26 = v25[3] + v17;
                                    if ( (v26 & 1) != 0 )
                                    {
                                      v4 = 77;
                                    }
                                    else if ( v26 >= v13 || v26 < a1 )
                                    {
                                      v4 = 80;
                                    }
                                    else
                                    {
                                      v27 = v25[4];
                                      if ( (_DWORD)v27 )
                                      {
                                        if ( (unsigned int)v27 > 0x400 )
                                        {
                                          v4 = 100;
                                        }
                                        else
                                        {
                                          v28 = v26 + (unsigned int)(2 * v27 + 2) - 1LL;
                                          if ( v28 >= v13 || v28 < a1 )
                                          {
                                            v4 = 110;
                                          }
                                          else if ( *(_WORD *)(v26 + 2 * v27) )
                                          {
                                            v4 = 120;
                                          }
                                          else
                                          {
                                            v29 = v25[1];
                                            if ( v29 > 0x8000 )
                                            {
                                              v4 = 140;
                                            }
                                            else if ( v29 > v22 )
                                            {
                                              v4 = 150;
                                            }
                                            else
                                            {
                                              v30 = (int)*v25;
                                              v80 = v22 - v29;
                                              if ( (_DWORD)v30 == -1 && v29 )
                                              {
                                                v4 = 152;
                                              }
                                              else if ( (_DWORD)v30 == v23 || (_DWORD)v30 == -1 )
                                              {
                                                v31 = v25[5];
                                                v82 = v29 + v23;
                                                if ( (v31 & 1) != 0 )
                                                  goto LABEL_55;
                                                if ( (v31 & 0x7FFE) == 0 )
                                                {
                                                  v4 = 155;
                                                  break;
                                                }
                                                if ( v25[2] )
                                                {
LABEL_55:
                                                  v76 = 0;
                                                  v32 = (int)(v30 + v29);
                                                  v33 = *v25;
                                                  v34 = 0;
                                                  v35 = 0;
                                                  v36 = (int)*v25;
                                                  v37 = (int *)(v85 + 4 + 8 * v30);
                                                  while ( v36 < v32 )
                                                  {
                                                    if ( v36 < 0 || v33 >= v77 )
                                                    {
                                                      v4 = 160;
                                                      goto LABEL_65;
                                                    }
                                                    if ( v33 != (_DWORD)v30 && *(v37 - 1) <= (unsigned int)*(v37 - 3) )
                                                    {
                                                      v4 = 165;
                                                      goto LABEL_65;
                                                    }
                                                    v38 = *v37;
                                                    v39 = ((unsigned int)*v37 >> 4) & 7;
                                                    if ( (*v37 & 1) == 0 && v39 > v79 )
                                                    {
                                                      v4 = 167;
                                                      goto LABEL_65;
                                                    }
                                                    if ( (v38 & 0xE) == 0 )
                                                    {
                                                      v4 = 173;
                                                      goto LABEL_65;
                                                    }
                                                    if ( (*v37 & 1) != 0 )
                                                    {
                                                      if ( (v38 & 8) != 0 )
                                                      {
                                                        v4 = 175;
                                                        goto LABEL_65;
                                                      }
                                                    }
                                                    else
                                                    {
                                                      ++v34;
                                                      if ( (v38 & 4) != 0 )
                                                        v76 |= 1 << v39;
                                                      if ( (v38 & 2) != 0 )
                                                        v35 |= 1 << v39;
                                                    }
                                                    ++v33;
                                                    ++v36;
                                                    v37 += 2;
                                                  }
                                                  if ( v34 == v25[2] )
                                                  {
                                                    v41 = v25[5];
                                                    if ( (v41 & 1) != 0
                                                      || v76 == (unsigned __int8)v41 >> 1 && v35 == ((v41 >> 8) & 0x7F) )
                                                    {
                                                      v22 = v80;
                                                      v24 = v78 + 1;
                                                      v17 = v86;
                                                      v12 = v87;
                                                      v6 = v81;
                                                      v23 = v82;
                                                      continue;
                                                    }
                                                    v4 = 187;
                                                  }
                                                  else
                                                  {
                                                    v4 = 185;
                                                  }
                                                }
                                                else
                                                {
                                                  v4 = 157;
                                                }
                                              }
                                              else
                                              {
                                                v4 = 153;
                                              }
                                            }
                                          }
                                        }
                                      }
                                      else
                                      {
                                        v4 = 90;
                                      }
                                    }
                                  }
                                  break;
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
          else
          {
            v4 = 37;
          }
        }
        else
        {
          v4 = 33;
        }
      }
    }
    else
    {
      v4 = 26;
    }
  }
  else
  {
    v4 = 20;
  }
LABEL_65:
  *a3 = v4;
  return v75;
}

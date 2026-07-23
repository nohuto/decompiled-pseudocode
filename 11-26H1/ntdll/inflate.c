/*
 * XREFs of inflate @ 0x1801530B0
 * Callers:
 *     RtlDecompressBufferDeflateInternal @ 0x180151108 (RtlDecompressBufferDeflateInternal.c)
 * Callees:
 *     inflateStateCheck @ 0x1801541B8 (inflateStateCheck.c)
 *     updatewindow @ 0x1801541F8 (updatewindow.c)
 *     adler32_z @ 0x180155BA4 (adler32_z.c)
 *     inflate_table @ 0x180155F90 (inflate_table.c)
 *     inflate_fast @ 0x180156428 (inflate_fast.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall inflate(unsigned __int8 **a1)
{
  unsigned __int8 **v2; // rcx
  unsigned __int8 *v3; // rdi
  __int64 v4; // r9
  unsigned int v5; // ebx
  unsigned __int8 *v6; // r10
  unsigned int v7; // r12d
  unsigned __int8 *v8; // r13
  unsigned int v9; // r14d
  unsigned int v10; // ebp
  _DWORD *v11; // r11
  _DWORD *v12; // r8
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  __int64 result; // rax
  unsigned __int32 v18; // r14d
  int v19; // eax
  char v20; // al
  unsigned int v21; // r14d
  const char *v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // ecx
  int v25; // eax
  const char *v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // r15d
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  char v33; // cl
  unsigned int v34; // r14d
  char v35; // dl
  unsigned int v36; // ecx
  int v37; // eax
  unsigned int v38; // edx
  __int64 v39; // rax
  __int16 v40; // cx
  const char *v41; // rax
  __int64 v42; // r8
  unsigned int v43; // ecx
  int v44; // edx
  int v45; // eax
  int v46; // edx
  int v47; // edx
  __int16 v48; // r9
  unsigned int v49; // r14d
  int v50; // ecx
  unsigned int v51; // r14d
  int v52; // r8d
  int v53; // r8d
  int v54; // r8d
  int v55; // eax
  int v56; // ecx
  int v57; // ecx
  int v58; // ecx
  int v59; // ecx
  __int64 v60; // rdx
  int v61; // r8d
  unsigned int v62; // eax
  int v63; // ecx
  int v64; // eax
  int v65; // r8d
  unsigned int v66; // eax
  int v67; // ecx
  int v68; // eax
  __int64 v69; // rcx
  unsigned int v70; // ecx
  unsigned int v71; // eax
  __int64 v72; // rdx
  unsigned int v73; // eax
  unsigned int v74; // r8d
  unsigned __int8 *v75; // rdx
  __int64 v76; // rdx
  int v77; // ecx
  unsigned int v78; // ebx
  int v79; // eax
  unsigned int v80; // r15d
  int v81; // ecx
  int v82; // ecx
  unsigned int v83; // ebx
  int v84; // eax
  int v85; // eax
  int v86; // r8d
  unsigned int v87; // [rsp+30h] [rbp-48h]
  unsigned int v88; // [rsp+34h] [rbp-44h]
  unsigned __int8 *v89; // [rsp+38h] [rbp-40h]
  unsigned int v90; // [rsp+88h] [rbp+10h]
  unsigned int v91; // [rsp+90h] [rbp+18h]
  int v92; // [rsp+98h] [rbp+20h]
  unsigned int v93; // [rsp+98h] [rbp+20h]
  unsigned int v94; // [rsp+98h] [rbp+20h]

  if ( (unsigned int)inflateStateCheck() || !v2[2] || !*v2 && *((_DWORD *)v2 + 2) )
    return 4294967294LL;
  v3 = v2[5];
  if ( *((_DWORD *)v3 + 2) == 16191 )
    *((_DWORD *)v3 + 2) = 16192;
  v4 = *((unsigned int *)v2 + 6);
  v5 = *((_DWORD *)v2 + 6);
  v6 = v2[2];
  v7 = *((_DWORD *)v2 + 2);
  v8 = *v2;
  v9 = *((_DWORD *)v3 + 18);
  v10 = *((_DWORD *)v3 + 19);
  v87 = v5;
  v89 = v6;
  v91 = v5;
  v88 = v7;
  v90 = 0;
LABEL_8:
  v11 = v3 + 112;
LABEL_9:
  v12 = v3 + 116;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = *((_DWORD *)v3 + 2);
        if ( v13 > 16199 )
          break;
        if ( v13 == 16199 )
        {
LABEL_133:
          *((_DWORD *)v3 + 2) = 16200;
LABEL_134:
          if ( v7 < 6 || (unsigned int)v4 < 0x102 )
          {
            v60 = *((_QWORD *)v3 + 12);
            v61 = (1 << *v11) - 1;
            *((_DWORD *)v3 + 2265) = 0;
            while ( 1 )
            {
              v62 = *(_DWORD *)(v60 + 4LL * (v9 & v61));
              v93 = v62;
              if ( BYTE1(v62) <= v10 )
                break;
              if ( !v7 )
                goto LABEL_231;
              --v7;
              v9 += *v8++ << v10;
              v10 += 8;
            }
            if ( (_BYTE)v62 && (v62 & 0xF0) == 0 )
            {
              v4 = (unsigned int)(1 << (BYTE1(v62) + v62));
              while ( 1 )
              {
                v62 = *(_DWORD *)(*((_QWORD *)v3 + 12) + 4LL * (HIWORD(v93) + ((v9 & ((_DWORD)v4 - 1)) >> SBYTE1(v93))));
                if ( BYTE1(v93) + (unsigned int)BYTE1(v62) <= v10 )
                  break;
                if ( !v7 )
                  goto LABEL_231;
                --v7;
                v9 += *v8++ << v10;
                v10 += 8;
              }
              *((_DWORD *)v3 + 2265) = BYTE1(v93);
              v9 >>= SBYTE1(v93);
              v11 = v3 + 112;
              v10 -= BYTE1(v93);
            }
            *((_DWORD *)v3 + 2265) += BYTE1(v62);
            v9 >>= SBYTE1(v62);
            v10 -= BYTE1(v62);
            *((_DWORD *)v3 + 20) = HIWORD(v62);
            if ( !(_BYTE)v62 )
            {
              *((_DWORD *)v3 + 2) = 16205;
              goto LABEL_159;
            }
            if ( (v62 & 0x20) != 0 )
            {
              *((_DWORD *)v3 + 2265) = -1;
              *((_DWORD *)v3 + 2) = 16191;
              goto LABEL_159;
            }
            if ( (v62 & 0x40) == 0 )
            {
              v12 = v3 + 116;
              *((_DWORD *)v3 + 2) = 16201;
              *((_DWORD *)v3 + 22) = v62 & 0xF;
LABEL_165:
              if ( *((_DWORD *)v3 + 22) )
              {
                while ( v10 < *((_DWORD *)v3 + 22) )
                {
                  if ( !v7 )
                    goto LABEL_231;
                  --v7;
                  v9 += *v8++ << v10;
                  v10 += 8;
                }
                v63 = *((_DWORD *)v3 + 22);
                v10 -= v63;
                v64 = v9 & ((1 << v63) - 1);
                v9 >>= v63;
                *((_DWORD *)v3 + 20) += v64;
                *((_DWORD *)v3 + 2265) += v63;
              }
              *((_DWORD *)v3 + 2266) = *((_DWORD *)v3 + 20);
              *((_DWORD *)v3 + 2) = 16202;
LABEL_171:
              v65 = (1 << *v12) - 1;
              while ( 1 )
              {
                v66 = *(_DWORD *)(*((_QWORD *)v3 + 13) + 4LL * (v9 & v65));
                v94 = v66;
                if ( BYTE1(v66) <= v10 )
                  break;
                if ( !v7 )
                  goto LABEL_231;
                --v7;
                v9 += *v8++ << v10;
                v10 += 8;
              }
              if ( (v66 & 0xF0) == 0 )
              {
                v4 = (unsigned int)(1 << (BYTE1(v66) + v66));
                while ( 1 )
                {
                  v66 = *(_DWORD *)(*((_QWORD *)v3 + 13) + 4LL
                                                         * (HIWORD(v94) + ((v9 & ((_DWORD)v4 - 1)) >> SBYTE1(v94))));
                  if ( BYTE1(v94) + (unsigned int)BYTE1(v66) <= v10 )
                    break;
                  if ( !v7 )
                    goto LABEL_231;
                  --v7;
                  v9 += *v8++ << v10;
                  v10 += 8;
                }
                v10 -= BYTE1(v94);
                v9 >>= SBYTE1(v94);
                *((_DWORD *)v3 + 2265) += BYTE1(v94);
              }
              *((_DWORD *)v3 + 2265) += BYTE1(v66);
              v10 -= BYTE1(v66);
              v9 >>= SBYTE1(v66);
              if ( (v66 & 0x40) != 0 )
              {
                v41 = "invalid distance code";
                goto LABEL_93;
              }
              v4 = v91;
              v11 = v3 + 112;
              v6 = v89;
              v12 = v3 + 116;
              *((_DWORD *)v3 + 2) = 16203;
              *((_DWORD *)v3 + 21) = HIWORD(v66);
              *((_DWORD *)v3 + 22) = v66 & 0xF;
LABEL_184:
              if ( *((_DWORD *)v3 + 22) )
              {
                while ( v10 < *((_DWORD *)v3 + 22) )
                {
                  if ( !v7 )
                    goto LABEL_231;
                  --v7;
                  v9 += *v8++ << v10;
                  v10 += 8;
                }
                v67 = *((_DWORD *)v3 + 22);
                v10 -= v67;
                v68 = v9 & ((1 << v67) - 1);
                v9 >>= v67;
                *((_DWORD *)v3 + 21) += v68;
                *((_DWORD *)v3 + 2265) += v67;
              }
              *((_DWORD *)v3 + 2) = 16204;
              goto LABEL_190;
            }
            a1[4] = "invalid literal/length code";
            *((_DWORD *)v3 + 2) = 16209;
LABEL_159:
            v4 = v91;
            v6 = v89;
            goto LABEL_9;
          }
          a1[2] = v6;
          *((_DWORD *)a1 + 6) = v4;
          *a1 = v8;
          *((_DWORD *)a1 + 2) = v7;
          *((_DWORD *)v3 + 18) = v9;
          *((_DWORD *)v3 + 19) = v10;
          inflate_fast(a1, v5, v12);
          v11 = v3 + 112;
          v6 = a1[2];
          v12 = v3 + 116;
          v4 = *((unsigned int *)a1 + 6);
          v8 = *a1;
          v7 = *((_DWORD *)a1 + 2);
          v9 = *((_DWORD *)v3 + 18);
          v10 = *((_DWORD *)v3 + 19);
          v89 = v6;
          v91 = *((_DWORD *)a1 + 6);
          if ( *((_DWORD *)v3 + 2) == 16191 )
          {
            *((_DWORD *)v3 + 2265) = -1;
            v11 = v3 + 112;
            goto LABEL_125;
          }
        }
        else if ( v13 > 16193 )
        {
          v29 = v13 - 16194;
          if ( !v29 )
            goto LABEL_63;
          v30 = v29 - 1;
          if ( v30 )
          {
            v31 = v30 - 1;
            if ( !v31 )
            {
              while ( v10 < 0xE )
              {
                if ( !v7 )
                  goto LABEL_231;
                --v7;
                v9 += *v8++ << v10;
                v10 += 8;
              }
              v33 = v9;
              v10 -= 14;
              v34 = v9 >> 5;
              v35 = v34;
              v36 = (v33 & 0x1F) + 257;
              v34 >>= 5;
              *((_DWORD *)v3 + 31) = v36;
              v37 = v34 & 0xF;
              v9 = v34 >> 4;
              v38 = (v35 & 0x1F) + 1;
              *((_DWORD *)v3 + 32) = v38;
              *((_DWORD *)v3 + 30) = v37 + 4;
              if ( v36 > 0x11E || v38 > 0x1E )
              {
                v22 = "too many length or distance symbols";
                goto LABEL_46;
              }
              *((_DWORD *)v3 + 33) = 0;
              *((_DWORD *)v3 + 2) = 16197;
LABEL_84:
              while ( 1 )
              {
                v39 = *((unsigned int *)v3 + 33);
                if ( (unsigned int)v39 >= *((_DWORD *)v3 + 30) )
                  break;
                while ( v10 < 3 )
                {
                  if ( !v7 )
                    goto LABEL_231;
                  --v7;
                  v9 += *v8++ << v10;
                  v10 += 8;
                }
                v40 = v9 & 7;
                v9 >>= 3;
                *(_WORD *)&v3[2 * word_1801913D0[(*((_DWORD *)v3 + 33))++] + 144] = v40;
                v10 -= 3;
              }
              while ( (unsigned int)v39 < 0x13 )
              {
                *(_WORD *)&v3[2 * word_1801913D0[v39] + 144] = 0;
                v39 = (unsigned int)++*((_DWORD *)v3 + 33);
              }
              *v11 = 7;
              *((_QWORD *)v3 + 12) = v3 + 1360;
              *((_QWORD *)v3 + 17) = v3 + 1360;
              v90 = inflate_table(0, (int)v3 + 144, 19, (int)v3 + 136, (__int64)v11, (__int64)(v3 + 784));
              if ( !v90 )
              {
                v6 = v89;
                v11 = v3 + 112;
                *((_DWORD *)v3 + 33) = 0;
                *((_DWORD *)v3 + 2) = 16198;
                goto LABEL_95;
              }
              v41 = "invalid code lengths set";
LABEL_93:
              a1[4] = (unsigned __int8 *)v41;
              *((_DWORD *)v3 + 2) = 16209;
              goto LABEL_54;
            }
            v32 = v31 - 1;
            if ( !v32 )
              goto LABEL_84;
            if ( v32 != 1 )
              return 4294967294LL;
LABEL_95:
            while ( *((_DWORD *)v3 + 33) < (unsigned int)(*((_DWORD *)v3 + 31) + *((_DWORD *)v3 + 32)) )
            {
              v42 = *((_QWORD *)v3 + 12);
              v4 = (unsigned int)((1 << *v11) - 1);
              while ( 1 )
              {
                v43 = (unsigned __int8)BYTE1(*(_DWORD *)(v42 + 4LL * (v9 & (unsigned int)v4)));
                v92 = *(_DWORD *)(v42 + 4LL * (v9 & (unsigned int)v4));
                if ( v43 <= v10 )
                  break;
                if ( !v7 )
                  goto LABEL_231;
                --v7;
                v9 += *v8++ << v10;
                v10 += 8;
              }
              v44 = HIWORD(*(_DWORD *)(v42 + 4LL * (v9 & (unsigned int)v4)));
              if ( (unsigned __int16)v44 >= 0x10u )
              {
                if ( (_WORD)v44 == 16 )
                {
                  while ( v10 < (unsigned int)BYTE1(v92) + 2 )
                  {
                    if ( !v7 )
                      goto LABEL_231;
                    --v7;
                    v9 += *v8++ << v10;
                    v10 += 8;
                  }
                  v45 = *((_DWORD *)v3 + 33);
                  v9 >>= SBYTE1(v92);
                  v10 -= BYTE1(v92);
                  if ( !v45 )
                  {
LABEL_121:
                    a1[4] = "invalid bit length repeat";
                    *((_DWORD *)v3 + 2) = 16209;
                    break;
                  }
                  v10 -= 2;
                  v46 = v9 & 3;
                  v9 >>= 2;
                  v47 = v46 + 3;
                  v48 = *(_WORD *)&v3[2 * (v45 - 1) + 144];
                }
                else
                {
                  if ( HIWORD(v92) == 17 )
                  {
                    while ( v10 < (unsigned int)BYTE1(v92) + 3 )
                    {
                      if ( !v7 )
                        goto LABEL_231;
                      --v7;
                      v9 += *v8++ << v10;
                      v10 += 8;
                    }
                    v48 = 0;
                    v49 = v9 >> SBYTE1(v92);
                    v50 = -3;
                    v47 = (v49 & 7) + 3;
                    v9 = v49 >> 3;
                  }
                  else
                  {
                    while ( v10 < (unsigned int)BYTE1(v92) + 7 )
                    {
                      if ( !v7 )
                        goto LABEL_231;
                      --v7;
                      v9 += *v8++ << v10;
                      v10 += 8;
                    }
                    v48 = 0;
                    v51 = v9 >> SBYTE1(v92);
                    v50 = -7;
                    v47 = (v51 & 0x7F) + 11;
                    v9 = v51 >> 7;
                  }
                  v10 += v50 - BYTE1(v92);
                }
                v52 = *((_DWORD *)v3 + 33);
                if ( v52 + v47 > (unsigned int)(*((_DWORD *)v3 + 31) + *((_DWORD *)v3 + 32)) )
                  goto LABEL_121;
                do
                {
                  *(_WORD *)&v3[2 * v52 + 144] = v48;
                  v52 = ++*((_DWORD *)v3 + 33);
                  --v47;
                }
                while ( v47 );
              }
              else
              {
                v10 -= v43;
                v9 >>= v43;
                *(_WORD *)&v3[2 * (*((_DWORD *)v3 + 33))++ + 144] = v44;
              }
            }
            v12 = v3 + 116;
            v4 = v91;
            if ( *((_DWORD *)v3 + 2) != 16209 )
            {
              if ( !*((_WORD *)v3 + 328) )
              {
                a1[4] = "invalid code -- missing end-of-block";
                *((_DWORD *)v3 + 2) = 16209;
                goto LABEL_125;
              }
              v53 = *((_DWORD *)v3 + 31);
              *((_QWORD *)v3 + 12) = v3 + 1360;
              *((_QWORD *)v3 + 17) = v3 + 1360;
              *v11 = 10;
              v90 = inflate_table(1, (int)v3 + 144, v53, (int)v3 + 136, (__int64)v11, (__int64)(v3 + 784));
              if ( v90 )
              {
                v4 = v91;
                v6 = v89;
                a1[4] = "invalid literal/lengths set";
                *((_DWORD *)v3 + 2) = 16209;
                goto LABEL_71;
              }
              v54 = *((_DWORD *)v3 + 32);
              *((_QWORD *)v3 + 13) = *((_QWORD *)v3 + 17);
              v55 = *((_DWORD *)v3 + 31) + 72;
              *((_DWORD *)v3 + 29) = 9;
              v5 = v87;
              v90 = inflate_table(2, (int)v3 + 2 * v55, v54, (int)v3 + 136, (__int64)(v3 + 116), (__int64)(v3 + 784));
              if ( v90 )
              {
                v41 = "invalid distances set";
                goto LABEL_93;
              }
              v4 = v91;
              v11 = v3 + 112;
              v6 = v89;
              goto LABEL_133;
            }
          }
          else
          {
LABEL_64:
            v27 = *((_DWORD *)v3 + 20);
            if ( v27 )
            {
              v28 = v7;
              if ( v27 <= v7 )
                v28 = *((_DWORD *)v3 + 20);
              if ( v28 > (unsigned int)v4 )
                v28 = v4;
              if ( !v28 )
              {
LABEL_231:
                v80 = v90;
                goto LABEL_232;
              }
              memmove(v6, v8, v28);
              v7 -= v28;
              v4 = v91 - v28;
              v6 = &v89[v28];
              v91 -= v28;
              v8 += v28;
              v89 = v6;
              *((_DWORD *)v3 + 20) -= v28;
LABEL_71:
              v5 = v87;
              goto LABEL_8;
            }
            *((_DWORD *)v3 + 2) = 16191;
          }
        }
        else
        {
          if ( v13 == 16193 )
          {
            v9 >>= v10 & 7;
            for ( v10 -= v10 & 7; v10 < 0x20; v10 += 8 )
            {
              if ( !v7 )
                goto LABEL_231;
              --v7;
              v9 += *v8++ << v10;
            }
            if ( (unsigned __int16)v9 != ~v9 >> 16 )
            {
              v26 = "invalid stored block lengths";
              goto LABEL_221;
            }
            *((_DWORD *)v3 + 20) = (unsigned __int16)v9;
            v9 = 0;
            v10 = 0;
LABEL_63:
            *((_DWORD *)v3 + 2) = 16195;
            goto LABEL_64;
          }
          v14 = v13 - 16180;
          if ( v14 )
          {
            v15 = v14 - 9;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                if ( (unsigned int)(v16 - 1) >= 2 )
                  return 4294967294LL;
                goto LABEL_25;
              }
            }
            else
            {
              while ( v10 < 0x20 )
              {
                if ( !v7 )
                  goto LABEL_231;
                --v7;
                v9 += *v8++ << v10;
                v10 += 8;
              }
              v18 = _byteswap_ulong(v9);
              *((_DWORD *)v3 + 8) = v18;
              v10 = 0;
              *((_DWORD *)a1 + 19) = v18;
              v9 = 0;
              *((_DWORD *)v3 + 2) = 16190;
            }
            if ( !*((_DWORD *)v3 + 5) )
            {
              a1[2] = v6;
              result = 2LL;
              *((_DWORD *)a1 + 6) = v4;
              *a1 = v8;
              *((_DWORD *)a1 + 2) = v7;
              *((_DWORD *)v3 + 18) = v9;
              *((_DWORD *)v3 + 19) = v10;
              return result;
            }
            v19 = adler32_z(0LL, 0LL, 0LL);
            v4 = v91;
            v11 = v3 + 112;
            v6 = v89;
            v12 = v3 + 116;
            *((_DWORD *)v3 + 8) = v19;
            *((_DWORD *)a1 + 19) = v19;
            *((_DWORD *)v3 + 2) = 16191;
LABEL_25:
            if ( *((_DWORD *)v3 + 3) )
            {
              *((_DWORD *)v3 + 2) = 16206;
              v9 >>= v10 & 7;
              v10 -= v10 & 7;
            }
            else
            {
              while ( v10 < 3 )
              {
                if ( !v7 )
                  goto LABEL_231;
                --v7;
                v9 += *v8++ << v10;
                v10 += 8;
              }
              v20 = v9;
              v21 = v9 >> 1;
              *((_DWORD *)v3 + 3) = v20 & 1;
              if ( (v21 & 3) != 0 )
              {
                switch ( v21 & 3 )
                {
                  case 1u:
                    *v11 = 9;
                    *((_QWORD *)v3 + 12) = "`\a";
                    *((_QWORD *)v3 + 13) = &unk_180191350;
                    *v12 = 5;
                    *((_DWORD *)v3 + 2) = 16199;
                    break;
                  case 2u:
                    *((_DWORD *)v3 + 2) = 16196;
                    break;
                  case 3u:
                    a1[4] = "invalid block type";
                    *((_DWORD *)v3 + 2) = 16209;
                    break;
                }
              }
              else
              {
                *((_DWORD *)v3 + 2) = 16193;
              }
              v9 = v21 >> 2;
              v10 -= 3;
            }
          }
          else if ( *((_DWORD *)v3 + 4) )
          {
            while ( v10 < 0x10 )
            {
              if ( !v7 )
                goto LABEL_231;
              --v7;
              v9 += *v8++ << v10;
              v10 += 8;
            }
            if ( (v9 >> 8) + ((unsigned __int8)v9 << 8) != 31 * (((v9 >> 8) + ((unsigned __int8)v9 << 8)) / 0x1F) )
            {
              v22 = "incorrect header check";
              goto LABEL_46;
            }
            if ( (v9 & 0xF) != 8 )
            {
              v22 = "unknown compression method";
              goto LABEL_46;
            }
            v23 = *((_DWORD *)v3 + 12);
            v10 -= 4;
            v9 >>= 4;
            v24 = (v9 & 0xF) + 8;
            if ( !v23 )
            {
              *((_DWORD *)v3 + 12) = v24;
              v23 = (v9 & 0xF) + 8;
            }
            if ( v24 <= 0xF && v24 <= v23 )
            {
              *((_DWORD *)v3 + 6) = 0;
              *((_DWORD *)v3 + 7) = 1 << v24;
              v25 = adler32_z(0LL, 0LL, 0LL);
              v10 = 0;
              *((_DWORD *)v3 + 8) = v25;
              *((_DWORD *)a1 + 19) = v25;
              *((_DWORD *)v3 + 2) = ~BYTE1(v9) & 2 | 0x3F3D;
              v9 = 0;
LABEL_54:
              v4 = v91;
              v6 = v89;
              goto LABEL_8;
            }
            v22 = "invalid window size";
LABEL_46:
            a1[4] = (unsigned __int8 *)v22;
            *((_DWORD *)v3 + 2) = 16209;
          }
          else
          {
            *((_DWORD *)v3 + 2) = 16192;
          }
        }
      }
      if ( v13 > 16205 )
        break;
      if ( v13 == 16205 )
      {
        if ( !(_DWORD)v4 )
          goto LABEL_231;
        *v6++ = v3[80];
        v4 = (unsigned int)(v4 - 1);
        v89 = v6;
        v91 = v4;
        *((_DWORD *)v3 + 2) = 16200;
      }
      else
      {
        v56 = v13 - 16200;
        if ( !v56 )
          goto LABEL_134;
        v57 = v56 - 1;
        if ( !v57 )
          goto LABEL_165;
        v58 = v57 - 1;
        if ( !v58 )
          goto LABEL_171;
        v59 = v58 - 1;
        if ( !v59 )
          goto LABEL_184;
        if ( v59 != 1 )
          return 4294967294LL;
LABEL_190:
        if ( !(_DWORD)v4 )
          goto LABEL_231;
        v69 = *((unsigned int *)v3 + 21);
        if ( (unsigned int)v69 <= v5 - (unsigned int)v4 )
        {
          v73 = *((_DWORD *)v3 + 20);
          v75 = &v6[-v69];
          v74 = v73;
        }
        else
        {
          v70 = v69 - (v5 - v4);
          if ( v70 > *((_DWORD *)v3 + 14) && *((_DWORD *)v3 + 2264) )
          {
            v26 = "invalid distance too far back";
            goto LABEL_221;
          }
          v71 = *((_DWORD *)v3 + 15);
          if ( v70 <= v71 )
          {
            v72 = v71 - v70;
          }
          else
          {
            v70 -= v71;
            v72 = *((_DWORD *)v3 + 13) - v70;
          }
          v73 = *((_DWORD *)v3 + 20);
          v74 = v73;
          v75 = (unsigned __int8 *)(*((_QWORD *)v3 + 8) + v72);
          if ( v70 <= v73 )
            v74 = v70;
        }
        if ( v74 > (unsigned int)v4 )
          v74 = v4;
        v4 = (unsigned int)v4 - v74;
        v91 = v4;
        v76 = v75 - v6;
        *((_DWORD *)v3 + 20) = v73 - v74;
        do
        {
          *v6 = v6[v76];
          ++v6;
          --v74;
        }
        while ( v74 );
        v12 = v3 + 116;
        v89 = v6;
        if ( !*((_DWORD *)v3 + 20) )
        {
          *((_DWORD *)v3 + 2) = 16200;
LABEL_125:
          v12 = v3 + 116;
        }
      }
    }
    v77 = v13 - 16206;
    if ( v77 )
    {
      v81 = v77 - 2;
      if ( !v81 )
        goto LABEL_225;
      v82 = v81 - 1;
      if ( !v82 )
      {
        v80 = -3;
        goto LABEL_232;
      }
      if ( v82 == 1 )
        return 4294967292LL;
      return 4294967294LL;
    }
    if ( !*((_DWORD *)v3 + 4) )
      goto LABEL_224;
    while ( v10 < 0x20 )
    {
      if ( !v7 )
        goto LABEL_231;
      --v7;
      v9 += *v8++ << v10;
      v10 += 8;
    }
    v78 = v5 - v4;
    *((_DWORD *)a1 + 7) += v78;
    *((_DWORD *)v3 + 9) += v78;
    if ( (v3[16] & 4) != 0 && v78 )
    {
      v79 = adler32_z(*((unsigned int *)v3 + 8), &v6[-v78], v78);
      v4 = v91;
      v11 = v3 + 112;
      v6 = v89;
      v12 = v3 + 116;
      *((_DWORD *)v3 + 8) = v79;
      *((_DWORD *)a1 + 19) = v79;
    }
    v5 = v4;
    v87 = v4;
    if ( (v3[16] & 4) == 0 || _byteswap_ulong(v9) == *((_DWORD *)v3 + 8) )
      break;
    v26 = "incorrect data check";
LABEL_221:
    a1[4] = (unsigned __int8 *)v26;
    *((_DWORD *)v3 + 2) = 16209;
  }
  v9 = 0;
  v10 = 0;
LABEL_224:
  *((_DWORD *)v3 + 2) = 16208;
LABEL_225:
  v80 = 1;
LABEL_232:
  a1[2] = v89;
  *((_DWORD *)a1 + 6) = v91;
  *a1 = v8;
  *((_DWORD *)a1 + 2) = v7;
  *((_DWORD *)v3 + 19) = v10;
  *((_DWORD *)v3 + 18) = v9;
  if ( (*((_DWORD *)v3 + 13) || v5 != *((_DWORD *)a1 + 6) && *((int *)v3 + 2) <= 16205)
    && (unsigned int)updatewindow(a1, a1[2], v5 - *((_DWORD *)a1 + 6), v4) )
  {
    *((_DWORD *)v3 + 2) = 16210;
    return 4294967292LL;
  }
  v83 = v5 - *((_DWORD *)a1 + 6);
  *((_DWORD *)a1 + 7) += v83;
  *((_DWORD *)a1 + 3) += v88 - *((_DWORD *)a1 + 2);
  *((_DWORD *)v3 + 9) += v83;
  if ( (v3[16] & 4) != 0 && v83 )
  {
    v84 = adler32_z(*((unsigned int *)v3 + 8), &a1[2][-v83], v83);
    *((_DWORD *)v3 + 8) = v84;
    *((_DWORD *)a1 + 19) = v84;
  }
  v85 = 128;
  if ( *((_DWORD *)v3 + 2) != 16191 )
    v85 = 0;
  if ( *((_DWORD *)v3 + 2) == 16199 || (v86 = 0, *((_DWORD *)v3 + 2) == 16194) )
    v86 = 256;
  *((_DWORD *)a1 + 18) = (*((_DWORD *)v3 + 3) != 0 ? 0x40 : 0) + v85 + v86 + *((_DWORD *)v3 + 19);
  if ( !v80 )
    return (unsigned int)-5;
  return v80;
}

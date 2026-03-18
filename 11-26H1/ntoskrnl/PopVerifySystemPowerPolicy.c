/*
 * XREFs of PopVerifySystemPowerPolicy @ 0x1409442F4
 * Callers:
 *     PopApplyPolicy @ 0x140944018 (PopApplyPolicy.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     PopIsHiberbootSupported @ 0x140776D5C (PopIsHiberbootSupported.c)
 *     PopVerifyPowerActionPolicy @ 0x140944AA0 (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x140B24424 (PopVerifySystemPowerState.c)
 *     PopIsHibernateSupported @ 0x140B2E808 (PopIsHibernateSupported.c)
 */

__int64 __fastcall PopVerifySystemPowerPolicy(_OWORD *a1, __int64 a2)
{
  __int128 v3; // xmm0
  _OWORD *v4; // rcx
  int *v5; // rbx
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // eax
  int *v10; // r10
  union _KWAIT_BLOCK::$2ACC67C642B9E501E8652DFF4606A234 *p_Thread; // rcx
  int v12; // r9d
  int v13; // eax
  int v14; // r9d
  int v15; // eax
  int *v16; // r10
  int v17; // r9d
  int v18; // eax
  int *v19; // r10
  int v20; // r9d
  int v21; // eax
  unsigned int v22; // ebp
  int *v23; // rsi
  int *v24; // r14
  int v25; // ebx
  int v26; // r9d
  int v27; // eax
  int v28; // eax
  unsigned int v29; // eax
  _DWORD *v30; // rcx
  int v31; // eax
  _DWORD *v32; // rdx
  unsigned int v33; // r8d
  int v34; // r9d
  char v35; // al
  int v36; // eax
  __int64 v38; // rcx

  *(_OWORD *)a2 = *a1;
  *(_OWORD *)(a2 + 16) = a1[1];
  *(_OWORD *)(a2 + 32) = a1[2];
  *(_OWORD *)(a2 + 48) = a1[3];
  *(_OWORD *)(a2 + 64) = a1[4];
  *(_OWORD *)(a2 + 80) = a1[5];
  *(_OWORD *)(a2 + 96) = a1[6];
  v3 = a1[7];
  v4 = a1 + 8;
  *(_OWORD *)(a2 + 112) = v3;
  *(_OWORD *)(a2 + 128) = *v4;
  *(_OWORD *)(a2 + 144) = v4[1];
  *(_OWORD *)(a2 + 160) = v4[2];
  *(_OWORD *)(a2 + 176) = v4[3];
  *(_OWORD *)(a2 + 192) = v4[4];
  *(_OWORD *)(a2 + 208) = v4[5];
  *(_QWORD *)(a2 + 224) = *((_QWORD *)v4 + 12);
  if ( *(_DWORD *)a2 != 1 )
    return 3221225485LL;
  if ( stru_140F10828.WaitBlockFill5[29] )
  {
    *(_DWORD *)(a2 + 72) = 4;
  }
  else if ( stru_140F10828.WaitBlockFill5[28] )
  {
    *(_DWORD *)(a2 + 72) = 3;
  }
  else if ( stru_140F10828.WaitBlockFill5[27] )
  {
    *(_DWORD *)(a2 + 72) = 2;
  }
  v5 = (int *)(a2 + 68);
  v6 = *(_DWORD *)(a2 + 68);
  if ( v6 < 2 )
  {
    *v5 = 2;
    v6 = 2;
  }
  else if ( v6 > 4 )
  {
    *v5 = 4;
    v6 = 4;
  }
  v7 = *(_DWORD *)(a2 + 72);
  if ( v7 < 2 )
  {
    *(_DWORD *)(a2 + 72) = 2;
    v7 = 2;
  }
  else if ( v7 > 4 )
  {
    *(_DWORD *)(a2 + 72) = 4;
    v7 = 4;
  }
  if ( v7 < v6 )
  {
    *(_DWORD *)(a2 + 72) = v6;
    v7 = v6;
  }
  if ( v6 < (int)xmmword_140F10740 )
    *v5 = xmmword_140F10740;
  if ( v7 > SDWORD1(xmmword_140F10740) )
    *(_DWORD *)(a2 + 72) = DWORD1(xmmword_140F10740);
  v8 = *(_DWORD *)(a2 + 192);
  if ( v8 < DWORD2(xmmword_140F10740) )
  {
    *(_DWORD *)(a2 + 192) = DWORD2(xmmword_140F10740);
    v8 = DWORD2(xmmword_140F10740);
  }
  if ( v8 > HIDWORD(xmmword_140F10740) )
    *(_DWORD *)(a2 + 192) = HIDWORD(xmmword_140F10740);
  v9 = *(_DWORD *)(a2 + 212);
  if ( v9 < (unsigned int)qword_140F10750 )
  {
    *(_DWORD *)(a2 + 212) = qword_140F10750;
    v9 = qword_140F10750;
  }
  if ( v9 > HIDWORD(qword_140F10750) )
    *(_DWORD *)(a2 + 212) = HIDWORD(qword_140F10750);
  PopVerifyPowerActionPolicy(a2 + 4);
  PopVerifyPowerActionPolicy(a2 + 16);
  PopVerifyPowerActionPolicy(a2 + 28);
  PopVerifyPowerActionPolicy(a2 + 48);
  v10 = (int *)(a2 + 40);
  p_Thread = (union _KWAIT_BLOCK::$2ACC67C642B9E501E8652DFF4606A234 *)&stru_140F10828.WaitBlock[0].Thread;
  if ( a2 != -40 )
  {
    v12 = *v10;
    v13 = *v10;
    if ( *v10 )
    {
      if ( v12 < 6 && v12 != 1 )
      {
        if ( v12 == 5 )
        {
          if ( PopIsHiberbootSupported((__int64)&stru_140F10828.WaitBlock[0].Thread)
            || (unsigned __int8)PopIsHibernateSupported(p_Thread) )
          {
            goto LABEL_31;
          }
          v12 = 4;
        }
        else if ( v13 != 4 )
        {
          if ( v13 != 3 )
          {
            if ( v13 != 2 )
              goto LABEL_31;
LABEL_119:
            if ( !stru_140F10828.WaitBlockFill5[27] )
            {
              v12 = 3;
              if ( !stru_140F10828.WaitBlockFill5[28] )
              {
                v12 = 4;
                if ( !stru_140F10828.WaitBlockFill5[29] )
                  v12 = 1;
              }
            }
            goto LABEL_31;
          }
LABEL_117:
          if ( stru_140F10828.WaitBlockFill5[28] )
            goto LABEL_31;
          v12 = 2;
          goto LABEL_119;
        }
        if ( stru_140F10828.WaitBlockFill5[29] )
        {
LABEL_31:
          *v10 = v12;
          goto LABEL_32;
        }
        v12 = 3;
        goto LABEL_117;
      }
    }
  }
LABEL_32:
  if ( v5 )
  {
    v14 = *v5;
    v15 = *v5;
    if ( *v5 )
    {
      if ( v14 < 6 && v14 != 1 )
      {
        if ( v14 == 5 )
        {
          if ( PopIsHiberbootSupported((__int64)p_Thread) || (unsigned __int8)PopIsHibernateSupported(p_Thread) )
            goto LABEL_39;
          v14 = 4;
        }
        else if ( v15 != 4 )
        {
          if ( v15 != 3 )
          {
            if ( v15 != 2 )
              goto LABEL_39;
LABEL_130:
            if ( !stru_140F10828.WaitBlockFill5[27] )
            {
              v14 = 3;
              if ( !stru_140F10828.WaitBlockFill5[28] )
              {
                v14 = 4;
                if ( !stru_140F10828.WaitBlockFill5[29] )
                  v14 = 1;
              }
            }
            goto LABEL_39;
          }
LABEL_128:
          if ( stru_140F10828.WaitBlockFill5[28] )
            goto LABEL_39;
          v14 = 2;
          goto LABEL_130;
        }
        if ( stru_140F10828.WaitBlockFill5[29] )
        {
LABEL_39:
          *v5 = v14;
          goto LABEL_40;
        }
        v14 = 3;
        goto LABEL_128;
      }
    }
  }
LABEL_40:
  v16 = (int *)(a2 + 72);
  if ( a2 != -72 )
  {
    v17 = *v16;
    v18 = *v16;
    if ( *v16 )
    {
      if ( v17 < 6 && v17 != 1 )
      {
        if ( v17 == 5 )
        {
          if ( PopIsHiberbootSupported((__int64)p_Thread) || (unsigned __int8)PopIsHibernateSupported(p_Thread) )
            goto LABEL_47;
          v17 = 4;
        }
        else if ( v18 != 4 )
        {
          if ( v18 != 3 )
          {
            if ( v18 != 2 )
              goto LABEL_47;
LABEL_141:
            if ( !stru_140F10828.WaitBlockFill5[27] )
            {
              v17 = 3;
              if ( !stru_140F10828.WaitBlockFill5[28] )
              {
                v17 = 4;
                if ( !stru_140F10828.WaitBlockFill5[29] )
                  v17 = 1;
              }
            }
            goto LABEL_47;
          }
LABEL_139:
          if ( stru_140F10828.WaitBlockFill5[28] )
            goto LABEL_47;
          v17 = 2;
          goto LABEL_141;
        }
        if ( stru_140F10828.WaitBlockFill5[29] )
        {
LABEL_47:
          *v16 = v17;
          goto LABEL_48;
        }
        v17 = 3;
        goto LABEL_139;
      }
    }
  }
LABEL_48:
  v19 = (int *)(a2 + 76);
  if ( a2 == -76 )
    goto LABEL_56;
  v20 = *v19;
  v21 = *v19;
  if ( !*v19 || v20 >= 6 || v20 == 1 )
    goto LABEL_56;
  if ( v20 == 5 )
  {
    if ( PopIsHiberbootSupported((__int64)p_Thread) || (unsigned __int8)PopIsHibernateSupported(v38) )
      goto LABEL_55;
    v20 = 4;
  }
  else if ( v21 != 4 )
  {
    if ( v21 != 3 )
    {
      if ( v21 != 2 )
        goto LABEL_55;
LABEL_152:
      if ( !stru_140F10828.WaitBlockFill5[27] )
      {
        v20 = 3;
        if ( !stru_140F10828.WaitBlockFill5[28] )
        {
          v20 = 4;
          if ( !stru_140F10828.WaitBlockFill5[29] )
            v20 = 1;
        }
      }
      goto LABEL_55;
    }
LABEL_150:
    if ( stru_140F10828.WaitBlockFill5[28] )
      goto LABEL_55;
    v20 = 2;
    goto LABEL_152;
  }
  if ( !stru_140F10828.WaitBlockFill5[29] )
  {
    v20 = 3;
    goto LABEL_150;
  }
LABEL_55:
  *v19 = v20;
LABEL_56:
  v22 = 0;
  v23 = (int *)(a2 + 116);
  do
  {
    v24 = v23 - 3;
    v25 = *(v23 - 3);
    PopVerifyPowerActionPolicy(v23 - 3);
    if ( v25 == 3 && *v24 < 3 )
    {
      *v24 = 6;
      PopVerifyPowerActionPolicy(v23 - 3);
    }
    if ( v23 )
    {
      v26 = *v23;
      v27 = *v23;
      if ( *v23 )
      {
        if ( v26 < 6 && v26 != 1 )
        {
          if ( v26 == 5 )
          {
            if ( PopIsHiberbootSupported((__int64)&stru_140F10828.WaitBlock[0].Thread)
              || (unsigned __int8)PopIsHibernateSupported(&stru_140F10828.WaitBlockFill11[24]) )
            {
              goto LABEL_65;
            }
            v26 = 4;
          }
          else if ( v27 != 4 )
          {
            if ( v27 != 3 )
            {
              if ( v27 != 2 )
                goto LABEL_65;
LABEL_165:
              if ( !stru_140F10828.WaitBlockFill5[27] )
              {
                v26 = 3;
                if ( !stru_140F10828.WaitBlockFill5[28] )
                {
                  v26 = 4;
                  if ( !stru_140F10828.WaitBlockFill5[29] )
                    v26 = 1;
                }
              }
              goto LABEL_65;
            }
LABEL_163:
            if ( stru_140F10828.WaitBlockFill5[28] )
              goto LABEL_65;
            v26 = 2;
            goto LABEL_165;
          }
          if ( stru_140F10828.WaitBlockFill5[29] )
          {
LABEL_65:
            *v23 = v26;
            goto LABEL_66;
          }
          v26 = 3;
          goto LABEL_163;
        }
      }
    }
LABEL_66:
    if ( *(v23 - 3) == 2 && *v23 > 4 )
    {
      *v23 = 4;
      PopVerifySystemPowerState(a2 + 24LL * v22 + 116, 1LL);
    }
    if ( v22 )
    {
      v28 = *(v23 - 2);
      if ( *(v23 - 3) == 6 )
        v29 = v28 | 0x10;
      else
        v29 = v28 & 0xFFFFFFEF;
      *(v23 - 2) = v29;
    }
    if ( (unsigned int)*(v23 - 4) > 0x64 )
      *(v23 - 4) = 100;
    ++v22;
    v23 += 6;
  }
  while ( v22 < 4 );
  PopVerifyPowerActionPolicy(a2 + 220);
  if ( !*(_DWORD *)(a2 + 92) )
    *(_DWORD *)(a2 + 92) = 1;
  v30 = (_DWORD *)(a2 + 88);
  v31 = *(_DWORD *)(a2 + 88);
  v32 = (_DWORD *)(a2 + 88);
  if ( v31 && !stru_140F10828.WaitBlockFill5[31] )
  {
    *v30 = 0;
    v32 = (_DWORD *)(a2 + 88);
    v31 = 0;
  }
  v33 = *(_DWORD *)(a2 + 60);
  v34 = v33;
  if ( v33 )
  {
    v30 = v32;
    if ( v33 < 0x3C )
    {
      *(_DWORD *)(a2 + 60) = 60;
      v34 = 60;
    }
  }
  if ( (unsigned int)(v31 - 1) <= 0x3A )
    *v30 = 60;
  v35 = *(_BYTE *)(a2 + 64);
  if ( (unsigned __int8)v35 > 0x5Au )
  {
    *(_BYTE *)(a2 + 64) = 90;
    v35 = 90;
  }
  if ( v34 && !v35 )
    *(_BYTE *)(a2 + 64) = 90;
  v36 = *(_DWORD *)(a2 + 68);
  if ( *(_DWORD *)(a2 + 72) < v36 )
    *(_DWORD *)(a2 + 72) = v36;
  if ( *(_DWORD *)(a2 + 76) > v36 )
    *(_DWORD *)(a2 + 76) = v36;
  return 0LL;
}

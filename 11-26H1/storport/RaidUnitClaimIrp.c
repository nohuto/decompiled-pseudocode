/*
 * XREFs of RaidUnitClaimIrp @ 0x140014BFC
 * Callers:
 *     RaUnitStartIo @ 0x140013D70 (RaUnitStartIo.c)
 *     RaUnitStartResetIo @ 0x1400A2224 (RaUnitStartResetIo.c)
 * Callees:
 *     RaidAdapterMapBuffers @ 0x140027920 (RaidAdapterMapBuffers.c)
 *     TranslateToExtendedSrb @ 0x14002B270 (TranslateToExtendedSrb.c)
 *     RaUnitAddToPendingList @ 0x140033130 (RaUnitAddToPendingList.c)
 *     McTemplateK0zqjuuujssstqq_EtwWriteTransfer @ 0x140098418 (McTemplateK0zqjuuujssstqq_EtwWriteTransfer.c)
 *     StorpDataInBufferAllocateMdlAndLockPages @ 0x1400AC840 (StorpDataInBufferAllocateMdlAndLockPages.c)
 */

__int64 __fastcall RaidUnitClaimIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r10
  __int64 v9; // rbp
  _DWORD *v10; // rbx
  int **v12; // rsi
  int *v13; // rcx
  int v14; // edx
  __int64 v15; // rax
  bool v16; // zf
  char v17; // al
  int *v18; // r8
  unsigned int LockArray_high; // eax
  __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rax
  int *v23; // rcx
  __int64 v24; // rdx
  int v25; // r8d
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 j; // r11
  __int64 v31; // rcx
  unsigned __int64 v32; // r10
  int v33; // ecx
  unsigned __int64 v34; // rcx
  __int64 result; // rax
  __int64 v36; // rsi
  __int64 v37; // rbp
  __int64 v38; // rcx
  __int64 v39; // rcx
  char v40; // r11
  char v41; // bp
  unsigned int v42; // r10d
  __int64 v43; // r9
  __int64 v44; // rcx
  unsigned __int64 v45; // r8
  __int64 v46; // rdx
  int v47; // ecx
  char *v48; // rsi
  int v49; // ecx
  int v50; // eax
  __int64 v51; // r9
  __int64 v52; // rax
  int v53; // ecx
  unsigned int v54; // r11d
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned __int64 v57; // r9
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 i; // rcx
  __int64 v61; // rdx
  char *v62; // rdx
  int v63; // ecx
  struct _MDL *v64; // rcx
  unsigned __int8 v65; // [rsp+80h] [rbp-68h]
  char v66; // [rsp+81h] [rbp-67h]
  __int64 v67; // [rsp+90h] [rbp-58h] BYREF
  __int64 v68; // [rsp+98h] [rbp-50h]
  __int64 v69; // [rsp+A0h] [rbp-48h]
  _DWORD *v70; // [rsp+A8h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 184);
  v5 = 0LL;
  v6 = *(_QWORD *)(a4 + 16);
  v7 = 0LL;
  v8 = a2;
  v67 = 0LL;
  v9 = 0LL;
  v66 = 0;
  v10 = *(_DWORD **)(v4 + 8);
  v70 = 0LL;
  v65 = 0;
  if ( *((_BYTE *)v10 + 2) == 40 )
  {
    v39 = (unsigned int)v10[13];
    v40 = 0;
    v5 = v10;
    *(_WORD *)((char *)v10 + v39) = 1;
    *(_DWORD *)((char *)v10 + v39 + 4) = 4;
    *((_BYTE *)v10 + v39 + 8) = *(_BYTE *)(a1 + 104);
    *((_BYTE *)v10 + v39 + 9) = *(_BYTE *)(a1 + 105);
    *((_BYTE *)v10 + v39 + 10) = *(_BYTE *)(a1 + 106);
    v41 = *((_BYTE *)v10 + 2);
    v68 = *((_QWORD *)v10 + 10);
    v69 = *((_QWORD *)v10 + 8);
    if ( v41 != 40 || v10[5] )
    {
      v48 = 0LL;
      v65 = 0;
      if ( v41 == 40 )
        goto LABEL_56;
      v9 = 0LL;
      goto LABEL_60;
    }
    v42 = v10[14];
    v43 = 0LL;
    if ( !v42 )
      goto LABEL_55;
    while ( 1 )
    {
      v44 = (unsigned int)v10[v43 + 30];
      if ( (unsigned int)v44 >= 0x80 )
      {
        v45 = (unsigned int)v10[4];
        if ( (unsigned int)v44 < (unsigned int)v45 )
          break;
      }
LABEL_81:
      v43 = (unsigned int)(v43 + 1);
      if ( (unsigned int)v43 >= v42 )
        goto LABEL_55;
    }
    v46 = (unsigned int)v44;
    v47 = *(_DWORD *)((char *)v10 + v44) - 64;
    if ( !v47 )
    {
      if ( v46 + 40 <= v45 )
      {
        v65 = *((_BYTE *)v10 + v46 + 9);
        goto LABEL_55;
      }
      goto LABEL_54;
    }
    v53 = v47 - 1;
    if ( v53 )
    {
      if ( v53 == 1 && v46 + 40 <= v45 )
      {
        v65 = *((_BYTE *)v10 + v46 + 9);
LABEL_55:
        v48 = 0LL;
LABEL_56:
        if ( (v10[6] & 0xC0) == 0xC0 )
        {
          v54 = v10[14];
          v55 = 0LL;
          if ( v54 )
          {
            while ( 1 )
            {
              v56 = (unsigned int)v10[v55 + 30];
              if ( (unsigned int)v56 >= 0x80 )
              {
                v57 = (unsigned int)v10[4];
                if ( (unsigned int)v56 <= (unsigned int)v57 && *(_DWORD *)((char *)v10 + v56) == 1 && v56 + 24 <= v57 )
                  break;
              }
              v55 = (unsigned int)(v55 + 1);
              if ( (unsigned int)v55 >= v54 )
                goto LABEL_57;
            }
            v48 = (char *)v10 + v56;
          }
        }
LABEL_57:
        if ( !v48 || (v58 = *((_QWORD *)v48 + 2)) == 0 )
        {
          v9 = 0LL;
          goto LABEL_59;
        }
        v59 = (unsigned int)v10[14];
        if ( (_DWORD)v59 )
        {
          for ( i = 0LL; ; i = (unsigned int)(i + 1) )
          {
            if ( (unsigned int)i >= (unsigned int)v59 )
              goto LABEL_120;
            v61 = (unsigned int)v10[i + 30];
            if ( (unsigned int)v61 >= 0x80 && (unsigned int)v61 < v10[4] )
            {
              v62 = (char *)v10 + v61;
              if ( *(_DWORD *)v62 == 160 )
                break;
            }
          }
          if ( v62 )
          {
            v7 = *((_QWORD *)v62 + 1);
            if ( v7 )
            {
              v9 = *((_QWORD *)v48 + 2);
              goto LABEL_59;
            }
          }
        }
LABEL_120:
        v63 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
        if ( v63 == 315412 || v63 == 315464 )
          LOBYTE(v59) = *(_BYTE *)(a2 + 64);
        else
          LOBYTE(v59) = 0;
        v9 = *((_QWORD *)v48 + 2);
        result = StorpDataInBufferAllocateMdlAndLockPages(&v67, *((unsigned int *)v48 + 2), v58, v59);
        if ( (int)result < 0 )
          return result;
        v7 = v67;
LABEL_59:
        v8 = a2;
LABEL_60:
        v12 = (int **)(a1 + 24);
LABEL_6:
        v16 = StorEtwLoggingEnabled == 0;
        *(_QWORD *)(v6 + 160) = v8;
        *(_QWORD *)(v6 + 168) = v10;
        *(_QWORD *)(v6 + 224) = a1;
        *(_QWORD *)(v6 + 104) = *(_QWORD *)(v8 + 8);
        *(_QWORD *)(v6 + 136) = v7;
        if ( !v16 )
        {
          IoGetActivityIdIrp(v8, v6 + 728);
          v8 = a2;
        }
        if ( ((*v12)[1181] & 1) != 0 )
        {
          if ( *((_BYTE *)v10 + 2) == 40 )
            v50 = v5[24];
          else
            v50 = v10[14];
          *(_DWORD *)(v6 + 20) = v50;
        }
        else
        {
          *(_WORD *)(v6 + 20) = -1;
          *(_BYTE *)(v6 + 22) = -1;
        }
        v17 = *(_BYTE *)(v6 + 16) & 0xE7;
        *(_QWORD *)(v6 + 192) = v9;
        *(_DWORD *)(v6 + 24) = 0;
        *(_BYTE *)(v6 + 16) = v17 | 4;
        *(_QWORD *)(v6 + 176) = v68;
        *(_QWORD *)(v6 + 184) = v69;
        if ( *((_BYTE *)v10 + 2) == 40 )
        {
          *((_QWORD *)v5 + 12) = v6;
          v18 = *v12;
          if ( **v12 == 1094997074 && (*((_BYTE *)v18 + 111) & 4) != 0 )
          {
            LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
            _InterlockedAdd(*(volatile signed __int32 **)(*((_QWORD *)v18 + 779) + 8LL * LockArray_high), 1u);
            v20 = a4;
            v21 = **(_QWORD **)(*((_QWORD *)v18 + 779) + 8LL * LockArray_high);
            v5[11] = HIDWORD(v21);
          }
          else
          {
            v20 = a4;
            LODWORD(v21) = *(_DWORD *)a4;
          }
          v5[8] = v21;
        }
        else
        {
          *((_QWORD *)v10 + 6) = v6;
          if ( **v12 == 1094997074 && (*((_BYTE *)*v12 + 111) & 4) != 0 )
          {
            v20 = a4;
            *((_BYTE *)v10 + 8) = -1;
          }
          else
          {
            v20 = a4;
            *((_BYTE *)v10 + 8) = *(_BYTE *)a4;
          }
        }
        v22 = 79LL;
        v23 = *v12;
        v24 = *(_QWORD *)(v20 + 8);
        v25 = **v12;
        if ( *((_BYTE *)v10 + 2) == 40 )
        {
          if ( v25 != 1314275652 )
            v22 = 131LL;
          if ( ((v23[v22] + 7) & 0xFFFFFFF8) != 0 )
            *((_QWORD *)v10 + 13) = v24;
        }
        else
        {
          if ( v25 != 1314275652 )
            v22 = 131LL;
          if ( ((v23[v22] + 7) & 0xFFFFFFF8) != 0 )
            *((_QWORD *)v10 + 7) = v24;
        }
        if ( (unsigned int)RaidAdapterMapBuffers(*v12, v8) != -1073741670 )
        {
          v27 = *(unsigned __int8 *)(a1 + 1860);
          v28 = *(_QWORD *)(v6 + 168);
          v29 = *(_QWORD *)(v20 + 24);
          if ( v65 > (unsigned __int8)v27 )
            v27 = v65;
          if ( *(_BYTE *)(v28 + 2) == 40 )
          {
            if ( !*(_DWORD *)(v28 + 20) )
            {
              for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v28 + 56); j = (unsigned int)(j + 1) )
              {
                v31 = *(unsigned int *)(v28 + 4 * j + 120);
                if ( (unsigned int)v31 < 0x80 )
                  continue;
                v32 = *(unsigned int *)(v28 + 16);
                if ( (unsigned int)v31 > (unsigned int)v32 )
                  continue;
                v26 = (unsigned int)v31;
                v33 = *(_DWORD *)(v28 + v31) - 64;
                if ( v33 )
                {
                  v49 = v33 - 1;
                  if ( v49 )
                  {
                    if ( v49 != 1 || v26 + 40 > v32 )
                      continue;
                    *(_QWORD *)(v6 + 200) = *(_QWORD *)(v28 + v26 + 24);
                    *(_BYTE *)(v6 + 208) = *(_BYTE *)(v28 + v26 + 9);
                    *(_QWORD *)(v28 + v26 + 24) = v29;
                    goto LABEL_70;
                  }
                  v34 = v26 + 56;
                }
                else
                {
                  v34 = v26 + 40;
                }
                if ( v34 <= v32 )
                {
                  *(_QWORD *)(v6 + 200) = *(_QWORD *)(v28 + v26 + 16);
                  *(_BYTE *)(v6 + 208) = *(_BYTE *)(v28 + v26 + 9);
                  *(_QWORD *)(v28 + v26 + 16) = v29;
LABEL_70:
                  *(_BYTE *)(v28 + v26 + 9) = v27;
                  *(_BYTE *)(v6 + 16) |= 0x20u;
                }
              }
            }
          }
          else
          {
            *(_QWORD *)(v6 + 200) = *(_QWORD *)(v28 + 32);
            *(_BYTE *)(v6 + 208) = *(_BYTE *)(v28 + 11);
            *(_QWORD *)(v28 + 32) = v29;
            *(_BYTE *)(v28 + 11) = v27;
            *(_BYTE *)(v6 + 16) |= 0x20u;
          }
          RaUnitAddToPendingList(a1, a2, v26, v27);
          if ( StorEtwLoggingEnabled )
          {
            if ( (v36 = *(_QWORD *)(v6 + 104)) != 0
              && (v37 = *(_QWORD *)(a1 + 8), (*(_DWORD *)(v36 + 44) & *(_DWORD *)(v37 + 152)) != 0)
              || (v38 = *(_QWORD *)(v6 + 136)) != 0
              && (v37 = *(_QWORD *)(a1 + 8), (*(_DWORD *)(v37 + 152) & *(_DWORD *)(v38 + 44)) != 0) )
            {
              if ( (byte_140173446 & 2) != 0 )
              {
                if ( !v36 )
                  v36 = *(_QWORD *)(v6 + 136);
                McTemplateK0zqjuuujssstqq_EtwWriteTransfer(
                  a1 + 242,
                  a1 + 177,
                  a1 + 168,
                  *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4784LL),
                  *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
                  *(_QWORD *)(a1 + 24) + 5128LL,
                  *(_BYTE *)(a1 + 104),
                  *(_BYTE *)(a1 + 105),
                  *(_BYTE *)(a1 + 106),
                  a1 + 2104,
                  a1 + 168,
                  a1 + 177,
                  a1 + 242,
                  *(_BYTE *)(a1 + 506) & 1,
                  *(_DWORD *)(v37 + 152),
                  *(_DWORD *)(v36 + 44));
              }
            }
          }
          return 0LL;
        }
        if ( *((_BYTE *)v10 + 2) == 40 )
        {
          if ( !v66 )
          {
            v5[11] = -1073741670;
            goto LABEL_131;
          }
        }
        else if ( !v66 )
        {
          *((_QWORD *)v10 + 6) = *(_QWORD *)(v6 + 176);
LABEL_130:
          v10[16] = -1073741670;
LABEL_131:
          v64 = *(struct _MDL **)(v6 + 136);
          if ( v64 )
          {
            MmUnlockPages(v64);
            IoFreeMdl(*(PMDL *)(v6 + 136));
            *(_QWORD *)(v6 + 136) = 0LL;
          }
          return 3221225626LL;
        }
        v10 = v70;
        *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) = v70;
        goto LABEL_130;
      }
    }
    else if ( v46 + 56 <= v45 )
    {
      v40 = 1;
      v65 = *((_BYTE *)v10 + v46 + 9);
    }
LABEL_54:
    if ( v40 )
      goto LABEL_55;
    goto LABEL_81;
  }
  v12 = (int **)(a1 + 24);
  *((_BYTE *)v10 + 6) = *(_BYTE *)(a1 + 105);
  *((_BYTE *)v10 + 5) = *(_BYTE *)(a1 + 104);
  *((_BYTE *)v10 + 7) = *(_BYTE *)(a1 + 106);
  v13 = *(int **)(a1 + 24);
  v68 = *((_QWORD *)v10 + 6);
  v69 = *((_QWORD *)v10 + 3);
  v14 = *v13;
  v65 = *((_BYTE *)v10 + 11);
  if ( *v13 == 1314275652 )
  {
    v15 = (__int64)v13 + 274;
  }
  else
  {
    v15 = (__int64)v13 + 482;
    if ( v14 != 1094997074 )
      v15 = 98LL;
  }
  if ( *(_BYTE *)v15 != 1 )
    goto LABEL_6;
  v51 = *(_QWORD *)(v6 + 760);
  if ( !v51 )
  {
    *((_BYTE *)v10 + 3) = 48;
    v10[16] = -1073741670;
    return 3221225626LL;
  }
  if ( v14 == 1094997074 )
  {
    v52 = (__int64)(v13 + 152);
  }
  else
  {
    v52 = (__int64)(v13 + 100);
    if ( v14 != 1314275652 )
      v52 = 232LL;
  }
  result = TranslateToExtendedSrb(
             *(_QWORD *)(v6 + 760),
             (_DWORD)v10,
             *(_DWORD *)(v6 + 744),
             v51,
             a3,
             (*(_DWORD *)(*(_QWORD *)v52 + 184LL) & 0x80) != 0);
  if ( (int)result >= 0 )
  {
    *(_BYTE *)(v6 + 16) |= 0x40u;
    v5 = *(_DWORD **)(v6 + 760);
    v8 = a2;
    *(_QWORD *)(v6 + 752) = v10;
    v70 = v10;
    v10 = v5;
    v66 = 1;
    *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) = v5;
    goto LABEL_6;
  }
  *((_BYTE *)v10 + 3) = 48;
  v10[16] = result;
  return result;
}

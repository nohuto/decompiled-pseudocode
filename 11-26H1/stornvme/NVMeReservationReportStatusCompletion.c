/*
 * XREFs of NVMeReservationReportStatusCompletion @ 0x14001F800
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     GetScsiReservationType @ 0x14001AF14 (GetScsiReservationType.c)
 *     NVMeReservationReportStatus @ 0x14001F5D4 (NVMeReservationReportStatus.c)
 *     memmove @ 0x140032740 (memmove.c)
 *     memset @ 0x140032A40 (memset.c)
 */

char __fastcall NVMeReservationReportStatusCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // r8
  unsigned int *v6; // r10
  char v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rdi
  int v10; // ecx
  __int64 v11; // r12
  int v12; // r13d
  unsigned int v13; // edx
  int v14; // eax
  char result; // al
  int v16; // r13d
  unsigned int v17; // r14d
  int v18; // eax
  _BYTE *v19; // r10
  __int64 v20; // r9
  _BYTE *v21; // r11
  char v22; // r8
  char v23; // cl
  char v24; // al
  char v25; // al
  __int64 v26; // r9
  __int64 v27; // r10
  __int64 v28; // r11
  char v29; // r8
  __int64 v30; // rax
  char v31; // r8
  char v32; // cl
  char v33; // al
  char v34; // al
  char v35; // r8
  unsigned int v36; // edi
  void *SrbDataBuffer; // r12
  unsigned int v38; // ecx
  int v39; // r13d
  int v40; // eax
  char ScsiReservationType; // al
  _BYTE *v42; // r8
  char v43; // al
  unsigned __int16 v44; // r9
  __int16 i; // r11
  char v46; // al
  unsigned __int64 v47; // rcx
  int v48; // r13d
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rdx
  char *v52; // rdi
  char v53; // al
  char *v54; // rdi
  char v55; // al
  unsigned int v56; // ecx
  unsigned __int16 v57; // [rsp+32h] [rbp-Eh]
  unsigned int *v58; // [rsp+90h] [rbp+50h] BYREF
  int v59; // [rsp+98h] [rbp+58h]

  SrbExtension = GetSrbExtension(a2);
  v7 = (_BYTE)v6 + 1;
  v8 = SrbExtension;
  if ( !v5 || (*(_WORD *)(v5 + 14) & 0x1FE) != 0 )
  {
    *(_BYTE *)(a2 + 3) = 4;
    goto LABEL_64;
  }
  v9 = *(_QWORD *)(SrbExtension + 4160);
  v10 = *(_DWORD *)(SrbExtension + 4200);
  v57 = HIWORD(v10);
  v11 = *(unsigned __int16 *)(v9 + 5);
  v12 = *(unsigned __int16 *)(v9 + 5);
  if ( (*(_BYTE *)(a1 + 4024) & 8) != 0 )
    v13 = ((_DWORD)v11 + 1) << 6;
  else
    v13 = 24 * (v11 + 1);
  if ( *(_DWORD *)(SrbExtension + 4208) >= v13 )
  {
    if ( (_BYTE)v10 )
    {
      if ( (unsigned __int8)v10 == 1 )
      {
        LOBYTE(v58) = *(_BYTE *)(v9 + 4);
        v39 = (_BYTE)v58 != 0 ? 0x10 : 0;
        v59 = v39;
        v17 = v39 + 8;
        v40 = StorPortExtendedFunction(0LL, a1, (unsigned int)(v39 + 8), 1701672526LL);
        v6 = 0LL;
        if ( v40 )
          goto LABEL_17;
        memset(0LL, 0, v17 & 0xFFFFFFFC);
        v6 = 0LL;
        MEMORY[3] = *(_BYTE *)v9;
        MEMORY[2] = *(_BYTE *)(v9 + 1);
        MEMORY[1] = *(_BYTE *)(v9 + 2);
        MEMORY[0] = *(_BYTE *)(v9 + 3);
        MEMORY[5] = BYTE2(v59);
        MEMORY[6] = BYTE1(v59);
        MEMORY[4] = HIBYTE(v59);
        MEMORY[7] = v39;
        if ( (_BYTE)v58 )
        {
          ScsiReservationType = GetScsiReservationType(*(unsigned __int8 *)(v9 + 4));
          v42[21] = ScsiReservationType & 0xF;
          v43 = *(_BYTE *)(v9 + 4);
          if ( v43 != 5 && v43 != 6 )
          {
            v44 = (unsigned __int16)v6;
            for ( i = (_WORD)v6 + 1; ; v44 += i )
            {
              if ( v44 >= (unsigned __int16)v11 )
                goto LABEL_26;
              if ( (*(_BYTE *)(a1 + 4024) & 8) != 0 )
              {
                v47 = (unsigned __int64)v44 << 6;
                if ( ((unsigned __int8)i & *(_BYTE *)(v47 + v9 + 66)) != 0 )
                {
                  v42[15] = *(_BYTE *)(v47 + v9 + 72);
                  v42[14] = *(_BYTE *)(v47 + v9 + 73);
                  v42[13] = *(_BYTE *)(v47 + v9 + 74);
                  v42[12] = *(_BYTE *)(v47 + v9 + 75);
                  v42[11] = *(_BYTE *)(v47 + v9 + 76);
                  v42[10] = *(_BYTE *)(v47 + v9 + 77);
                  v42[9] = *(_BYTE *)(v47 + v9 + 78);
                  v46 = *(_BYTE *)(v47 + v9 + 79);
                  goto LABEL_38;
                }
              }
              else if ( ((unsigned __int8)i & *(_BYTE *)(v9 + 24LL * v44 + 26)) != 0 )
              {
                v42[15] = *(_BYTE *)(v9 + 24LL * v44 + 40);
                v42[14] = *(_BYTE *)(v9 + 24LL * v44 + 41);
                v42[13] = *(_BYTE *)(v9 + 24LL * v44 + 42);
                v42[12] = *(_BYTE *)(v9 + 24LL * v44 + 43);
                v42[11] = *(_BYTE *)(v9 + 24LL * v44 + 44);
                v42[10] = *(_BYTE *)(v9 + 24LL * v44 + 45);
                v42[9] = *(_BYTE *)(v9 + 24LL * v44 + 46);
                v46 = *(_BYTE *)(v9 + 24LL * v44 + 47);
LABEL_38:
                v42[8] = v46;
                goto LABEL_26;
              }
            }
          }
          *((_QWORD *)v42 + 1) = v6;
        }
      }
      else
      {
        if ( (unsigned __int8)v10 != 3 )
        {
          *(_BYTE *)(a2 + 3) = 6;
LABEL_15:
          v7 = 1;
          goto LABEL_64;
        }
        v16 = 32 * v12;
        v59 = v16;
        v17 = v16 + 8;
        v18 = StorPortExtendedFunction(0LL, a1, (unsigned int)(v16 + 8), 1701672526LL);
        v6 = 0LL;
        if ( v18 )
        {
LABEL_17:
          *(_BYTE *)(a2 + 3) = 38;
          goto LABEL_15;
        }
        memset(0LL, 0, v17 & 0xFFFFFFFC);
        v6 = 0LL;
        MEMORY[3] = *(_BYTE *)v9;
        MEMORY[2] = *(_BYTE *)(v9 + 1);
        MEMORY[1] = *(_BYTE *)(v9 + 2);
        MEMORY[0] = *(_BYTE *)(v9 + 3);
        MEMORY[5] = BYTE2(v59);
        MEMORY[6] = BYTE1(v59);
        MEMORY[4] = HIBYTE(v59);
        MEMORY[7] = v16;
        if ( v16 && (_WORD)v11 )
        {
          v19 = (_BYTE *)(v9 + 73);
          v20 = 14LL;
          v21 = (_BYTE *)(v9 + 41);
          do
          {
            if ( (*(_BYTE *)(a1 + 4024) & 8) != 0 )
            {
              *(_BYTE *)(v20 + 1) = *(v19 - 1);
              *(_BYTE *)v20 = *v19;
              *(_BYTE *)(v20 - 1) = v19[1];
              *(_BYTE *)(v20 - 2) = v19[2];
              *(_BYTE *)(v20 - 3) = v19[3];
              *(_BYTE *)(v20 - 4) = v19[4];
              *(_BYTE *)(v20 - 5) = v19[5];
              *(_BYTE *)(v20 - 6) = v19[6];
              v31 = *(_BYTE *)(v20 + 7);
              v32 = *(_BYTE *)(v20 + 6) | 2;
              *(_BYTE *)(v20 + 6) = v32;
              v33 = (*(v19 - 7) ^ v32) & 1;
              *(_BYTE *)(v20 + 7) = v31 & 0xF;
              *(_BYTE *)(v20 + 6) = v32 ^ v33;
              v34 = GetScsiReservationType(*(unsigned __int8 *)(v9 + 4));
              *(_BYTE *)(v26 + 7) = v35 ^ (v35 ^ v34) & 0xF;
              *(_BYTE *)(v26 + 13) = *(_BYTE *)(v27 - 9);
              *(_BYTE *)(v26 + 12) = *(_BYTE *)(v27 - 8);
              *(_DWORD *)(v26 + 14) = 0x8000000;
              v30 = *(_QWORD *)(v27 + 7);
            }
            else
            {
              *(_BYTE *)(v20 + 1) = *(v21 - 1);
              *(_BYTE *)v20 = *v21;
              *(_BYTE *)(v20 - 1) = v21[1];
              *(_BYTE *)(v20 - 2) = v21[2];
              *(_BYTE *)(v20 - 3) = v21[3];
              *(_BYTE *)(v20 - 4) = v21[4];
              *(_BYTE *)(v20 - 5) = v21[5];
              *(_BYTE *)(v20 - 6) = v21[6];
              v22 = *(_BYTE *)(v20 + 7);
              v23 = *(_BYTE *)(v20 + 6) | 2;
              *(_BYTE *)(v20 + 6) = v23;
              v24 = (*(v21 - 15) ^ v23) & 1;
              *(_BYTE *)(v20 + 7) = v22 & 0xF;
              *(_BYTE *)(v20 + 6) = v23 ^ v24;
              v25 = GetScsiReservationType(*(unsigned __int8 *)(v9 + 4));
              *(_BYTE *)(v26 + 7) = v29 ^ (v29 ^ v25) & 0xF;
              *(_BYTE *)(v26 + 13) = *(_BYTE *)(v28 - 17);
              *(_BYTE *)(v26 + 12) = *(_BYTE *)(v28 - 16);
              *(_DWORD *)(v26 + 14) = 0x8000000;
              v30 = *(_QWORD *)(v28 - 9);
            }
            *(_QWORD *)(v26 + 18) = v30;
            v21 = (_BYTE *)(v28 + 24);
            v20 = v26 + 32;
            v19 = (_BYTE *)(v27 + 64);
            --v11;
          }
          while ( v11 );
          v6 = 0LL;
        }
      }
    }
    else
    {
      v48 = 8 * v12;
      v59 = v48;
      v17 = v48 + 8;
      v49 = StorPortExtendedFunction(0LL, a1, (unsigned int)(v48 + 8), 1701672526LL);
      v6 = 0LL;
      if ( v49 )
        goto LABEL_17;
      if ( v17 >> 2 )
      {
        memset(0LL, 0, 4LL * (v17 >> 2));
        v6 = 0LL;
      }
      MEMORY[3] = *(_BYTE *)v9;
      MEMORY[2] = *(_BYTE *)(v9 + 1);
      MEMORY[1] = *(_BYTE *)(v9 + 2);
      MEMORY[0] = *(_BYTE *)(v9 + 3);
      MEMORY[5] = BYTE2(v59);
      MEMORY[6] = BYTE1(v59);
      MEMORY[4] = HIBYTE(v59);
      MEMORY[7] = v48;
      if ( v48 )
      {
        v7 = 1;
        if ( (_WORD)v11 )
        {
          v50 = 14LL;
          v51 = v11;
          if ( (*(_BYTE *)(a1 + 4024) & 8) != 0 )
          {
            v54 = (char *)(v9 + 73);
            do
            {
              *(_BYTE *)(v50 + 1) = *(v54 - 1);
              v55 = *v54;
              v54 += 64;
              *(_BYTE *)v50 = v55;
              v50 += 8LL;
              *(_BYTE *)(v50 - 9) = *(v54 - 63);
              *(_BYTE *)(v50 - 10) = *(v54 - 62);
              *(_BYTE *)(v50 - 11) = *(v54 - 61);
              *(_BYTE *)(v50 - 12) = *(v54 - 60);
              *(_BYTE *)(v50 - 13) = *(v54 - 59);
              *(_BYTE *)(v50 - 14) = *(v54 - 58);
              --v51;
            }
            while ( v51 );
          }
          else
          {
            v52 = (char *)(v9 + 41);
            do
            {
              *(_BYTE *)(v50 + 1) = *(v52 - 1);
              v53 = *v52;
              v52 += 24;
              *(_BYTE *)v50 = v53;
              v50 += 8LL;
              *(_BYTE *)(v50 - 9) = *(v52 - 23);
              *(_BYTE *)(v50 - 10) = *(v52 - 22);
              *(_BYTE *)(v50 - 11) = *(v52 - 21);
              *(_BYTE *)(v50 - 12) = *(v52 - 20);
              *(_BYTE *)(v50 - 13) = *(v52 - 19);
              *(_BYTE *)(v50 - 14) = *(v52 - 18);
              --v51;
            }
            while ( v51 );
          }
        }
        goto LABEL_27;
      }
    }
LABEL_26:
    v7 = 1;
LABEL_27:
    v58 = v6;
    v36 = v57;
    SrbDataBuffer = (void *)GetSrbDataBuffer(a2, &v58);
    v38 = *v58;
    if ( *v58 >= v57 )
    {
      if ( (v38 & 3) != 0 )
      {
        if ( v38 )
          memset(SrbDataBuffer, 0, *v58);
      }
      else
      {
        v56 = v38 >> 2;
        if ( v56 )
          memset(SrbDataBuffer, 0, 4LL * v56);
      }
      if ( v17 < v57 )
        v36 = v17;
      memmove(SrbDataBuffer, 0LL, v36);
      *(_BYTE *)(a2 + 3) = 1;
      *(_BYTE *)(v8 + 4225) |= 8u;
      v6 = 0LL;
      goto LABEL_65;
    }
    *(_BYTE *)(a2 + 3) = 6;
LABEL_64:
    *(_BYTE *)(v8 + 4225) |= 8u;
LABEL_65:
    result = *(_BYTE *)(v8 + 4225);
    goto LABEL_66;
  }
  v14 = NVMeReservationReportStatus(a1, a2, v10, SHIWORD(v10), v13);
  v6 = 0LL;
  if ( v14 )
  {
    result = *(_BYTE *)(v8 + 4225) | 8;
    *(_BYTE *)(v8 + 4225) = result;
  }
  else
  {
    ProcessCommand(a1, a2);
    result = *(_BYTE *)(v8 + 4225);
    v6 = 0LL;
  }
  v7 = 1;
LABEL_66:
  if ( (result & 8) != 0 )
  {
    if ( *(unsigned int **)(v8 + 4160) != v6 )
    {
      result = NVMeFreeDmaBufferEx(
                 a1,
                 0,
                 v7,
                 *(unsigned int *)(v8 + 4208),
                 (__int64 *)(v8 + 4160),
                 *(_QWORD *)(v8 + 4168));
      v6 = 0LL;
    }
    *(_QWORD *)(v8 + 4160) = v6;
    *(_DWORD *)(v8 + 4208) = (_DWORD)v6;
  }
  return result;
}

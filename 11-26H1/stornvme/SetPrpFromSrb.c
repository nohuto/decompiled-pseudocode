/*
 * XREFs of SetPrpFromSrb @ 0x140003380
 * Callers:
 *     ProtocolCommandToNVMe @ 0x140001290 (ProtocolCommandToNVMe.c)
 *     ScsiToNVMe @ 0x140002FA0 (ScsiToNVMe.c)
 *     IoctlToNVMe @ 0x1400104F0 (IoctlToNVMe.c)
 *     ProcessCommandNvmePacket @ 0x14002B038 (ProcessCommandNvmePacket.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     BuildReadWriteCommand @ 0x140004540 (BuildReadWriteCommand.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline @ 0x140012230 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall SetPrpFromSrb(_DWORD *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 result; // rax
  char v9; // dl
  __int64 v10; // rcx
  _DWORD *v11; // r14
  int v12; // r8d
  __int64 v13; // r12
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  __int64 SrbExtension; // r13
  unsigned int v17; // r15d
  unsigned int v18; // r14d
  unsigned int v19; // r8d
  __int64 v20; // r10
  __m128i *v21; // r9
  __int64 v22; // r10
  __int64 v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rax
  char v26; // r15
  unsigned int v27; // r14d
  __int64 v28; // rbx
  char v29; // al
  char v30; // r11
  int v31; // ecx
  _BYTE *v32; // r12
  unsigned int v33; // eax
  unsigned int *v34; // r10
  __int64 v35; // r13
  __int64 v36; // rax
  __int64 v37; // r11
  _BYTE *v38; // rax
  char v39; // al
  unsigned __int8 v40; // r11
  unsigned __int8 v41; // r13
  int v42; // r10d
  unsigned __int8 v43; // cl
  unsigned __int8 v44; // al
  char v45; // r9
  int v46; // r9d
  unsigned __int8 v47; // cl
  __int64 v48; // rdx
  int v49; // ecx
  _DWORD *ScatterGatherList; // rax
  _QWORD *v51; // r9
  __int64 v52; // r8
  _QWORD *v53; // r12
  __int64 v54; // rax
  __int64 v55; // r13
  _DWORD *v56; // rax
  __int64 PhysicalAddress; // rax
  unsigned __int8 v58; // [rsp+40h] [rbp-68h]
  int v59; // [rsp+44h] [rbp-64h]
  unsigned __int8 *v60; // [rsp+50h] [rbp-58h]
  __int64 v61; // [rsp+58h] [rbp-50h] BYREF
  __int64 v62; // [rsp+60h] [rbp-48h]
  int v63; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int64 v64; // [rsp+C0h] [rbp+18h]
  __int64 v65; // [rsp+C8h] [rbp+20h]

  v4 = *(unsigned __int8 *)(a2 + 2);
  v5 = 56LL;
  v6 = 104LL;
  if ( (a1[14] & 8) != 0 )
  {
    if ( (_BYTE)v4 != 40 )
      v6 = 56LL;
    v7 = *(_QWORD *)(v6 + a2);
    if ( (v7 & 0xFFF) != 0 )
      v7 = v7 - (v7 & 0xFFF) + 4096;
    v62 = 0LL;
    v61 = 0LL;
    if ( (*(_BYTE *)(v7 + 4225) & 6) != 2 )
      goto LABEL_28;
    result = StorPortExtendedFunction(6LL, a1, a2, &v61);
    if ( (_DWORD)result || (result = StorPortExtendedFunction(76LL, a1, a2, v61), (_DWORD)result) )
    {
LABEL_30:
      ++a1[950];
      return result;
    }
    v9 = *(_BYTE *)(a2 + 2);
    if ( v9 == 40 )
      v10 = 60LL;
    else
      v10 = 16LL;
    v11 = (_DWORD *)(v10 + a2);
    v12 = a1[30];
    if ( !v12 )
    {
LABEL_12:
      v13 = v62;
      SrbExtension = GetSrbExtension(a2);
      v17 = 0;
      v18 = (v14 >> 12) + (((v15 & 0xFFF) + (v14 & 0xFFF) + 4095) >> 12);
      if ( v15 >= 0x1000 )
      {
        v17 = v15 >> 12;
        v15 -= v15 >> 12 << 12;
      }
      if ( v18 )
      {
        if ( !(v17 + v18) )
        {
          *(_QWORD *)(v7 + 4120) = v15 + (*(_QWORD *)(v13 + 8LL * v17) << 12);
          if ( v18 != 1 )
          {
            if ( v18 == 2 )
            {
              *(_QWORD *)(v7 + 4128) = *(_QWORD *)(v13 + 8LL * (v17 + 1)) << 12;
              memset((void *)v7, 0, 0x1000uLL);
              *(_QWORD *)v7 = *(_QWORD *)(v7 + 4128);
            }
            else
            {
              v63 = 0;
              memset((void *)v7, 0, 0x1000uLL);
              v19 = 1;
              v20 = v18 - 1;
              v21 = (__m128i *)v7;
              if ( (unsigned int)v20 < 8 )
                goto LABEL_108;
              v64 = v13 + 8LL * (v17 + 1);
              if ( v7 + 8 <= v13 + 8 * (unsigned __int64)((unsigned int)v20 + v17) && v7 + 8 * v20 >= v64 )
                goto LABEL_108;
              v22 = v17 + 5;
              do
              {
                v19 += 8;
                *v21 = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v13 + 8LL * (unsigned int)(v22 - 4))), 0xCu);
                v23 = (unsigned int)(v22 + 2);
                v21[1] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v13 + 8LL * (unsigned int)(v22 - 2))), 0xCu);
                v24 = _mm_loadu_si128((const __m128i *)(v13 + 8 * v22));
                v22 = (unsigned int)(v22 + 8);
                v21[2] = _mm_slli_epi64(v24, 0xCu);
                v21[3] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v13 + 8 * v23)), 0xCu);
                v21 += 4;
              }
              while ( v19 < v18 - (((_BYTE)v18 - 1) & 7) );
              if ( v19 < v18 )
              {
LABEL_108:
                do
                {
                  v25 = v19 + v17;
                  ++v19;
                  v21 = (__m128i *)((char *)v21 + 8);
                  v21[-1].m128i_i64[1] = *(_QWORD *)(v13 + 8 * v25) << 12;
                }
                while ( v19 < v18 );
              }
              *(_QWORD *)(v7 + 4128) = StorPortGetPhysicalAddress(a1, a2, v7, &v63);
            }
          }
          if ( SrbExtension )
            *(_DWORD *)(SrbExtension + 4220) = v18;
LABEL_28:
          result = 0LL;
          goto LABEL_29;
        }
        result = 3238002689LL;
      }
      else
      {
        result = 3238002689LL;
      }
LABEL_29:
      if ( !(_DWORD)result )
        return result;
      goto LABEL_30;
    }
    v30 = 0;
    v31 = 0;
    v59 = 0;
    v32 = 0LL;
    LOBYTE(v63) = 0;
    if ( v9 == 40 && !*(_DWORD *)(a2 + 20) && (v33 = *(_DWORD *)(a2 + 56)) != 0 )
    {
      v34 = (unsigned int *)(a2 + 120);
      v35 = v33;
      do
      {
        v36 = *v34;
        if ( (unsigned int)v36 >= 0x80 && (unsigned int)v36 <= *(_DWORD *)(a2 + 16) )
        {
          v37 = a2 + v36;
          if ( *(_DWORD *)(a2 + v36) == 64 || *(_DWORD *)(a2 + v36) == 65 )
          {
            v31 = *(unsigned __int8 *)(v37 + 10);
            LOBYTE(v63) = 1;
            v59 = v31;
            if ( (_BYTE)v31 )
              v32 = (_BYTE *)(v37 + 24);
          }
          else if ( *(_DWORD *)(a2 + v36) == 66 )
          {
            v31 = *(_DWORD *)(v37 + 12);
            LOBYTE(v63) = 1;
            v59 = v31;
            if ( v31 )
              v32 = (_BYTE *)(v37 + 32);
          }
          else
          {
            v31 = v59;
          }
        }
        ++v34;
        --v35;
      }
      while ( v35 );
      v30 = v63;
      v38 = v32;
    }
    else
    {
      v38 = 0LL;
      if ( !v9 )
      {
        v31 = *(unsigned __int8 *)(a2 + 10);
        v59 = v31;
        if ( (_BYTE)v31 )
          v32 = (_BYTE *)(a2 + 72);
        goto LABEL_53;
      }
    }
    if ( !v30 )
    {
      v40 = v38[2];
      v41 = v38[3];
      v42 = 0;
      LOBYTE(v63) = v38[4];
      v60 = v38 + 5;
      goto LABEL_54;
    }
LABEL_53:
    v39 = v32[4];
    v40 = v32[2];
    v41 = v32[3];
    v42 = v59;
    v60 = v32 + 5;
    LOBYTE(v63) = v39;
    if ( v31 == 16 )
    {
      LOBYTE(v64) = v39;
      v43 = v40;
      v40 = v32[6];
      LOBYTE(v65) = v32[5];
      LOBYTE(v63) = v32[8];
      v58 = v41;
      v41 = v32[7];
      v60 = v32 + 9;
      v44 = v58;
      goto LABEL_55;
    }
LABEL_54:
    v43 = 0;
    v44 = 0;
    LOBYTE(v64) = 0;
    LOBYTE(v65) = 0;
LABEL_55:
    v45 = *v32;
    if ( *v60 | (((unsigned __int8)v63 | ((v41 | ((v40 | (((unsigned __int8)v65 | (((unsigned __int8)v64 | ((v44 | ((unsigned __int64)v43 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8)
      && (v45 == -118 || v45 == 40 || v45 == 42 || v45 == -120) )
    {
      v46 = 0;
      if ( v9 == 40 )
        v47 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v47 = *(_BYTE *)(a2 + 7);
      v48 = v47;
      v49 = *(_DWORD *)(*(_QWORD *)&a1[2 * v47 + 418] + 52LL);
      *v11 -= -v49 & (v49 + v12 - 1);
      if ( (unsigned int)v48 < a1[56] && *(_QWORD *)&a1[2 * v48 + 418] )
      {
        _mm_lfence();
        v46 = *(_DWORD *)(*(_QWORD *)&a1[2 * v48 + 418] + 16LL);
      }
      BuildReadWriteCommand((_DWORD)a1, a2, (_DWORD)v32, v42, v7 + 4096, v46);
    }
    goto LABEL_12;
  }
  v26 = 0;
  v27 = 0;
  if ( (_BYTE)v4 != 40 )
    v6 = 56LL;
  v28 = *(_QWORD *)(v6 + a2);
  if ( (v28 & 0xFFF) != 0 )
    v28 = v28 - (v28 & 0xFFF) + 4096;
  v29 = *(_BYTE *)(v28 + 4225);
  if ( (v29 & 2) != 0 && (v29 & 4) == 0 )
  {
    ScatterGatherList = *(_DWORD **)(v28 + 4176);
    if ( !ScatterGatherList )
    {
      ScatterGatherList = (_DWORD *)StorPortGetScatterGatherList(a1, a2);
      *(_QWORD *)(v28 + 4176) = ScatterGatherList;
    }
    v51 = (_QWORD *)(v28 + 4120);
    v52 = 0LL;
    v53 = (_QWORD *)(v28 + 4120);
    v63 = 0;
    if ( *ScatterGatherList )
    {
      do
      {
        if ( v26 )
        {
          memset((void *)v28, 0, 0x1000uLL);
          LODWORD(v52) = v63;
          v51 = (_QWORD *)(v28 + 4120);
          v26 = 0;
        }
        v54 = *(_QWORD *)(v28 + 4176);
        v55 = *(_QWORD *)(v54 + 24LL * (unsigned int)v52 + 16);
        v4 = *(unsigned int *)(v54 + 24LL * (unsigned int)v52 + 24);
        v65 = v4;
        v5 = (v55 >> 63) & 0xFFF;
        if ( v4 + v55 % 4096 > 4096 )
        {
          if ( (_DWORD)v4 )
          {
            do
            {
              v5 = v55 & 0xFFF;
              LODWORD(v64) = v55 & 0xFFF;
              if ( v26 )
              {
                memset((void *)v28, 0, 0x1000uLL);
                LODWORD(v4) = v65;
                v51 = (_QWORD *)(v28 + 4120);
                v5 = (unsigned int)v64;
                v26 = 0;
              }
              v4 = (unsigned int)(v5 + v4);
              *v53 = v55;
              if ( (unsigned int)v4 <= 0x1000 )
                break;
              v4 = (unsigned int)(v4 - 4096);
              v65 = v4;
              v55 += (unsigned int)(4096 - v5);
              if ( v53 == v51 )
              {
                v26 = 1;
                v53 = (_QWORD *)v28;
              }
              else
              {
                ++v53;
              }
              ++v27;
            }
            while ( (_DWORD)v4 );
            LODWORD(v52) = v63;
          }
        }
        else
        {
          *v53 = v55;
        }
        if ( v53 == v51 )
        {
          v26 = 1;
          v53 = (_QWORD *)v28;
        }
        else
        {
          ++v53;
        }
        v56 = *(_DWORD **)(v28 + 4176);
        v52 = (unsigned int)(v52 + 1);
        ++v27;
        v63 = v52;
      }
      while ( (unsigned int)v52 < *v56 );
      if ( v27 >= 2 )
      {
        if ( v27 == 2 )
        {
          PhysicalAddress = *(_QWORD *)v28;
        }
        else
        {
          v63 = 0;
          PhysicalAddress = StorPortGetPhysicalAddress(a1, a2, v28, &v63);
        }
        *(_QWORD *)(v28 + 4128) = PhysicalAddress;
      }
    }
    if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline(v4, v5, v52) )
      *(_DWORD *)(v28 + 4220) = v27;
  }
  return 0LL;
}

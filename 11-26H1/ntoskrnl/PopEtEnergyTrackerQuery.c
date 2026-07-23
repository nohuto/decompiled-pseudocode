/*
 * XREFs of PopEtEnergyTrackerQuery @ 0x140B69ED8
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14043F380 (KiQueryUnbiasedInterruptTime.c)
 *     KeQueryTimelineBitmapTime @ 0x14047EAE8 (KeQueryTimelineBitmapTime.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlSetUserMemory @ 0x140782108 (RtlSetUserMemory.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PsEnumProcesses @ 0x1409BBF0C (PsEnumProcesses.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x1409CC764 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtDataSectionCopyData @ 0x140AABFE4 (PopEtDataSectionCopyData.c)
 *     PopEtDataSectionReserve @ 0x140AF0D98 (PopEtDataSectionReserve.c)
 *     PopEtDataSectionStart @ 0x140B0BD34 (PopEtDataSectionStart.c)
 */

__int64 __fastcall PopEtEnergyTrackerQuery(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rsi
  char v6; // r14
  int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  unsigned int v12; // r13d
  unsigned int v13; // ebx
  unsigned int v14; // r14d
  _QWORD *v15; // r10
  unsigned int v16; // r9d
  __int64 v17; // rdx
  _QWORD *i; // rdx
  int v19; // edx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __m128i v24; // xmm0
  __int64 v25; // r14
  __int64 v26; // r13
  int v27; // ebx
  unsigned __int8 *v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // r9
  __int64 v33; // r9
  __int64 v34; // r9
  __int64 v35; // r9
  __int64 v36; // r9
  __int64 v37; // rdx
  _QWORD *v38; // rdx
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // r14
  unsigned __int64 v41; // r12
  int v42; // ebx
  int TimelineBitmapTime; // eax
  __int64 v44; // r10
  __int64 *v45; // r11
  unsigned int v46; // r9d
  __int64 v47; // rdx
  __int64 *j; // rdx
  __int64 v49; // rbx
  __int64 v50; // rbx
  _WORD *v51; // rcx
  unsigned int v52; // ebx
  int v53; // eax
  int v54; // edx
  unsigned __int16 *v55; // rdx
  __int64 v56; // rax
  __int64 v57; // [rsp+48h] [rbp-140h] BYREF
  __int64 *v58; // [rsp+50h] [rbp-138h]
  __int64 v59; // [rsp+58h] [rbp-130h] BYREF
  __int128 v60; // [rsp+60h] [rbp-128h] BYREF
  __int128 v61; // [rsp+70h] [rbp-118h]
  __int128 v62; // [rsp+80h] [rbp-108h] BYREF
  __int128 v63; // [rsp+90h] [rbp-F8h]
  __int128 v64; // [rsp+A0h] [rbp-E8h] BYREF
  __int128 v65; // [rsp+B0h] [rbp-D8h]
  __int128 v66; // [rsp+C0h] [rbp-C8h] BYREF
  __int128 v67; // [rsp+D0h] [rbp-B8h]
  __int64 v68; // [rsp+E0h] [rbp-A8h]
  _QWORD *v69; // [rsp+E8h] [rbp-A0h]
  __int64 v70; // [rsp+F0h] [rbp-98h]
  __int64 v71; // [rsp+F8h] [rbp-90h]
  _QWORD *v72; // [rsp+100h] [rbp-88h]
  int v73; // [rsp+108h] [rbp-80h]
  int v74; // [rsp+10Ch] [rbp-7Ch]
  __int64 v75; // [rsp+110h] [rbp-78h] BYREF
  __int64 v76; // [rsp+118h] [rbp-70h]
  __int128 v77; // [rsp+120h] [rbp-68h] BYREF
  __int128 v78; // [rsp+130h] [rbp-58h]
  __int64 v79; // [rsp+140h] [rbp-48h]
  __m128i v80; // [rsp+148h] [rbp-40h] BYREF

  v80 = 0LL;
  v5 = 0LL;
  v59 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v6 = 0;
  v62 = 0LL;
  v63 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  if ( !PopEtGlobals )
  {
    v7 = -1073741637;
    goto LABEL_3;
  }
  v7 = ObpReferenceObjectByHandleWithTag(
         a1,
         1,
         *(_QWORD *)(PopEtGlobals + 32),
         KeGetCurrentThread()->PreviousMode,
         0x74456F50u,
         &v59,
         0LL,
         0LL);
  v5 = v59;
  if ( v7 >= 0 )
  {
    LODWORD(v77) = 2;
    *(_QWORD *)&v78 = v59;
    v7 = PsEnumProcesses((__int64)PopEtProcessEnumSnapshotCallback, (__int64)&v77);
    if ( v7 >= 0 )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)(v5 + 16), v9, v10, v11);
      v12 = *(_DWORD *)(v5 + 48);
      v13 = 0;
      v14 = 44;
      v15 = 0LL;
      while ( 1 )
      {
        if ( v15 )
        {
          v16 = *(_DWORD *)(v5 + 52);
          v57 = v15[1] & (-1LL << (v16 & 0x1F));
          v17 = *(_QWORD *)(v5 + 56)
              + 8LL
              * (((v16 >> 5) - 1) & (HIBYTE(v57)
                                   - 877075889
                                   + 442596621 * (unsigned __int8)v57
                                   + 37
                                   * (BYTE6(v57)
                                    + 37
                                    * (BYTE5(v57)
                                     + 37 * (BYTE4(v57) + 37 * (BYTE3(v57) + 37 * (BYTE2(v57) + 37 * BYTE1(v57))))))));
        }
        else
        {
          v15 = *(_QWORD **)(v5 + 56);
          v17 = (__int64)v15;
        }
        if ( !v15 || (v15 = (_QWORD *)*v15, ((unsigned __int8)v15 & 1) != 0) )
        {
          for ( i = (_QWORD *)(v17 + 8);
                (unsigned __int64)i < *(_QWORD *)(v5 + 56) + 8 * ((unsigned __int64)*(unsigned int *)(v5 + 52) >> 5);
                ++i )
          {
            v15 = (_QWORD *)*i;
            if ( (*i & 1) == 0 )
              goto LABEL_21;
          }
          v15 = 0LL;
        }
LABEL_21:
        if ( !v15 )
          break;
        v55 = (unsigned __int16 *)v15[2];
        if ( v13 >= 0x10000000 )
        {
          v7 = -1073741619;
          goto LABEL_89;
        }
        v14 += v55[43];
        v13 += v55[41] + v55[42] + v55[40];
        v56 = v15[3];
        if ( v56 )
          v13 += ((unsigned int)(*(_QWORD *)(v56 + 24) >> 16) >> 1) & 0x1FFFFFFF;
      }
      LODWORD(v57) = 72;
      v66 = 0LL;
      v67 = 0LL;
      HIDWORD(v66) = 104;
      LODWORD(v67) = 8;
      PopEtDataSectionReserve((unsigned int *)&v66, v12, &v57);
      v19 = *(_DWORD *)(v5 + 40) >> 28;
      if ( v19 )
      {
        if ( v19 != 1 )
          goto LABEL_27;
        v64 = 0LL;
        HIDWORD(v64) = 440;
      }
      else
      {
        v64 = 0LL;
        HIDWORD(v64) = 432;
      }
      v65 = 0LL;
      LODWORD(v65) = 8;
LABEL_27:
      PopEtDataSectionReserve((unsigned int *)&v64, v12, &v57);
      v62 = 0LL;
      v63 = 0LL;
      HIDWORD(v62) = 1;
      LODWORD(v63) = 4;
      PopEtDataSectionReserve((unsigned int *)&v62, v14, &v57);
      v60 = 0LL;
      v61 = 0LL;
      HIDWORD(v60) = 2;
      LODWORD(v61) = 2;
      PopEtDataSectionReserve((unsigned int *)&v60, v13, &v57);
      v20 = v57;
      if ( (unsigned int)v57 > a3 || (unsigned int)v57 >= 0x7FFFFFFF )
      {
        if ( a3 >= 0xC )
        {
          RtlSetUserMemory((void *)a2, 0, 0xCuLL);
          RtlWriteUShortToUser((_WORD *)a2, 19);
          RtlWriteUShortToUser((_WORD *)(a2 + 2), 32);
          RtlWriteULongToUser((_DWORD *)(a2 + 8), v20);
        }
        v7 = -1073741789;
        goto LABEL_89;
      }
      RtlSetUserMemory((void *)a2, 0, (unsigned int)v57);
      PopEtDataSectionStart((unsigned int *)&v66, a2);
      PopEtDataSectionStart((unsigned int *)&v64, v21);
      PopEtDataSectionStart((unsigned int *)&v62, v22);
      PopEtDataSectionStart((unsigned int *)&v60, v23);
      RtlWriteUShortToUser((_WORD *)a2, 19);
      RtlWriteUShortToUser((_WORD *)(a2 + 2), 32);
      RtlWriteULongToUser((_DWORD *)(a2 + 4), 72);
      RtlWriteULongToUser((_DWORD *)(a2 + 8), v20);
      RtlWriteULongToUser((_DWORD *)(a2 + 12), *(_DWORD *)(v5 + 608));
      RtlWriteULongToUser(
        (_DWORD *)(a2 + 24),
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      RtlWriteULongToUser((_DWORD *)(a2 + 36), v66);
      RtlWriteULongToUser((_DWORD *)(a2 + 40), v12);
      RtlWriteUShortToUser((_WORD *)(a2 + 56), 104);
      RtlWriteUShortToUser((_WORD *)(a2 + 58), 16);
      RtlWriteULongToUser((_DWORD *)(a2 + 52), SDWORD1(v63));
      RtlWriteUShortToUser((_WORD *)(a2 + 60), 12);
      PopEtDataSectionCopyData((__int64)&v62, (void *)(v5 + 32), 0xCu);
      RtlWriteULongToUser((_DWORD *)(a2 + 44), SDWORD1(v63));
      PopEtDataSectionCopyData((__int64)&v62, (void *)(v5 + 612), 0x10u);
      v24 = *(__m128i *)(v5 + 628);
      v80 = v24;
      v80.m128i_i32[0] = *(_DWORD *)(v5 + 612) + _mm_cvtsi128_si32(v24);
      v80.m128i_i32[1] = *(_DWORD *)(v5 + 616) + v24.m128i_i32[1];
      v80.m128i_i32[2] = *(_DWORD *)(v5 + 620) + v24.m128i_i32[2];
      v80.m128i_i32[3] = *(_DWORD *)(v5 + 624) + v24.m128i_i32[3];
      RtlWriteULongToUser((_DWORD *)(a2 + 48), SDWORD1(v63));
      PopEtDataSectionCopyData((__int64)&v62, &v80, 0x10u);
      v25 = 0LL;
      v26 = *((_QWORD *)&v67 + 1);
      while ( 1 )
      {
        v70 = v5 + 48;
        if ( !v25 )
        {
          v37 = *(_QWORD *)(v5 + 56);
          v72 = (_QWORD *)v37;
          v25 = v37;
          v71 = v37;
          goto LABEL_50;
        }
        v71 = v25;
        v27 = *(_DWORD *)(v5 + 52) >> 5;
        v75 = *(_QWORD *)(v25 + 8) & (-1LL << (*(_DWORD *)(v5 + 52) & 0x1F));
        v28 = (unsigned __int8 *)&v75;
        v58 = &v75;
        v29 = 8LL;
        v68 = 8LL;
        v30 = 314159LL;
        while ( v29 >= 8 )
        {
          v30 = v28[7]
              + 37
              * (v28[6]
               + 37 * (v28[5] + 37 * (v28[4] + 37 * (v28[3] + 37 * (v28[2] + 37 * (v28[1] + 37 * (*v28 + 37 * v30)))))));
          v28 += 8;
          v58 = (__int64 *)v28;
          v29 -= 8LL;
          v68 = v29;
        }
        v31 = v29 - 1;
        if ( !v31 )
          goto LABEL_47;
        v32 = v31 - 1;
        if ( !v32 )
          goto LABEL_46;
        v33 = v32 - 1;
        if ( !v33 )
          goto LABEL_45;
        v34 = v33 - 1;
        if ( !v34 )
          goto LABEL_44;
        v35 = v34 - 1;
        if ( !v35 )
          goto LABEL_43;
        v36 = v35 - 1;
        if ( !v36 )
          goto LABEL_42;
        if ( v36 == 1 )
          break;
LABEL_48:
        v79 = v30;
        v37 = *(_QWORD *)(v5 + 56) + 8LL * ((v27 - 1) & (unsigned int)v30);
        v72 = (_QWORD *)v37;
LABEL_50:
        v69 = 0LL;
        if ( !v25 || (v25 = *(_QWORD *)v25, (v25 & 1) != 0) )
        {
          v38 = (_QWORD *)(v37 + 8);
          v39 = *(_QWORD *)(v5 + 56) + 8 * ((unsigned __int64)*(unsigned int *)(v5 + 52) >> 5);
          while ( 1 )
          {
            v69 = v38;
            if ( (unsigned __int64)v38 >= v39 )
              break;
            v25 = *v38;
            if ( (*v38 & 1) == 0 )
            {
              v72 = v38;
              goto LABEL_52;
            }
            ++v38;
          }
          v25 = 0LL;
        }
        else
        {
LABEL_52:
          v71 = v25;
        }
        if ( !v25 )
        {
          v40 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          v73 = v40;
          v41 = KiQueryUnbiasedInterruptTime() / 0x2710uLL;
          v74 = v41;
          v42 = MEMORY[0xFFFFF78000000014];
          v76 = MEMORY[0xFFFFF78000000014];
          RtlWriteULongToUser((_DWORD *)(a2 + 16), v40 - *(_DWORD *)(v5 + 600));
          RtlWriteULongToUser((_DWORD *)(a2 + 20), v41 - *(_DWORD *)(v5 + 604));
          RtlWriteULongToUser((_DWORD *)(a2 + 28), v40);
          TimelineBitmapTime = KeQueryTimelineBitmapTime();
          RtlWriteULongToUser((_DWORD *)(a2 + 32), TimelineBitmapTime);
          RtlWriteULongToUser((_DWORD *)(a2 + 64), v42);
          RtlWriteULongToUser((_DWORD *)(a2 + 68), SHIDWORD(v76));
          v44 = 0LL;
          v45 = (__int64 *)(v5 + 72);
          while ( 1 )
          {
            if ( v44 )
            {
              v46 = *(_DWORD *)(v5 + 68);
              v57 = *(_QWORD *)(v44 + 8) & (-1LL << (v46 & 0x1F));
              v45 = (__int64 *)(v5 + 72);
              v47 = *(_QWORD *)(v5 + 72)
                  + 8LL
                  * (((v46 >> 5) - 1) & (HIBYTE(v57)
                                       - 877075889
                                       + 442596621 * (unsigned __int8)v57
                                       + 37
                                       * (BYTE6(v57)
                                        + 37
                                        * (BYTE5(v57)
                                         + 37 * (BYTE4(v57) + 37 * (BYTE3(v57) + 37 * (BYTE2(v57) + 37 * BYTE1(v57))))))));
            }
            else
            {
              v44 = *v45;
              v47 = *v45;
            }
            if ( !v44 || (v44 = *(_QWORD *)v44, (v44 & 1) != 0) )
            {
              for ( j = (__int64 *)(v47 + 8);
                    (unsigned __int64)j < *v45 + 8 * ((unsigned __int64)*(unsigned int *)(v5 + 68) >> 5);
                    ++j )
              {
                v44 = *j;
                if ( (*j & 1) == 0 )
                  goto LABEL_72;
              }
              v44 = 0LL;
            }
            else
            {
              v45 = (__int64 *)(v5 + 72);
            }
LABEL_72:
            if ( !v44 )
              break;
            *(_DWORD *)(v44 + 492) &= ~0x80000000;
          }
          PopEtEnergyTrackerCleanupAggregates(v5);
          ++*(_DWORD *)(v5 + 608);
          *(_DWORD *)(v5 + 600) = v40;
          *(_DWORD *)(v5 + 604) = v41;
          *(_OWORD *)(v5 + 612) = 0LL;
          *(__m128i *)(v5 + 628) = v80;
          v7 = 0;
LABEL_89:
          v6 = 1;
          goto LABEL_3;
        }
        v49 = *(_QWORD *)(v25 + 16);
        RtlWriteULong64ToUser((_QWORD *)v26, *(_QWORD *)(v25 + 32));
        RtlWriteULongToUser((_DWORD *)(v26 + 8), *(_DWORD *)(v25 + 40));
        RtlWriteULongToUser((_DWORD *)(v26 + 12), (unsigned __int16)*(_DWORD *)(v25 + 44));
        RtlWriteULongToUser((_DWORD *)(v26 + 72), *(_DWORD *)(v25 + 512));
        RtlWriteULongToUser((_DWORD *)(v26 + 76), *(_DWORD *)(v25 + 516));
        RtlCopyToUser((void *)(v26 + 80), (void *)(v25 + 488), 0x18uLL);
        RtlWriteULongToUser((_DWORD *)(v26 + 20), **(_DWORD **)(v49 + 32));
        RtlWriteULongToUser((_DWORD *)(v26 + 24), *(_DWORD *)(*(_QWORD *)(v49 + 32) + 4LL));
        RtlWriteULongToUser((_DWORD *)(v26 + 44), **(_DWORD **)(v49 + 40));
        RtlWriteULongToUser((_DWORD *)(v26 + 48), *(_DWORD *)(*(_QWORD *)(v49 + 40) + 4LL));
        RtlWriteULongToUser((_DWORD *)(v26 + 40), SDWORD1(v63));
        RtlWriteUShortToUser((_WORD *)(v26 + 60), *(_WORD *)(v49 + 86));
        PopEtDataSectionCopyData((__int64)&v62, *(void **)(v49 + 72), *(unsigned __int16 *)(v49 + 86));
        RtlWriteUShortToUser((_WORD *)(v26 + 52), *(_WORD *)(v49 + 80));
        RtlWriteULongToUser((_DWORD *)(v26 + 16), SDWORD1(v61));
        PopEtDataSectionCopyData((__int64)&v60, *(void **)(v49 + 48), 2 * *(unsigned __int16 *)(v49 + 80));
        RtlWriteUShortToUser((_WORD *)(v26 + 54), *(_WORD *)(v49 + 82));
        RtlWriteULongToUser((_DWORD *)(v26 + 28), SDWORD1(v61));
        PopEtDataSectionCopyData((__int64)&v60, *(void **)(v49 + 56), 2 * *(unsigned __int16 *)(v49 + 82));
        RtlWriteUShortToUser((_WORD *)(v26 + 56), *(_WORD *)(v49 + 84));
        RtlWriteULongToUser((_DWORD *)(v26 + 32), SDWORD1(v61));
        PopEtDataSectionCopyData((__int64)&v60, *(void **)(v49 + 64), 2 * *(unsigned __int16 *)(v49 + 84));
        v50 = *(_QWORD *)(v25 + 24);
        v51 = (_WORD *)(v26 + 58);
        if ( v50 )
        {
          LODWORD(v57) = 0;
          v52 = ((unsigned int)(*(_QWORD *)(v50 + 24) >> 16) >> 1) & 0x1FFFFFFF;
          LODWORD(v57) = v52;
          RtlWriteUShortToUser(v51, v52);
          RtlWriteULongToUser((_DWORD *)(v26 + 36), SDWORD1(v61));
          PopEtDataSectionCopyData((__int64)&v60, (void *)(*(_QWORD *)(v25 + 24) + 32LL), 2 * v52);
        }
        else
        {
          RtlWriteUShortToUser(v51, 0);
          RtlWriteULongToUser((_DWORD *)(v26 + 36), SDWORD1(v61));
        }
        RtlWriteULongToUser((_DWORD *)(v26 + 64), SDWORD1(v65));
        v53 = *(_DWORD *)(v5 + 40) >> 28;
        if ( !v53 )
        {
          v54 = 432;
LABEL_82:
          RtlWriteULongToUser((_DWORD *)(v26 + 68), v54);
          goto LABEL_83;
        }
        if ( v53 == 1 )
        {
          v54 = 440;
          goto LABEL_82;
        }
LABEL_83:
        PopEtDataSectionCopyData((__int64)&v64, (void *)(v25 + 48), HIDWORD(v64));
        if ( (unsigned int)(HIDWORD(v66) + DWORD1(v67)) <= DWORD2(v66) )
        {
          DWORD1(v67) += HIDWORD(v66);
          v26 += HIDWORD(v66);
          *((_QWORD *)&v67 + 1) = v26;
        }
      }
      v30 = *v28++ + 37 * v30;
      v58 = (__int64 *)v28;
LABEL_42:
      v30 = *v28++ + 37 * v30;
      v58 = (__int64 *)v28;
LABEL_43:
      v30 = *v28++ + 37 * v30;
      v58 = (__int64 *)v28;
LABEL_44:
      v30 = *v28++ + 37 * v30;
      v58 = (__int64 *)v28;
LABEL_45:
      v30 = *v28++ + 37 * v30;
      v58 = (__int64 *)v28;
LABEL_46:
      v30 = *v28++ + 37 * v30;
      v58 = (__int64 *)v28;
LABEL_47:
      v30 = *v28 + 37 * v30;
      v58 = (__int64 *)(v28 + 1);
      goto LABEL_48;
    }
  }
LABEL_3:
  if ( v6 )
    PopReleaseRwLock((struct _KTHREAD *)(v5 + 16));
  if ( v5 )
    ObfDereferenceObjectWithTag((PVOID)v5, 0x74456F50u);
  return (unsigned int)v7;
}

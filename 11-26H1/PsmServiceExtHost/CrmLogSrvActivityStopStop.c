/*
 * XREFs of CrmLogSrvActivityStopStop @ 0x18001C010
 * Callers:
 *     CrmRpcSrvActivityStop @ 0x18001BB00 (CrmRpcSrvActivityStop.c)
 *     CrmSrvActivityStop @ 0x18001BD90 (CrmSrvActivityStop.c)
 * Callees:
 *     CreateNewEventEntry @ 0x18001C9D4 (CreateNewEventEntry.c)
 *     EnableFlushTimer @ 0x18001CC68 (EnableFlushTimer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x18001CCD0 (_tlgCreate1Sz_wchar_t.c)
 *     DestroyEventEntry @ 0x180062528 (DestroyEventEntry.c)
 *     memcmp_0 @ 0x1800A28B6 (memcmp_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall CrmLogSrvActivityStopStop(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v7; // rsi
  unsigned int v9; // edx
  __int64 v11; // rcx
  __int64 v12; // rbx
  const wchar_t *v13; // rcx
  __int64 v14; // rax
  bool v15; // zf
  unsigned int v16; // eax
  const wchar_t *v17; // rax
  unsigned int v18; // ebx
  unsigned __int8 v19; // r15
  char *v20; // rcx
  char v21; // al
  char v24; // al
  char v25; // r8
  char v26; // dl
  int v27; // eax
  volatile signed __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r12
  signed __int64 v31; // r13
  unsigned __int8 v32; // dl
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  struct _EVENT_DATA_DESCRIPTOR *v37; // r11
  __int64 v38; // rbx
  unsigned __int64 i; // r8
  int v40; // ecx
  unsigned int v41; // r14d
  volatile signed __int64 *j; // rsi
  volatile signed __int64 v43; // rbx
  int v44; // ecx
  __int64 v45; // rdi
  unsigned int k; // ebx
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  const wchar_t *v52; // rdx
  ULONGLONG v53; // r9
  int NewEventEntry; // eax
  unsigned int v55; // eax
  unsigned __int8 v56; // r15
  __int64 v57; // rcx
  __int64 v58; // r8
  signed __int64 v59; // r11
  __int64 v60; // rax
  int v61; // r9d
  volatile signed __int64 *v62; // r10
  signed __int64 v63; // rax
  volatile signed __int64 v64; // rtt
  unsigned int v65; // [rsp+30h] [rbp-D0h] BYREF
  int v66; // [rsp+34h] [rbp-CCh] BYREF
  int v67; // [rsp+38h] [rbp-C8h] BYREF
  int v68; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v69; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v70; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v71; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v72; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v73; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  __int64 v75; // [rsp+78h] [rbp-88h] BYREF
  __int64 v76; // [rsp+80h] [rbp-80h] BYREF
  __int64 v77; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  void *Buf1; // [rsp+A0h] [rbp-60h] BYREF
  int v80; // [rsp+A8h] [rbp-58h]
  int v81; // [rsp+ACh] [rbp-54h]
  __int64 *v82; // [rsp+B0h] [rbp-50h]
  __int64 v83; // [rsp+B8h] [rbp-48h]
  __int64 *v84; // [rsp+C0h] [rbp-40h]
  __int64 v85; // [rsp+C8h] [rbp-38h]
  __int64 *v86; // [rsp+D0h] [rbp-30h]
  __int64 v87; // [rsp+D8h] [rbp-28h]
  int *v88; // [rsp+E0h] [rbp-20h]
  __int64 v89; // [rsp+E8h] [rbp-18h]
  __int64 *v90; // [rsp+F0h] [rbp-10h]
  __int64 v91; // [rsp+F8h] [rbp-8h]
  __int64 *v92; // [rsp+100h] [rbp+0h]
  __int64 v93; // [rsp+108h] [rbp+8h]
  __int64 *v94; // [rsp+110h] [rbp+10h]
  __int64 v95; // [rsp+118h] [rbp+18h]
  __int64 *v96; // [rsp+120h] [rbp+20h]
  __int64 v97; // [rsp+128h] [rbp+28h]
  __int64 *v98; // [rsp+130h] [rbp+30h]
  __int64 v99; // [rsp+138h] [rbp+38h]
  __int64 *v100; // [rsp+140h] [rbp+40h]
  __int64 v101; // [rsp+148h] [rbp+48h]
  __int64 *v102; // [rsp+150h] [rbp+50h]
  __int64 v103; // [rsp+158h] [rbp+58h]
  unsigned int *v104; // [rsp+160h] [rbp+60h]
  __int64 v105; // [rsp+168h] [rbp+68h]
  _BYTE v106[16]; // [rsp+170h] [rbp+70h] BYREF
  char v107[16]; // [rsp+180h] [rbp+80h] BYREF
  int *v108; // [rsp+190h] [rbp+90h]
  __int64 v109; // [rsp+198h] [rbp+98h]

  v7 = a4;
  v9 = dword_1800E12E8;
  v11 = qword_1800E1300;
  v12 = -1LL;
  if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 1) != 0 && (qword_1800E1300 & 1) == qword_1800E1300 )
  {
    v83 = 16LL;
    v82 = (__int64 *)&Uuid;
    v67 = *(_DWORD *)(a1 + 24);
    v84 = (__int64 *)&v67;
    v86 = (__int64 *)(a1 + 72);
    v47 = *(unsigned __int8 *)(a1 + 73);
    v85 = 4LL;
    v89 = 4LL;
    v73 = a2;
    v87 = (unsigned int)(4 * v47 + 8);
    v91 = 8LL;
    v93 = 8LL;
    if ( a3 )
    {
      v66 = *(_DWORD *)(a3 + 64);
      v88 = &v66;
      v90 = &v73;
      v70 = *(_QWORD *)(a3 + 200);
      v92 = &v70;
      v48 = *(_QWORD *)(a3 + 208);
    }
    else
    {
      v66 = 1601;
      v88 = &v66;
      v90 = &v73;
      v92 = &v70;
      v48 = -1LL;
      v70 = -1LL;
    }
    v75 = v48;
    v94 = &v75;
    v76 = a5;
    v96 = &v76;
    v95 = 8LL;
    v97 = 8LL;
    v77 = MEMORY[0x7FFE0008];
    v98 = &v77;
    v99 = 8LL;
    v101 = 4LL;
    LODWORD(v72) = a4;
    v103 = 4LL;
    if ( a3 )
    {
      LODWORD(v71) = *(_DWORD *)(a3 + 160);
      v100 = &v71;
      v102 = &v72;
      v49 = *(_QWORD *)(a3 + 224);
      v65 = *(_DWORD *)(a3 + 72);
      v104 = &v65;
      v105 = 4LL;
      tlgCreate1Sz_wchar_t(v106, v49, a2, 1LL);
      v52 = *(const wchar_t **)(a3 + 232);
    }
    else
    {
      LODWORD(v71) = 0;
      v100 = &v71;
      v65 = 0;
      v102 = &v72;
      v104 = &v65;
      v105 = 4LL;
      tlgCreate1Sz_wchar_t(v106, &word_1800BBB1C, a2, 1LL);
      v52 = &word_1800BBB1C;
    }
    tlgCreate1Sz_wchar_t(v107, v52, v50, v51);
    EventDescriptor.Keyword = v53;
    v108 = &v68;
    *(_DWORD *)&EventDescriptor.Level = 517;
    UserData.Ptr = (ULONGLONG)off_1800E12F0;
    v68 = a6;
    v109 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E12F0;
    Buf1 = &unk_1800CC2A4;
    v81 = v53;
    UserData.Reserved = 2;
    v80 = 245;
    v69 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E1308, &EventDescriptor, 0LL, 0LL, 0x11u, &UserData);
    v11 = qword_1800E1300;
    v9 = dword_1800E12E8;
  }
  if ( a3 && v9 > 5 && (qword_1800E12F8 & 0x400000000000LL) != 0 && (v11 & 0x400000000000LL) == v11 )
  {
    v13 = *(const wchar_t **)(a3 + 224);
    v82 = &v77;
    v76 = *(_QWORD *)(a3 + 200);
    v84 = &v76;
    v75 = *(_QWORD *)(a3 + 208);
    v86 = &v75;
    v73 = *(unsigned int *)(a3 + 160);
    v88 = (int *)&v73;
    v90 = &v72;
    v69 = *(_DWORD *)(a1 + 24);
    v92 = (__int64 *)&v69;
    v68 = *(_DWORD *)(a3 + 64);
    v94 = (__int64 *)&v68;
    v77 = 1LL;
    v83 = 8LL;
    v85 = 8LL;
    v87 = 8LL;
    v89 = 8LL;
    v72 = v7;
    v91 = 8LL;
    v93 = 4LL;
    v95 = 4LL;
    if ( v13 )
    {
      v14 = -1LL;
      do
        v15 = v13[++v14] == 0;
      while ( !v15 );
      v16 = 2 * v14 + 2;
    }
    else
    {
      v13 = &word_1800BBB1C;
      v16 = 2;
    }
    v97 = v16;
    v17 = *(const wchar_t **)(a3 + 232);
    v96 = (__int64 *)v13;
    if ( v17 )
    {
      do
        v15 = v17[++v12] == 0;
      while ( !v15 );
      v18 = 2 * v12 + 2;
    }
    else
    {
      v17 = &word_1800BBB1C;
      v18 = 2;
    }
    v98 = (__int64 *)v17;
    v99 = v18;
    v100 = (__int64 *)&v67;
    v102 = &v71;
    *(_DWORD *)&EventDescriptor.Level = 517;
    UserData.Ptr = (ULONGLONG)off_1800E12F0;
    v67 = a6;
    v101 = 4LL;
    v71 = 0x2000000LL;
    v103 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0x400000000000LL;
    UserData.Size = *(unsigned __int16 *)off_1800E12F0;
    Buf1 = &unk_1800CC1A0;
    UserData.Reserved = 2;
    v80 = 248;
    v81 = 1;
    v65 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1800E1310 == TlgAggregateInternalRegisteredProviderEtwCallback )
    {
      v19 = 0;
      v20 = (char *)&unk_1800CC1A2;
      do
        v21 = *v20++;
      while ( v21 < 0 );
      while ( *v20++ )
        ;
      while ( v20 < byte_1800CC298 )
      {
        while ( *v20++ )
          ;
        if ( *v20 >= 0 )
          break;
        v24 = v20[1];
        v25 = *v20 & 0x7F;
        v20 += 2;
        if ( v24 >= 0 )
          break;
        while ( 1 )
        {
          v26 = *v20;
          if ( *v20 >= 0 )
            break;
          if ( v26 != (char)0x80 )
            goto LABEL_32;
          ++v20;
        }
        if ( v25 != 9 || (unsigned __int8)(v26 - 113) > 2u )
          break;
        v29 = 2LL * v19++;
        *((_BYTE *)&v83 + 8 * v29 + 5) = v26;
      }
LABEL_32:
      if ( v19 )
      {
        v30 = qword_1800E1318;
        v31 = 0LL;
        v70 = 0LL;
        _mm_lfence();
        v32 = v19 + 2;
        v33 = 1025
            * (BYTE4(Buf1)
             + ((1025
               * (BYTE3(Buf1)
                + ((1025
                  * (BYTE2(Buf1)
                   + ((1025
                     * (BYTE1(Buf1)
                      + ((1025 * (unsigned __int8)Buf1) ^ ((1025 * (unsigned int)(unsigned __int8)Buf1) >> 6)))) ^ ((1025 * (BYTE1(Buf1) + ((1025 * (unsigned __int8)Buf1) ^ ((1025 * (unsigned int)(unsigned __int8)Buf1) >> 6)))) >> 6)))) ^ ((1025 * (BYTE2(Buf1) + ((1025 * (BYTE1(Buf1) + ((1025 * (unsigned __int8)Buf1) ^ ((1025 * (unsigned int)(unsigned __int8)Buf1) >> 6)))) ^ ((1025 * (BYTE1(Buf1) + ((1025 * (unsigned __int8)Buf1) ^ ((1025 * (unsigned int)(unsigned __int8)Buf1) >> 6)))) >> 6)))) >> 6)))) ^ ((1025 * (BYTE3(Buf1) + ((1025 * (BYTE2(Buf1) + ((1025 * (BYTE1(Buf1) + ((1025 * (unsigned __int8)Buf1) ^ ((1025 * (unsigned int)(unsigned __int8)Buf1) >> 6)))) ^ ((1025 * (BYTE1(Buf1) + ((1025 * (unsigned __int8)Buf1) ^ ((1025 * (unsigned int)(unsigned __int8)Buf1) >> 6)))) >> 6)))) ^ ((1025 * (BYTE2(Buf1) + ((1025 * (BYTE1(Buf1) + ((1025 * (unsigned __int8)Buf1) ^ ((1025 * (unsigned int)(unsigned __int8)Buf1) >> 6)))) ^ ((1025 * (BYTE1(Buf1) + ((1025 * (unsigned __int8)Buf1) ^ ((1025 * (unsigned int)(unsigned __int8)Buf1) >> 6)))) >> 6)))) >> 6)))) >> 6)));
        v34 = 1025 * (BYTE5(Buf1) + (v33 ^ (v33 >> 6)));
        v35 = 1025 * (BYTE6(Buf1) + (v34 ^ (v34 >> 6)));
        v36 = (1025 * (HIBYTE(Buf1) + (v35 ^ (v35 >> 6)))) ^ ((1025 * (HIBYTE(Buf1) + (v35 ^ (v35 >> 6)))) >> 6);
        if ( (unsigned __int8)(v19 + 2) < 0xDu )
        {
          v37 = &UserData + v32;
          v38 = (unsigned __int8)(13 - v32);
          do
          {
            for ( i = 0LL; i < v37->Size; v36 = (1025 * (v36 + v40)) ^ ((1025 * (v36 + v40)) >> 6) )
              v40 = *(unsigned __int8 *)(v37->Ptr + i++);
            ++v37;
            --v38;
          }
          while ( v38 );
        }
        v41 = 32769 * ((9 * v36) ^ ((9 * v36) >> 11));
        AcquireSRWLockShared((PSRWLOCK)(qword_1800E1318 + 264));
        for ( j = (volatile signed __int64 *)(v30 + 8LL * (v41 & 0x1F));
              ;
              j = (volatile signed __int64 *)(v28 + (((__int64)v27 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + 32) )
        {
          if ( !*j )
          {
            if ( *(_DWORD *)(v30 + 256) >= 0x400u )
            {
              ++*(_DWORD *)(v30 + 300);
              goto LABEL_27;
            }
            if ( !v31 )
            {
              NewEventEntry = CreateNewEventEntry(
                                (unsigned int)&EventDescriptor,
                                v28,
                                (unsigned int)&UserData,
                                v19,
                                v41,
                                (__int64)&v70);
              v31 = v70;
              if ( !v70 )
              {
                if ( NewEventEntry == 8 )
                  ++*(_DWORD *)(v30 + 304);
                else
                  ++*(_DWORD *)(v30 + 308);
                goto LABEL_27;
              }
            }
            if ( !_InterlockedCompareExchange64(j, v31, 0LL) )
            {
              v31 = 0LL;
              if ( _InterlockedIncrement((volatile signed __int32 *)(v30 + 256)) == 1 )
                EnableFlushTimer(*(_QWORD *)(v30 + 344), *(unsigned int *)(v30 + 352));
              v55 = *(_DWORD *)(v30 + 256);
              if ( *(_DWORD *)(v30 + 288) < v55 )
                *(_DWORD *)(v30 + 288) = v55;
              goto LABEL_27;
            }
          }
          v43 = *j;
          v44 = *(_DWORD *)(*j + 40);
          if ( v41 == v44 )
          {
            v45 = *(_QWORD *)(v43 + 16);
            v27 = memcmp_0(&Buf1, (const void *)(v45 + 16), 8uLL);
            if ( !v27 )
            {
              for ( k = *(unsigned __int8 *)(v43 + 45) + 2; k < 0xD; ++k )
              {
                v27 = *(&UserData.Size + 4 * k) - *(_DWORD *)(v45 + 16LL * k + 8);
                if ( v27 )
                  goto LABEL_25;
                v27 = memcmp_0(
                        *((const void **)&UserData.Ptr + 2 * k),
                        *(const void **)(v45 + 16LL * k),
                        *(&UserData.Size + 4 * k));
                if ( v27 )
                  goto LABEL_25;
              }
              v27 = 0;
            }
          }
          else
          {
            v27 = v41 - v44;
          }
LABEL_25:
          v28 = *j;
          if ( !v27 )
            break;
        }
        if ( v28 )
        {
          v56 = v19 + 2;
          if ( v56 > 2u )
          {
            v57 = 32LL;
            v58 = (unsigned __int8)(v56 - 2);
            do
            {
              v59 = **(_QWORD **)((char *)&UserData.Ptr + v57);
              v60 = *(_QWORD *)(v28 + 16);
              v61 = *(unsigned __int8 *)(v57 + v60 + 13);
              v62 = *(volatile signed __int64 **)(v57 + v60);
              switch ( v61 )
              {
                case 's':
                  goto LABEL_70;
                case 'q':
                  _InterlockedAdd64(v62, v59);
                  break;
                case 'r':
                  do
                  {
LABEL_70:
                    v63 = *v62;
                    if ( v61 == 114 )
                    {
                      if ( v59 >= v63 )
                        goto LABEL_72;
                    }
                    else if ( v59 <= v63 )
                    {
                      goto LABEL_72;
                    }
                    v64 = *v62;
                  }
                  while ( v64 != _InterlockedCompareExchange64(v62, v59, v63) );
                  break;
              }
LABEL_72:
              v57 += 16LL;
              --v58;
            }
            while ( v58 );
          }
        }
LABEL_27:
        ReleaseSRWLockShared((PSRWLOCK)(v30 + 264));
        if ( v31 )
          DestroyEventEntry(v31);
      }
      else
      {
        EventWriteTransfer(qword_1800E1308, &EventDescriptor, 0LL, 0LL, 0xDu, &UserData);
      }
    }
  }
}

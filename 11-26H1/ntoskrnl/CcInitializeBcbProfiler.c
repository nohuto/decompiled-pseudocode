/*
 * XREFs of CcInitializeBcbProfiler @ 0x140C86424
 * Callers:
 *     CcInitializeCacheManager @ 0x140C854E8 (CcInitializeCacheManager.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219CA0 (KeSetCoalescableTimer.c)
 *     RtlSectionTableFromVirtualAddress @ 0x14042B410 (RtlSectionTableFromVirtualAddress.c)
 *     RtlLookupFunctionTable @ 0x14044CE40 (RtlLookupFunctionTable.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     KeInitializeTimer @ 0x14047D670 (KeInitializeTimer.c)
 *     RtlpConvertFunctionEntry @ 0x1404B6FE0 (RtlpConvertFunctionEntry.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x1405256A0 (RtlpLookupPrimaryFunctionEntry.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     strstr @ 0x140537FA0 (strstr.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     KiSwInterruptPresent @ 0x140C86394 (KiSwInterruptPresent.c)
 *     sub_140CAEAFC @ 0x140CAEAFC (sub_140CAEAFC.c)
 *     KiAreCodePatchesAllowed @ 0x140CCE210 (KiAreCodePatchesAllowed.c)
 *     KiGetLoadOptions @ 0x140CCE25C (KiGetLoadOptions.c)
 */

char CcInitializeBcbProfiler()
{
  unsigned __int64 Pool2; // rax
  const char *LoadOptions; // rax
  const char *v2; // rbx
  _IMAGE_NT_HEADERS64 *v3; // r9
  unsigned __int64 v4; // rax
  void (__fastcall *v5)(__int64, __int64); // r8
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r14
  PIMAGE_SECTION_HEADER v8; // rsi
  unsigned int *v9; // r8
  unsigned int *v10; // rbx
  int v11; // edi
  unsigned int VirtualAddress; // edx
  unsigned int *v13; // r9
  unsigned int SizeOfRawData; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  int v17; // eax
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // r8d
  int v24; // eax
  char v25; // cl
  int v26; // eax
  int v27; // eax
  int v28; // r10d
  unsigned int v29; // r10d
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // r10d
  unsigned __int64 Dpc; // rsi
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int128 v39; // rax
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v40; // rax
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v41; // rax
  unsigned int v42; // r12d
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v43; // rbx
  __int64 v44; // r15
  int v45; // r10d
  _QWORD *v46; // r13
  unsigned int v47; // edi
  _QWORD *v48; // r9
  unsigned __int64 v49; // rcx
  const char *v50; // rax
  __int64 v51; // r8
  unsigned int v52; // r11d
  __int64 v53; // rax
  __int64 v54; // r8
  unsigned __int64 v55; // rcx
  unsigned int v56; // edx
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  const char *v59; // rax
  __int64 v60; // r8
  __int64 v61; // rdx
  $2C177DDEB22292785570970034678B30 *v62; // rbx
  __int64 UnwindInfoAddress_low; // rax
  bool v64; // zf
  unsigned __int64 v65; // rax
  __int64 v66; // rcx
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rax
  unsigned __int128 v69; // rax
  __int64 v71; // [rsp+30h] [rbp-28h] BYREF
  char SubStr[32]; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v73; // [rsp+A0h] [rbp+48h] BYREF
  int v74; // [rsp+A8h] [rbp+50h]
  BOOL v75; // [rsp+B0h] [rbp+58h]
  unsigned __int64 v76; // [rsp+B8h] [rbp+60h]

  LOBYTE(Pool2) = -44;
  if ( MEMORY[0xFFFFF780000002D4] < 2u )
  {
    SubStr[0] = __ROR4__(339968, 108);
    SubStr[1] = __ROL4__(536870920, 35);
    SubStr[2] = __ROR4__(1120, 36);
    SubStr[3] = __ROR4__(144703488, 117);
    SubStr[4] = __ROL4__(134217729, 38);
    SubStr[5] = __ROR4__(10112, 39);
    SubStr[6] = __ROR4__(-1073741805, 126);
    SubStr[7] = __ROL4__(704643072, 41);
    v73 = 59392;
    SubStr[8] = __ROR4__(59392, 42);
    SubStr[9] = 0;
    LoadOptions = (const char *)KiGetLoadOptions();
    Pool2 = (unsigned __int64)strstr(LoadOptions, SubStr);
    if ( !Pool2 )
    {
      if ( !(unsigned int)((__int64 (*)(void))KiAreCodePatchesAllowed)()
        || (int)KiSwInterruptPresent() < 0
        || !(unsigned int)sub_140CAEAFC()
        || (v2 = (const char *)KiGetLoadOptions(), strstr(v2, "DISABLE_INTEGRITY_CHECKS"))
        || (Pool2 = (unsigned __int64)strstr(v2, "TESTSIGNING")) != 0 )
      {
        v3 = RtlImageNtHeader((PVOID)0x140000000LL);
        v4 = __rdtsc();
        v5 = CcBcbProfiler;
        v6 = __ROR8__(v4, 3) ^ v4;
        v7 = ((0x7010008004002001LL * v6) ^ ((v6 * (unsigned __int128)0x7010008004002001uLL) >> 64)) % 0x64;
        v76 = v7;
        v75 = v7 >= 0x32;
        if ( v7 >= 0x32 )
          LODWORD(v5) = (unsigned int)sub_140782330;
        v8 = RtlSectionTableFromVirtualAddress(v3, (PVOID)0x140000000LL, (unsigned int)v5 - 0x40000000);
        v9 = (unsigned int *)RtlLookupFunctionTable((unsigned __int64)v8, &v71, &v73);
        if ( !v9 || v73 < 0xC )
        {
          v17 = -1073741701;
LABEL_74:
          v73 = -402653175;
          KeBugCheckEx(__ROR4__(-402653175, 123), 6uLL, (ULONG_PTR)v8, v17, 0LL);
        }
        v10 = 0LL;
        v11 = 0;
        VirtualAddress = v8->VirtualAddress;
        v13 = &v9[3 * (v73 / 0xC)];
        SizeOfRawData = v8->SizeOfRawData;
        if ( SizeOfRawData <= v8->Misc.PhysicalAddress )
          SizeOfRawData = v8->Misc.PhysicalAddress;
        v15 = VirtualAddress + SizeOfRawData;
        do
        {
          v16 = *v9;
          if ( *v9 < VirtualAddress )
          {
            if ( v16 >= v15 )
              break;
          }
          else
          {
            if ( v16 >= v15 )
              break;
            v11 = (int)v9;
            if ( !v10 )
              v10 = v9;
          }
          v9 += 3;
        }
        while ( v9 != v13 );
        if ( !v10 )
        {
          v17 = -1073741569;
          goto LABEL_74;
        }
        v18 = __rdtsc();
        v19 = __ROR8__(v18, 3);
        v20 = (0x7010008004002001LL * (v19 ^ v18)) ^ (((v19 ^ v18) * (unsigned __int128)0x7010008004002001uLL) >> 64);
        Pool2 = 10 * (v20 / 0xA);
        if ( v20 % 0xA < 5 )
        {
          v21 = __rdtsc();
          v22 = __ROR8__(v21, 3);
          v23 = ((0x7010008004002001LL * (v22 ^ v21)) ^ (((v22 ^ v21) * (unsigned __int128)0x7010008004002001uLL) >> 64))
              % 0xB;
          if ( v23 > 5 )
          {
            if ( v23 != 6 )
            {
              if ( v23 == 7 )
              {
                v24 = 1666411585;
                goto LABEL_36;
              }
              if ( v23 != 8 )
              {
                if ( v23 != 9 )
                {
                  v30 = __rdtsc();
                  v31 = __ROR8__(v30, 3);
                  v32 = (67117057 * (v31 ^ v30)) ^ (((v31 ^ v30) * (unsigned __int128)0x7010008004002001uLL) >> 64);
                  v29 = ((((((v32 % 0x1A + 97) << 8) | ((v32 >> 5)
                                                      - 26
                                                      * ((unsigned int)((1321528399 * (unsigned __int64)(v32 >> 5)) >> 32) >> 3)
                                                      + 65)) << 8) | ((v32 >> 10)
                                                                    - 26
                                                                    * ((unsigned int)((1321528399
                                                                                     * (unsigned __int64)(v32 >> 10)) >> 32) >> 3)
                                                                    + 97)) << 8) | ((v32 >> 15) % 0x1A + 65);
                  goto LABEL_50;
                }
                v25 = 33;
                v26 = 1480806214;
                goto LABEL_48;
              }
              v27 = 1113876033;
              goto LABEL_34;
            }
            v25 = 24;
            v26 = 1464235086;
          }
          else
          {
            if ( v23 == 5 )
            {
              v27 = 1766089295;
              goto LABEL_34;
            }
            if ( v23 )
            {
              if ( v23 == 1 )
              {
                v24 = 1700422467;
                goto LABEL_36;
              }
              if ( v23 != 2 )
              {
                if ( v23 != 3 )
                {
                  v24 = 1886800198;
LABEL_36:
                  v74 = __ROR4__(v24, v23);
                  v29 = __ROL4__(v74, v23);
                  goto LABEL_50;
                }
                v25 = 15;
                v26 = 1920421956;
                goto LABEL_48;
              }
              v27 = 1634559043;
LABEL_34:
              v25 = v23;
              v74 = __ROL4__(v27, v23);
              v28 = v74;
LABEL_49:
              v29 = __ROR4__(v28, v25);
LABEL_50:
              Pool2 = ExAllocatePool2(64LL, 0xD8uLL, v29);
              Dpc = Pool2;
              if ( Pool2 )
              {
                KeInitializeTimer((PKTIMER)(Pool2 + 64));
                *(_DWORD *)Dpc = 275;
                *(_QWORD *)(Dpc + 24) = CcBcbProfiler;
                *(_QWORD *)(Dpc + 32) = Dpc;
                *(_QWORD *)(Dpc + 56) = 0LL;
                *(_QWORD *)(Dpc + 16) = 0LL;
                v34 = __rdtsc();
                v35 = __ROR8__(v34, 3);
                *(_QWORD *)(Dpc + 160) = (0x7010008004002001LL * (v35 ^ v34)) ^ (((v35 ^ v34)
                                                                                * (unsigned __int128)0x7010008004002001uLL) >> 64);
                v36 = __rdtsc();
                v37 = __ROR8__(v36, 3);
                *(_BYTE *)(Dpc + 168) = ((0x7010008004002001LL * (v37 ^ v36)) ^ (((v37 ^ v36)
                                                                                * (unsigned __int128)0x7010008004002001uLL) >> 64))
                                      % 0x3F
                                      + 1;
                v38 = __rdtsc();
                *(_QWORD *)(Dpc + 136) = 0x140000000uLL;
                v39 = (__ROR8__(v38, 3) ^ v38) * (unsigned __int128)0x7010008004002001uLL;
                v40 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)RtlpConvertFunctionEntry(
                                                                (unsigned __int64)&v10[3
                                                                                     * (((unsigned __int64)v39 ^ *((_QWORD *)&v39 + 1))
                                                                                      % (unsigned int)((v11 - (int)v10) / 12))],
                                                                0x140000000uLL);
                v41 = RtlpLookupPrimaryFunctionEntry(
                        v40,
                        *(_QWORD *)(Dpc + 136),
                        *(_QWORD *)(Dpc + 136) + v40->BeginAddress);
                v42 = *(unsigned __int8 *)(Dpc + 168);
                v43 = v41;
                v44 = *(_QWORD *)(Dpc + 160);
                LOBYTE(v45) = *(_BYTE *)(Dpc + 168);
                *(_QWORD *)(Dpc + 128) = v41;
                v46 = (_QWORD *)(*(_QWORD *)(Dpc + 136) + v41->BeginAddress);
                v47 = v41->EndAddress - v41->BeginAddress;
                v48 = v46;
                v49 = (unsigned __int64)v46 + v47;
                v73 = v42;
                v50 = (const char *)v46;
                if ( (unsigned __int64)v46 < v49 )
                {
                  do
                  {
                    _mm_prefetch(v50, 0);
                    v50 += 64;
                  }
                  while ( (unsigned __int64)v50 < v49 );
                }
                v51 = v44;
                v52 = v47 >> 7;
                if ( v47 >> 7 )
                {
                  do
                  {
                    v53 = 8LL;
                    do
                    {
                      v54 = v48[1] ^ __ROL8__(*v48 ^ v51, v45);
                      v48 += 2;
                      v51 = __ROL8__(v54, v45);
                      --v53;
                    }
                    while ( v53 );
                    v55 = __ROL8__(v44 ^ ((char *)v48 - (char *)v46), 17) ^ v44 ^ ((char *)v48 - (char *)v46);
                    v45 = ((unsigned __int8)(((v55 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v55) ^ (unsigned __int8)v45) & 0x3F;
                    if ( !v45 )
                      LOBYTE(v45) = 1;
                    --v52;
                  }
                  while ( v52 );
                  v7 = v76;
                  v42 = v73;
                }
                v56 = v47 & 0x7F;
                if ( v56 >= 8 )
                {
                  v57 = (unsigned __int64)(v47 & 0x7F) >> 3;
                  do
                  {
                    v51 = __ROL8__(*v48++ ^ v51, v45);
                    v56 -= 8;
                    --v57;
                  }
                  while ( v57 );
                }
                for ( ; v56; --v56 )
                {
                  v58 = *(unsigned __int8 *)v48;
                  v48 = (_QWORD *)((char *)v48 + 1);
                  v51 = __ROL8__(v58 ^ v51, v45);
                }
                *(_QWORD *)(Dpc + 152) = v51;
                v59 = (const char *)v43;
                if ( v43 < &v43[1] )
                {
                  do
                  {
                    _mm_prefetch(v59, 0);
                    v59 += 64;
                  }
                  while ( v59 < (const char *)&v43[1] );
                }
                v60 = __ROL8__(*(_QWORD *)&v43->BeginAddress ^ v51, v42);
                LODWORD(v61) = 4;
                v62 = &v43->8;
                do
                {
                  UnwindInfoAddress_low = LOBYTE(v62->UnwindInfoAddress);
                  v62 = ($2C177DDEB22292785570970034678B30 *)((char *)v62 + 1);
                  v60 = __ROL8__(UnwindInfoAddress_low ^ v60, v42);
                  v64 = (_DWORD)v61 == 1;
                  v61 = (unsigned int)(v61 - 1);
                }
                while ( !v64 );
                *(_DWORD *)(Dpc + 172) = v75;
                *(_QWORD *)(Dpc + 152) = v60;
                *(_DWORD *)(Dpc + 144) = v47;
                *(_DWORD *)(Dpc + 176) = KiAreCodePatchesAllowed(v42, v61, v60, v48) != 0;
                if ( v7 >= 0x32 )
                {
                  *(_QWORD *)(Dpc + 184) = 0LL;
                  *(_QWORD *)(Dpc + 200) = sub_140782330;
                  *(_QWORD *)(Dpc + 208) = Dpc;
                }
                v65 = __rdtsc();
                v66 = __ROR8__(v65, 3);
                v67 = (0x7010008004002001LL * (v66 ^ v65)) ^ (((v66 ^ v65) * (unsigned __int128)0x7010008004002001uLL) >> 64);
                v68 = __rdtsc();
                v69 = (__ROR8__(v68, 3) ^ v68) * (unsigned __int128)0x7010008004002001uLL;
                LOBYTE(Pool2) = KeSetCoalescableTimer(
                                  (PKTIMER)(Dpc + 64),
                                  (LARGE_INTEGER)(100000000 * (v67 / 0x5F5E100 - 12) - v67),
                                  0,
                                  ((unsigned __int64)v69 ^ *((_QWORD *)&v69 + 1)) % 0x2710,
                                  (PKDPC)Dpc);
              }
              return Pool2;
            }
            v25 = 6;
            v26 = 1665295171;
          }
LABEL_48:
          v74 = v23 ^ __ROL4__(v26, v25);
          v28 = v23 ^ v74;
          goto LABEL_49;
        }
      }
    }
  }
  return Pool2;
}

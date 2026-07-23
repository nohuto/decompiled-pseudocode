/*
 * XREFs of RtlQueryEnvironmentVariable @ 0x18009BE40
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180032060 (RtlGetFullPathName_Ustr.c)
 *     RtlpNeedCurrentDirectoryForExePath @ 0x18009A058 (RtlpNeedCurrentDirectoryForExePath.c)
 *     _IsProgramFilesPath @ 0x18009A0B4 (_IsProgramFilesPath.c)
 *     RtlpCheckRelativeDrive @ 0x18009A374 (RtlpCheckRelativeDrive.c)
 *     RtlpComputePath @ 0x18009B210 (RtlpComputePath.c)
 *     RtlExpandEnvironmentStrings_U @ 0x18009B9D0 (RtlExpandEnvironmentStrings_U.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18009BC00 (RtlQueryEnvironmentVariable_U.c)
 *     RtlExpandEnvironmentStrings @ 0x18009BC70 (RtlExpandEnvironmentStrings.c)
 *     RtlpWow64ThunkEnvironmentTo64 @ 0x18009D5C0 (RtlpWow64ThunkEnvironmentTo64.c)
 *     LdrpCorInitialize @ 0x1800BC06C (LdrpCorInitialize.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18009C828 (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlpScanEnvironment @ 0x18009CB40 (RtlpScanEnvironment.c)
 *     RtlpQueryEnvironmentHashTable @ 0x18009D240 (RtlpQueryEnvironmentHashTable.c)
 *     _wcsnicmp @ 0x180128DF0 (_wcsnicmp.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl RtlQueryEnvironmentVariable(
        PVOID Environment,
        PCWSTR Name,
        SIZE_T NameLength,
        PWSTR Value,
        SIZE_T ValueLength,
        PSIZE_T ReturnLength)
{
  SIZE_T v6; // r12
  const wchar_t *v7; // r10
  struct _TEB *v9; // r13
  int v10; // edi
  NTSTATUS PseudoEnvironmentVariable; // esi
  int v12; // ebx
  unsigned __int64 v13; // r14
  SIZE_T v14; // rax
  PSIZE_T v15; // rbx
  PCWSTR v16; // r13
  PCWSTR v17; // r10
  __int64 v18; // rax
  unsigned __int64 v19; // r9
  __int64 v20; // r9
  unsigned int v21; // edx
  __int64 v22; // r10
  unsigned int v23; // esi
  unsigned __int8 *v24; // r9
  __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r14
  __int64 v29; // rdx
  __int64 v30; // r13
  __int64 v31; // r12
  __int64 v32; // r15
  SIZE_T v33; // r14
  unsigned __int16 *v34; // r10
  unsigned __int16 *v35; // r11
  SIZE_T v36; // rcx
  unsigned __int16 *v37; // r15
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rsi
  PSIZE_T v40; // r14
  int v41; // r15d
  int v42; // r14d
  SIZE_T v43; // rax
  const void *v44; // rdx
  SIZE_T v45; // rbx
  __int64 v46; // r8
  _PEB *ProcessEnvironmentBlock; // rcx
  _RTL_CRITICAL_SECTION *FastPebLock; // rdx
  __int16 v50; // [rsp+58h] [rbp-B0h]
  _BYTE v51[14]; // [rsp+5Ah] [rbp-AEh] BYREF
  __int64 *v52; // [rsp+68h] [rbp-A0h]
  int v53; // [rsp+70h] [rbp-98h]
  int v54; // [rsp+74h] [rbp-94h]
  __int64 v55; // [rsp+78h] [rbp-90h]
  __int64 v56; // [rsp+80h] [rbp-88h]
  __int64 v57; // [rsp+88h] [rbp-80h]
  __int64 v58; // [rsp+90h] [rbp-78h]
  unsigned __int16 *v59; // [rsp+98h] [rbp-70h]
  PCWSTR v60; // [rsp+A0h] [rbp-68h]
  PCWSTR v61; // [rsp+A8h] [rbp-60h]
  __int64 v62; // [rsp+B0h] [rbp-58h] BYREF
  void *v63; // [rsp+B8h] [rbp-50h]
  __int64 i; // [rsp+C0h] [rbp-48h]

  v6 = NameLength;
  v7 = Name;
  v9 = NtCurrentTeb();
  v10 = 0;
  *ReturnLength = 0LL;
  if ( NameLength )
  {
    v54 = 0;
    PseudoEnvironmentVariable = -1073741568;
    v53 = -1073741568;
    v12 = 4;
    while ( 1 )
    {
      v54 = v12;
      if ( !v12 )
        break;
      v13 = 24LL * (unsigned int)--v12;
      v14 = *(_QWORD *)((char *)&unk_180170A70 + v13);
      if ( v6 == v14 )
      {
        if ( !wcsnicmp(v7, (&off_180170A78)[v13 / 8], v6) )
        {
          v15 = ReturnLength;
          PseudoEnvironmentVariable = RtlpQueryPseudoEnvironmentVariable(
                                        *(unsigned int *)((char *)&unk_180170A80 + v13),
                                        Value,
                                        ValueLength,
                                        ReturnLength);
          v53 = PseudoEnvironmentVariable;
          LODWORD(v7) = (_DWORD)Name;
          goto LABEL_9;
        }
        v7 = Name;
      }
      else if ( v6 > v14 )
      {
        break;
      }
    }
    v15 = ReturnLength;
LABEL_9:
    if ( PseudoEnvironmentVariable != -1073741568 )
      return PseudoEnvironmentVariable;
    if ( !Environment )
    {
      RtlEnterCriticalSection(&::FastPebLock);
      v63 = v9->ProcessEnvironmentBlock->ProcessParameters->Environment;
      v16 = Name;
      v17 = Name;
      v61 = Name;
      v50 = 0;
      v18 = 314159LL;
      while ( v17 < &Name[(unsigned int)v6] )
      {
        v19 = *v17;
        if ( (unsigned int)v19 >= 0x61 )
        {
          if ( (unsigned int)v19 > 0x7A )
          {
            if ( qword_1801C5038 )
            {
              if ( (unsigned __int16)v19 >= 0xC0u )
                LOWORD(v19) = *(_WORD *)(qword_1801C5038
                                       + 2
                                       * ((v19 & 0xF)
                                        + *(unsigned __int16 *)(qword_1801C5038
                                                              + 2LL
                                                              * (((unsigned __int8)v19 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(qword_1801C5038 + 2 * (v19 >> 8))))))
                            + v19;
            }
          }
          else
          {
            LOWORD(v19) = v19 - 32;
          }
        }
        v50 = v19;
        v61 = ++v17;
        v56 = 2LL;
        v18 = BYTE1(v19) + 37 * ((unsigned __int8)v19 + 37 * v18);
        *(_QWORD *)&v51[6] = v51;
      }
      v20 = 0LL;
      v21 = DWORD1(RtlpEnvironmentHashTable);
      for ( i = *(_QWORD *)((char *)&RtlpEnvironmentHashTable + 4); ; v21 = i )
      {
        v22 = -1LL << (v21 & 0x1F);
        if ( v20 )
          goto LABEL_29;
        v23 = v21 >> 5;
        if ( v21 >> 5 )
        {
          v62 = v18 & (-1LL << (v21 & 0x1F));
          v24 = (unsigned __int8 *)&v62;
          v52 = &v62;
          v25 = 8LL;
          v57 = 8LL;
          v26 = 314159LL;
          v27 = 314159LL;
          while ( 1 )
          {
            v28 = v27;
            v29 = v27;
            v55 = v27;
            v30 = v27;
            v31 = v27;
            v32 = v27;
            v58 = v27;
            if ( v25 < 8 )
              break;
            v26 = v24[7]
                + 37
                * (v24[6]
                 + 37
                 * (v24[5] + 37 * (v24[4] + 37 * (v24[3] + 37 * (v24[2] + 37 * (v24[1] + 37 * (*v24 + 37 * v27)))))));
            v27 = v26;
            v24 += 8;
            v52 = (__int64 *)v24;
            v25 -= 8LL;
            v57 = v25;
          }
          if ( v25 != 2 )
          {
            switch ( v25 )
            {
              case 1LL:
                goto LABEL_27;
              case 3LL:
                v46 = v55;
                goto LABEL_74;
              case 4LL:
                goto LABEL_73;
              case 5LL:
                goto LABEL_72;
              case 6LL:
                goto LABEL_71;
              case 7LL:
                v32 = *v24++ + 37 * v58;
                v52 = (__int64 *)v24;
LABEL_71:
                v31 = *v24++ + 37 * v32;
                v52 = (__int64 *)v24;
LABEL_72:
                v30 = *v24++ + 37 * v31;
                v52 = (__int64 *)v24;
LABEL_73:
                v46 = *v24++ + 37 * v30;
                v52 = (__int64 *)v24;
LABEL_74:
                v28 = *v24++ + 37 * v46;
                v52 = (__int64 *)v24;
                break;
              default:
                goto LABEL_28;
            }
          }
          v29 = *v24++ + 37 * v28;
          v52 = (__int64 *)v24;
LABEL_27:
          v26 = *v24 + 37 * v29;
          v52 = (__int64 *)(v24 + 1);
LABEL_28:
          v55 = v26;
          v20 = *((_QWORD *)&RtlpEnvironmentHashTable + 1) + 8LL * ((unsigned int)v26 & (v23 - 1));
          v6 = NameLength;
          v16 = Name;
LABEL_29:
          while ( 1 )
          {
            v20 = *(_QWORD *)v20;
            if ( (v20 & 1) != 0 )
              break;
            if ( (v18 & v22) == (v22 & *(_QWORD *)(v20 + 8)) )
              goto LABEL_33;
          }
          v20 = 0LL;
        }
        else
        {
          v20 = 0LL;
        }
LABEL_33:
        if ( !v20 )
        {
          PseudoEnvironmentVariable = -1073741568;
          v40 = ReturnLength;
          v41 = (int)Value;
          goto LABEL_41;
        }
        v33 = *(_QWORD *)(v20 + 32);
        v34 = *(unsigned __int16 **)(v20 + 16);
        v59 = v34;
        v35 = (unsigned __int16 *)v16;
        v60 = v16;
        v36 = v6;
        if ( v33 <= v6 )
          v36 = v33;
        v37 = &v34[v36];
        while ( v34 < v37 )
        {
          v38 = *v34;
          v39 = *v35;
          if ( (_WORD)v38 != (_WORD)v39 )
          {
            if ( (unsigned int)v38 >= 0x61 )
            {
              if ( (unsigned int)v38 > 0x7A )
              {
                if ( qword_1801C5038 && (unsigned __int16)v38 >= 0xC0u )
                  LOWORD(v38) = *(_WORD *)(qword_1801C5038
                                         + 2
                                         * ((v38 & 0xF)
                                          + *(unsigned __int16 *)(qword_1801C5038
                                                                + 2LL
                                                                * (((unsigned __int8)v38 >> 4)
                                                                 + (unsigned int)*(unsigned __int16 *)(qword_1801C5038 + 2 * (v38 >> 8))))))
                              + v38;
              }
              else
              {
                LOWORD(v38) = v38 - 32;
              }
            }
            if ( (unsigned int)v39 >= 0x61 )
            {
              if ( (unsigned int)v39 > 0x7A )
              {
                if ( qword_1801C5038 && (unsigned __int16)v39 >= 0xC0u )
                  LOWORD(v39) = *(_WORD *)(qword_1801C5038
                                         + 2
                                         * ((v39 & 0xF)
                                          + *(unsigned __int16 *)(qword_1801C5038
                                                                + 2LL
                                                                * (((unsigned __int8)v39 >> 4)
                                                                 + (unsigned int)*(unsigned __int16 *)(qword_1801C5038 + 2 * (v39 >> 8))))))
                              + v39;
              }
              else
              {
                LOWORD(v39) = v39 - 32;
              }
            }
            if ( (_WORD)v38 != (_WORD)v39 )
            {
              v42 = (unsigned __int16)v38 - (unsigned __int16)v39;
              goto LABEL_52;
            }
          }
          v59 = ++v34;
          v60 = ++v35;
        }
        v42 = v33 - v6;
LABEL_52:
        v16 = Name;
        if ( !v42 )
          break;
      }
      v43 = *(_QWORD *)(v20 + 40);
      v44 = *(const void **)(v20 + 24);
      v41 = (int)Value;
      if ( Value )
      {
        if ( v43 < ValueLength )
        {
          v40 = ReturnLength;
          *ReturnLength = v43;
          v45 = v43;
          memmove(Value, v44, 2 * v43);
          Value[v45] = 0;
          PseudoEnvironmentVariable = 0;
LABEL_41:
          if ( PseudoEnvironmentVariable == -1073741568 )
          {
            if ( (_BYTE)xmmword_1801CA890 )
              PseudoEnvironmentVariable = -1073741568;
            else
              PseudoEnvironmentVariable = RtlpScanEnvironment(
                                            (_DWORD)v63,
                                            (_DWORD)v16,
                                            v6,
                                            v41,
                                            ValueLength,
                                            (__int64)v40,
                                            1);
          }
          RtlLeaveCriticalSection(&::FastPebLock);
          return PseudoEnvironmentVariable;
        }
        if ( Value && ValueLength )
          *Value = 0;
      }
      v40 = ReturnLength;
      *ReturnLength = v43 + 1;
      PseudoEnvironmentVariable = -1073741789;
      goto LABEL_41;
    }
    if ( *(_WORD *)Environment )
    {
      ProcessEnvironmentBlock = v9->ProcessEnvironmentBlock;
      if ( ProcessEnvironmentBlock->ProcessParameters->Environment != Environment )
        return RtlpScanEnvironment((_DWORD)Environment, (_DWORD)v7, v6, (_DWORD)Value, ValueLength, (__int64)v15, v10);
      FastPebLock = ProcessEnvironmentBlock->FastPebLock;
      if ( FastPebLock )
      {
        if ( FastPebLock->OwningThread != NtCurrentTeb()->ClientId.UniqueThread )
          return RtlpScanEnvironment((_DWORD)Environment, (_DWORD)v7, v6, (_DWORD)Value, ValueLength, (__int64)v15, v10);
      }
      PseudoEnvironmentVariable = RtlpQueryEnvironmentHashTable(
                                    (unsigned int)&RtlpEnvironmentHashTable,
                                    (_DWORD)v7,
                                    v6,
                                    (_DWORD)Value,
                                    ValueLength,
                                    (__int64)v15);
      if ( PseudoEnvironmentVariable != -1073741568 )
        return PseudoEnvironmentVariable;
      if ( !(_BYTE)xmmword_1801CA890 )
      {
        v10 = 1;
        LODWORD(v7) = (_DWORD)Name;
        return RtlpScanEnvironment((_DWORD)Environment, (_DWORD)v7, v6, (_DWORD)Value, ValueLength, (__int64)v15, v10);
      }
    }
    return -1073741568;
  }
  return -1073741568;
}

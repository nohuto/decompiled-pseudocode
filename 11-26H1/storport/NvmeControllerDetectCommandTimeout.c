/*
 * XREFs of NvmeControllerDetectCommandTimeout @ 0x14012B43C
 * Callers:
 *     NvmeControllerCommandTimeoutDetectThread @ 0x14012B190 (NvmeControllerCommandTimeoutDetectThread.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     RaidCaptureLivedumpInternal @ 0x140093748 (RaidCaptureLivedumpInternal.c)
 *     IsOutstandingRequestInNvmeControllerQueue @ 0x1400D1B5C (IsOutstandingRequestInNvmeControllerQueue.c)
 *     NvmeDbgLogCriticalEvent @ 0x1400FB97C (NvmeDbgLogCriticalEvent.c)
 *     NvmeControllerRecordCommandTimeout @ 0x14012BB54 (NvmeControllerRecordCommandTimeout.c)
 */

__int64 __fastcall NvmeControllerDetectCommandTimeout(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v3; // r15d
  char v4; // si
  int v5; // ecx
  signed __int64 UnbiasedInterruptTime; // rdi
  __int64 v7; // r14
  __int64 v8; // rdx
  unsigned int v9; // r13d
  __int64 v10; // r12
  bool v11; // zf
  unsigned int i; // edx
  unsigned __int64 v13; // r15
  char v14; // al
  signed __int64 v15; // rbx
  int v16; // r8d
  unsigned int v17; // ecx
  unsigned __int64 v18; // rsi
  _DWORD *v19; // rax
  __int64 v20; // rdx
  unsigned int j; // ebx
  __int64 v22; // r14
  unsigned int v23; // r15d
  unsigned int k; // edx
  unsigned __int64 v25; // r15
  char v26; // al
  int v27; // ecx
  unsigned int v28; // r13d
  _DWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  signed __int32 v35[8]; // [rsp+0h] [rbp-108h] BYREF
  wchar_t *v36; // [rsp+30h] [rbp-D8h]
  __int64 v37; // [rsp+38h] [rbp-D0h]
  wchar_t *v38; // [rsp+40h] [rbp-C8h]
  __int64 v39; // [rsp+48h] [rbp-C0h]
  wchar_t *v40; // [rsp+50h] [rbp-B8h]
  __int64 v41; // [rsp+58h] [rbp-B0h]
  wchar_t *v42; // [rsp+60h] [rbp-A8h]
  __int64 v43; // [rsp+68h] [rbp-A0h]
  wchar_t *v44; // [rsp+70h] [rbp-98h]
  __int64 v45; // [rsp+78h] [rbp-90h]
  wchar_t *v46; // [rsp+80h] [rbp-88h]
  __int64 v47; // [rsp+88h] [rbp-80h]
  wchar_t *v48; // [rsp+90h] [rbp-78h]
  __int64 v49; // [rsp+98h] [rbp-70h]
  unsigned int v50; // [rsp+A0h] [rbp-68h]
  unsigned int v51; // [rsp+A4h] [rbp-64h]
  int v52; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v53; // [rsp+B0h] [rbp-58h]
  __int64 v54; // [rsp+B8h] [rbp-50h]
  unsigned int v55; // [rsp+118h] [rbp+10h]
  unsigned int v56; // [rsp+120h] [rbp+18h]
  unsigned int v57; // [rsp+128h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 128);
  v3 = 0;
  v50 = 0;
  v4 = 0;
  v5 = *(_DWORD *)(v1 + 376);
  LODWORD(v1) = *(_DWORD *)(v1 + 1108);
  v52 = v5 & 2;
  v55 = v1;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  if ( *(_BYTE *)(a1 + 1228) )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 712);
  if ( !v7 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 712);
  v9 = *(_DWORD *)(v7 + 124);
  v10 = (*(_DWORD *)(*(_QWORD *)(a1 + 128) + 1108LL) & 1) == 0 ? 0x989680 : 0;
  v11 = (*(_BYTE *)(*(_QWORD *)(v7 + 88) + 136LL) & 2) == 0;
  v54 = v10;
  if ( v11 )
    --v9;
  if ( IsOutstandingRequestInNvmeControllerQueue(a1, v8) )
  {
    for ( i = 0; i < v9; ++i )
    {
      v13 = (unsigned __int64)i << 7;
      if ( (*(_BYTE *)(*(_QWORD *)(v7 + 32) + v13 + 60) & 1) != 0
        && (*(_BYTE *)(v13 + *(_QWORD *)(v7 + 32) + 60) & 0x10) == 0
        && (*(_BYTE *)(v13 + *(_QWORD *)(v7 + 32) + 60) & 0x40) == 0
        && (*(_BYTE *)(v13 + *(_QWORD *)(v7 + 32) + 61) & 2) == 0 )
      {
        v14 = v4;
        if ( !v4 )
          v14 = 1;
        v4 = v14;
        _InterlockedOr(v35, 0);
        v15 = *(_QWORD *)(v13 + *(_QWORD *)(v7 + 32) + 64);
        if ( v15 < UnbiasedInterruptTime )
        {
          v16 = *(unsigned __int16 *)(v13 + *(_QWORD *)(v7 + 32) + 58);
          v17 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 1108LL);
          if ( v16 == v17 )
          {
            v17 = v55;
          }
          else
          {
            if ( (_WORD)v16 )
              v17 = *(unsigned __int16 *)(v13 + *(_QWORD *)(v7 + 32) + 58);
            v10 = (v17 & 1) == 0 ? 0x989680 : 0;
          }
          v18 = 10000000LL * v17;
          v53 = v18;
          if ( v10 + UnbiasedInterruptTime - v15 >= v18 )
          {
            v19 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 240LL);
            ++*v19;
            if ( (*(_BYTE *)(a1 + 1360) & 0x20) != 0 )
            {
              v20 = *(_QWORD *)(v7 + 32);
              v18 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 16LL * *(unsigned __int16 *)(v13 + v20 + 56));
              NvmeDbgLogCriticalEvent(
                a1,
                3,
                ((unsigned __int64)*(unsigned int *)v18 << 32) | *(unsigned int *)(v18 + 4),
                *(unsigned int *)(v18 + 44) | ((unsigned __int64)*(unsigned int *)(v18 + 40) << 32),
                *(_QWORD *)(v13 + v20 + 24),
                *(unsigned __int8 *)(v13 + v20 + 60));
              NvmeControllerRecordCommandTimeout(a1, v18, 0LL, v13 + *(_QWORD *)(v7 + 32));
              LOBYTE(v18) = v53;
            }
            if ( (*(_BYTE *)(a1 + 136) & 2) != 0 && (StorLivedumpCodesEnabled & 1) != 0 )
              RaidCaptureLivedumpInternal(1, v7, v13 + *(_QWORD *)(v7 + 32));
            goto LABEL_62;
          }
          v4 = v14;
          v10 = v54;
        }
      }
    }
    v3 = 0;
  }
  if ( !*(_QWORD *)(a1 + 728) )
  {
LABEL_64:
    if ( !v4 )
    {
      ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 232LL);
      v33 = *(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL);
      if ( *(_DWORD *)(v33 + 232) >= *(_DWORD *)(v33 + 196) )
      {
        v3 = 1;
        *(_DWORD *)(v33 + 232) = 0;
      }
    }
    return v3;
  }
  for ( j = 0; ; ++j )
  {
    v56 = j;
    if ( j >= *(unsigned __int16 *)(a1 + 22) )
    {
      v3 = v50;
      goto LABEL_64;
    }
    v22 = *(_QWORD *)(a1 + 728) + 192LL * j;
    v23 = *(_DWORD *)(v22 + 124);
    if ( (*(_BYTE *)(*(_QWORD *)(v22 + 88) + 136LL) & 2) == 0 )
      --v23;
    v51 = v23;
    if ( IsOutstandingRequestInNvmeControllerQueue(a1, v22) )
      break;
LABEL_53:
    ;
  }
  for ( k = 0; ; ++k )
  {
    v57 = k;
    if ( k >= v23 )
    {
      j = v56;
      goto LABEL_53;
    }
    v25 = (unsigned __int64)k << 7;
    if ( (*(_BYTE *)(*(_QWORD *)(v22 + 32) + v25 + 60) & 1) != 0
      && (*(_BYTE *)(v25 + *(_QWORD *)(v22 + 32) + 60) & 0x10) == 0
      && (*(_BYTE *)(v25 + *(_QWORD *)(v22 + 32) + 60) & 0x40) == 0
      && (*(_BYTE *)(v25 + *(_QWORD *)(v22 + 32) + 61) & 2) == 0 )
    {
      v26 = v4;
      if ( !v4 )
        v26 = 1;
      v4 = v26;
      _InterlockedOr(v35, 0);
      v15 = *(_QWORD *)(v25 + *(_QWORD *)(v22 + 32) + 64);
      if ( v15 < UnbiasedInterruptTime )
        break;
    }
LABEL_51:
    v23 = v51;
  }
  v27 = *(unsigned __int16 *)(v25 + *(_QWORD *)(v22 + 32) + 58);
  v28 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 1108LL);
  if ( v27 == v28 )
  {
    v28 = v55;
  }
  else
  {
    if ( (_WORD)v27 )
      v28 = *(unsigned __int16 *)(v25 + *(_QWORD *)(v22 + 32) + 58);
    v10 = (v28 & 1) == 0 ? 0x989680 : 0;
  }
  v18 = 10000000LL * v28;
  v53 = v18;
  if ( v10 + UnbiasedInterruptTime - v15 < v18 )
  {
    v4 = v26;
    v10 = v54;
    goto LABEL_51;
  }
  v29 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 240LL);
  ++*v29;
  if ( (*(_BYTE *)(a1 + 1360) & 0x20) != 0 )
  {
    v30 = *(_QWORD *)(v22 + 32);
    v18 = *(_QWORD *)(*(_QWORD *)(v22 + 24) + 16LL * *(unsigned __int16 *)(v25 + v30 + 56));
    NvmeDbgLogCriticalEvent(
      a1,
      4,
      ((unsigned __int64)*(unsigned int *)v18 << 32) | *(unsigned int *)(v18 + 4),
      *(unsigned int *)(v18 + 44) | ((unsigned __int64)*(unsigned int *)(v18 + 40) << 32),
      *(_QWORD *)(v25 + v30 + 24),
      ((unsigned __int64)*(unsigned __int8 *)(v25 + v30 + 60) << 16) | *(unsigned __int16 *)(v22 + 136));
    NvmeControllerRecordCommandTimeout(a1, v18, *(unsigned __int16 *)(v22 + 136), v25 + *(_QWORD *)(v22 + 32));
    k = v57;
    LOBYTE(v18) = v53;
  }
  if ( v52 || (*(_BYTE *)(a1 + 136) & 2) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 136) & 2) != 0 && (StorLivedumpCodesEnabled & 1) != 0 )
      RaidCaptureLivedumpInternal(1, v22, *(_QWORD *)(v22 + 32) + ((unsigned __int64)k << 7));
    LOBYTE(v18) = (_BYTE)v28 << 7;
  }
LABEL_62:
  v31 = *(_QWORD *)(a1 + 1288);
  v49 = 0LL;
  v3 = 3;
  v32 = *(_QWORD *)(v31 + 40);
  v48 = (wchar_t *)&word_140152E7C;
  LOBYTE(v47) = v18;
  v46 = L"TimeoutIn100NS";
  LOBYTE(v45) = v10;
  v44 = L"CommandTimeoutBias";
  LOBYTE(v43) = v15;
  v42 = L"CmdTimestamp";
  LOBYTE(v41) = UnbiasedInterruptTime;
  v40 = L"CurrentTimestamp";
  LOBYTE(v39) = 0;
  v38 = L"NamespaceCountToReset";
  LOBYTE(v37) = 0;
  v36 = L"ResetNamespace";
  *(_DWORD *)(v32 + 232) = 0;
  StorEtwNvmeControllerEvent(
    a1,
    1,
    3LL,
    (__int64)L"Controller command timeout",
    L"ResetController",
    1,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  return v3;
}

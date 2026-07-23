/*
 * XREFs of PopConfigureHeteroPolicies @ 0x140AA9D88
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140B76758 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopConfigureHeteroThresholds @ 0x140AAA414 (PopConfigureHeteroThresholds.c)
 *     PpmHeteroComputeBias @ 0x140AAA6C8 (PpmHeteroComputeBias.c)
 *     KeConfigureHeteroPolicy @ 0x140AAA6F0 (KeConfigureHeteroPolicy.c)
 *     PopCapturePlatformRole @ 0x140B100A0 (PopCapturePlatformRole.c)
 */

char __fastcall PopConfigureHeteroPolicies(int a1, char a2, char a3)
{
  __int64 v3; // rbx
  __int64 v6; // rcx
  unsigned int v7; // edx
  __int64 v8; // r12
  int v9; // eax
  __m128i si128; // xmm0
  int v11; // eax
  unsigned int v12; // eax
  int *v13; // rcx
  __int64 v14; // rdi
  int v15; // edx
  __int64 v16; // rdi
  _BYTE *v17; // r10
  unsigned int v18; // r8d
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 v21; // r11
  __int64 WriteTransferCount; // rdx
  char *v23; // rax
  int v24; // eax
  __m128i v25; // xmm0
  wchar_t **v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int32 v31; // edx
  __int64 v32; // rdx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  __m128i *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // edi
  int v40; // eax
  __int64 v41; // r8
  int v42; // eax
  unsigned int v43; // eax
  __int64 v44; // rcx
  int v45; // esi
  char v46; // di
  _DWORD *v47; // rsi
  __int64 v48; // r14
  __m128i *v49; // r10
  unsigned __int8 v50; // r11
  __int64 v51; // rdx
  __int32 v52; // eax
  char v53; // r11
  char v54; // r9
  int *v55; // rdi
  __int64 i; // rcx
  char result; // al
  int v58; // ecx
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD ResultLength[4]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD ObjectAttributes[7]; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING ValueName; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v67; // [rsp+C8h] [rbp-40h] BYREF
  __m128i v68; // [rsp+CCh] [rbp-3Ch] BYREF
  __m128i v69; // [rsp+DCh] [rbp-2Ch]
  __m128i v70; // [rsp+ECh] [rbp-1Ch]
  __int64 v71; // [rsp+FCh] [rbp-Ch]
  int v72; // [rsp+104h] [rbp-4h]
  int v73; // [rsp+108h] [rbp+0h]
  int v74; // [rsp+10Ch] [rbp+4h]
  int v75; // [rsp+110h] [rbp+8h]
  __int128 KeyValueInformation; // [rsp+138h] [rbp+30h] BYREF

  v3 = 0LL;
  KeyHandle = 0LL;
  LODWORD(ResultLength[0]) = 0;
  Handle = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes[1], 0, 44);
  KeyValueInformation = 0LL;
  ValueName = 0LL;
  *(_OWORD *)&ResultLength[1] = 0LL;
  memset_0(&v67, 0, 0x68uLL);
  v7 = 5;
  v67 = 5;
  v8 = 7LL;
  if ( a1 == 3 )
  {
    v72 = 8;
    v9 = PopCapturePlatformRole(v6, 5LL, 3LL);
    if ( v9 == 2 || v9 == 8 )
      v72 = 10;
    v73 = 5200;
    v74 = 51;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v68 = si128;
    v68.m128i_i32[3] = 2;
    v68.m128i_i32[1] = 2;
    v69 = si128;
    v70 = si128;
    v71 = si128.m128i_i64[0];
  }
  else
  {
    v73 = 100;
    v72 = 10;
    v11 = 3;
    if ( ((a1 - 1) & 0xFFFFFFFA) == 0 )
      v11 = 19;
    v74 = v11;
    if ( a1 == 1 || a1 == 2 || (unsigned int)(a1 - 5) < 2 )
    {
      v12 = 0;
      v13 = (int *)&v68;
      do
      {
        v14 = 2LL;
        do
        {
          if ( v12 == 4 || v12 <= 1 )
            v15 = 2;
          else
            v15 = 3;
          *v13++ = v15;
          --v14;
        }
        while ( v14 );
        ++v12;
      }
      while ( v12 < 7 );
      v7 = 5;
    }
    else
    {
      v68 = 0LL;
      v71 = 0LL;
      v69 = 0LL;
      v70 = 0LL;
    }
  }
  v16 = ResultLength[1];
  v17 = &unk_140E0B59C;
  v18 = v7;
  v19 = v7;
  v20 = 7LL;
  do
  {
    v21 = *((unsigned int *)v17 - 1);
    if ( !*v17 )
    {
      v18 = v7;
      v19 = v7;
    }
    switch ( (_DWORD)v21 )
    {
      case 0:
        goto LABEL_36;
      case 1:
        WriteTransferCount = *(_QWORD *)&PopDirectedDripsDiagLock.ThreadTimerDelay;
        break;
      case 2:
        WriteTransferCount = PopDirectedDripsDiagLock.WriteTransferCount;
        break;
      case 3:
        WriteTransferCount = PopDirectedDripsDiagLock.OtherTransferCount;
        if ( PopDirectedDripsDiagLock.OtherTransferCount )
        {
LABEL_33:
          v23 = (char *)(WriteTransferCount + 712LL * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) + 40);
          v16 = *(_QWORD *)v23;
          goto LABEL_37;
        }
LABEL_36:
        v23 = (char *)PpmCurrentProfile + 712 * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) + 40;
        v16 |= 0x1800000000000000uLL;
        goto LABEL_37;
      case 4:
        goto LABEL_36;
      case 5:
        WriteTransferCount = (__int64)PopDirectedDripsDiagLock.QueuedScb;
        break;
      case 6:
        WriteTransferCount = PopDirectedDripsDiagLock.ReadTransferCount;
        break;
      default:
        goto LABEL_36;
    }
    if ( WriteTransferCount )
      goto LABEL_33;
    v23 = 0LL;
    v16 = 0LL;
LABEL_37:
    if ( (v16 & 0x1000000000000000LL) != 0 )
      v18 = *((_DWORD *)v23 + 164);
    if ( (v16 & 0x800000000000000LL) != 0 )
      v19 = *((unsigned int *)v23 + 165);
    v7 = 5;
    if ( v18 != 5 )
      v68.m128i_i32[2 * v21] = v18;
    if ( (_DWORD)v19 != 5 )
      v68.m128i_i32[2 * v21 + 1] = v19;
    v17 += 8;
    --v20;
  }
  while ( v20 );
  v24 = v73;
  if ( *((_DWORD *)PpmCurrentProfile + 178 * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) + 173) )
    v24 = *((_DWORD *)PpmCurrentProfile + 178 * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) + 173);
  v73 = v24;
  if ( a2 )
  {
    v25 = _mm_load_si128((const __m128i *)&_xmm);
    qword_140F0D2D4 = v25.m128i_i64[0];
    xmmword_140F0D2A4 = (__int128)v25;
    PopHeteroLegacyOverride = 5;
    xmmword_140F0D2B4 = (__int128)v25;
    qword_140F0D2DC = 0LL;
    xmmword_140F0D2C4 = (__int128)v25;
    dword_140F0D2E4 = -1;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
    LODWORD(ObjectAttributes[1]) = 48;
    ObjectAttributes[3] = &DestinationString;
    ObjectAttributes[2] = 0LL;
    LODWORD(ObjectAttributes[4]) = 576;
    *(_OWORD *)&ObjectAttributes[5] = 0LL;
    if ( ZwOpenKey(&KeyHandle, 8u, (POBJECT_ATTRIBUTES)&ObjectAttributes[1]) >= 0 )
    {
      v26 = &off_140BE1DD8;
      ObjectAttributes[2] = KeyHandle;
      v27 = 7LL;
      do
      {
        RtlInitUnicodeString(&DestinationString, *(v26 - 1));
        if ( ZwOpenKey(&Handle, 1u, (POBJECT_ATTRIBUTES)&ObjectAttributes[1]) >= 0 )
        {
          RtlInitUnicodeString(&ValueName, *v26);
          if ( ZwQueryValueKey(
                 Handle,
                 &ValueName,
                 KeyValuePartialInformationAlign64,
                 &KeyValueInformation,
                 0x10u,
                 (PULONG)ResultLength) >= 0
            && (_DWORD)KeyValueInformation == 4 )
          {
            *(int *)((char *)&PopHeteroLegacyOverride + *((unsigned int *)v26 + 2)) = DWORD2(KeyValueInformation);
          }
          if ( Handle )
          {
            ZwClose(Handle);
            Handle = 0LL;
          }
        }
        v26 += 3;
        --v27;
      }
      while ( v27 );
      if ( KeyHandle )
      {
        ZwClose(KeyHandle);
        KeyHandle = 0LL;
      }
    }
  }
  v28 = 0LL;
  v29 = 7LL;
  do
  {
    v30 = 2LL;
    do
    {
      v31 = *(_DWORD *)((char *)&xmmword_140F0D2A4 + v28 * 4);
      if ( v31 != 5 )
        v68.m128i_i32[v28] = v31;
      ++v28;
      --v30;
    }
    while ( v30 );
    --v29;
  }
  while ( v29 );
  v32 = v67;
  if ( PopHeteroLegacyOverride != 5 )
    v32 = (unsigned int)PopHeteroLegacyOverride;
  v33 = v72;
  if ( (_DWORD)qword_140F0D2DC )
    v33 = qword_140F0D2DC;
  v72 = v33;
  v34 = v73;
  if ( HIDWORD(qword_140F0D2DC) )
    v34 = HIDWORD(qword_140F0D2DC);
  v67 = v32;
  v73 = v34;
  v35 = v74;
  if ( dword_140F0D2E4 != -1 )
    v35 = dword_140F0D2E4;
  v74 = v35;
  if ( PpmPerfBootHeteroPolicyOverrideEnabled )
  {
    v36 = &v68;
    v37 = 7LL;
    do
    {
      v38 = 2LL;
      do
      {
        if ( v36->m128i_i32[0] == 3 )
          v36->m128i_i32[0] = 4;
        v36 = (__m128i *)((char *)v36 + 4);
        --v38;
      }
      while ( v38 );
      --v37;
    }
    while ( v37 );
    v32 = v67;
  }
  v39 = PpmPerfQosTransitionHysteresisOverride;
  v40 = PpmPerfQosTransitionHysteresisOverride;
  v41 = (unsigned int)PpmPerfQosTransitionHysteresis;
  if ( PpmPerfQosTransitionHysteresisOverride == -1 )
    v40 = PpmPerfQosTransitionHysteresis;
  if ( v40 )
  {
    v42 = KeMinimumIncrement;
    if ( 10 * PpmPerfQosTransitionHysteresis > (unsigned int)KeMinimumIncrement )
      v42 = 10 * PpmPerfQosTransitionHysteresis;
    v75 = v42;
  }
  v43 = PpmPerfQosTransitionHysteresisOverride;
  v44 = 500LL;
  if ( PpmPerfQosTransitionHysteresisOverride == -1 )
    v43 = PpmPerfQosTransitionHysteresis;
  if ( v43 <= 0x1F4 )
  {
    v39 = 500;
  }
  else if ( PpmPerfQosTransitionHysteresisOverride == -1 )
  {
    v39 = PpmPerfQosTransitionHysteresis;
  }
  PpmPerfQosIdleExpirationTimeout = (unsigned int)(10 * v39);
  if ( ((a1 - 1) & 0xFFFFFFFA) != 0 )
  {
    v45 = 1;
    *(__m128i *)&ResultLength[1] = _mm_load_si128((const __m128i *)&_xmm);
    ResultLength[3] = ResultLength[1];
    LODWORD(ObjectAttributes[0]) = _mm_cvtsi128_si32(*(__m128i *)&ResultLength[1]);
    goto LABEL_123;
  }
  v46 = 0;
  LOBYTE(v41) = 0;
  LOBYTE(v19) = 0;
  if ( !(_DWORD)v32 )
  {
    v46 = 1;
    LOBYTE(v41) = 1;
    goto LABEL_118;
  }
  v32 = (unsigned int)(v32 - 2);
  if ( (_DWORD)v32 )
  {
    v32 = (unsigned int)(v32 - 2);
    if ( (_DWORD)v32 )
    {
      if ( (_DWORD)v32 == 1 )
      {
        v47 = &ResultLength[1];
        v48 = 7LL;
        v49 = &v68;
        do
        {
          LOBYTE(v44) = 0;
          v50 = 0;
          v51 = 2LL;
          do
          {
            v52 = v49->m128i_i32[0];
            if ( v49->m128i_i32[0] )
            {
              if ( v52 == 2 )
              {
                v50 = 1;
              }
              else if ( v52 == 4 )
              {
                LOBYTE(v44) = 1;
              }
            }
            else
            {
              LOBYTE(v44) = 1;
              v50 = 1;
            }
            v49 = (__m128i *)((char *)v49 + 4);
            --v51;
          }
          while ( v51 );
          *v47 = PpmHeteroComputeBias(v44, v50, v41, v19);
          v46 |= v44;
          ++v47;
          LOBYTE(v41) = v53 | v41;
          --v48;
        }
        while ( v48 );
      }
      goto LABEL_119;
    }
    v46 = 1;
LABEL_118:
    LOBYTE(v19) = 1;
  }
  else
  {
    LOBYTE(v41) = 1;
    LOBYTE(v19) = 1;
  }
LABEL_119:
  LOBYTE(v32) = v41;
  LOBYTE(v44) = v46;
  v45 = PpmHeteroComputeBias(v44, v32, v41, v19);
  if ( v54 )
  {
    v55 = (int *)&ResultLength[1];
    for ( i = 7LL; i; --i )
      *v55++ = v45;
  }
LABEL_123:
  LOBYTE(v32) = a3;
  PopConfigureHeteroThresholds(&v67, v32);
  result = KeConfigureHeteroPolicy(&v67);
  if ( PpmHeteroParkBias != v45 )
  {
    PpmHeteroParkBias = v45;
    result = 1;
  }
  do
  {
    v58 = *(_DWORD *)((char *)&ResultLength[1] + v3);
    if ( *(_DWORD *)((char *)stru_140FC11F0.Padding + v3) != v58 )
    {
      *(_DWORD *)((char *)stru_140FC11F0.Padding + v3) = v58;
      result = 1;
    }
    v3 += 4LL;
    --v8;
  }
  while ( v8 );
  return result;
}

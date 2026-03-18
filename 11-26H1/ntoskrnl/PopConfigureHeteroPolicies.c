/*
 * XREFs of PopConfigureHeteroPolicies @ 0x140A9E35C
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140A9DA10 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407236D0 (ZwQueryValueKey.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopConfigureHeteroThresholds @ 0x140A9EEA8 (PopConfigureHeteroThresholds.c)
 *     PpmHeteroComputeBias @ 0x140A9F15C (PpmHeteroComputeBias.c)
 *     KeConfigureHeteroPolicy @ 0x140A9F184 (KeConfigureHeteroPolicy.c)
 *     PopCapturePlatformRole @ 0x140B0E868 (PopCapturePlatformRole.c)
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
  __int64 v22; // rdx
  __int64 *v23; // rax
  int v24; // eax
  wchar_t **v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int32 v30; // edx
  __int64 Teb_low; // rdx
  int Blink_high; // ecx
  int Dpc; // ecx
  int Dpc_high; // ecx
  __m128i *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // edi
  int v39; // eax
  __int64 v40; // r8
  int v41; // eax
  unsigned int v42; // eax
  __int64 v43; // rcx
  int v44; // esi
  char v45; // di
  _DWORD *v46; // rsi
  __int64 v47; // r14
  __m128i *v48; // r10
  unsigned __int8 v49; // r11
  __int64 v50; // rdx
  __int32 v51; // eax
  char v52; // r11
  char v53; // r9
  int *v54; // rdi
  __int64 i; // rcx
  char result; // al
  int v57; // ecx
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD ResultLength[4]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD ObjectAttributes[7]; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING ValueName; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v66; // [rsp+C8h] [rbp-40h] BYREF
  __m128i v67; // [rsp+CCh] [rbp-3Ch] BYREF
  __m128i v68; // [rsp+DCh] [rbp-2Ch]
  __m128i v69; // [rsp+ECh] [rbp-1Ch]
  __int64 v70; // [rsp+FCh] [rbp-Ch]
  int v71; // [rsp+104h] [rbp-4h]
  int v72; // [rsp+108h] [rbp+0h]
  int v73; // [rsp+10Ch] [rbp+4h]
  int v74; // [rsp+110h] [rbp+8h]
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
  memset_0(&v66, 0, 0x68uLL);
  v7 = 5;
  v66 = 5;
  v8 = 7LL;
  if ( a1 == 3 )
  {
    v71 = 8;
    v9 = PopCapturePlatformRole(v6, 5LL, 3LL);
    if ( v9 == 2 || v9 == 8 )
      v71 = 10;
    v72 = 5200;
    v73 = 51;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v67 = si128;
    v67.m128i_i32[3] = 2;
    v67.m128i_i32[1] = 2;
    v68 = si128;
    v69 = si128;
    v70 = si128.m128i_i64[0];
  }
  else
  {
    v72 = 100;
    v71 = 10;
    v11 = 3;
    if ( ((a1 - 1) & 0xFFFFFFFA) == 0 )
      v11 = 19;
    v73 = v11;
    if ( a1 == 1 || a1 == 2 || (unsigned int)(a1 - 5) < 2 )
    {
      v12 = 0;
      v13 = (int *)&v67;
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
      v67 = 0LL;
      v70 = 0LL;
      v68 = 0LL;
      v69 = 0LL;
    }
  }
  v16 = ResultLength[1];
  v17 = &unk_140E0B47C;
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
        v22 = PpmEntryLevelPerfProfile;
        break;
      case 2:
        v22 = PpmBackgroundProfile;
        break;
      case 3:
        v22 = PpmMultimediaQosProfile;
        if ( PpmMultimediaQosProfile )
        {
LABEL_33:
          v23 = (__int64 *)(v22 + 712LL * dword_140F106CC + 40);
          v16 = *v23;
          goto LABEL_37;
        }
LABEL_36:
        v23 = &PpmCurrentProfile[89 * dword_140F106CC + 5];
        v16 |= 0x1800000000000000uLL;
        goto LABEL_37;
      case 4:
        goto LABEL_36;
      case 5:
        v22 = PpmEcoQosProfile;
        break;
      case 6:
        v22 = PpmUtilityQosProfile;
        break;
      default:
        goto LABEL_36;
    }
    if ( v22 )
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
      v67.m128i_i32[2 * v21] = v18;
    if ( (_DWORD)v19 != 5 )
      v67.m128i_i32[2 * v21 + 1] = v19;
    v17 += 8;
    --v20;
  }
  while ( v20 );
  v24 = v72;
  if ( HIDWORD(PpmCurrentProfile[89 * dword_140F106CC + 86]) )
    v24 = HIDWORD(PpmCurrentProfile[89 * dword_140F106CC + 86]);
  v72 = v24;
  if ( a2 )
  {
    *(__m128i *)((char *)&PopWeakChargerLock.Teb + 4) = _mm_load_si128((const __m128i *)&_xmm);
    LODWORD(PopWeakChargerLock.Teb) = 5;
    *(_OWORD *)&PopWeakChargerLock.Timer.Header.SignalState = *(_OWORD *)((char *)&PopWeakChargerLock.Teb + 4);
    *(_LIST_ENTRY *)((char *)&PopWeakChargerLock.Timer.TimerListEntry + 4) = (_LIST_ENTRY)*(unsigned __int64 *)((char *)&PopWeakChargerLock.Teb + 4);
    *(_OWORD *)((char *)&PopWeakChargerLock.Timer.Header.WaitListHead.Blink + 4) = *(_OWORD *)((char *)&PopWeakChargerLock.Teb
                                                                                             + 4);
    HIDWORD(PopWeakChargerLock.Timer.Dpc) = -1;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
    LODWORD(ObjectAttributes[1]) = 48;
    ObjectAttributes[3] = &DestinationString;
    ObjectAttributes[2] = 0LL;
    LODWORD(ObjectAttributes[4]) = 576;
    *(_OWORD *)&ObjectAttributes[5] = 0LL;
    if ( ZwOpenKey(&KeyHandle, 8u, (POBJECT_ATTRIBUTES)&ObjectAttributes[1]) >= 0 )
    {
      v25 = &off_140BDAF28;
      ObjectAttributes[2] = KeyHandle;
      v26 = 7LL;
      do
      {
        RtlInitUnicodeString(&DestinationString, *(v25 - 1));
        if ( ZwOpenKey(&Handle, 1u, (POBJECT_ATTRIBUTES)&ObjectAttributes[1]) >= 0 )
        {
          RtlInitUnicodeString(&ValueName, *v25);
          if ( ZwQueryValueKey(
                 Handle,
                 &ValueName,
                 KeyValuePartialInformationAlign64,
                 &KeyValueInformation,
                 0x10u,
                 (PULONG)ResultLength) >= 0
            && (_DWORD)KeyValueInformation == 4 )
          {
            *(_DWORD *)((char *)&PopWeakChargerLock.Teb + *((unsigned int *)v25 + 2)) = DWORD2(KeyValueInformation);
          }
          if ( Handle )
          {
            ZwClose(Handle);
            Handle = 0LL;
          }
        }
        v25 += 3;
        --v26;
      }
      while ( v26 );
      if ( KeyHandle )
      {
        ZwClose(KeyHandle);
        KeyHandle = 0LL;
      }
    }
  }
  v27 = 0LL;
  v28 = 7LL;
  do
  {
    v29 = 2LL;
    do
    {
      v30 = *(_DWORD *)((char *)&PopWeakChargerLock.Teb + v27 * 4 + 4);
      if ( v30 != 5 )
        v67.m128i_i32[v27] = v30;
      ++v27;
      --v29;
    }
    while ( v29 );
    --v28;
  }
  while ( v28 );
  Teb_low = v66;
  if ( LODWORD(PopWeakChargerLock.Teb) != 5 )
    Teb_low = LODWORD(PopWeakChargerLock.Teb);
  Blink_high = v71;
  if ( HIDWORD(PopWeakChargerLock.Timer.TimerListEntry.Blink) )
    Blink_high = HIDWORD(PopWeakChargerLock.Timer.TimerListEntry.Blink);
  v71 = Blink_high;
  Dpc = v72;
  if ( LODWORD(PopWeakChargerLock.Timer.Dpc) )
    Dpc = (int)PopWeakChargerLock.Timer.Dpc;
  v66 = Teb_low;
  v72 = Dpc;
  Dpc_high = v73;
  if ( HIDWORD(PopWeakChargerLock.Timer.Dpc) != -1 )
    Dpc_high = HIDWORD(PopWeakChargerLock.Timer.Dpc);
  v73 = Dpc_high;
  if ( PpmPerfBootHeteroPolicyOverrideEnabled )
  {
    v35 = &v67;
    v36 = 7LL;
    do
    {
      v37 = 2LL;
      do
      {
        if ( v35->m128i_i32[0] == 3 )
          v35->m128i_i32[0] = 4;
        v35 = (__m128i *)((char *)v35 + 4);
        --v37;
      }
      while ( v37 );
      --v36;
    }
    while ( v36 );
    Teb_low = v66;
  }
  v38 = PpmPerfQosTransitionHysteresisOverride;
  v39 = PpmPerfQosTransitionHysteresisOverride;
  v40 = (unsigned int)PpmPerfQosTransitionHysteresis;
  if ( PpmPerfQosTransitionHysteresisOverride == -1 )
    v39 = PpmPerfQosTransitionHysteresis;
  if ( v39 )
  {
    v41 = KeMinimumIncrement;
    if ( 10 * PpmPerfQosTransitionHysteresis > (unsigned int)KeMinimumIncrement )
      v41 = 10 * PpmPerfQosTransitionHysteresis;
    v74 = v41;
  }
  v42 = PpmPerfQosTransitionHysteresisOverride;
  v43 = 500LL;
  if ( PpmPerfQosTransitionHysteresisOverride == -1 )
    v42 = PpmPerfQosTransitionHysteresis;
  if ( v42 <= 0x1F4 )
  {
    v38 = 500;
  }
  else if ( PpmPerfQosTransitionHysteresisOverride == -1 )
  {
    v38 = PpmPerfQosTransitionHysteresis;
  }
  PpmPerfQosIdleExpirationTimeout = (unsigned int)(10 * v38);
  if ( ((a1 - 1) & 0xFFFFFFFA) != 0 )
  {
    v44 = 1;
    *(__m128i *)&ResultLength[1] = _mm_load_si128((const __m128i *)&_xmm);
    ResultLength[3] = ResultLength[1];
    LODWORD(ObjectAttributes[0]) = _mm_cvtsi128_si32(*(__m128i *)&ResultLength[1]);
    goto LABEL_123;
  }
  v45 = 0;
  LOBYTE(v40) = 0;
  LOBYTE(v19) = 0;
  if ( !(_DWORD)Teb_low )
  {
    v45 = 1;
    LOBYTE(v40) = 1;
    goto LABEL_118;
  }
  Teb_low = (unsigned int)(Teb_low - 2);
  if ( (_DWORD)Teb_low )
  {
    Teb_low = (unsigned int)(Teb_low - 2);
    if ( (_DWORD)Teb_low )
    {
      if ( (_DWORD)Teb_low == 1 )
      {
        v46 = &ResultLength[1];
        v47 = 7LL;
        v48 = &v67;
        do
        {
          LOBYTE(v43) = 0;
          v49 = 0;
          v50 = 2LL;
          do
          {
            v51 = v48->m128i_i32[0];
            if ( v48->m128i_i32[0] )
            {
              if ( v51 == 2 )
              {
                v49 = 1;
              }
              else if ( v51 == 4 )
              {
                LOBYTE(v43) = 1;
              }
            }
            else
            {
              LOBYTE(v43) = 1;
              v49 = 1;
            }
            v48 = (__m128i *)((char *)v48 + 4);
            --v50;
          }
          while ( v50 );
          *v46 = PpmHeteroComputeBias(v43, v49, v40, v19);
          v45 |= v43;
          ++v46;
          LOBYTE(v40) = v52 | v40;
          --v47;
        }
        while ( v47 );
      }
      goto LABEL_119;
    }
    v45 = 1;
LABEL_118:
    LOBYTE(v19) = 1;
  }
  else
  {
    LOBYTE(v40) = 1;
    LOBYTE(v19) = 1;
  }
LABEL_119:
  LOBYTE(Teb_low) = v40;
  LOBYTE(v43) = v45;
  v44 = PpmHeteroComputeBias(v43, Teb_low, v40, v19);
  if ( v53 )
  {
    v54 = (int *)&ResultLength[1];
    for ( i = 7LL; i; --i )
      *v54++ = v44;
  }
LABEL_123:
  LOBYTE(Teb_low) = a3;
  PopConfigureHeteroThresholds(&v66, Teb_low);
  result = KeConfigureHeteroPolicy(&v66);
  if ( PpmHeteroParkBias != v44 )
  {
    PpmHeteroParkBias = v44;
    result = 1;
  }
  do
  {
    v57 = *(_DWORD *)((char *)&ResultLength[1] + v3);
    if ( *(_DWORD *)((char *)stru_140FC01F0.Padding + v3) != v57 )
    {
      *(_DWORD *)((char *)stru_140FC01F0.Padding + v3) = v57;
      result = 1;
    }
    v3 += 4LL;
    --v8;
  }
  while ( v8 );
  return result;
}

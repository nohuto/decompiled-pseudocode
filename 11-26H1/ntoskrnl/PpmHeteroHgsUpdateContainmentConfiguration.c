/*
 * XREFs of PpmHeteroHgsUpdateContainmentConfiguration @ 0x14051704C
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x140517458 (PpmHeteroUpdateHgsConfiguration.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     PpmHeteroHgsCheckContainmentDecision @ 0x14025A1A8 (PpmHeteroHgsCheckContainmentDecision.c)
 *     RtlOrAffinityEx @ 0x14025C158 (RtlOrAffinityEx.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     PpmHeteroHgsGetContainmentType @ 0x1404F8888 (PpmHeteroHgsGetContainmentType.c)
 *     PpmEventHgsContainmentHwUpdate @ 0x1404FA31C (PpmEventHgsContainmentHwUpdate.c)
 *     PpmHeteroGetWpsHardwareCapabilities @ 0x140516E88 (PpmHeteroGetWpsHardwareCapabilities.c)
 *     Feature_ReinitWpsMinEfficiency__private_IsEnabledDeviceUsageNoInline @ 0x14060D314 (Feature_ReinitWpsMinEfficiency__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x14060D93C (PpmHeteroHgsDetectContainmentPresence.c)
 *     PpmHeteroHgsEvalAndRegisterContainmentGroups @ 0x14060E08C (PpmHeteroHgsEvalAndRegisterContainmentGroups.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PpmHeteroHgsUpdateContainmentConfiguration(char a1, _WORD *a2)
{
  _WORD *v2; // r15
  __int64 result; // rax
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v8; // edi
  unsigned __int8 v9; // al
  int v10; // r8d
  unsigned int v11; // r10d
  unsigned __int16 i; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int16 v15; // cx
  __int64 v16; // rdx
  unsigned __int16 v17; // cx
  char v18; // r8
  unsigned int v19; // r9d
  unsigned __int16 j; // dx
  __int64 v21; // r10
  unsigned __int8 v22; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v23; // [rsp+49h] [rbp-BFh] BYREF
  unsigned int v24; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v26; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-A0h]
  _WORD *v28; // [rsp+70h] [rbp-98h]
  struct _KAFFINITY_EX v29; // [rsp+78h] [rbp-90h] BYREF
  struct _KAFFINITY_EX v30; // [rsp+188h] [rbp+80h] BYREF

  v28 = a2;
  v2 = a2;
  v25 = 0LL;
  v22 = 0;
  v27 = 0LL;
  v24 = 0;
  v26 = 0LL;
  memset_0(&v30.8, 0, sizeof(v30.8));
  memset_0(&v29.8, 0, sizeof(v29.8));
  result = (unsigned int)PpmHeteroHgsContainmentState;
  v23 = 0;
  if ( (PpmHeteroHgsContainmentState & 4) != 0 || a1 )
  {
    *(_QWORD *)&v29.Count = 2097153LL;
    memset_0(&v29.8, 0, sizeof(v29.8));
    v5 = 0;
    if ( *(_DWORD *)(PpmHeteroCapability + 4) )
    {
LABEL_4:
      *(_QWORD *)&v30.Count = 2097153LL;
      v6 = -1;
      memset_0(&v30.8, 0, sizeof(v30.8));
      *((_QWORD *)&v26 + 1) = PpmCheckRegistered.Bitmap[0];
      LOWORD(v27) = 0;
      *(_QWORD *)&v26 = &PpmCheckRegistered;
      if ( (unsigned int)KeEnumerateNextProcessor(&v24, (unsigned __int16 **)&v26) )
      {
LABEL_19:
        *(_QWORD *)&v29.Count = 2097153LL;
        memset_0(&v29.8, 0, sizeof(v29.8));
        goto LABEL_20;
      }
      while ( 1 )
      {
        IsEnabledDeviceUsageNoInline = Feature_ReinitWpsMinEfficiency__private_IsEnabledDeviceUsageNoInline();
        v8 = v24;
        if ( IsEnabledDeviceUsageNoInline )
        {
          v9 = *(_BYTE *)(*(_QWORD *)(KeGetPrcb(v24) + 35424) + 4LL * v5 + 7);
          v22 = v9;
        }
        else
        {
          PpmHeteroGetWpsHardwareCapabilities(v24, v5, &v22, (_BYTE *)&v23 + 1, (_DWORD *)&v25 + 1, &v23, 0LL);
          v9 = v22;
        }
        if ( !v9 )
          goto LABEL_15;
        if ( v6 == -1 || v9 > v6 )
          break;
        if ( v9 == v6 )
          goto LABEL_14;
LABEL_15:
        if ( (unsigned int)KeEnumerateNextProcessor(&v24, (unsigned __int16 **)&v26) )
        {
          v2 = v28;
          if ( v6 == -1 )
            goto LABEL_19;
          RtlOrAffinityEx(&v29, &v30, (__int64)&v29);
          if ( ++v5 >= *(_DWORD *)(PpmHeteroCapability + 4) )
            goto LABEL_20;
          goto LABEL_4;
        }
      }
      v6 = v9;
      *(_QWORD *)&v30.Count = 2097153LL;
      memset_0(&v30.8, 0, sizeof(v30.8));
LABEL_14:
      KeAddProcessorAffinityEx(&v30.Count, v8);
      goto LABEL_15;
    }
LABEL_20:
    v10 = PpmHeteroHgsContainmentState & 4;
    if ( (PpmHeteroHgsContainmentState & 4) != 0 )
    {
      v11 = PpmParkNumNodes;
      for ( i = 0; i < v11; *(_BYTE *)(*(_QWORD *)(1264 * v14 + v13 + 1240) + 827LL) = 0 )
      {
        v13 = PpmParkNodes;
        v14 = i++;
        *(_BYTE *)(*(_QWORD *)(1264 * v14 + PpmParkNodes + 1240) + 808LL) = 0;
        *(_DWORD *)(*(_QWORD *)(1264 * v14 + v13 + 1240) + 812LL) = 2;
      }
    }
    v15 = 0;
    if ( v29.Count )
    {
      while ( !v29.Bitmap[v15] )
      {
        if ( ++v15 >= v29.Count )
          goto LABEL_34;
      }
      if ( v10 )
      {
        PpmHeteroHgsGetContainmentType(&v29.Count, (unsigned int *)&v25);
        PpmEventHgsContainmentHwUpdate((__int64)&v29, (__int64)&v25, 0);
      }
      else if ( a1 )
      {
        *((_QWORD *)&v26 + 1) = PpmCheckRegistered.Bitmap[0];
        LOWORD(v27) = 0;
        *(_QWORD *)&v26 = &PpmCheckRegistered;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v24, (unsigned __int16 **)&v26) )
          *(_BYTE *)(KeGetPrcb(v24) + 35448) = 3;
        LOBYTE(v16) = a1;
        PpmHeteroHgsDetectContainmentPresence(&v29, v16);
        PpmHeteroHgsEvalAndRegisterContainmentGroups();
      }
    }
LABEL_34:
    v17 = 0;
    if ( *v2 )
    {
      while ( !*(_QWORD *)&v2[4 * v17 + 4] )
      {
        if ( ++v17 >= *v2 )
          goto LABEL_37;
      }
      v18 = 1;
    }
    else
    {
LABEL_37:
      v18 = 0;
    }
    if ( (PpmHeteroHgsContainmentState & 4) != 0 )
    {
      v19 = PpmParkNumNodes;
      for ( j = 0; j < v19; ++j )
      {
        v21 = *(_QWORD *)(1264LL * j + PpmParkNodes + 1240);
        if ( v21 )
          *(_BYTE *)(v21 + 827) = v18;
      }
    }
    return PpmHeteroHgsCheckContainmentDecision();
  }
  return result;
}

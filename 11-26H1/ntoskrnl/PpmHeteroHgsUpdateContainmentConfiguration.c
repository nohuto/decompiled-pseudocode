/*
 * XREFs of PpmHeteroHgsUpdateContainmentConfiguration @ 0x14025D3AC
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x14025B888 (PpmHeteroUpdateHgsConfiguration.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140246720 (KeAddProcessorAffinityEx.c)
 *     PpmHeteroHgsCheckContainmentDecision @ 0x1402589C8 (PpmHeteroHgsCheckContainmentDecision.c)
 *     RtlOrAffinityEx @ 0x14025A978 (RtlOrAffinityEx.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14043BC70 (KeEnumerateNextProcessor.c)
 *     PpmHeteroGetWpsHardwareCapabilities @ 0x1404D8A58 (PpmHeteroGetWpsHardwareCapabilities.c)
 *     PpmHeteroHgsGetContainmentType @ 0x1404FF098 (PpmHeteroHgsGetContainmentType.c)
 *     PpmEventHgsContainmentHwUpdate @ 0x140500B2C (PpmEventHgsContainmentHwUpdate.c)
 *     PpmHeteroHgsUpdateContainmentGlobalHints @ 0x1405316B8 (PpmHeteroHgsUpdateContainmentGlobalHints.c)
 *     PpmHeteroHgsClearContainmentGlobalState @ 0x14060ABA8 (PpmHeteroHgsClearContainmentGlobalState.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x14060ACD4 (PpmHeteroHgsDetectContainmentPresence.c)
 *     PpmHeteroHgsEvalAndRegisterContainmentGroups @ 0x14060B3A0 (PpmHeteroHgsEvalAndRegisterContainmentGroups.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall PpmHeteroHgsUpdateContainmentConfiguration(char a1, _WORD *a2)
{
  _WORD *v2; // r12
  __int64 result; // rax
  char v5; // bl
  unsigned int v6; // esi
  unsigned int v7; // edi
  unsigned int v8; // r15d
  int v9; // r11d
  unsigned __int16 i; // cx
  __int64 v11; // rdx
  __int64 j; // rcx
  unsigned __int8 v13; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v14; // [rsp+39h] [rbp-CFh] BYREF
  unsigned int v15; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v16; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v17; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-B0h]
  _WORD *v19; // [rsp+60h] [rbp-A8h]
  struct _KAFFINITY_EX v20; // [rsp+68h] [rbp-A0h] BYREF
  struct _KAFFINITY_EX v21; // [rsp+178h] [rbp+70h] BYREF

  v19 = a2;
  v2 = a2;
  v16 = 0LL;
  v13 = 0;
  v18 = 0LL;
  v15 = 0;
  v17 = 0LL;
  memset_0(&v21.8, 0, sizeof(v21.8));
  memset_0(&v20.8, 0, sizeof(v20.8));
  result = (unsigned int)PpmHeteroHgsContainmentState;
  v14 = 0;
  if ( (PpmHeteroHgsContainmentState & 4) == 0 && !a1 )
    return result;
  *(_QWORD *)&v20.Count = 2097153LL;
  v5 = 1;
  memset_0(&v20.8, 0, sizeof(v20.8));
  v6 = 0;
LABEL_4:
  if ( v6 < *(_DWORD *)(PpmHeteroCapability + 4) )
  {
    *(_QWORD *)&v21.Count = 2097153LL;
    v7 = -1;
    memset_0(&v21.8, 0, sizeof(v21.8));
    *((_QWORD *)&v17 + 1) = qword_140E0B638[0];
    LOWORD(v18) = 0;
    *(_QWORD *)&v17 = PpmCheckRegistered;
    if ( (unsigned int)KeEnumerateNextProcessor(&v15, &v17) )
      goto LABEL_16;
    while ( 1 )
    {
      v8 = v15;
      PpmHeteroGetWpsHardwareCapabilities(
        v15,
        v6,
        (unsigned int)&v13,
        (unsigned int)&v14 + 1,
        (__int64)&v16 + 4,
        (__int64)&v14);
      if ( v13 )
      {
        if ( v7 == -1 || v13 > v7 )
        {
          v7 = v13;
          *(_QWORD *)&v21.Count = 2097153LL;
          memset_0(&v21.8, 0, sizeof(v21.8));
        }
        else if ( v13 != v7 )
        {
          goto LABEL_13;
        }
        KeAddProcessorAffinityEx(&v21.Count, v8);
      }
LABEL_13:
      if ( (unsigned int)KeEnumerateNextProcessor(&v15, &v17) )
      {
        v2 = v19;
        if ( v7 == -1 )
        {
LABEL_16:
          *(_QWORD *)&v20.Count = 2097153LL;
          memset_0(&v20.8, 0, sizeof(v20.8));
          break;
        }
        RtlOrAffinityEx(&v20, &v21, (__int64)&v20);
        ++v6;
        goto LABEL_4;
      }
    }
  }
  v9 = PpmHeteroHgsContainmentState & 4;
  if ( (PpmHeteroHgsContainmentState & 4) != 0 )
    PpmHeteroHgsClearContainmentGlobalState();
  for ( i = 0; i < v20.Count; ++i )
  {
    if ( v20.Bitmap[i] )
    {
      if ( v9 )
      {
        PpmHeteroHgsGetContainmentType(&v20, &v16);
        PpmEventHgsContainmentHwUpdate(&v20, &v16, 0LL);
      }
      else if ( a1 )
      {
        *((_QWORD *)&v17 + 1) = qword_140E0B638[0];
        *(_QWORD *)&v17 = PpmCheckRegistered;
        LOWORD(v18) = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v15, &v17) )
          *(_BYTE *)(KeGetPrcb(v15) + 35448) = 3;
        LOBYTE(v11) = a1;
        PpmHeteroHgsDetectContainmentPresence(&v20, v11);
        PpmHeteroHgsEvalAndRegisterContainmentGroups();
      }
      break;
    }
  }
  for ( j = 0LL; (unsigned __int16)j < *v2; LOWORD(j) = j + 1 )
  {
    if ( *(_QWORD *)&v2[4 * (unsigned __int16)j + 4] )
      goto LABEL_35;
  }
  v5 = 0;
LABEL_35:
  LOBYTE(j) = v5;
  PpmHeteroHgsUpdateContainmentGlobalHints(j);
  return PpmHeteroHgsCheckContainmentDecision();
}

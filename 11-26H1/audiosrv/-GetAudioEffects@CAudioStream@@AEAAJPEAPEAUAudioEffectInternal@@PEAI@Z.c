/*
 * XREFs of ?GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z @ 0x180082F44
 * Callers:
 *     ?PublishAudioEffects@CAudioStream@@AEAAXXZ @ 0x1800D4C58 (-PublishAudioEffects@CAudioStream@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDiscoveredEffects@CAudioStream@@AEAAJAEAV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@@Z @ 0x18003685C (-GetDiscoveredEffects@CAudioStream@@AEAAJAEAV-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@@.c)
 *     ?GetControllableEffects@CAudioStream@@AEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x18008312C (-GetControllableEffects@CAudioStream@@AEAAJAEAV-$vector@UAudioEffectInternal@@V-$allocator@UAudi.c)
 *     ??1?$vector@U_Loop_vals_t@std@@V?$allocator@U_Loop_vals_t@std@@@2@@std@@QEAA@XZ @ 0x180086C7C (--1-$vector@U_Loop_vals_t@std@@V-$allocator@U_Loop_vals_t@std@@@2@@std@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXXZ @ 0x1800B0970 (-_Tidy@-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXXZ.c)
 *     ?MergeEffectsLists@CAudioStream@@AEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@3@0@Z @ 0x1800D4B20 (-MergeEffectsLists@CAudioStream@@AEAAJAEAV-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffe.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioStream::GetAudioEffects(CAudioStream *this, struct AudioEffectInternal **a2, unsigned int *a3)
{
  int ControllableEffects; // eax
  unsigned int v7; // ebx
  int DiscoveredEffects; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  struct AudioEffectInternal *v13; // r9
  __int64 v14; // r10
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int128 v19; // [rsp+20h] [rbp-50h] BYREF
  __int64 v20; // [rsp+30h] [rbp-40h]
  __int128 v21; // [rsp+38h] [rbp-38h] BYREF
  __int64 v22; // [rsp+48h] [rbp-28h]
  __int128 v23; // [rsp+50h] [rbp-20h] BYREF
  __int64 v24; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  *a2 = 0LL;
  *a3 = 0;
  v23 = 0LL;
  v24 = 0LL;
  ControllableEffects = CAudioStream::GetControllableEffects(this, &v23);
  v7 = ControllableEffects;
  if ( ControllableEffects >= 0 )
  {
    v21 = 0LL;
    v22 = 0LL;
    DiscoveredEffects = CAudioStream::GetDiscoveredEffects((__int64)this, (__int64)&v21);
    v7 = DiscoveredEffects;
    if ( DiscoveredEffects < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x785,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)DiscoveredEffects);
LABEL_5:
      std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>(&v21);
      goto LABEL_17;
    }
    v19 = 0LL;
    v20 = 0LL;
    v10 = CAudioStream::MergeEffectsLists(v9, &v23, &v21, &v19);
    v7 = v10;
    if ( v10 < 0 )
    {
      v11 = (unsigned int)v10;
      v12 = 1929LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)v11);
      std::vector<AudioEffectInternal>::_Tidy(&v19);
      goto LABEL_5;
    }
    if ( (_QWORD)v19 != *((_QWORD *)&v19 + 1) )
    {
      v13 = (struct AudioEffectInternal *)CoTaskMemAlloc(8 * ((__int64)(*((_QWORD *)&v19 + 1) - v19) >> 3));
      if ( !v13 )
      {
        v7 = -2147024882;
        v11 = 2147942414LL;
        v12 = 1937LL;
        goto LABEL_8;
      }
      v14 = 0LL;
      v15 = *((_QWORD *)&v19 + 1);
      v16 = v19;
      if ( (_QWORD)v19 != *((_QWORD *)&v19 + 1) )
      {
        do
        {
          v17 = 3 * v14;
          *(_OWORD *)((char *)v13 + 8 * v17) = *(_OWORD *)v16;
          *((_DWORD *)v13 + 2 * v17 + 4) = *(_DWORD *)(v16 + 16);
          *((_DWORD *)v13 + 2 * v17 + 5) = *(_DWORD *)(v16 + 20);
          v14 = (unsigned int)(v14 + 1);
          v16 += 24LL;
        }
        while ( v16 != v15 );
        v15 = *((_QWORD *)&v19 + 1);
        v16 = v19;
      }
      *a2 = v13;
      *a3 = -1431655765 * ((v15 - v16) >> 3);
    }
    std::vector<AudioEffectInternal>::_Tidy(&v19);
    std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>(&v21);
    v7 = 0;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x782,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)ControllableEffects);
LABEL_17:
  std::vector<AudioEffectInternal>::_Tidy(&v23);
  return v7;
}

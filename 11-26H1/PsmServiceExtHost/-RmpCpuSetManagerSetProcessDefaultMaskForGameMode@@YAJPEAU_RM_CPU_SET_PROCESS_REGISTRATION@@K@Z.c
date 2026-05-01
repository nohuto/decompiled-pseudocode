/*
 * XREFs of ?RmpCpuSetManagerSetProcessDefaultMaskForGameMode@@YAJPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x1800869E8
 * Callers:
 *     ?RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180087F40 (-RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_.c)
 * Callees:
 *     ?RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z @ 0x18008C74C (-RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCpuSetManagerSetProcessDefaultMaskForGameMode(
        struct _RM_CPU_SET_PROCESS_REGISTRATION *a1,
        char a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v5; // r9
  _OWORD *v6; // rcx
  _OWORD *v7; // rax
  __int128 v8; // xmm1
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r9
  _BYTE ProcessInformation[256]; // [rsp+20h] [rbp-118h] BYREF

  v2 = *((_QWORD *)a1 + 8);
  if ( !v2 )
    return 3221225558LL;
  v5 = 2LL;
  v6 = ProcessInformation;
  v7 = (_OWORD *)(v2 + 104);
  do
  {
    *v6 = *v7;
    v6[1] = v7[1];
    v6[2] = v7[2];
    v6[3] = v7[3];
    v6[4] = v7[4];
    v6[5] = v7[5];
    v6[6] = v7[6];
    v6 += 8;
    v8 = v7[7];
    v7 += 8;
    *(v6 - 1) = v8;
    --v5;
  }
  while ( v5 );
  if ( (a2 & 1) != 0 )
  {
    v9 = ProcessInformation;
    v10 = **((_QWORD **)a1 + 6) - (_QWORD)ProcessInformation;
    v11 = 32LL;
    do
    {
      *v9 |= *(_QWORD *)((char *)v9 + v10 + 344);
      ++v9;
      --v11;
    }
    while ( v11 );
  }
  result = RmpSystemSetProcessDefaultCpuSets(*(HANDLE *)(*((_QWORD *)a1 + 7) + 16LL), ProcessInformation);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}

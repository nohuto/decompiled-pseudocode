/*
 * XREFs of ?GetDefaultGameModeProfile@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@PEAKPEA_K1PEA_N3@Z @ 0x18003B79C
 * Callers:
 *     ?PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003BD14 (-PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D20 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z @ 0x180042290 (-GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::GetDefaultGameModeProfile(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int64 *a5,
        unsigned int *a6,
        bool *a7)
{
  int GameProfileFromRawData; // esi
  __int64 v11; // rdx
  volatile signed __int32 *v12; // rdi
  DWORD ActiveProcessorCount; // eax
  bool *v15; // [rsp+48h] [rbp-39h]
  unsigned int v16; // [rsp+50h] [rbp-31h] BYREF
  _QWORD *v17; // [rsp+58h] [rbp-29h]
  unsigned int v18[4]; // [rsp+60h] [rbp-21h] BYREF
  __int128 v19; // [rsp+70h] [rbp-11h]
  __int64 v20; // [rsp+80h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+47h]

  v17 = a2;
  *(_OWORD *)v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v16 = 40;
  GameProfileFromRawData = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *, unsigned int *))(*(_QWORD *)*a2 + 80LL))(
                             *a2,
                             3LL,
                             v18,
                             &v16);
  if ( GameProfileFromRawData < 0 )
  {
    v11 = 221LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)GameProfileFromRawData);
    goto LABEL_11;
  }
  if ( v16 > 0x28 )
  {
    GameProfileFromRawData = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDF,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)0x8000FFFFLL);
    v12 = (volatile signed __int32 *)a2[1];
    if ( v12 )
    {
      if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          goto LABEL_14;
      }
    }
    return (unsigned int)GameProfileFromRawData;
  }
  ActiveProcessorCount = GetActiveProcessorCount(0xFFFFu);
  GameProfileFromRawData = AutoGameProfile::GetGameProfileFromRawData(
                             (AutoGameProfile *)LOWORD(v18[0]),
                             v16 - 4,
                             (unsigned int)&v18[1],
                             (const unsigned __int8 *)ActiveProcessorCount,
                             a3,
                             a4,
                             a5,
                             a6,
                             a7,
                             v15);
  if ( GameProfileFromRawData < 0 )
  {
    v11 = 233LL;
    goto LABEL_10;
  }
LABEL_11:
  v12 = (volatile signed __int32 *)a2[1];
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
LABEL_14:
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return (unsigned int)GameProfileFromRawData;
}

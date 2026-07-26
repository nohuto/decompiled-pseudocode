/*
 * XREFs of WPP_RECORDER_SF__guid__guid__guid_ @ 0x1400CF37C
 * Callers:
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x140146BD8 (ndisIfUpdateIfBlockFromPersistedState.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF__guid__guid__guid_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v10; // [rsp+20h] [rbp-58h]

  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
    ndisWppFastTraceMessage(&WPP_84bd40d134543b4dc326a9a718d945dc_Traceguids, 0x18u, a6, 16LL, a7, 16LL, a8, 16LL, 0LL);
  LOWORD(v10) = 24;
  return WppAutoLogTrace(a1, 3LL, 22LL, &WPP_84bd40d134543b4dc326a9a718d945dc_Traceguids, v10, a6, 16LL, a7);
}

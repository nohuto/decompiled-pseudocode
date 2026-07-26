/*
 * XREFs of WPP_RECORDER_SF_I @ 0x1400CEF34
 * Callers:
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x140089D40 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ndisIfUpdateInterfaceFromPersistentStore @ 0x14008C830 (ndisIfUpdateInterfaceFromPersistentStore.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_I(__int64 a1, unsigned __int8 a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = a2;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= a2 )
    ndisWppFastTraceMessage(&WPP_84bd40d134543b4dc326a9a718d945dc_Traceguids, a4, va, 8LL, 0LL);
  LOWORD(v9) = a4;
  return WppAutoLogTrace(a1, v7, 22LL, &WPP_84bd40d134543b4dc326a9a718d945dc_Traceguids, v9, va, 8LL, 0LL);
}

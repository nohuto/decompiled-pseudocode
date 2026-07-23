/*
 * XREFs of LdrpEnclaveAddDependentModule @ 0x180125298
 * Callers:
 *     LdrpEnclaveAddForwarderModules @ 0x180022830 (LdrpEnclaveAddForwarderModules.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x18010D4AC (LdrpEnclaveAddDelayloadModules.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x180025930 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpPreprocessDllName @ 0x180030180 (LdrpPreprocessDllName.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800CEF9C (LdrpFindOrPrepareEnclaveModule.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpEnclaveAddDependentModule(__int64 *a1, const ANSI_STRING *a2)
{
  int appended; // ebx
  unsigned int v6; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v7; // [rsp+48h] [rbp-B8h] BYREF
  int v8; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-A8h]
  _WORD v10[128]; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING v11; // [rsp+160h] [rbp+60h] BYREF
  _WORD v12[128]; // [rsp+170h] [rbp+70h] BYREF

  memset_thunk_772440563353939046(&v11, 0, 0x110uLL);
  memset_thunk_772440563353939046(&v8, 0, 0x110uLL);
  v8 = 0x1000000;
  BaseAddress = v10;
  *(_DWORD *)&v11.Length = 0x1000000;
  v11.Buffer = v12;
  v10[0] = 0;
  v12[0] = 0;
  appended = LdrpAppendAnsiStringToFilenameBuffer((unsigned __int16 *)&v8, a2);
  if ( appended >= 0 )
  {
    v6 = 0x800000;
    appended = LdrpPreprocessDllName((unsigned __int16 *)&v8, &v11, 0LL, (int *)&v6);
    if ( appended >= 0 )
      appended = LdrpFindOrPrepareEnclaveModule(a1[22], &v11, a1[2], v6, a1[7], &v7, a1[5]);
  }
  if ( v10 != BaseAddress )
    RtlpSysVolFree(BaseAddress);
  BaseAddress = v10;
  v8 = 0x1000000;
  v10[0] = 0;
  if ( v12 != v11.Buffer )
    RtlpSysVolFree(v11.Buffer);
  return (unsigned int)appended;
}

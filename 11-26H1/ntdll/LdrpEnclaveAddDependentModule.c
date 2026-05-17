/*
 * XREFs of LdrpEnclaveAddDependentModule @ 0x180125528
 * Callers:
 *     LdrpEnclaveAddForwarderModules @ 0x1800382C0 (LdrpEnclaveAddForwarderModules.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x18010D95C (LdrpEnclaveAddDelayloadModules.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18003B3C0 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpPreprocessDllName @ 0x180045C10 (LdrpPreprocessDllName.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800D182C (LdrpFindOrPrepareEnclaveModule.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpEnclaveAddDependentModule(__int64 *a1, STRING *a2)
{
  __int64 v4; // r8
  int appended; // ebx
  int v7; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v8; // [rsp+48h] [rbp-B8h] BYREF
  int v9; // [rsp+50h] [rbp-B0h] BYREF
  _WORD *v10; // [rsp+58h] [rbp-A8h]
  _WORD v11[128]; // [rsp+60h] [rbp-A0h] BYREF
  int v12; // [rsp+160h] [rbp+60h] BYREF
  _WORD *v13; // [rsp+168h] [rbp+68h]
  _WORD v14[128]; // [rsp+170h] [rbp+70h] BYREF

  memset_thunk_772440563353939046(&v12, 0, 0x110uLL);
  memset_thunk_772440563353939046(&v9, 0, 0x110uLL);
  v9 = 0x1000000;
  v10 = v11;
  v12 = 0x1000000;
  v13 = v14;
  v11[0] = 0;
  v14[0] = 0;
  appended = LdrpAppendAnsiStringToFilenameBuffer((unsigned __int16 *)&v9, a2, v4);
  if ( appended >= 0 )
  {
    v7 = 0x800000;
    appended = LdrpPreprocessDllName((unsigned __int16 *)&v9, (unsigned __int16 *)&v12, 0LL, &v7);
    if ( appended >= 0 )
      appended = LdrpFindOrPrepareEnclaveModule(a1[22], (__int64)&v12, a1[2], v7, a1[7], &v8, a1[5]);
  }
  if ( v11 != v10 )
    RtlpSysVolFree((__int64)v10);
  v10 = v11;
  v9 = 0x1000000;
  v11[0] = 0;
  if ( v14 != v13 )
    RtlpSysVolFree((__int64)v13);
  return (unsigned int)appended;
}

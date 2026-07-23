/*
 * XREFs of SbpTraceContextUpdate @ 0x180082610
 * Callers:
 *     SbSelectProcedure @ 0x180083640 (SbSelectProcedure.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x1800845B0 (SbUpdateSwitchContextBasedOnDll.c)
 *     SbObtainTraceHandle @ 0x180084C30 (SbObtainTraceHandle.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x18005AAB0 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall SbpTraceContextUpdate(__int64 a1, __int64 a2, __int16 a3, unsigned __int16 a4, __int64 a5)
{
  int v6; // esi
  int v9; // eax
  __int16 v11; // [rsp+58h] [rbp-61h] BYREF
  _QWORD v12[6]; // [rsp+68h] [rbp-51h] BYREF
  __int64 v13; // [rsp+98h] [rbp-21h] BYREF
  int v14; // [rsp+A0h] [rbp-19h]
  int v15; // [rsp+A4h] [rbp-15h]
  unsigned __int16 v16; // [rsp+130h] [rbp+77h] BYREF

  v16 = a4;
  v6 = a4;
  memset_thunk_772440563353939046(&v13, 0, 0x50uLL);
  v11 = a3;
  v12[2] = &v11;
  v12[0] = a2;
  v12[4] = &v16;
  v12[1] = 16LL;
  v12[3] = 2LL;
  v9 = 3;
  v12[5] = 2LL;
  if ( (_WORD)v6 )
  {
    v13 = a5;
    v9 = 4;
    v14 = v6;
    v15 = 0;
  }
  return EtwpEventWriteFull(a1, &AeSbContextUpdateEvent, 0LL, 0, 0, 0LL, 0LL, v9, (__int64)v12);
}

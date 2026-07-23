/*
 * XREFs of WmipProcessLegacyEtwRegister @ 0x140829E98
 * Callers:
 *     WmipLegacyEtwWorker @ 0x140B24E20 (WmipLegacyEtwWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     EtwRegisterClassicProvider @ 0x1409179D0 (EtwRegisterClassicProvider.c)
 *     EtwUnregister @ 0x1409BE550 (EtwUnregister.c)
 */

LONG __fastcall WmipProcessLegacyEtwRegister(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  REGHANDLE v5; // rbx
  LONG result; // eax
  int v7; // ebx
  REGHANDLE v8; // [rsp+40h] [rbp+8h] BYREF

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 == a2 )
    *(_QWORD *)(a1 + 112) = -1LL;
  v8 = *(_QWORD *)(a1 + 104);
  v5 = v8;
  *(_QWORD *)(a1 + 104) = 0LL;
  result = KeReleaseMutex(&WmipSMMutex, 0);
  if ( v5 )
    result = EtwUnregister(v5);
  if ( v4 == a2 )
  {
    v7 = EtwRegisterClassicProvider((int)a1 + 72, 0, (unsigned int)&WmipLegacyEtwCallback, a1, (__int64)&v8);
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    if ( v7 < 0 )
      *(_QWORD *)(a1 + 112) = 0LL;
    else
      *(_QWORD *)(a1 + 104) = v8;
    return KeReleaseMutex(&WmipSMMutex, 0);
  }
  return result;
}

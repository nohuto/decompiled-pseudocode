/*
 * XREFs of WmipProcessLegacyEtwRegister @ 0x140823C4C
 * Callers:
 *     WmipLegacyEtwWorker @ 0x140B22A20 (WmipLegacyEtwWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     EtwRegisterClassicProvider @ 0x14093BE30 (EtwRegisterClassicProvider.c)
 *     EtwUnregister @ 0x140A84ED0 (EtwUnregister.c)
 */

LONG __fastcall WmipProcessLegacyEtwRegister(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  REGHANDLE v5; // rbx
  LONG result; // eax
  int v7; // ebx
  REGHANDLE v8; // [rsp+40h] [rbp+8h] BYREF

  KeWaitForSingleObject(&EtwpSecurityLock.IoSelfBoostsEntry, Executive, 0, 0, 0LL);
  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 == a2 )
    *(_QWORD *)(a1 + 112) = -1LL;
  v8 = *(_QWORD *)(a1 + 104);
  v5 = v8;
  *(_QWORD *)(a1 + 104) = 0LL;
  result = KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.IoSelfBoostsEntry, 0);
  if ( v5 )
    result = EtwUnregister(v5);
  if ( v4 == a2 )
  {
    v7 = EtwRegisterClassicProvider((int)a1 + 72, 0, (unsigned int)&WmipLegacyEtwCallback, a1, (__int64)&v8);
    KeWaitForSingleObject(&EtwpSecurityLock.IoSelfBoostsEntry, Executive, 0, 0, 0LL);
    if ( v7 < 0 )
      *(_QWORD *)(a1 + 112) = 0LL;
    else
      *(_QWORD *)(a1 + 104) = v8;
    return KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.IoSelfBoostsEntry, 0);
  }
  return result;
}

/*
 * XREFs of RIMCmActivateContact @ 0x14015C7F8
 * Callers:
 *     rimFindOrCreateActiveContact @ 0x14004A128 (rimFindOrCreateActiveContact.c)
 * Callees:
 *     ?ActivateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK@Z @ 0x14015C9D0 (-ActivateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK@Z.c)
 *     rimGetNextFreeCursor @ 0x14015CA5C (rimGetNextFreeCursor.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 *__fastcall RIMCmActivateContact(__int64 a1, unsigned int a2)
{
  __int64 **v4; // rcx
  __int64 *v5; // rdi
  __int64 v6; // rbp
  __int64 *v7; // rax
  unsigned int *v8; // rsi
  unsigned int NextFreeCursor; // eax
  __int64 **v10; // rax

  v4 = (__int64 **)(a1 + 984);
  v5 = *v4;
  if ( *v4 == (__int64 *)v4 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 1000) + 16LL * (a2 % *(_DWORD *)(a1 + 1008));
  if ( (__int64 **)v5[1] != v4 )
    goto LABEL_11;
  v7 = (__int64 *)*v5;
  if ( *(__int64 **)(*v5 + 8) != v5 )
    goto LABEL_11;
  *v4 = v7;
  v8 = (unsigned int *)(v5 - 2);
  v7[1] = (__int64)v4;
  if ( (v5[2] & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 274LL);
  if ( v8[2] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 275LL);
  v8[8] |= 2u;
  *v8 = a2;
  if ( *(_DWORD *)(a1 + 776) != 1 || (*(_DWORD *)(a1 + 368) & 0x20) != 0 )
    NextFreeCursor = rimGetNextFreeCursor(a1);
  else
    NextFreeCursor = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 4LL);
  v8[1] = NextFreeCursor;
  v5[1] = 0LL;
  *v5 = 0LL;
  v10 = *(__int64 ***)(v6 + 8);
  if ( *v10 != (__int64 *)v6 )
LABEL_11:
    __fastfail(3u);
  *v5 = v6;
  v5[1] = (__int64)v10;
  *v10 = v5;
  *(_QWORD *)(v6 + 8) = v5;
  if ( *(_DWORD *)(a1 + 1016) >= *(_DWORD *)(a1 + 776) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 297LL);
  if ( ++*(_DWORD *)(a1 + 1016) < ++*(_DWORD *)(a1 + 1020) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 301LL);
  InputTraceLogging::RIM::ActivateContact(*(const struct RIMDEV **)(a1 + 16), v8[1], *v8, *(_DWORD *)(a1 + 1016));
  return v5 - 2;
}

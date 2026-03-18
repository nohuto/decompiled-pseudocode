/*
 * XREFs of RIMCmActivateContact @ 0x1401F52B0
 * Callers:
 *     rimFindOrCreateActiveContact @ 0x140184CA8 (rimFindOrCreateActiveContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ActivateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK@Z @ 0x1401F5108 (-ActivateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK@Z.c)
 *     rimGetNextFreeCursor @ 0x1401F57A8 (rimGetNextFreeCursor.c)
 */

__int64 *__fastcall RIMCmActivateContact(__int64 a1, unsigned int a2)
{
  __int64 **v4; // rcx
  __int64 *v5; // rdi
  __int64 v6; // rsi
  __int64 *v7; // rax
  int NextFreeCursor; // eax
  __int64 **v9; // rax

  v4 = (__int64 **)(a1 + 984);
  v5 = *v4;
  if ( *v4 == (__int64 *)v4 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 1000) + 16LL * (a2 % *(_DWORD *)(a1 + 1008));
  if ( (__int64 **)v5[1] != v4 )
    goto LABEL_18;
  v7 = (__int64 *)*v5;
  if ( *(__int64 **)(*v5 + 8) != v5 )
    goto LABEL_18;
  *v4 = v7;
  v7[1] = (__int64)v4;
  if ( (v5[2] & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 274);
  if ( *((_DWORD *)v5 - 2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 275);
  *((_DWORD *)v5 + 4) |= 2u;
  *((_DWORD *)v5 - 4) = a2;
  if ( *(_DWORD *)(a1 + 776) != 1 || (*(_DWORD *)(a1 + 368) & 0x20) != 0 )
    NextFreeCursor = rimGetNextFreeCursor(a1);
  else
    NextFreeCursor = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 4LL);
  *((_DWORD *)v5 - 3) = NextFreeCursor;
  v5[1] = 0LL;
  *v5 = 0LL;
  v9 = *(__int64 ***)(v6 + 8);
  if ( *v9 != (__int64 *)v6 )
LABEL_18:
    __fastfail(3u);
  *v5 = v6;
  v5[1] = (__int64)v9;
  *v9 = v5;
  *(_QWORD *)(v6 + 8) = v5;
  if ( *(_DWORD *)(a1 + 1016) >= *(_DWORD *)(a1 + 776) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 297);
  if ( ++*(_DWORD *)(a1 + 1016) < ++*(_DWORD *)(a1 + 1020) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 301);
  InputTraceLogging::RIM::ActivateContact(*(const struct RIMDEV **)(a1 + 16));
  return v5 - 2;
}

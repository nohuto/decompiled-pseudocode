/*
 * XREFs of EtwRegisterClassicProvider @ 0x1409179D0
 * Callers:
 *     WmipProcessLegacyEtwRegister @ 0x140829E98 (WmipProcessLegacyEtwRegister.c)
 * Callees:
 *     EtwpRegisterKMProvider @ 0x140916E38 (EtwpRegisterKMProvider.c)
 */

__int64 __fastcall EtwRegisterClassicProvider(ULONGLONG a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( a3 )
    return EtwpRegisterKMProvider(EtwpHostSiloState, a1, 2, a3, a4, retaddr, a5);
  else
    return 3221225485LL;
}

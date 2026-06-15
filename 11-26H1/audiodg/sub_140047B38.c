/*
 * XREFs of sub_140047B38 @ 0x140047B38
 * Callers:
 *     sub_14003D900 @ 0x14003D900 (sub_14003D900.c)
 *     sub_140080F10 @ 0x140080F10 (sub_140080F10.c)
 *     sub_140085AA0 @ 0x140085AA0 (sub_140085AA0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

int __fastcall sub_140047B38(__int64 a1, int a2, int a3)
{
  FARPROC MicrosoftTelemetryAssertTriggeredUM; // rax
  HMODULE phModule; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v9[5]; // [rsp+28h] [rbp-38h] BYREF
  int v10; // [rsp+50h] [rbp-10h]
  int v11; // [rsp+54h] [rbp-Ch]
  int v12; // [rsp+58h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+8h]

  phModule = 0LL;
  LODWORD(MicrosoftTelemetryAssertTriggeredUM) = GetModuleHandleExA(2u, "ntdll.dll", &phModule);
  if ( (_DWORD)MicrosoftTelemetryAssertTriggeredUM )
  {
    if ( phModule )
    {
      MicrosoftTelemetryAssertTriggeredUM = GetProcAddress(phModule, "MicrosoftTelemetryAssertTriggeredUM");
      if ( MicrosoftTelemetryAssertTriggeredUM )
      {
        v12 = 1;
        v9[1] = &_ImageBase;
        v9[3] = 1LL;
        v9[2] = retaddr;
        v9[0] = 11LL;
        v9[4] = a1;
        v10 = a2;
        v11 = a3;
        LODWORD(MicrosoftTelemetryAssertTriggeredUM) = sub_1400B6010(v9);
      }
    }
  }
  return (int)MicrosoftTelemetryAssertTriggeredUM;
}

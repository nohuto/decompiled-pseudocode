/*
 * XREFs of PiDevCfgRequestDriverConfigurations @ 0x1407AAE54
 * Callers:
 *     PiDevCfgProcessDevice @ 0x140AD089C (PiDevCfgProcessDevice.c)
 * Callees:
 *     PiDevCfgAppendMultiSz @ 0x1407A8AFC (PiDevCfgAppendMultiSz.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140AD2E94 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgSetObjectProperty @ 0x140B0DF70 (PiDevCfgSetObjectProperty.c)
 */

__int64 __fastcall PiDevCfgRequestDriverConfigurations(__int64 a1, __int64 a2)
{
  int DriverConfiguration; // eax
  int appended; // ebx
  const void ***v6; // rsi
  const void **i; // rdi
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-28h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  DriverConfiguration = PiDevCfgQueryDriverConfiguration(a2);
  appended = DriverConfiguration;
  if ( (int)(DriverConfiguration + 0x80000000) < 0 || DriverConfiguration == -1073740653 )
  {
    appended = PiDevCfgAppendMultiSz(&UnicodeString, (const void **)(a2 + 424), 0LL, 1);
    if ( appended >= 0 )
    {
      v6 = (const void ***)(a2 + 208);
      for ( i = *v6; i != (const void **)v6; i = (const void **)*i )
      {
        appended = PiDevCfgQueryDriverConfiguration(i);
        if ( ((appended + 0x80000000) & 0x80000000) == 0 && appended != -1073740653 )
          goto LABEL_13;
        appended = PiDevCfgAppendMultiSz(&UnicodeString, i + 53, 0LL, 1);
        if ( appended < 0 )
          goto LABEL_13;
      }
      if ( UnicodeString.Buffer )
        appended = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a1, *(_QWORD *)(a1 + 8), 1, *(_QWORD *)(a1 + 16));
      else
        appended = -1073740653;
    }
  }
LABEL_13:
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)appended;
}

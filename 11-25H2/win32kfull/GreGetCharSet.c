/*
 * XREFs of GreGetCharSet @ 0x140195348
 * Callers:
 *     NtGdiGetCharSet @ 0x140195330 (NtGdiGetCharSet.c)
 * Callees:
 *     ?GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z @ 0x1400802FC (-GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082AC4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x140082B20 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x14008AFD0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GreGetCharSet(HDC a1)
{
  __int64 v1; // rax
  unsigned int CharSet; // ebx
  _QWORD v4[11]; // [rsp+20h] [rbp-58h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  v1 = v4[0];
  if ( !v4[0] )
    goto LABEL_6;
  if ( *(_WORD *)(v4[0] + 12LL) != 1 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v1 = v4[0];
    if ( *(_WORD *)(v4[0] + 12LL) != 1 )
    {
      XDCOBJ::vUnlockFast((XDCOBJ *)v4);
      v1 = 0LL;
      v4[0] = 0LL;
    }
  }
  if ( v1 )
  {
    CharSet = GrepGetCharSet((struct UDCOBJ *)v4);
  }
  else
  {
LABEL_6:
    EngSetLastError(6u);
    CharSet = 0x10000;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v4);
  return CharSet;
}

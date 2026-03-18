/*
 * XREFs of ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x14020C99C
 * Callers:
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x14020C38C (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x14020C704 (-IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMDeadzone::_GetAngle(struct tagPOINT a1, struct tagPOINT a2)
{
  int v2; // esi
  int v3; // ebx
  unsigned int v4; // edi
  int *v5; // rcx
  int v6; // r8d
  unsigned int v7; // eax
  unsigned int v8; // eax
  int v9; // edi

  v2 = a1.x - a2.x;
  v3 = a1.y - a2.y;
  if ( a1.x == a2.x )
  {
    v4 = 90;
  }
  else
  {
    v5 = (int *)&RIMDeadzone::s_adwTangentLookup;
    v6 = -(100 * v3 / v2);
    if ( 100 * v3 / v2 > 0 )
      v6 = 100 * v3 / v2;
    v7 = 0;
    while ( v6 > *v5 )
    {
      ++v7;
      ++v5;
      if ( v7 >= 0x12 )
      {
        if ( v7 == 18 )
        {
          v4 = 90;
          goto LABEL_12;
        }
        break;
      }
    }
    v4 = 5 * v7;
    if ( 5 * v7 > 0x5A )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 261);
LABEL_12:
    if ( v2 < 0 )
      goto LABEL_15;
  }
  v8 = v4;
  if ( v3 >= 0 )
  {
    v9 = 360;
LABEL_19:
    v4 = v9 - v8;
    return v4 % 0x168;
  }
LABEL_15:
  v8 = v4;
  if ( v2 <= 0 )
  {
    if ( v3 < 0 )
    {
      v9 = 180;
      goto LABEL_19;
    }
    v4 += 180;
  }
  return v4 % 0x168;
}

/*
 * XREFs of UserDeleteW32Process @ 0x140162C50
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E1960 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E1A28 (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     EnterHandleFlagsCrit @ 0x1400F8470 (EnterHandleFlagsCrit.c)
 *     LeaveHandleFlagsCrit @ 0x1400F8B60 (LeaveHandleFlagsCrit.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall UserDeleteW32Process(struct _RTL_BITMAP *Buffer)
{
  __int64 v2; // rdx
  PVOID *v3; // rcx
  __int64 v4; // rdx
  char *v5; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+38h] [rbp+10h]

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v6);
  if ( !LODWORD(Buffer->Buffer) )
  {
    if ( *(&Buffer[64].SizeOfBitMap + 1) )
    {
      v2 = *(_QWORD *)&Buffer[65].SizeOfBitMap;
      if ( *(struct _RTL_BITMAP **)(v2 + 8) != &Buffer[65] || (v3 = (PVOID *)Buffer[65].Buffer, *v3 != &Buffer[65]) )
        __fastfail(3u);
      *v3 = (PVOID)v2;
      *(_QWORD *)(v2 + 8) = v3;
    }
    if ( (PULONG *)Buffer[68].Buffer != &Buffer[68].Buffer )
    {
      v7 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 2545LL);
    }
    EnterHandleFlagsCrit((__int64)v3, v2);
    v5 = (char *)Buffer[44].Buffer;
    if ( v5 )
    {
      GreDeleteFastMutex(v5);
      RtlInitializeBitMap(Buffer + 44, 0LL, 0);
    }
    LeaveHandleFlagsCrit((__int64)v5, v4);
    PsSetProcessWin32Process(*(_QWORD *)&Buffer->SizeOfBitMap, 0LL, Buffer);
    GreDeleteFastMutex((char *)Buffer);
  }
  ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v6, v2);
}

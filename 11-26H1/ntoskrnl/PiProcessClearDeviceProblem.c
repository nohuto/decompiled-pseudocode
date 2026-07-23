/*
 * XREFs of PiProcessClearDeviceProblem @ 0x14096EEE0
 * Callers:
 *     PnpDeviceActionWorker @ 0x14047C410 (PnpDeviceActionWorker.c)
 * Callees:
 *     PipIsProblemReadonly @ 0x1407A7F2C (PipIsProblemReadonly.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     PipClearDevNodeProblem @ 0x14096F6C8 (PipClearDevNodeProblem.c)
 *     PipClearDevNodeFlags @ 0x1409B01B0 (PipClearDevNodeFlags.c)
 *     PnpRestartDeviceNode @ 0x140B23CFC (PnpRestartDeviceNode.c)
 */

__int64 __fastcall PiProcessClearDeviceProblem(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  _DWORD *v4; // rdi
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  bool v8; // zf
  int v9; // eax
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  P = 0LL;
  v4 = *(_DWORD **)(*(_QWORD *)(v1 + 312) + 40LL);
  v5 = v4[75];
  if ( v5 != 769 && (unsigned int)(v5 - 770) > 2 && v5 != 788 )
  {
    if ( (unsigned int)(v5 - 789) <= 1 )
      return (unsigned int)-1073741738;
    return v2;
  }
  v6 = v4[99];
  if ( (v6 & 0x6000) == 0 )
    return v2;
  v7 = *(_DWORD *)(a1 + 24);
  switch ( v7 )
  {
    case 1:
      if ( PipIsProblemReadonly((__int64)v4, v4[101]) )
        return (unsigned int)-1073741584;
      goto LABEL_18;
    case 3:
      if ( (v6 & 0x2000) == 0 )
        return (unsigned int)-1073741808;
      v8 = v4[101] == 47;
      break;
    case 25:
      if ( (v6 & 0x2000) == 0 )
        return (unsigned int)-1073741808;
      v8 = v4[101] == 55;
      break;
    default:
      goto LABEL_18;
  }
  if ( !v8 )
    return (unsigned int)-1073741808;
LABEL_18:
  PiPnpRtlBeginOperation(&P);
  PipClearDevNodeFlags(v4, 0x4000LL);
  PipClearDevNodeProblem(v4);
  v9 = v4[75];
  if ( v9 != 769 && v9 != 770 )
    PnpRestartDeviceNode(v4);
  if ( P )
    PiPnpRtlEndOperation((char *)P);
  return v2;
}

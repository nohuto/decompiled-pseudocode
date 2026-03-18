/*
 * XREFs of RootHub_HandleResumedPorts @ 0x140004D8C
 * Callers:
 *     RootHub_D0Exit @ 0x14002C10C (RootHub_D0Exit.c)
 * Callees:
 *     RootHub_WaitForResumeCompletion @ 0x140004EF0 (RootHub_WaitForResumeCompletion.c)
 *     RootHub_ForceU3 @ 0x14000515C (RootHub_ForceU3.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

char __fastcall RootHub_HandleResumedPorts(__int64 a1)
{
  _UNKNOWN **v1; // rax
  unsigned int v2; // ebx
  __int64 v4; // rbp
  __int64 v5; // rsi
  int v6; // edx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF

  v1 = &retaddr;
  v2 = 1;
  v9 = 0;
  if ( *(_DWORD *)(a1 + 16) )
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(a1 + 48);
      v5 = 120LL * (v2 - 1);
      LOBYTE(v1) = *(_BYTE *)(v5 + v4 + 13);
      if ( (_BYTE)v1 == 2 )
        break;
      if ( (_BYTE)v1 == 3 )
        goto LABEL_9;
LABEL_4:
      if ( ++v2 > *(_DWORD *)(a1 + 16) )
        return (char)v1;
    }
    LOBYTE(v1) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2560))(
                   WdfDriverGlobals,
                   *(_QWORD *)(v5 + v4 + 40),
                   0LL);
    if ( (_BYTE)v1 )
    {
      *(_BYTE *)(v5 + v4 + 18) = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 4;
        LOBYTE(v1) = WPP_RECORDER_SF_d(
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                       v6,
                       11,
                       239,
                       (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                       v2);
      }
      goto LABEL_4;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v6,
        11,
        240,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v2);
    }
LABEL_9:
    RootHub_WaitForResumeCompletion(a1, v2, &v9);
    LOBYTE(v1) = v9;
    if ( v9 != -1 && (v9 & 0x200) != 0 && (v9 & 1) != 0 && (v9 & 2) != 0 && (v9 & 0x20000) == 0 )
    {
      LODWORD(v1) = (v9 >> 5) & 0xF;
      if ( (_DWORD)v1 != 4 && ((unsigned int)v1 <= 2 || (_DWORD)v1 == 8) )
        LOBYTE(v1) = RootHub_ForceU3(a1, v2);
    }
    goto LABEL_4;
  }
  return (char)v1;
}

/*
 * XREFs of ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x140154F44
 * Callers:
 *     CleanupIAMAccess @ 0x140154E80 (CleanupIAMAccess.c)
 * Callees:
 *     Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline @ 0x140155058 (Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CleanupShellWindowManagement(struct tagDESKTOP *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rsi
  _QWORD *v4; // rbp
  _QWORD *v5; // rax

  if ( *((_QWORD *)a1 + 36) )
  {
    *((_QWORD *)a1 + 36) = 0LL;
    Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline();
    HMAssignmentUnlock((char *)a1 + 296);
    HMAssignmentUnlock((char *)a1 + 304);
    v2 = (_QWORD *)((char *)a1 + 312);
    v3 = (_QWORD *)*((_QWORD *)a1 + 39);
    if ( v3 )
    {
      while ( v3 != v2 )
      {
        v4 = v3;
        v3 = (_QWORD *)*v3;
        if ( (_QWORD *)v3[1] != v4 || (v5 = (_QWORD *)v4[1], (_QWORD *)*v5 != v4) )
          __fastfail(3u);
        *v5 = v3;
        v3[1] = v5;
        HMAssignmentUnlock(v4 + 2);
        Win32FreePool(v4);
      }
    }
    HMAssignmentUnlock((char *)a1 + 328);
    *((_DWORD *)a1 + 84) = 0;
  }
  else
  {
    v2 = (_QWORD *)((char *)a1 + 312);
  }
  if ( (_QWORD *)*v2 != v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4475LL);
  Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline();
}

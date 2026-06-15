/*
 * XREFs of ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x180007B04
 * Callers:
 *     ?LowPowerEpochNotificationCallback@@YAKPEAXK0@Z @ 0x180005D70 (-LowPowerEpochNotificationCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     ?TsSessionRequiresReevaluationOfAudioInStandby@@YA_NPEBVTSSession@@@Z @ 0x180006A60 (-TsSessionRequiresReevaluationOfAudioInStandby@@YA_NPEBVTSSession@@@Z.c)
 *     ?TsSessionGetPrimaryConsoleAudioSession@@YAJPEAPEAVTSSession@@@Z @ 0x180007C84 (-TsSessionGetPrimaryConsoleAudioSession@@YAJPEAPEAVTSSession@@@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x18000BE20 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void TsSessionOnLowPowerEpochStateChanged(void)
{
  struct _RTL_CRITICAL_SECTION *v0; // rbx
  int *v1; // rcx
  int v2; // eax
  int v3[2]; // [rsp+20h] [rbp-48h] BYREF
  int v4; // [rsp+28h] [rbp-40h]
  int *v5; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct TSSession *v7; // [rsp+70h] [rbp+8h] BYREF

  v0 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v7 = 0LL;
  if ( (int)TsSessionGetPrimaryConsoleAudioSession(&v7) >= 0 )
  {
    if ( TsSessionRequiresReevaluationOfAudioInStandby(v7) )
    {
      *(_QWORD *)v3 = &off_180052D00;
      v4 = *v1;
      v5 = v3;
      v2 = QueueGenericWorkItem(v3);
      if ( v2 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8BE,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v2,
          v3[0]);
    }
  }
  if ( v0 )
    LeaveCriticalSection(v0);
}

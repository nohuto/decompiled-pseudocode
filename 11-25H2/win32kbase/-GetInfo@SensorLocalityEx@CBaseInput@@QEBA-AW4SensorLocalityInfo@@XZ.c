/*
 * XREFs of ?GetInfo@SensorLocalityEx@CBaseInput@@QEBA?AW4SensorLocalityInfo@@XZ @ 0x14020F968
 * Callers:
 *     ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x14012C240 (-ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x14018A4C0 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     ?SensorInitialized@CBaseInput@@IEAA_NXZ @ 0x140210D04 (-SensorInitialized@CBaseInput@@IEAA_NXZ.c)
 *     ?KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z @ 0x1402138CC (-KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

__int64 __fastcall CBaseInput::SensorLocalityEx::GetInfo(__int64 a1)
{
  unsigned int v2; // ebp
  int v3; // edi
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KPROCESS *CurrentProcess; // rax

  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)a1, 0);
  v2 = 0;
  if ( *(_DWORD *)(a1 + 12) )
  {
    v3 = 5;
    if ( (unsigned int)PsGetCurrentThreadId() != *(_DWORD *)(a1 + 12) )
      v3 = 1;
    if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) == *(_DWORD *)(a1 + 8) )
    {
      v4 = v3 | 2;
    }
    else
    {
      v4 = v3;
      if ( (unsigned __int8)KeIsAttachedProcess() )
      {
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v6, v5);
        if ( *(_DWORD *)(a1 + 8) == (unsigned int)PsGetProcessId(CurrentProcess) )
          v4 = v3 | 0x12;
      }
    }
    v2 = v4;
  }
  ExReleasePushLockSharedEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}

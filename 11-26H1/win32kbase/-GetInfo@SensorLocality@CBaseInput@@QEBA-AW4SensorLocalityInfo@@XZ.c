/*
 * XREFs of ?GetInfo@SensorLocality@CBaseInput@@QEBA?AW4SensorLocalityInfo@@XZ @ 0x1401C615C
 * Callers:
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1400CFCDC (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     ?KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z @ 0x1401B0948 (-KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z.c)
 *     ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x14021847C (-ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ.c)
 *     ?SensorInitialized@CBaseInput@@IEAA_NXZ @ 0x140218948 (-SensorInitialized@CBaseInput@@IEAA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseInput::SensorLocality::GetInfo(__int64 a1)
{
  unsigned int v2; // ebp
  int v3; // edi
  int v4; // ebx
  __int64 v5; // rcx
  struct _KPROCESS *CurrentProcess; // rax

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1, 0LL);
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
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v5);
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

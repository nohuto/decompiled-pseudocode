/*
 * XREFs of ?Close@HamActivityWrapper@@QEAAXXZ @ 0x180019958
 * Callers:
 *     ?HamCallback@HamActivityWrapper@@SAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x180019FA0 (-HamCallback@HamActivityWrapper@@SAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z.c)
 *     ?StartAsyncForProcess@HamActivityWrapper@@QEAAJPEAXPEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY_START_TYPE@@@Z @ 0x18001A134 (-StartAsyncForProcess@HamActivityWrapper@@QEAAJPEAXPEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY.c)
 *     HampCltDelayCloseContextDestroy @ 0x18001B608 (HampCltDelayCloseContextDestroy.c)
 * Callees:
 *     HamCloseActivity @ 0x180009F90 (HamCloseActivity.c)
 */

void __fastcall HamActivityWrapper::Close(HamActivityWrapper *this)
{
  char v2; // di

  RtlAcquireSRWLockExclusive((char *)this + 8);
  if ( *((_DWORD *)this + 10) == 3 )
  {
    v2 = 0;
  }
  else
  {
    *((_DWORD *)this + 10) = 3;
    v2 = 1;
  }
  RtlReleaseSRWLockExclusive((char *)this + 8);
  if ( v2 )
  {
    RtlWakeAllConditionVariable((char *)this + 16);
    HamCloseActivity(*((_QWORD *)this + 3), *((_QWORD *)this + 4));
  }
}

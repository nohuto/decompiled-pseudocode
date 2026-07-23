/*
 * XREFs of SleepstudyHelper_RegisterPdoWithParentPdo @ 0x140B77E60
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperDestroyBlocker @ 0x1404955B0 (SleepstudyHelperDestroyBlocker.c)
 *     SleepstudyHelperCreateBlockerFromDevice @ 0x140A8FC90 (SleepstudyHelperCreateBlockerFromDevice.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A90440 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140A90850 (SleepstudyHelperDestroyBlockerBuilder.c)
 */

__int64 __fastcall SleepstudyHelper_RegisterPdoWithParentPdo(
        __int64 a1,
        unsigned __int64 a2,
        struct _DEVICE_OBJECT *a3,
        PKSPIN_LOCK *a4)
{
  KSPIN_LOCK *v4; // rsi
  __int64 *v5; // rdi
  int v7; // eax
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  int v10; // ebx
  PKSPIN_LOCK v11; // rax
  __int64 *v13; // [rsp+20h] [rbp-28h] BYREF
  __int128 v14; // [rsp+28h] [rbp-20h] BYREF
  PKSPIN_LOCK v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v15 = 0LL;
  v13 = 0LL;
  if ( a1 && a2 && a3 && a4 )
  {
    v14 = a2;
    v7 = SleepstudyHelperCreateBlockerFromDevice(a1, &v14, a3, (__int64 *)&v13);
    v5 = v13;
    v10 = v7;
    if ( v7 >= 0 )
    {
      v10 = SleepstudyHelperBuildBlocker(v13, &v15, v8, v9);
      if ( v10 >= 0 )
      {
        v11 = v15;
LABEL_16:
        *a4 = v11;
        return (unsigned int)v10;
      }
      v4 = v15;
    }
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v5 )
    SleepstudyHelperDestroyBlockerBuilder(v5);
  if ( v4 )
    SleepstudyHelperDestroyBlocker(v4);
  if ( v10 == -1073741637 )
  {
    v11 = (PKSPIN_LOCK)&unk_140F0A850;
    v10 = 0;
    goto LABEL_16;
  }
  return (unsigned int)v10;
}

/*
 * XREFs of SleepstudyHelper_RegisterPdoWithParentGuid @ 0x1407EA0D0
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperDestroyBlocker @ 0x1404955B0 (SleepstudyHelperDestroyBlocker.c)
 *     SleepstudyHelperCreateBlockerFromDevice @ 0x140A8FC90 (SleepstudyHelperCreateBlockerFromDevice.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A90440 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140A90850 (SleepstudyHelperDestroyBlockerBuilder.c)
 */

__int64 __fastcall SleepstudyHelper_RegisterPdoWithParentGuid(__int64 a1, __int128 *a2, __int64 a3, _QWORD *a4)
{
  KSPIN_LOCK *v4; // rsi
  __int64 v5; // rdi
  int v7; // eax
  int v8; // ebx
  void *v9; // rax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+28h] [rbp-20h] BYREF
  void *v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v13 = 0LL;
  v11 = 0LL;
  if ( a1 && a3 && a4 )
  {
    v12 = *a2;
    v7 = SleepstudyHelperCreateBlockerFromDevice(a1, &v12, a3, &v11);
    v5 = v11;
    v8 = v7;
    if ( v7 >= 0 )
    {
      v8 = SleepstudyHelperBuildBlocker(v11, &v13);
      if ( v8 >= 0 )
      {
        v9 = v13;
LABEL_15:
        *a4 = v9;
        return (unsigned int)v8;
      }
      v4 = (KSPIN_LOCK *)v13;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v5 )
    SleepstudyHelperDestroyBlockerBuilder(v5);
  if ( v4 )
    SleepstudyHelperDestroyBlocker(v4);
  if ( v8 == -1073741637 )
  {
    v9 = &unk_140F0A850;
    v8 = 0;
    goto LABEL_15;
  }
  return (unsigned int)v8;
}

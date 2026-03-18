/*
 * XREFs of SleepstudyHelper_RegisterComponentEx @ 0x140B3D0C0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140257660 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x14043D400 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     SleepstudyHelperDestroyBlocker @ 0x14049BA60 (SleepstudyHelperDestroyBlocker.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A89550 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140A89960 (SleepstudyHelperDestroyBlockerBuilder.c)
 */

__int64 __fastcall SleepstudyHelper_RegisterComponentEx(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int64 **a5)
{
  unsigned __int64 **v5; // r14
  KSPIN_LOCK *v6; // rsi
  __int64 *v7; // rdi
  __int128 v8; // xmm1
  int v9; // eax
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  int v12; // ebx
  __int64 *v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+38h] [rbp-28h] BYREF
  __int128 v16; // [rsp+48h] [rbp-18h] BYREF
  PKSPIN_LOCK v17; // [rsp+80h] [rbp+20h] BYREF

  v5 = a5;
  v6 = 0LL;
  v7 = 0LL;
  v17 = 0LL;
  v14 = 0LL;
  if ( a1 && a4 && a5 )
  {
    v8 = *a3;
    v16 = *a2;
    v15 = v8;
    v9 = SleepstudyHelperCreateBlockerFromGuid(a1, &v16, &v15, a4, 0, (__int64 *)&v14);
    v7 = v14;
    v12 = v9;
    if ( v9 >= 0 )
    {
      v12 = SleepstudyHelperBuildBlocker(v14, &v17, v10, v11);
      if ( v12 >= 0 )
      {
        *v5 = v17;
        goto LABEL_9;
      }
      v6 = v17;
    }
  }
  else
  {
    v12 = -1073741811;
  }
  if ( v7 )
    SleepstudyHelperDestroyBlockerBuilder(v7);
  if ( v6 )
    SleepstudyHelperDestroyBlocker(v6);
LABEL_9:
  if ( (unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() && v12 == -1073741637 )
  {
    v12 = 0;
    *v5 = PsAltSystemCallRegistrationLock.Spare35;
  }
  return (unsigned int)v12;
}

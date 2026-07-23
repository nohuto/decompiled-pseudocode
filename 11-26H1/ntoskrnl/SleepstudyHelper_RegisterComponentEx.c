/*
 * XREFs of SleepstudyHelper_RegisterComponentEx @ 0x140B77D80
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x14042FCB0 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     SleepstudyHelperDestroyBlocker @ 0x1404955B0 (SleepstudyHelperDestroyBlocker.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A90440 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140A90850 (SleepstudyHelperDestroyBlockerBuilder.c)
 */

__int64 __fastcall SleepstudyHelper_RegisterComponentEx(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        __int64 a4,
        PKSPIN_LOCK *a5)
{
  PKSPIN_LOCK *v5; // r14
  KSPIN_LOCK *v6; // rsi
  __int64 *v7; // rdi
  __int128 v8; // xmm1
  int v9; // eax
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  int v12; // ebx
  PKSPIN_LOCK v13; // rax
  __int64 *v15; // [rsp+30h] [rbp-30h] BYREF
  __int128 v16; // [rsp+38h] [rbp-28h] BYREF
  __int128 v17; // [rsp+48h] [rbp-18h] BYREF
  PKSPIN_LOCK v18; // [rsp+80h] [rbp+20h] BYREF

  v5 = a5;
  v6 = 0LL;
  v7 = 0LL;
  v18 = 0LL;
  v15 = 0LL;
  if ( a1 && a4 && a5 )
  {
    v8 = *a3;
    v17 = *a2;
    v16 = v8;
    v9 = SleepstudyHelperCreateBlockerFromGuid(a1, &v17, &v16, a4, 0, (__int64 *)&v15);
    v7 = v15;
    v12 = v9;
    if ( v9 >= 0 )
    {
      v12 = SleepstudyHelperBuildBlocker(v15, &v18, v10, v11);
      if ( v12 >= 0 )
      {
        v13 = v18;
LABEL_15:
        *v5 = v13;
        return (unsigned int)v12;
      }
      v6 = v18;
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
  if ( v12 == -1073741637 )
  {
    v13 = (PKSPIN_LOCK)&unk_140F0A850;
    v12 = 0;
    goto LABEL_15;
  }
  return (unsigned int)v12;
}

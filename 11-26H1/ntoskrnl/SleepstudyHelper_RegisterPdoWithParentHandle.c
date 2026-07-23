/*
 * XREFs of SleepstudyHelper_RegisterPdoWithParentHandle @ 0x1407EA1A0
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperDestroyBlocker @ 0x1404955B0 (SleepstudyHelperDestroyBlocker.c)
 *     SleepstudyHelperCreateBlockerFromDevice @ 0x140A8FC90 (SleepstudyHelperCreateBlockerFromDevice.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A90440 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140A90850 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SleepstudyHelperGetBlockerGuid @ 0x140AD8490 (SleepstudyHelperGetBlockerGuid.c)
 */

__int64 __fastcall SleepstudyHelper_RegisterPdoWithParentHandle(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  KSPIN_LOCK *v4; // rsi
  __int64 v5; // rdi
  int BlockerGuid; // ebx
  int v10; // eax
  void *v11; // rax
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v14[3]; // [rsp+28h] [rbp-30h] BYREF
  void *v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v15 = 0LL;
  v13 = 0LL;
  v14[0] = 0LL;
  if ( a1 && a2 && a3 && a4 )
  {
    BlockerGuid = SleepstudyHelperGetBlockerGuid(a2, v14);
    if ( BlockerGuid < 0 )
      goto LABEL_15;
    v10 = SleepstudyHelperCreateBlockerFromDevice(a1, v14, a3, &v13);
    v5 = v13;
    BlockerGuid = v10;
    if ( v10 >= 0 )
    {
      BlockerGuid = SleepstudyHelperBuildBlocker(v13, &v15);
      if ( BlockerGuid >= 0 )
      {
        v11 = v15;
LABEL_17:
        *a4 = v11;
        return (unsigned int)BlockerGuid;
      }
      v4 = (KSPIN_LOCK *)v15;
    }
  }
  else
  {
    BlockerGuid = -1073741811;
  }
  if ( v5 )
    SleepstudyHelperDestroyBlockerBuilder(v5);
  if ( v4 )
    SleepstudyHelperDestroyBlocker(v4);
LABEL_15:
  if ( BlockerGuid == -1073741637 )
  {
    v11 = &unk_140F0A850;
    BlockerGuid = 0;
    goto LABEL_17;
  }
  return (unsigned int)BlockerGuid;
}

/*
 * XREFs of TppIsWorkerThread @ 0x18007DF00
 * Callers:
 *     TpCheckTerminateWorker @ 0x18007DE70 (TpCheckTerminateWorker.c)
 * Callees:
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwQueryInformationThread @ 0x18015F2E0 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x18015F5C0 (ZwDuplicateObject.c)
 */

bool __fastcall TppIsWorkerThread(HANDLE SourceHandle)
{
  struct _TEB *v1; // rbx
  bool v2; // zf
  bool v3; // bl
  __int128 v5; // [rsp+40h] [rbp-40h] BYREF
  __int128 ThreadInformation; // [rsp+50h] [rbp-30h] BYREF
  __int128 v7; // [rsp+60h] [rbp-20h]
  __int64 v8; // [rsp+70h] [rbp-10h]
  int v9; // [rsp+78h] [rbp-8h]
  HANDLE TargetHandle; // [rsp+90h] [rbp+10h] BYREF
  __int64 v11; // [rsp+98h] [rbp+18h] BYREF

  v11 = 0LL;
  TargetHandle = 0LL;
  v8 = 0LL;
  v9 = 0;
  v5 = 0LL;
  ThreadInformation = 0LL;
  v7 = 0LL;
  v1 = NtCurrentTeb();
  if ( !SourceHandle )
    return v1->ThreadPoolData != 0LL;
  if ( ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         SourceHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0x818u,
         0,
         0) < 0 )
    return 0;
  if ( ZwQueryInformationThread(TargetHandle, ThreadBasicInformation, &ThreadInformation, 0x30u, 0LL) >= 0
    && v1->ClientId.UniqueProcess == (void *)v7 )
  {
    if ( v1->ClientId.UniqueThread == (void *)*((_QWORD *)&v7 + 1) )
    {
      v2 = v1->ThreadPoolData == 0LL;
      goto LABEL_9;
    }
    *(_QWORD *)&v5 = &v11;
    *((_QWORD *)&v5 + 1) = 0x800001778LL;
    if ( ZwQueryInformationThread(TargetHandle, ThreadTebInformation, &v5, 0x10u, 0LL) >= 0 )
    {
      v2 = v11 == 0;
LABEL_9:
      v3 = !v2;
      goto LABEL_10;
    }
  }
  v3 = 0;
LABEL_10:
  if ( TargetHandle )
    NtClose(TargetHandle);
  return v3;
}

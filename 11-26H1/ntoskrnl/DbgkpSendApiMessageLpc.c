/*
 * XREFs of DbgkpSendApiMessageLpc @ 0x140ACD5FC
 * Callers:
 *     DbgkForwardException @ 0x1409CEF30 (DbgkForwardException.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     DbgkpResumeProcess @ 0x1409CEF0C (DbgkpResumeProcess.c)
 *     DbgkpSuspendProcess @ 0x1409CF678 (DbgkpSuspendProcess.c)
 *     LpcSendWaitReceivePort @ 0x140ACD730 (LpcSendWaitReceivePort.c)
 */

__int64 __fastcall DbgkpSendApiMessageLpc(__int64 a1, int a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v4; // si
  __int64 Process; // rbp
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  unsigned int v12; // edi
  __int64 v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v23; // [rsp+30h] [rbp-2E8h] BYREF
  _BYTE v24[688]; // [rsp+40h] [rbp-2D8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a3;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( a3 )
    v4 = DbgkpSuspendProcess((__int64)CurrentThread->ApcState.Process);
  *(_DWORD *)(a1 + 44) = 259;
  v23 = 688LL;
  v8 = LpcSendWaitReceivePort(a2, 0x20000, a1, (unsigned int)v24, (__int64)&v23, 0LL);
  v12 = v8;
  if ( v8 == 192 )
  {
    v12 = -1073741749;
  }
  else if ( v8 >= 0 )
  {
    v13 = 2LL;
    v14 = v24;
    v9 = 128LL;
    do
    {
      v15 = v14[1];
      *(_OWORD *)a1 = *v14;
      v16 = v14[2];
      *(_OWORD *)(a1 + 16) = v15;
      v17 = v14[3];
      *(_OWORD *)(a1 + 32) = v16;
      v18 = v14[4];
      *(_OWORD *)(a1 + 48) = v17;
      v19 = v14[5];
      *(_OWORD *)(a1 + 64) = v18;
      v20 = v14[6];
      *(_OWORD *)(a1 + 80) = v19;
      v21 = v14[7];
      v14 += 8;
      *(_OWORD *)(a1 + 96) = v20;
      a1 += 128LL;
      *(_OWORD *)(a1 - 16) = v21;
      --v13;
    }
    while ( v13 );
    *(_OWORD *)a1 = *v14;
  }
  if ( v4 )
    DbgkpResumeProcess(Process, v9, v10, v11);
  return v12;
}

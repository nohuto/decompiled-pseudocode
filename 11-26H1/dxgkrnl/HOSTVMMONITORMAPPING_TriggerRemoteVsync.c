/*
 * XREFs of HOSTVMMONITORMAPPING_TriggerRemoteVsync @ 0x14003C5F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x14003CDA8 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     HOSTVMMONITORMAPPING::IterateList__lambda_0da004af17445c1fb3ec3ba27de1a08b___ @ 0x140080CD4 (HOSTVMMONITORMAPPING--IterateList__lambda_0da004af17445c1fb3ec3ba27de1a08b___.c)
 *     _lambda_a565eb4f19e28a5292d2c438ee0d1898_::_lambda_a565eb4f19e28a5292d2c438ee0d1898_ @ 0x140081474 (_lambda_a565eb4f19e28a5292d2c438ee0d1898_--_lambda_a565eb4f19e28a5292d2c438ee0d1898_.c)
 */

void __fastcall HOSTVMMONITORMAPPING_TriggerRemoteVsync(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  bool v10; // zf
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  int v13; // edx
  int v14; // r8d
  _OWORD v15[2]; // [rsp+60h] [rbp-49h] BYREF
  char v16; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v17[8]; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v18; // [rsp+A8h] [rbp-1h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp+7h] BYREF
  char v20; // [rsp+C8h] [rbp+1Fh]
  __int64 v21; // [rsp+110h] [rbp+67h] BYREF
  int v22; // [rsp+118h] [rbp+6Fh] BYREF
  int v23; // [rsp+120h] [rbp+77h] BYREF
  __int64 v24; // [rsp+128h] [rbp+7Fh] BYREF

  if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2650;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          2650,
          v13,
          v14,
          0LL,
          2,
          -1,
          (__int64)L"m_pGlobal != NULL",
          2650LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v8 = *(_QWORD *)&DXGGLOBAL::m_pGlobal;
  v24 = a1;
  v21 = a4;
  v22 = a3;
  v9 = *(_QWORD *)&DXGGLOBAL::m_pGlobal + 305344LL;
  v23 = a2;
  v18 = *(_QWORD *)&DXGGLOBAL::m_pGlobal + 305344LL;
  v20 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 305344LL), &LockHandle);
  *(_QWORD *)(v9 + 8) = KeGetCurrentThread();
  v10 = *(_BYTE *)(v8 + 305360) == 0;
  v20 = 1;
  if ( v10 )
  {
    v11 = (_OWORD *)lambda_a565eb4f19e28a5292d2c438ee0d1898_::_lambda_a565eb4f19e28a5292d2c438ee0d1898_(
                      (unsigned int)&v16,
                      (unsigned int)&v24,
                      (unsigned int)&v23,
                      (unsigned int)&v22,
                      (__int64)&v21);
    v12 = v11[1];
    v15[0] = *v11;
    v15[1] = v12;
    HOSTVMMONITORMAPPING::IterateList__lambda_0da004af17445c1fb3ec3ba27de1a08b___(v8 + 305328, v15);
    if ( v20 )
    {
      v20 = 0;
      *(_QWORD *)(v18 + 8) = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
  else
  {
    DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v17);
  }
}

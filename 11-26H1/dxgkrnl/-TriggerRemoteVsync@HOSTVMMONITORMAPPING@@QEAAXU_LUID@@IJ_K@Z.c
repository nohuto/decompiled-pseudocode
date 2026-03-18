/*
 * XREFs of ?TriggerRemoteVsync@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IJ_K@Z @ 0x14003E84C
 * Callers:
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14003E610 (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x140066AE8 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x14003CDA8 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     HOSTVMMONITORMAPPING::IterateList__lambda_0da004af17445c1fb3ec3ba27de1a08b___ @ 0x140080CD4 (HOSTVMMONITORMAPPING--IterateList__lambda_0da004af17445c1fb3ec3ba27de1a08b___.c)
 *     _lambda_a565eb4f19e28a5292d2c438ee0d1898_::_lambda_a565eb4f19e28a5292d2c438ee0d1898_ @ 0x140081474 (_lambda_a565eb4f19e28a5292d2c438ee0d1898_--_lambda_a565eb4f19e28a5292d2c438ee0d1898_.c)
 */

void HOSTVMMONITORMAPPING::TriggerRemoteVsync(KSPIN_LOCK *this, struct _LUID a2, int a3, int a4, ...)
{
  char *v4; // rbx
  bool v6; // zf
  _OWORD *v7; // rax
  __int128 v8; // xmm1
  _OWORD v9[2]; // [rsp+38h] [rbp-31h] BYREF
  char v10; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v11[8]; // [rsp+78h] [rbp+Fh] BYREF
  char *v12; // [rsp+80h] [rbp+17h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp+1Fh] BYREF
  char v14; // [rsp+A0h] [rbp+37h]
  struct _LUID v15; // [rsp+D0h] [rbp+67h] BYREF
  int v16; // [rsp+D8h] [rbp+6Fh] BYREF
  int v17; // [rsp+E0h] [rbp+77h] BYREF
  va_list va; // [rsp+E8h] [rbp+7Fh] BYREF

  va_start(va, a4);
  v17 = a4;
  v16 = a3;
  v15 = a2;
  v4 = (char *)(this + 2);
  v14 = 0;
  v12 = (char *)(this + 2);
  KeAcquireInStackQueuedSpinLock(this + 2, &LockHandle);
  *((_QWORD *)v4 + 1) = KeGetCurrentThread();
  v6 = *((_BYTE *)this + 32) == 0;
  v14 = 1;
  if ( v6 )
  {
    v7 = (_OWORD *)lambda_a565eb4f19e28a5292d2c438ee0d1898_::_lambda_a565eb4f19e28a5292d2c438ee0d1898_(
                     (unsigned int)&v10,
                     (unsigned int)&v15,
                     (unsigned int)&v16,
                     (unsigned int)&v17,
                     (__int64)va);
    v8 = v7[1];
    v9[0] = *v7;
    v9[1] = v8;
    HOSTVMMONITORMAPPING::IterateList__lambda_0da004af17445c1fb3ec3ba27de1a08b___(this, v9);
    if ( v14 )
    {
      v14 = 0;
      *((_QWORD *)v12 + 1) = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
  else
  {
    DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v11);
  }
}

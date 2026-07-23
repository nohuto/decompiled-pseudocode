/*
 * XREFs of TtmpSessionWorker @ 0x1407ED0C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     TtmiSessionDeviceListWorker @ 0x1407EAE10 (TtmiSessionDeviceListWorker.c)
 *     TtmpActivateSessionWorker @ 0x1407EC814 (TtmpActivateSessionWorker.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x1407ECA28 (TtmpDereferenceSessionMaybeLast.c)
 *     TtmpInitiateModernStandbyTransition @ 0x1407ECB94 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpSessionPowerControl @ 0x1407ED02C (TtmpSessionPowerControl.c)
 *     TtmiLogSessionDeactivate @ 0x1407EFE50 (TtmiLogSessionDeactivate.c)
 *     TtmiLogSessionWorkerPass @ 0x1407F06D0 (TtmiLogSessionWorkerPass.c)
 *     TtmiLogSessionWorkerStart @ 0x1407F0794 (TtmiLogSessionWorkerStart.c)
 *     TtmiLogSessionWorkerStop @ 0x1407F0824 (TtmiLogSessionWorkerStop.c)
 *     TtmiSessionTerminalListWorker @ 0x1407F1C68 (TtmiSessionTerminalListWorker.c)
 *     TtmpAcquireSessionLock @ 0x1409F68CC (TtmpAcquireSessionLock.c)
 */

__int64 __fastcall TtmpSessionWorker(unsigned int *a1)
{
  unsigned int v2; // r14d
  unsigned int v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // r15d
  __int64 v6; // rdx
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ebp
  char v10; // bl
  unsigned int v11; // ebp
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // eax
  unsigned int v15; // r8d
  char v17; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 v18; // [rsp+58h] [rbp+10h] BYREF

  v18 = 0;
  v17 = 0;
  TtmpAcquireSessionLock();
  v2 = *a1;
  TtmiLogSessionWorkerStart(*a1);
  v3 = 0;
  a1[1] = a1[1] & 0xFFFFFFFC | 2;
  v4 = a1[56];
  *((_QWORD *)a1 + 29) = KeGetCurrentThread();
  v5 = 1;
  for ( a1[56] = 0; ; a1[56] = 0 )
  {
    v8 = v4 & 7;
    if ( !v8 )
      break;
    TtmiLogSessionWorkerPass(v2, v8, v5);
    if ( (v8 & 2) != 0 )
    {
      TtmiSessionTerminalListWorker(a1, &v17, &v18);
      v7 = v8 & 0xFFFFFFF9 ^ (v8 & 4 | (4 * v17) & 4);
      v8 = v7 & 0xFFFFFFFE ^ ((unsigned __int8)v7 | v18) & 1;
    }
    v9 = v8;
    v10 = v8 & 0xFB;
    v11 = v9 >> 2;
    if ( (_BYTE)v11 )
    {
      if ( (a1[1] & 0x10) != 0 )
      {
        v3 = TtmpActivateSessionWorker((__int64)a1, v6);
        if ( v3 != 259 )
        {
          v12 = a1[1];
          if ( (v12 & 0x1000) != 0 )
          {
            a1[1] = v12 & 0xFFFFEFFF;
LABEL_10:
            TtmiSessionDeviceListWorker(a1);
            goto LABEL_11;
          }
        }
      }
    }
    if ( (v10 & 1) != 0 )
      goto LABEL_10;
LABEL_11:
    if ( (_BYTE)v11 )
    {
      v13 = a1[1];
      if ( (v13 & 0x20) != 0 )
      {
        if ( (v13 & 4) != 0 )
          goto LABEL_14;
        if ( (v13 & 0x180) == 0 )
        {
          if ( (v13 & 8) != 0 )
          {
            a1[1] = v13 & 0xFFFFFFF7;
            TtmiLogSessionDeactivate();
          }
          v14 = a1[1];
          if ( (v14 & 0x400) != 0 )
          {
            if ( (v14 & 0x200) == 0 )
            {
              TtmpInitiateModernStandbyTransition((__int64)a1, 1, a1[4]);
              v14 = a1[1] | 0x200;
            }
            a1[1] = v14 & 0xFFFFFFDF;
LABEL_14:
            v3 = 0;
            goto LABEL_22;
          }
          if ( (v14 & 0x40) == 0 )
          {
            v15 = a1[4];
            a1[1] = v14 | 0x40;
            TtmpSessionPowerControl((int *)a1, 0, v15);
          }
        }
        v3 = 259;
      }
    }
LABEL_22:
    v4 = a1[56];
    ++v5;
  }
  a1[1] &= ~2u;
  *((_QWORD *)a1 + 29) = 0LL;
  ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback);
  KeLeaveCriticalRegion();
  TtmpDereferenceSessionMaybeLast((volatile signed __int32 *)a1);
  return TtmiLogSessionWorkerStop(v2, v3);
}

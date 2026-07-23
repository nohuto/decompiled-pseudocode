/*
 * XREFs of PsReturnSharedPoolQuota @ 0x1409B8E10
 * Callers:
 *     PspJobDelete @ 0x1406187E0 (PspJobDelete.c)
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObpIncrementHandleCountEx @ 0x14090A400 (ObpIncrementHandleCountEx.c)
 *     AlpcMessageDestroyProcedure @ 0x1409B8750 (AlpcMessageDestroyProcedure.c)
 *     PspFreeRateControl @ 0x1409B8C78 (PspFreeRateControl.c)
 *     RtlpFreeAtom @ 0x1409B8DD4 (RtlpFreeAtom.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x1403C7360 (PspReturnResourceQuota.c)
 *     PspReturnQuota @ 0x1403C7860 (PspReturnQuota.c)
 *     PspRemoveQuotaBlock @ 0x1409B9030 (PspRemoveQuotaBlock.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PsReturnSharedPoolQuota(char *P, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r8
  char *v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r8

  if ( P != (char *)1 )
  {
    if ( a2 )
      PspReturnQuota((__int64 *)P, 0LL, 1u, a2);
    if ( a3 )
      PspReturnQuota((__int64 *)P, 0LL, 0, a3);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 128, 0xFFFFFFFF) == 1 )
    {
      if ( (stru_140FC11F0.SchedulerApcFill3[40] & 3) != 1 )
        goto LABEL_14;
      v5 = *((_QWORD *)P + 10);
      v6 = *((_QWORD *)P + 8);
      if ( v6 + *((_QWORD *)P + 9) )
      {
        if ( v5 )
        {
          v7 = _InterlockedExchange64((volatile __int64 *)P + 9, 0LL);
          v6 = _InterlockedExchange64((volatile __int64 *)P + 8, 0LL) + v7;
        }
        if ( v6 )
          goto LABEL_13;
      }
      else
      {
        v6 = 0LL;
      }
      if ( !v5 )
      {
LABEL_14:
        if ( (stru_140FC11F0.SchedulerApcFill3[48] & 3) != 1 )
          goto LABEL_20;
        v8 = *((_QWORD *)P + 26);
        v9 = *((_QWORD *)P + 24);
        if ( v9 + *((_QWORD *)P + 25) )
        {
          if ( v8 )
          {
            v10 = _InterlockedExchange64((volatile __int64 *)P + 25, 0LL);
            v9 = _InterlockedExchange64((volatile __int64 *)P + 24, 0LL) + v10;
          }
          if ( v9 )
            goto LABEL_19;
        }
        else
        {
          v9 = 0LL;
        }
        if ( !v8 )
        {
LABEL_20:
          if ( (stru_140FC11F0.SchedulerApcFill3[56] & 3) != 1 )
            goto LABEL_26;
          v11 = *((_QWORD *)P + 42);
          v12 = *((_QWORD *)P + 40);
          if ( v12 + *((_QWORD *)P + 41) )
          {
            if ( v11 )
            {
              v13 = _InterlockedExchange64((volatile __int64 *)P + 41, 0LL);
              v12 = _InterlockedExchange64((volatile __int64 *)P + 40, 0LL) + v13;
            }
            if ( v12 )
              goto LABEL_25;
          }
          else
          {
            v12 = 0LL;
          }
          if ( !v11 )
          {
LABEL_26:
            v14 = P + 384;
            if ( (stru_140FC11F0.SchedulerApcFill4[64] & 3) != 1 )
            {
LABEL_32:
              PspRemoveQuotaBlock(P, v14);
              ExFreePoolWithTag(P, 0);
              return;
            }
            v15 = *((_QWORD *)P + 58);
            v16 = *((_QWORD *)P + 56);
            if ( v16 + *((_QWORD *)P + 57) )
            {
              if ( v15 )
              {
                v17 = _InterlockedExchange64((volatile __int64 *)P + 57, 0LL);
                v16 = _InterlockedExchange64((volatile __int64 *)P + 56, 0LL) + v17;
              }
              if ( v16 )
              {
LABEL_31:
                PspReturnResourceQuota(3u, (__int64)v14, v16, v15 != 0);
                goto LABEL_32;
              }
            }
            else
            {
              v16 = 0LL;
            }
            if ( !v15 )
              goto LABEL_32;
            goto LABEL_31;
          }
LABEL_25:
          PspReturnResourceQuota(2u, (__int64)(P + 256), v12, v11 != 0);
          goto LABEL_26;
        }
LABEL_19:
        PspReturnResourceQuota(1u, (__int64)(P + 128), v9, v8 != 0);
        goto LABEL_20;
      }
LABEL_13:
      PspReturnResourceQuota(0, (__int64)P, v6, v5 != 0);
      goto LABEL_14;
    }
  }
}

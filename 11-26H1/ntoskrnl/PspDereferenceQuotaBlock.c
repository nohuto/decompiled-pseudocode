/*
 * XREFs of PspDereferenceQuotaBlock @ 0x1408FFC10
 * Callers:
 *     ObSetSecurityDescriptorInfo @ 0x1408FCFF0 (ObSetSecurityDescriptorInfo.c)
 *     SeDefaultObjectMethod @ 0x1408FD750 (SeDefaultObjectMethod.c)
 *     ObpFreeObject @ 0x1408FF7D0 (ObpFreeObject.c)
 *     PspDereferenceQuota @ 0x140AF422C (PspDereferenceQuota.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x1403C7360 (PspReturnResourceQuota.c)
 *     PspRemoveQuotaBlock @ 0x1409B9030 (PspRemoveQuotaBlock.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PspDereferenceQuotaBlock(char *P)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r8
  char *v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r8

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 128, 0xFFFFFFFF) == 1 )
  {
    if ( (stru_140FC11F0.SchedulerApcFill3[40] & 3) != 1 )
      goto LABEL_8;
    v2 = *((_QWORD *)P + 10);
    v3 = *((_QWORD *)P + 8);
    if ( v3 + *((_QWORD *)P + 9) )
    {
      if ( v2 )
      {
        v4 = _InterlockedExchange64((volatile __int64 *)P + 9, 0LL);
        v3 = _InterlockedExchange64((volatile __int64 *)P + 8, 0LL) + v4;
      }
      if ( v3 )
        goto LABEL_7;
    }
    else
    {
      v3 = 0LL;
    }
    if ( !v2 )
    {
LABEL_8:
      if ( (stru_140FC11F0.SchedulerApcFill3[48] & 3) != 1 )
        goto LABEL_14;
      v5 = *((_QWORD *)P + 26);
      v6 = *((_QWORD *)P + 24);
      if ( v6 + *((_QWORD *)P + 25) )
      {
        if ( v5 )
        {
          v7 = _InterlockedExchange64((volatile __int64 *)P + 25, 0LL);
          v6 = _InterlockedExchange64((volatile __int64 *)P + 24, 0LL) + v7;
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
        if ( (stru_140FC11F0.SchedulerApcFill3[56] & 3) != 1 )
          goto LABEL_20;
        v8 = *((_QWORD *)P + 42);
        v9 = *((_QWORD *)P + 40);
        if ( v9 + *((_QWORD *)P + 41) )
        {
          if ( v8 )
          {
            v10 = _InterlockedExchange64((volatile __int64 *)P + 41, 0LL);
            v9 = _InterlockedExchange64((volatile __int64 *)P + 40, 0LL) + v10;
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
          v11 = P + 384;
          if ( (stru_140FC11F0.SchedulerApcFill4[64] & 3) != 1 )
          {
LABEL_26:
            PspRemoveQuotaBlock(P, v11);
            ExFreePoolWithTag(P, 0);
            return;
          }
          v12 = *((_QWORD *)P + 58);
          v13 = *((_QWORD *)P + 56);
          if ( v13 + *((_QWORD *)P + 57) )
          {
            if ( v12 )
            {
              v14 = _InterlockedExchange64((volatile __int64 *)P + 57, 0LL);
              v13 = _InterlockedExchange64((volatile __int64 *)P + 56, 0LL) + v14;
            }
            if ( v13 )
            {
LABEL_25:
              PspReturnResourceQuota(3u, (__int64)v11, v13, v12 != 0);
              goto LABEL_26;
            }
          }
          else
          {
            v13 = 0LL;
          }
          if ( !v12 )
            goto LABEL_26;
          goto LABEL_25;
        }
LABEL_19:
        PspReturnResourceQuota(2u, (__int64)(P + 256), v9, v8 != 0);
        goto LABEL_20;
      }
LABEL_13:
      PspReturnResourceQuota(1u, (__int64)(P + 128), v6, v5 != 0);
      goto LABEL_14;
    }
LABEL_7:
    PspReturnResourceQuota(0, (__int64)P, v3, v2 != 0);
    goto LABEL_8;
  }
}

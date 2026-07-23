/*
 * XREFs of PopFanReadFanNoiseInfo @ 0x140B1C7E8
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PopFanUpdateStatistics @ 0x140B6BA6C (PopFanUpdateStatistics.c)
 */

__int64 __fastcall PopFanReadFanNoiseInfo(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v5; // ebx
  int v6; // esi
  int v7; // r12d
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  unsigned __int8 *i; // rdi
  int v14; // [rsp+30h] [rbp-88h] BYREF
  int v15; // [rsp+34h] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+40h] [rbp-78h] BYREF
  int *v17; // [rsp+60h] [rbp-58h]
  __int64 v18; // [rsp+68h] [rbp-50h]
  int *v19; // [rsp+70h] [rbp-48h]
  __int64 v20; // [rsp+78h] [rbp-40h]

  v5 = 0;
  v6 = 0;
  v7 = a3;
  PopAcquireRwLockShared(&PopPolicyDeviceLock, a2, a3, a4);
  for ( i = *(unsigned __int8 **)&PpmIdlePolicyLock.ResourceIndex;
        i != &PpmIdlePolicyLock.ResourceIndex;
        i = *(unsigned __int8 **)i )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)i + 50, v9, v10, v11);
    if ( i[88] )
    {
      if ( !v6 )
      {
        if ( a1 == 84 )
        {
          if ( v7 != 160 )
            return (unsigned int)-1073741811;
          *(_DWORD *)a2 = *((_DWORD *)i + 32) + 2;
          PopFanUpdateStatistics(i);
          memmove((void *)(a2 + 8), i + 216, 8LL * (unsigned int)(*((_DWORD *)i + 32) + 2));
        }
        else
        {
          if ( a1 != 85 )
            return (unsigned int)-1073741637;
          if ( v7 != 88 )
            return (unsigned int)-1073741811;
          *(_DWORD *)a2 = *((_DWORD *)i + 32);
          *(_OWORD *)(a2 + 4) = *(_OWORD *)(i + 132);
          *(_OWORD *)(a2 + 20) = *(_OWORD *)(i + 148);
          *(_OWORD *)(a2 + 36) = *(_OWORD *)(i + 164);
          *(_OWORD *)(a2 + 52) = *(_OWORD *)(i + 180);
          *(_DWORD *)(a2 + 68) = *((_DWORD *)i + 49);
          *(_OWORD *)(a2 + 72) = *((_OWORD *)i + 7);
        }
      }
      ++v6;
    }
    PopReleaseRwLock((struct _KTHREAD *)(i + 400));
  }
  PopReleaseRwLock((struct _KTHREAD *)&PopPolicyDeviceLock);
  if ( v6 != 1 )
  {
    if ( (unsigned int)dword_140E07560 > 2 )
    {
      v14 = a1;
      v18 = 4LL;
      v17 = &v14;
      v20 = 4LL;
      v19 = &v15;
      v15 = v6;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07560,
        (unsigned __int8 *)byte_14004F479,
        0LL,
        0LL,
        4u,
        &v16);
    }
    return (unsigned int)-1073741823;
  }
  return v5;
}

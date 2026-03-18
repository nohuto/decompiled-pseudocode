/*
 * XREFs of PopFanReadFanNoiseInfo @ 0x140B1A538
 * Callers:
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     PopFanUpdateStatistics @ 0x140B68ADC (PopFanUpdateStatistics.c)
 */

__int64 __fastcall PopFanReadFanNoiseInfo(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v5; // ebx
  int v6; // esi
  int v7; // r12d
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  int *i; // rdi
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
  PopAcquireRwLockShared((volatile signed __int64 *)&unk_140F10E30.Header.Lock, a2, a3, a4);
  for ( i = *(int **)((char *)&stru_140F10828.116 + 4); i != &stru_140F10828.MiscFlags + 1; i = *(int **)i )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)i + 50, v9, v10, v11);
    if ( *((_BYTE *)i + 88) )
    {
      if ( !v6 )
      {
        if ( a1 == 84 )
        {
          if ( v7 != 160 )
            return (unsigned int)-1073741811;
          *(_DWORD *)a2 = i[32] + 2;
          PopFanUpdateStatistics(i);
          memmove((void *)(a2 + 8), i + 54, 8LL * (unsigned int)(i[32] + 2));
        }
        else
        {
          if ( a1 != 85 )
            return (unsigned int)-1073741637;
          if ( v7 != 88 )
            return (unsigned int)-1073741811;
          *(_DWORD *)a2 = i[32];
          *(_OWORD *)(a2 + 4) = *(_OWORD *)(i + 33);
          *(_OWORD *)(a2 + 20) = *(_OWORD *)(i + 37);
          *(_OWORD *)(a2 + 36) = *(_OWORD *)(i + 41);
          *(_OWORD *)(a2 + 52) = *(_OWORD *)(i + 45);
          *(_DWORD *)(a2 + 68) = i[49];
          *(_OWORD *)(a2 + 72) = *((_OWORD *)i + 7);
        }
      }
      ++v6;
    }
    PopReleaseRwLock((struct _KTHREAD *)(i + 100));
  }
  PopReleaseRwLock(&unk_140F10E30);
  if ( v6 != 1 )
  {
    if ( (unsigned int)dword_140E07598 > 2 )
    {
      v14 = a1;
      v18 = 4LL;
      v17 = &v14;
      v20 = 4LL;
      v19 = &v15;
      v15 = v6;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07598,
        (unsigned __int8 *)word_14004E54A,
        0LL,
        0LL,
        4u,
        &v16);
    }
    return (unsigned int)-1073741823;
  }
  return v5;
}

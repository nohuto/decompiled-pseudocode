/*
 * XREFs of ?ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1401422F0
 * Callers:
 *     ndisCounterSetProviderCallback @ 0x14015CF10 (ndisCounterSetProviderCallback.c)
 * Callees:
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x14006E060 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall ndisPcwAddCounter(unsigned int a1, __int64 a2)
{
  size_t v4; // rbp
  __int64 Pool2; // rax
  _QWORD *v6; // rbx
  int ReferencesForConsumer; // edi
  __int64 v8; // rdx
  KLockThisExclusive v10; // [rsp+20h] [rbp-28h] BYREF

  v4 = **(unsigned __int16 **)(a2 + 8);
  Pool2 = ExAllocatePool2(256LL, (unsigned int)(v4 + 56), 2002994254LL);
  v6 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    ReferencesForConsumer = ndisPcwGetReferencesForConsumer(a1, a2, Pool2);
    if ( ReferencesForConsumer < 0 )
    {
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      v8 = *(_QWORD *)(a2 + 8);
      v6[4] = v6 + 7;
      *((_WORD *)v6 + 13) = v4;
      *((_WORD *)v6 + 12) = v4;
      memmove(v6 + 7, *(const void **)(v8 + 8), v4);
      v6[2] = *(_QWORD *)a2;
      *((_DWORD *)v6 + 2) = a1;
      KLockThisExclusive::KLockThisExclusive(&v10, &ndisPcwMutex);
      *v6 = ndisPcwConsumerList;
      ndisPcwConsumerList = v6;
      KLockHolder::~KLockHolder(&v10);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)ReferencesForConsumer;
}

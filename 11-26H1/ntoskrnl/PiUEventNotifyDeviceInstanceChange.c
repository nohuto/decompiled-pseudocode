/*
 * XREFs of PiUEventNotifyDeviceInstanceChange @ 0x140AEA684
 * Callers:
 *     PiUEventProcessEventWorker @ 0x1409D6560 (PiUEventProcessEventWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     PiUEventHashStringIntoBucket @ 0x1404B4FE4 (PiUEventHashStringIntoBucket.c)
 *     _wcsicmp @ 0x140536570 (_wcsicmp.c)
 *     PiUEventNotifyClient @ 0x14099A7E8 (PiUEventNotifyClient.c)
 *     PiUEventApplyAdditionalFilters @ 0x14099A920 (PiUEventApplyAdditionalFilters.c)
 */

__int64 __fastcall PiUEventNotifyDeviceInstanceChange(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // r12d
  int v4; // edx
  wchar_t *v5; // r13
  __int128 *v6; // r15
  unsigned int v7; // esi
  _QWORD **v8; // r14
  _QWORD *v9; // rbx
  __int64 v10; // rbp
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_DWORD *)(a1 + 96);
  v2 = 0;
  v12 = 0LL;
  v4 = v1 - 4;
  if ( !v4 || (unsigned int)(v4 - 6) <= 1 )
  {
    v5 = (wchar_t *)(a1 + 128);
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    v6 = &v12;
    *(_QWORD *)&v12 = (char *)&PiUEventDevInstanceClientList + 16 * (unsigned int)PiUEventHashStringIntoBucket(v5);
    v7 = 0;
    *((_QWORD *)&v12 + 1) = &unk_140F84470;
    do
    {
      v8 = *(_QWORD ***)v6;
      v9 = **(_QWORD ***)v6;
      while ( v9 != v8 )
      {
        v10 = (__int64)v9;
        v9 = (_QWORD *)*v9;
        if ( v7 || !wcsicmp(v5, *(const wchar_t **)(*(_QWORD *)(v10 + 24) + 16LL)) )
        {
          if ( (unsigned __int8)PiUEventApplyAdditionalFilters(a1, v10) )
            v2 = PiUEventNotifyClient(a1, v10);
        }
      }
      ++v7;
      v6 = (__int128 *)((char *)v6 + 8);
    }
    while ( v7 < 2 );
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  }
  return v2;
}

/*
 * XREFs of ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14047F5D0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140280DD0 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueWorker(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v2; // r8
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r15
  KSPIN_LOCK *v5; // rbp
  __int64 v6; // rdi
  KIRQL v7; // dl
  LARGE_INTEGER v8; // rbx
  unsigned __int64 v9; // rax
  LARGE_INTEGER PerformanceCounter; // rbx
  int v11; // r14d
  KIRQL v12; // al
  _QWORD *v13; // rcx
  int v14; // esi
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+8h] BYREF

  v1 = (_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 32) & 7;
  PerformanceFrequency.QuadPart = 0LL;
  v2 &= 0xFFFFFFFFFFFFFFFCuLL;
  LODWORD(v4) = 100;
  v5 = (KSPIN_LOCK *)(v2 + 768);
  v6 = v2 + 24 * ((8 * (*(_DWORD *)(a1 + 40) & 3u)) | v3);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 768));
  --*(_DWORD *)(v6 + 16);
  ++*(_DWORD *)(v6 + 20);
LABEL_2:
  KeReleaseSpinLock(v5, v7);
  v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
  SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(v1[4] & 0xFFFFFFFFFFFFFFF8uLL, (unsigned __int64)(v1 - 5), 0);
  v9 = 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v8.QuadPart) / PerformanceFrequency.QuadPart;
  if ( v9 >= (unsigned int)v4 )
    LODWORD(v9) = v4;
  PerformanceCounter.QuadPart = 0LL;
  v11 = 0;
  v4 = (unsigned int)v9;
  while ( 1 )
  {
LABEL_5:
    v12 = KeAcquireSpinLockRaiseToDpc(v5);
    v13 = *(_QWORD **)(v6 + 8);
    v7 = v12;
    if ( *v13 )
    {
      if ( v13 == (_QWORD *)v6 )
      {
        v1 = 0LL;
      }
      else
      {
        v1 = *(_QWORD **)v6;
        *(_QWORD *)v6 = **(_QWORD **)v6;
        if ( v1 == v13 )
        {
          *(_QWORD *)(v6 + 8) = v6;
          *(_QWORD *)v6 = 0LL;
        }
        else
        {
          --*v13;
        }
      }
      goto LABEL_2;
    }
    if ( v11 )
      break;
    KeReleaseSpinLock(v5, v12);
    if ( !PerformanceCounter.QuadPart )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v14 = 0;
    while ( *(_DWORD *)(v6 + 16) <= *(_DWORD *)(v6 + 20) )
    {
      if ( *(_QWORD *)(v6 + 8) != v6 )
        goto LABEL_5;
      if ( (++v14 & 0x7F) == 0
        && 1000000
         * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart)
         / PerformanceFrequency.QuadPart >= v4 )
      {
        break;
      }
      _mm_pause();
    }
    v11 = 1;
  }
  --*(_DWORD *)(v6 + 20);
  KeReleaseSpinLock(v5, v12);
}

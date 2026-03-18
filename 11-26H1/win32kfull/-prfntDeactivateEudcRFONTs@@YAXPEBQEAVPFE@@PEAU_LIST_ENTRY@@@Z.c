/*
 * XREFs of ?prfntDeactivateEudcRFONTs@@YAXPEBQEAVPFE@@PEAU_LIST_ENTRY@@@Z @ 0x1402889F8
 * Callers:
 *     bUnloadEudcFont @ 0x140104924 (bUnloadEudcFont.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400C3B0C (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400F651C (--$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?PffBucket@PFT@@QEBA?AVPffIterator@@K@Z @ 0x14025A850 (-PffBucket@PFT@@QEBA-AVPffIterator@@K@Z.c)
 *     ??EPffIterator@@QEAAAEAV0@XZ @ 0x140296FC4 (--EPffIterator@@QEAAAEAV0@XZ.c)
 *     vDeactivateEudcRFONTsWorker @ 0x140324C34 (vDeactivateEudcRFONTsWorker.c)
 */

void __fastcall prfntDeactivateEudcRFONTs(struct PFE *const *a1, struct _LIST_ENTRY *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  unsigned int i; // ebx
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v9[6]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_QWORD **)(W32GetSessionState((_DWORD)a1, a2) + 96);
  v8 = v4[2540];
  GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v8);
  v11 = v4[2541];
  GreAcquireSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v11);
  v5 = v4[2549];
  for ( i = 0; i < *(_DWORD *)(v5 + 24); ++i )
  {
    PFT::PffBucket(v5, (PffIterator *)&v10, i);
    while ( v10 )
    {
      v9[0] = v10;
      vDeactivateEudcRFONTsWorker(v7, a1, v9, a2);
      PffIterator::operator++(&v10);
    }
  }
  SEMOBJ<18>::vUnlock((HSEMAPHORE *)&v11);
  SEMOBJ<17>::vUnlock((HSEMAPHORE *)&v8);
}

/*
 * XREFs of SmKmStoreHelperWorker @ 0x140395A70
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140239560 (KeSetActualBasePriorityThread.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     SmKmStoreHelperCommandProcess @ 0x140382C98 (SmKmStoreHelperCommandProcess.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     SmKmStoreHelperCommandCleanup @ 0x140501F24 (SmKmStoreHelperCommandCleanup.c)
 */

LONG __fastcall SmKmStoreHelperWorker(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v5; // bl
  LONG result; // eax
  unsigned int v7; // esi
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // [rsp+30h] [rbp-58h] BYREF
  __int128 v11; // [rsp+40h] [rbp-48h]
  __int128 v12; // [rsp+50h] [rbp-38h]
  __int64 v13; // [rsp+60h] [rbp-28h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 25LL, a3);
  CurrentThread = KeGetCurrentThread();
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)(a1 + 8), Executive, 0, 0, 0LL);
    result = KeResetEvent((PRKEVENT)(a1 + 8));
    v7 = *(unsigned __int16 *)(a1 + 58);
    if ( v7 == 1 )
      break;
    SmKmStoreHelperCommandProcess(a1, *(unsigned __int16 *)(a1 + 58), a1 + 64);
    _m_prefetchw((const void *)(a1 + 56));
    v5 = _InterlockedOr((volatile signed __int32 *)(a1 + 56), 1u);
    if ( (v5 & 2) != 0 )
    {
      v8 = *(_OWORD *)(a1 + 80);
      v10 = *(_OWORD *)(a1 + 64);
      v9 = *(_OWORD *)(a1 + 96);
      v11 = v8;
      v13 = *(_QWORD *)(a1 + 112);
      v12 = v9;
      if ( v7 == 4 )
      {
        SmKmStoreHelperCommandCleanup(a1, 4LL, &v10);
        v5 &= ~2u;
      }
    }
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    if ( (v5 & 2) != 0 )
      SmKmStoreHelperCommandCleanup(a1, v7, &v10);
  }
  return result;
}

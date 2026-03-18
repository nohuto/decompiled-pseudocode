/*
 * XREFs of MiDemoteSlabEntries @ 0x140506A84
 * Callers:
 *     MiFreeUnusedSlabPages @ 0x1402A7510 (MiFreeUnusedSlabPages.c)
 *     MiWaitForFreePage @ 0x1403D1DB4 (MiWaitForFreePage.c)
 * Callees:
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x14037B2F0 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x140395420 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     KeGenericCallDpcEx @ 0x1403C2284 (KeGenericCallDpcEx.c)
 *     MiLogSlabEntriesDemote @ 0x140508C70 (MiLogSlabEntriesDemote.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall MiDemoteSlabEntries(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v5[4]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v6; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v7[88]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v8; // [rsp+90h] [rbp-38h]

  if ( *(_QWORD *)(a1 + 23512) )
  {
    CurrentThread = KeGetCurrentThread();
    KiSetSystemPriorityThread((ULONG_PTR)CurrentThread, 30);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 21520), 1, 0) )
    {
      v5[0] = 30;
      KiClearSystemPriority((ULONG_PTR)CurrentThread, v5);
    }
    else
    {
      memset_0(v7, 0, sizeof(v7));
      v6 = a1;
      v8 = -1LL;
      KeGenericCallDpcEx((__int64)MiDemoteSlabEntriesDpc, (__int64)&v6);
      _InterlockedExchange((volatile __int32 *)(a1 + 21520), 0);
      v5[0] = 30;
      KiClearSystemPriority((ULONG_PTR)CurrentThread, v5);
      MiLogSlabEntriesDemote(&v6, a2);
    }
  }
}

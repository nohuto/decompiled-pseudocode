/*
 * XREFs of MiMapImageScpCfgPages @ 0x14036A450
 * Callers:
 *     MiMapAllImageScpPages @ 0x140962E18 (MiMapAllImageScpPages.c)
 *     MiHandleInsertedImageVad @ 0x1409CDFA4 (MiHandleInsertedImageVad.c)
 * Callees:
 *     MiLockVad @ 0x14027EBC0 (MiLockVad.c)
 *     MiUnlockVad @ 0x14027F670 (MiUnlockVad.c)
 *     MiMakePrototypePteDirect @ 0x1402D27B0 (MiMakePrototypePteDirect.c)
 *     MiDecommitPages @ 0x140360150 (MiDecommitPages.c)
 *     MiIncrementCombinedPte @ 0x14036A6D8 (MiIncrementCombinedPte.c)
 *     MiGetImageExtensionBaseAddress @ 0x140A883F4 (MiGetImageExtensionBaseAddress.c)
 *     PsGetScpCfgPageTypeForProcess @ 0x140A9B7C8 (PsGetScpCfgPageTypeForProcess.c)
 */

void __fastcall MiMapImageScpCfgPages(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  int ScpCfgPageTypeForProcess; // eax
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  unsigned __int64 v12; // r10
  _OWORD v13[3]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v14; // [rsp+70h] [rbp-28h]
  unsigned __int64 v15; // [rsp+A0h] [rbp+8h] BYREF

  v14 = 0LL;
  v4 = *(_QWORD *)(a1 + 1040);
  memset(v13, 0, sizeof(v13));
  if ( (*(_BYTE *)(v4 + 1189) & 4) != 0 )
  {
    v6 = *(_QWORD *)((*(_QWORD *)(**(_QWORD **)(a2 + 80) + 96LL) & 0xFFFFFFFFFFFFFFF8uLL) + 32);
    LOBYTE(a3) = *(_BYTE *)((v6 + 72) & -(__int64)(v6 != 0)) & 1;
    ScpCfgPageTypeForProcess = PsGetScpCfgPageTypeForProcess(a1, v6 + 72, a3);
    if ( ScpCfgPageTypeForProcess != 4 )
    {
      v8 = *((_QWORD *)&stru_140E2D150.QueueListEntry.Blink + ScpCfgPageTypeForProcess);
      MiIncrementCombinedPte(a1 + 1024, v8 + 32, 0LL);
      CurrentThread = KeGetCurrentThread();
      MiLockVad((__int64)CurrentThread, a2, v10, v11);
      MiGetImageExtensionBaseAddress(a2);
      v15 = MiMakePrototypePteDirect(v8 + 32) | 0x800;
      MiDecommitPages((v12 >> 9) & 0xFFFFFFF8, 1, 0, a1, a2, 1, (__int64)&v15, (__int64)v13);
      MiUnlockVad((__int64)CurrentThread, a2);
    }
  }
}

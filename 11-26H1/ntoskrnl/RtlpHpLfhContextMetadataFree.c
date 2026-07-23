/*
 * XREFs of RtlpHpLfhContextMetadataFree @ 0x1403487D0
 * Callers:
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140349F4C (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x140513284 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhContextTlsCleanup @ 0x14063C9A0 (RtlpHpLfhContextTlsCleanup.c)
 * Callees:
 *     RtlpHpLfhContextUnlockExtension @ 0x140532FB0 (RtlpHpLfhContextUnlockExtension.c)
 *     RtlpHpLfhContextLockExtension @ 0x14053398C (RtlpHpLfhContextLockExtension.c)
 */

__int64 __fastcall RtlpHpLfhContextMetadataFree(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v6; // rdx

  v3 = a3;
  v4 = a2 + 16;
  if ( a3 != 3 )
    v4 = a2;
  LOBYTE(v6) = RtlpHpLfhContextLockExtension();
  if ( (_DWORD)v3 == 1 )
  {
    if ( v4 == a1 + 192 )
      NT_ASSERT("HeatMap != &LfhContext->HeatMap");
    if ( *(_BYTE *)(v4 + 250) )
      NT_ASSERT("HeatMap->OnFreeList == 0");
    *(_BYTE *)(v4 + 250) = 1;
  }
  *(_QWORD *)v4 = *(_QWORD *)(a1 + 8 * v3 + 136);
  *(_QWORD *)(a1 + 8 * v3 + 136) = v4;
  return RtlpHpLfhContextUnlockExtension(a1, v6);
}

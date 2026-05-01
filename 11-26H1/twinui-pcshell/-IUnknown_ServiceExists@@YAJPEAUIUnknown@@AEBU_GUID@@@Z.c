/*
 * XREFs of ?IUnknown_ServiceExists@@YAJPEAUIUnknown@@AEBU_GUID@@@Z @ 0x1802BE764
 * Callers:
 *     ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x180112534 (-RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERN.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IUnknown_ServiceExists(struct IUnknown *a1, const struct _GUID *a2)
{
  HRESULT v2; // ebx
  void *ppvOut; // [rsp+38h] [rbp+10h] BYREF

  ppvOut = 0LL;
  v2 = IUnknown_QueryService(
         a1,
         (const GUID *const)&SID_ExecuteLogUsage,
         &GUID_00000000_0000_0000_c000_000000000046,
         &ppvOut);
  if ( v2 >= 0 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 16LL))(ppvOut);
  return (unsigned int)v2;
}

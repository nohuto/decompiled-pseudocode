/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIForegroundStagingWindow@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802B2490
 * Callers:
 *     <none>
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004F930 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IForegroundStagingWindow>::QueryInterface(
        __int64 *a1,
        __int64 a2,
        __int64 **a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 *v6; // r10

  v3 = a2;
  v4 = 0;
  *a3 = 0LL;
  if ( !*(_DWORD *)a2
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    v5 = *a1;
  }
  else
  {
    if ( !InlineIsEqualGUID((const struct _GUID *)a2, &GUID_2e678f79_addb_4142_b6ee_a3c27b456805) )
      return (unsigned int)-2147467262;
    *a3 = v6;
    v5 = *v6;
    a1 = v6;
  }
  (*(void (__fastcall **)(__int64 *, __int64, __int64 **, __int64))(v5 + 8))(a1, a2, a3, v3);
  return v4;
}

/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIGhostDivider@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AA110
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x180057AC0 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IGhostDivider>::QueryInterface(
        __int64 *a1,
        _DWORD *a2,
        __int64 **a3)
{
  _DWORD *v3; // r9
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 *v6; // r10

  v3 = a2;
  v4 = 0;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    v5 = *a1;
  }
  else
  {
    if ( !InlineIsEqualGUID(a2, &GUID_7b6fb5ff_f28e_4cb4_b5a2_b48301faca38) )
      return (unsigned int)-2147467262;
    *a3 = v6;
    v5 = *v6;
    a1 = v6;
  }
  (*(void (__fastcall **)(__int64 *, _DWORD *, __int64 **, _DWORD *))(v5 + 8))(a1, a2, a3, v3);
  return v4;
}

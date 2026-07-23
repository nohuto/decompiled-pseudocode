/*
 * XREFs of HalpAllocateAdapterCallbackV3 @ 0x140437530
 * Callers:
 *     HalpBuildScatterGatherList @ 0x14043901C (HalpBuildScatterGatherList.c)
 * Callees:
 *     HalMapTransferEx @ 0x140437D70 (HalMapTransferEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpAllocateAdapterCallbackV3(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v6; // rdi
  __int64 v8; // rdx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r9
  int v14; // [rsp+90h] [rbp+18h] BYREF

  v4 = *(_DWORD *)(a4 + 40);
  v6 = *(_QWORD *)(a4 + 160);
  v8 = *(_QWORD *)(a4 + 8);
  v10 = *(_QWORD *)(a4 + 120);
  v11 = *(_QWORD *)(a4 + 144);
  *(_QWORD *)(a4 + 24) = a3;
  v12 = *(_QWORD *)(a4 + 32);
  v14 = v4;
  HalMapTransferEx(
    v11,
    v8,
    a3,
    v12 - *(_DWORD *)(v8 + 44) - *(_DWORD *)(v8 + 32),
    0,
    (__int64)&v14,
    *(_BYTE *)(a4 + 152),
    v6,
    *(_DWORD *)(a4 + 156),
    0LL,
    0LL);
  *(_QWORD *)(v6 + 8) = a4;
  if ( v10 )
    guard_dispatch_icall_no_overrides(a1, a2);
  return 3LL;
}

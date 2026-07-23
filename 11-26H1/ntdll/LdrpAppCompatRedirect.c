/*
 * XREFs of LdrpAppCompatRedirect @ 0x18007C530
 * Callers:
 *     LdrpMapDllFullPath @ 0x18007BE20 (LdrpMapDllFullPath.c)
 * Callees:
 *     LdrpResolveDllName @ 0x18007BF80 (LdrpResolveDllName.c)
 *     LdrpFreeUnicodeString @ 0x1800DDD40 (LdrpFreeUnicodeString.c)
 *     Feature_Arm64VcRedistRedirect__private_IsEnabledDeviceUsageNoInline @ 0x18010FC20 (Feature_Arm64VcRedistRedirect__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpAppCompatRedirect(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v9; // ebx
  _OWORD *v11; // r8
  void (__fastcall *v12)(__int128 *, _BYTE *, _OWORD *); // rax
  _WORD *v13; // rax
  _BYTE v14[8]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v15; // [rsp+38h] [rbp-30h] BYREF

  v15 = 0LL;
  if ( g_ShimsEnabled || g_ShimsLoading )
  {
    Feature_Arm64VcRedistRedirect__private_IsEnabledDeviceUsageNoInline();
    v9 = a5;
    v14[0] = 0;
    v11 = a2;
    v12 = (void (__fastcall *)(__int128 *, _BYTE *, _OWORD *))(__ROR8__(
                                                                 g_pfnSE_LdrResolveDllName,
                                                                 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
    if ( a5 < 0 )
      v11 = (_OWORD *)a1;
    v12(&v15, v14, v11);
    if ( v14[0] )
    {
      *(_DWORD *)(a1 + 32) |= 0x10000u;
      LdrpFreeUnicodeString(a2);
      v13 = *(_WORD **)(a4 + 8);
      *(_WORD *)a4 = 0;
      *v13 = 0;
      return (unsigned int)LdrpResolveDllName(&v15, a4, a3, a2, *(_DWORD *)(a1 + 32));
    }
  }
  else
  {
    return (unsigned int)a5;
  }
  return v9;
}

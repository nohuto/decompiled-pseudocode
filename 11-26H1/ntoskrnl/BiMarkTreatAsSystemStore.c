/*
 * XREFs of BiMarkTreatAsSystemStore @ 0x1409A0F8C
 * Callers:
 *     BcdSetSystemStore @ 0x1408974B4 (BcdSetSystemStore.c)
 *     BiLoadSystemStore @ 0x1409A0DF0 (BiLoadSystemStore.c)
 * Callees:
 *     BiDeleteRegistryValue @ 0x140778A88 (BiDeleteRegistryValue.c)
 *     BiSetRegistryValue @ 0x1409A57C0 (BiSetRegistryValue.c)
 *     BiGetRegistryValue @ 0x1409A6CB4 (BiGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiMarkTreatAsSystemStore(__int64 a1, char a2)
{
  void *v4; // r8
  int v5; // ebx
  __int64 result; // rax
  PVOID P[5]; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  P[0] = 0LL;
  v8 = 0;
  if ( (int)BiGetRegistryValue(a1, L"System", L"Description", 4LL, P, &v8) >= 0
    && (v5 = *(_DWORD *)P[0], ExFreePoolWithTag(P[0], 0x4B444342u), v5)
    && a2 )
  {
    v9 = 1;
    return BiSetRegistryValue(a1, L"TreatAsSystem", L"Description", 4LL, &v9, 4, P[0], P[1]);
  }
  else
  {
    result = BiDeleteRegistryValue(a1, L"TreatAsSystem", v4);
    if ( (_DWORD)result == -1073741772 )
      return 0LL;
  }
  return result;
}

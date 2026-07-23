/*
 * XREFs of MiProtectAweTransitionPte @ 0x140706E24
 * Callers:
 *     MiProtectAweRegion @ 0x140706C04 (MiProtectAweRegion.c)
 * Callees:
 *     MiMakeTransitionPteValid @ 0x1402E5640 (MiMakeTransitionPteValid.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 */

unsigned __int64 __fastcall MiProtectAweTransitionPte(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 result; // rax
  int v6; // ecx
  unsigned __int64 v7; // [rsp+30h] [rbp+8h]

  if ( a2 == *(unsigned __int64 **)(a1 + 152) )
    *(_DWORD *)(a1 + 40) = 1;
  result = *(unsigned int *)(a1 + 32);
  if ( (_DWORD)result != 24 )
  {
    *a2 = (32LL * (unsigned int)result) ^ (a3 ^ (32LL * (unsigned int)result)) & 0xFFFFFFFFFFFFFC1FuLL;
    result = MiMakeTransitionPteValid((unsigned __int64)a2);
    if ( (*(_DWORD *)(a1 + 64) & 0x4000000) != 0 )
      result |= 0x80uLL;
    v7 = result;
    v6 = 0;
    if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v6 = MiSanitizeShadowPxe();
      result = v7;
    }
    *a2 = result;
    if ( v6 )
      result = (unsigned __int64)MiWritePteShadow();
    if ( !*(_QWORD *)(a1 + 136) )
      *(_QWORD *)(a1 + 136) = a2;
    *(_QWORD *)(a1 + 144) = a2;
  }
  return result;
}

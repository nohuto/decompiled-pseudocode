/*
 * XREFs of std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_4f80d4139340e453ac453678c26755ce__0_ @ 0x1800C2B6C
 * Callers:
 *     ?OnMfxDiscoveryEffectsChanged@CAudioResourceManager@@UEAAJPEBGU_GUID@@@Z @ 0x1800CA4B0 (-OnMfxDiscoveryEffectsChanged@CAudioResourceManager@@UEAAJPEBGU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::function_void___cdecl_void__::function_void___cdecl_void____lambda_4f80d4139340e453ac453678c26755ce__0_(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)a1 = off_180174F88;
  v2 = *a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 16) = a2[1];
  *(_QWORD *)(a1 + 24) = a2[2];
  result = a1;
  a2[1] = 0LL;
  a2[2] = 0LL;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 3);
  *(_QWORD *)(a1 + 56) = a1;
  return result;
}

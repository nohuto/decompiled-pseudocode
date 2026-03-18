/*
 * XREFs of ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x14000AF1C
 * Callers:
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x140007828 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x14000B2FC (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 * Callees:
 *     StringCopyWorkerW @ 0x14000AFD4 (StringCopyWorkerW.c)
 */

HRESULT __fastcall StringCchCatW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3)
{
  __int64 v4; // r9
  unsigned __int16 *v5; // rax
  __int64 v6; // r8
  HRESULT result; // eax
  size_t v8; // [rsp+20h] [rbp-18h]

  v4 = 260LL;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0x80070057 : 0;
  if ( v4 )
  {
    v6 = (260 - v4) & -(__int64)(v4 != 0);
    return StringCopyWorkerW(&a1[v6], 260 - v6, (size_t *)v6, a3, v8);
  }
  return result;
}

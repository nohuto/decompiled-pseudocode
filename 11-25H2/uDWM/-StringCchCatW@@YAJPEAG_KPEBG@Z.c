/*
 * XREFs of ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18005A0C4
 * Callers:
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800763C0 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18009D6A0 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?BuildFeedbackString@CContactManager@@IEAAJKPEAGI@Z @ 0x1800AA4A8 (-BuildFeedbackString@CContactManager@@IEAAJKPEAGI@Z.c)
 * Callees:
 *     StringCopyWorkerW @ 0x18005A150 (StringCopyWorkerW.c)
 */

__int64 __fastcall StringCchCatW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3)
{
  __int64 v5; // r9
  unsigned __int16 *v6; // rax
  unsigned int v7; // edx
  __int64 v8; // r8
  size_t v10; // [rsp+20h] [rbp-18h]

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    v5 = a2;
    v6 = a1;
    do
    {
      if ( !*v6 )
        break;
      ++v6;
      --v5;
    }
    while ( v5 );
    v7 = v5 == 0 ? 0x80070057 : 0;
    if ( v5 )
    {
      v8 = (a2 - v5) & -(__int64)(v5 != 0);
      return (unsigned int)StringCopyWorkerW(&a1[v8], a2 - v8, (size_t *)v8, a3, v10);
    }
  }
  return v7;
}

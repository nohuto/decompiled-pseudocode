/*
 * XREFs of ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18004EBF0
 * Callers:
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1800B6F6C (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800B82A8 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCatW(unsigned __int16 *a1, __int64 a2, char *a3)
{
  __int64 v4; // r8
  unsigned __int16 *v5; // rax
  __int64 result; // rax
  unsigned __int16 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // r9
  unsigned __int16 v11; // r8
  unsigned __int16 *v12; // rcx

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    return 2147942487LL;
  v4 = a2;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = 2147942487LL;
  if ( v4 )
  {
    v7 = &a1[a2 - v4];
    v8 = v4;
    v9 = 2147483646LL;
    v10 = (char *)(a3 - (char *)v7);
    do
    {
      if ( !v9 )
        break;
      v11 = *(unsigned __int16 *)((char *)v7 + (_QWORD)v10);
      if ( !v11 )
        break;
      *v7 = v11;
      --v9;
      ++v7;
      --v8;
    }
    while ( v8 );
    v12 = v7 - 1;
    if ( v8 )
      v12 = v7;
    result = 2147942522LL;
    if ( v8 )
      result = 0LL;
    *v12 = 0;
  }
  return result;
}

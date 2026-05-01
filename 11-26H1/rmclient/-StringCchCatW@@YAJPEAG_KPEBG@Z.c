/*
 * XREFs of ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18000BDB0
 * Callers:
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180015414 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCatW(unsigned __int16 *a1, __int64 a2, char *a3)
{
  __int64 v3; // rdx
  unsigned __int16 *v4; // rax
  unsigned __int16 *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rax
  char *v8; // r8
  unsigned __int16 v9; // dx
  unsigned __int16 *v10; // rax
  __int64 result; // rax

  v3 = 260LL;
  v4 = a1;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v3;
  }
  while ( v3 );
  if ( !v3 )
    return 2147942487LL;
  v5 = &a1[260 - v3];
  v6 = v3;
  v7 = 2147483646LL;
  v8 = (char *)(a3 - (char *)v5);
  do
  {
    if ( !v7 )
      break;
    v9 = *(unsigned __int16 *)((char *)v5 + (_QWORD)v8);
    if ( !v9 )
      break;
    *v5 = v9;
    --v7;
    ++v5;
    --v6;
  }
  while ( v6 );
  v10 = v5 - 1;
  if ( v6 )
    v10 = v5;
  *v10 = 0;
  result = 2147942522LL;
  if ( v6 )
    return 0LL;
  return result;
}

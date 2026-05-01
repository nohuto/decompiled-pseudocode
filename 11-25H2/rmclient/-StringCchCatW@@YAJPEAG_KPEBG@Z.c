/*
 * XREFs of ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18000C230
 * Callers:
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1800164EC (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCatW(unsigned __int16 *a1, __int64 a2, char *a3)
{
  __int64 v4; // rdx
  unsigned __int16 *v5; // rax
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 result; // rax
  unsigned __int16 *v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rax
  char *v12; // r8
  unsigned __int16 v13; // dx
  unsigned __int16 *v14; // rax

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
  v6 = 260 - v4;
  v7 = -2147024809;
  if ( v4 )
    v7 = 0;
  else
    v6 = 0LL;
  if ( !v4 )
    return v7;
  v9 = &a1[v6];
  v10 = 260 - v6;
  if ( 260 != v6 )
  {
    v11 = 2147483646LL;
    v12 = (char *)(a3 - (char *)v9);
    do
    {
      if ( !v11 )
        break;
      v13 = *(unsigned __int16 *)((char *)v9 + (_QWORD)v12);
      if ( !v13 )
        break;
      *v9 = v13;
      --v11;
      ++v9;
      --v10;
    }
    while ( v10 );
  }
  v14 = v9 - 1;
  if ( v10 )
    v14 = v9;
  *v14 = 0;
  result = 2147942522LL;
  if ( v10 )
    return 0LL;
  return result;
}

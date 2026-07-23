/*
 * XREFs of vscan_fn @ 0x18012C5F8
 * Callers:
 *     sscanf @ 0x18012C5B0 (sscanf.c)
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 *     strlen @ 0x180164EE0 (strlen.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall vscan_fn(
        __int64 (__fastcall *a1)(const char **, __int64, __int64, __int64),
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  size_t v9; // rax
  const char *v11; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+38h] [rbp-30h]
  int v13; // [rsp+3Ch] [rbp-2Ch]
  const char *v14; // [rsp+40h] [rbp-28h]
  int v15; // [rsp+48h] [rbp-20h]
  __int128 v16; // [rsp+4Ch] [rbp-1Ch]
  int v17; // [rsp+5Ch] [rbp-Ch]

  v13 = 0;
  v17 = 0;
  v16 = 0LL;
  v9 = strlen(a2);
  if ( a2 && a3 )
  {
    v15 = 73;
    v14 = a2;
    if ( v9 > 0x7FFFFFFF )
      LODWORD(v9) = 0x7FFFFFFF;
    v11 = a2;
    v12 = v9;
    return a1(&v11, a3, a4, a5);
  }
  else
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
}

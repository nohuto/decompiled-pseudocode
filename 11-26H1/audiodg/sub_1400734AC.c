/*
 * XREFs of sub_1400734AC @ 0x1400734AC
 * Callers:
 *     sub_140073954 @ 0x140073954 (sub_140073954.c)
 * Callees:
 *     sub_140002380 @ 0x140002380 (sub_140002380.c)
 *     sub_14002813C @ 0x14002813C (sub_14002813C.c)
 *     sub_1400732C4 @ 0x1400732C4 (sub_1400732C4.c)
 */

void __fastcall sub_1400734AC(_DWORD *a1, void *a2, int a3, __int64 a4, void *a5, int a6)
{
  __int64 v7; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  const char *v11; // rcx
  int v12; // [rsp+50h] [rbp-58h] BYREF
  void *v13; // [rsp+58h] [rbp-50h] BYREF
  void *v14; // [rsp+60h] [rbp-48h] BYREF
  __int64 v15; // [rsp+68h] [rbp-40h] BYREF
  const char *v16; // [rsp+70h] [rbp-38h] BYREF

  v7 = a3;
  if ( *a1 > 2u && sub_14002813C((__int64)a1, 0x400000000100LL) )
  {
    v13 = a5;
    v12 = a6;
    v14 = a2;
    v15 = a4;
    if ( (unsigned int)v7 >= 4 )
      v11 = "Unknown";
    else
      v11 = off_1400C1430[v7];
    v16 = v11;
    sub_140002380(v10, (int)&unk_1400D279F, v9, v10, (void **)&v16, &v15, &v14, &v13, (__int64)&v12);
  }
  if ( a2 )
    sub_1400732C4((__int64)a2, v7, a6, 1u, a4, 1.0);
}

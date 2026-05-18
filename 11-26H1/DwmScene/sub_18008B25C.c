/*
 * XREFs of sub_18008B25C @ 0x18008B25C
 * Callers:
 *     sub_18008B720 @ 0x18008B720 (sub_18008B720.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800128EC @ 0x1800128EC (sub_1800128EC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18008B25C(__int64 a1, float a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rax
  __int128 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  float *v8; // rax
  __int64 v9; // rcx
  float v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v2 = a1;
  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 || !*(_DWORD *)(v3 + 8) )
  {
    v4 = *(_QWORD *)(v2 + 32);
    if ( !v4 || !*(_DWORD *)(v4 + 8) )
      return 0;
  }
  if ( v3 && sub_1800128EC(v3) )
    v5 = *(_OWORD *)(v2 + 8);
  else
    v5 = 0LL;
  if ( (_QWORD)v5 )
  {
    (**(void (__fastcall ***)(_QWORD, float *))v5)(v5, &v11);
  }
  else
  {
    v6 = *(_QWORD *)(v2 + 32);
    if ( v6 && sub_1800128EC(v6) )
    {
      v8 = *(float **)(v7 + 24);
      v9 = *(_QWORD *)(v7 + 32);
      if ( v8 )
        *v8 = v11;
      if ( v9 )
        sub_180010EC8(v9);
    }
  }
  if ( *((_QWORD *)&v5 + 1) )
    sub_180010EC8(*((__int64 *)&v5 + 1));
  return 1;
}

/*
 * XREFs of IopFillTriageDumpDataBlocks @ 0x1405CBEE8
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x1405C9264 (IoFillTriageDumpBuffer.c)
 * Callees:
 *     RtlULongLongSub @ 0x1404A8EE4 (RtlULongLongSub.c)
 *     IoSetBugCheckProgressFlag @ 0x1405350D0 (IoSetBugCheckProgressFlag.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

int __fastcall IopFillTriageDumpDataBlocks(unsigned int *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // r10
  unsigned int *v7; // rdx
  char *v8; // rbx
  unsigned int i; // edi
  __int64 v10; // r13
  ULONGLONG *v11; // rsi
  unsigned int v12; // r14d
  unsigned __int64 v13; // r11
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // r10
  unsigned __int64 v17; // r11
  char *v18; // rcx
  unsigned int v19; // ecx
  ULONGLONG pullResult; // [rsp+28h] [rbp-80h] BYREF
  char *v22; // [rsp+30h] [rbp-78h]
  ULONGLONG *v23; // [rsp+38h] [rbp-70h]
  __int64 v24; // [rsp+40h] [rbp-68h]
  __int64 v25; // [rsp+48h] [rbp-60h]
  __int64 v26; // [rsp+50h] [rbp-58h]
  unsigned int *v27; // [rsp+58h] [rbp-50h]
  unsigned int *v28; // [rsp+60h] [rbp-48h]
  unsigned int *v29; // [rsp+B0h] [rbp+8h]
  __int64 v31; // [rsp+C0h] [rbp+18h]
  __int64 v32; // [rsp+C8h] [rbp+20h]

  v32 = a4;
  v31 = a3;
  v29 = a1;
  LODWORD(v4) = a2;
  pullResult = 0LL;
  v5 = a4 + a1[30];
  v24 = v5;
  v6 = v5;
  v7 = a1 + 31;
  v28 = a1 + 31;
  v8 = (char *)(v5 + 16LL * a1[31]);
  v22 = v8;
  for ( i = 0; i < (unsigned int)v4; ++i )
  {
    v10 = a3 + 16LL * i;
    v25 = v10;
    v11 = *(ULONGLONG **)(v10 + 8);
    v12 = 0;
    while ( 1 )
    {
      v23 = v11;
      if ( v12 >= *(_DWORD *)v10 )
        break;
      v4 = (v6 - v5) >> 4;
      if ( (unsigned int)v4 >= *v7 )
        return v4;
      v13 = a4 + a1[1];
      v14 = v6 + 16;
      v26 = v6 + 16;
      if ( v6 + 16 > v13 )
        return v4;
      LODWORD(v4) = RtlULongLongSub(v11[1], *v11, &pullResult);
      if ( (int)v4 < 0 )
        return v4;
      v18 = &v8[(unsigned int)pullResult];
      if ( v18 < v8 || (unsigned __int64)v18 > v17 )
        return v4;
      *(_QWORD *)v16 = v15;
      *(_DWORD *)(v16 + 8) = (_DWORD)v8 - v32;
      v19 = *((_DWORD *)v11 + 2) - *(_DWORD *)v11;
      v27 = (unsigned int *)(v16 + 12);
      *(_DWORD *)(v16 + 12) = v19;
      memmove(v8, (const void *)*v11, v19);
      v8 += *v27;
      v22 = v8;
      v6 = v14;
      ++v12;
      v11 += 2;
      a1 = v29;
      a4 = v32;
      v7 = v28;
    }
    LODWORD(v4) = a2;
    a3 = v31;
  }
  return v4;
}

/*
 * XREFs of ?vTransparentCopyS32D8@@YAXPEAUBLTINFO@@@Z @ 0x140309530
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1400D08C0 (XLATEOBJ_iXlate.c)
 */

void __fastcall vTransparentCopyS32D8(struct BLTINFO *a1)
{
  int v2; // ecx
  __int64 v3; // rdx
  int v4; // r14d
  __int64 v5; // rax
  int v6; // edi
  _DWORD *v7; // rsi
  _BYTE *v8; // rbp
  _DWORD *v9; // r13
  _BYTE *v10; // r12
  int v11; // r15d
  ULONG v12; // edx
  int v13; // [rsp+60h] [rbp+8h]
  XLATEOBJ *pxlo; // [rsp+70h] [rbp+18h]

  v2 = *((_DWORD *)a1 + 7);
  v13 = v2;
  v3 = *((_QWORD *)a1 + 9);
  v4 = *((_DWORD *)a1 + 8);
  pxlo = *(XLATEOBJ **)a1;
  v5 = *(_QWORD *)(v3 + 128);
  if ( v5 || (*(_DWORD *)(v3 + 112) & 0x100) != 0 )
    v6 = **(_DWORD **)(v5 + 112) | *(_DWORD *)(*(_QWORD *)(v5 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v5 + 112) + 8LL);
  else
    v6 = -1;
  v7 = (_DWORD *)(*((_QWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 12));
  v8 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  while ( v4 )
  {
    --v4;
    v9 = v7;
    v10 = v8;
    v11 = v2;
    if ( v2 )
    {
      do
      {
        --v11;
        v12 = v6 & *v9++;
        if ( v12 != *((_DWORD *)a1 + 37) )
          *v10 = XLATEOBJ_iXlate(pxlo, v12);
        ++v10;
      }
      while ( v11 );
      v2 = v13;
    }
    v7 = (_DWORD *)((char *)v7 + *((int *)a1 + 10));
    v8 += *((int *)a1 + 11);
  }
}

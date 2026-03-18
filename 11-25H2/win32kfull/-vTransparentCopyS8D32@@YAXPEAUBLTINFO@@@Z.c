/*
 * XREFs of ?vTransparentCopyS8D32@@YAXPEAUBLTINFO@@@Z @ 0x1401CC530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vTransparentCopyS8D32(struct BLTINFO *a1)
{
  unsigned __int8 *v1; // r8
  int v2; // esi
  __int64 v3; // r14
  int v4; // r10d
  _DWORD *v5; // r9
  __int64 v6; // rax
  int i; // r11d
  unsigned __int8 *v8; // rdi
  _DWORD *v9; // rbx

  v1 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + *((int *)a1 + 12));
  v2 = *((_DWORD *)a1 + 7);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v4 = *((_DWORD *)a1 + 8);
  v5 = (_DWORD *)(*((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14));
  while ( v4 )
  {
    --v4;
    v8 = v1;
    v9 = v5;
    for ( i = v2; i; ++v9 )
    {
      v6 = *v8;
      --i;
      ++v8;
      if ( (_DWORD)v6 != *((_DWORD *)a1 + 37) )
        *v9 = *(_DWORD *)(v3 + 4 * v6);
    }
    v1 += *((int *)a1 + 10);
    v5 = (_DWORD *)((char *)v5 + *((int *)a1 + 11));
  }
}

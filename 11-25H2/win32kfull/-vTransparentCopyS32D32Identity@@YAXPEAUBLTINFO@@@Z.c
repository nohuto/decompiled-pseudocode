/*
 * XREFs of ?vTransparentCopyS32D32Identity@@YAXPEAUBLTINFO@@@Z @ 0x140150B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vTransparentCopyS32D32Identity(struct BLTINFO *a1)
{
  __int64 v1; // rdx
  int v3; // esi
  int v4; // edi
  __int64 v5; // rax
  int v6; // r10d
  int *v7; // r11
  int *i; // rbx
  int *v9; // r8
  int *v10; // rcx
  int j; // edx
  int v12; // eax
  int v13; // eax

  v1 = *((_QWORD *)a1 + 9);
  v3 = *((_DWORD *)a1 + 7);
  v4 = *((_DWORD *)a1 + 8);
  v5 = *(_QWORD *)(v1 + 128);
  if ( v5 || (*(_DWORD *)(v1 + 112) & 0x100) != 0 )
    v6 = **(_DWORD **)(v5 + 112) | *(_DWORD *)(*(_QWORD *)(v5 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v5 + 112) + 8LL);
  else
    v6 = -1;
  v7 = (int *)(*((_QWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 12));
  for ( i = (int *)(*((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14)); v4; i = (int *)((char *)i + *((int *)a1 + 11)) )
  {
    --v4;
    v9 = v7;
    v10 = i;
    for ( j = v3; j; ++v10 )
    {
      v12 = *v9++;
      v13 = v6 & v12;
      --j;
      if ( v13 != *((_DWORD *)a1 + 37) )
        *v10 = v13;
    }
    v7 = (int *)((char *)v7 + *((int *)a1 + 10));
  }
}

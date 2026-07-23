/*
 * XREFs of ArbGetNextAllocationRange @ 0x14078B3A0
 * Callers:
 *     <none>
 * Callees:
 *     ArbpUpdatePriority @ 0x14078CAB0 (ArbpUpdatePriority.c)
 */

char __fastcall ArbGetNextAllocationRange(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // r9
  unsigned int v6; // ecx
  unsigned __int64 i; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  int v10; // edx
  unsigned __int64 v11; // r10
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r11
  __int64 v20; // r8
  unsigned __int64 v21; // rdi
  char result; // al

  while ( 1 )
  {
    v4 = *(_QWORD *)(a2 + 40);
    if ( v4 )
    {
      ArbpUpdatePriority(a1, v4);
      v5 = *(_QWORD *)(a2 + 56);
      v6 = *(_DWORD *)(a2 + 48);
    }
    else
    {
      v5 = *(_QWORD *)(a2 + 56);
      v6 = *(_DWORD *)(a2 + 48);
      for ( i = v5; i < v5 + ((unsigned __int64)v6 << 6); v5 = *(_QWORD *)(a2 + 56) )
      {
        *(_DWORD *)(i + 32) = 0;
        ArbpUpdatePriority(a1, i);
        v6 = *(_DWORD *)(a2 + 48);
        i += 64LL;
      }
    }
    v8 = v5 + 64;
    v9 = v5 + ((v6 - 1 + 1LL) << 6);
    while ( v8 < v9 )
    {
      if ( *(_DWORD *)(v8 + 32) < *(_DWORD *)(v5 + 32) )
        v5 = v8;
      v8 += 64LL;
    }
    v10 = *(_DWORD *)(v5 + 32);
    if ( v10 == 0x7FFFFFFF )
      return 0;
    v11 = *(_QWORD *)v5;
    if ( (unsigned int)(v10 - 2147483645) <= 1 )
    {
      v18 = *(_QWORD *)(v5 + 8);
      v17 = *(_QWORD *)v5;
      v19 = v18;
    }
    else
    {
      v12 = v10 - 1;
      if ( v10 <= 0 )
        v12 = ~v10;
      v13 = v12;
      v14 = *(_QWORD *)(a1 + 64);
      v13 *= 2LL;
      v15 = *(_QWORD *)(v14 + 8 * v13 + 8);
      v16 = *(_QWORD *)(v14 + 8 * v13);
      v17 = *(_QWORD *)v5;
      v18 = *(_QWORD *)(v5 + 8);
      v19 = v18;
      if ( v11 <= v16 )
        v17 = v16;
      if ( v18 >= v15 )
        v19 = v15;
    }
    v20 = *(_QWORD *)(v5 + 16);
    if ( !v20 )
      goto LABEL_24;
    v21 = *(_QWORD *)(v5 + 24);
    v11 = v21 + v17 - 1 - (v21 + v17 - 1) % v21;
    if ( v20 - 1 <= v19 - v11 )
    {
      v18 = v19 - (v19 - v20 + 1) % v21;
LABEL_24:
      if ( v11 != *(_QWORD *)(a2 + 16) || v18 != *(_QWORD *)(a2 + 24) || *(_QWORD *)(a2 + 40) != v5 )
      {
        *(_QWORD *)(a2 + 24) = v18;
        result = 1;
        *(_QWORD *)(a2 + 16) = v11;
        *(_QWORD *)(a2 + 40) = v5;
        return result;
      }
    }
    else
    {
      *(_QWORD *)(a2 + 40) = v5;
    }
  }
}

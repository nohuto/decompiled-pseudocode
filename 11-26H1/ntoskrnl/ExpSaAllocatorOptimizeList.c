/*
 * XREFs of ExpSaAllocatorOptimizeList @ 0x1404936B4
 * Callers:
 *     ExpSaAllocatorFree @ 0x14027D8B0 (ExpSaAllocatorFree.c)
 *     ExpSaAllocatorAllocate @ 0x140492F8C (ExpSaAllocatorAllocate.c)
 * Callees:
 *     ExpSaPageGroupDescriptorFree @ 0x140493784 (ExpSaPageGroupDescriptorFree.c)
 */

void __fastcall ExpSaAllocatorOptimizeList(__int64 a1)
{
  int v1; // ebx
  _QWORD *v3; // rsi
  _QWORD *v4; // rcx
  _QWORD *v5; // rbp
  __int64 v6; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rdx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax

  v1 = *(_DWORD *)(a1 + 64);
  if ( (v1 & 2) != 0 )
  {
    v3 = (_QWORD *)(a1 + 8);
    v4 = *(_QWORD **)(a1 + 8);
    if ( v4 != v3 )
    {
      do
      {
        v5 = (_QWORD *)*v4;
        if ( *((_DWORD *)v4 + 9) == 512 )
        {
          v9 = (_QWORD *)*v4;
          if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v10 = (_QWORD *)v4[1], (_QWORD *)*v10 != v4) )
LABEL_8:
            __fastfail(3u);
          *v10 = v9;
          v9[1] = v10;
          ExpSaPageGroupDescriptorFree(v4);
        }
        else if ( !*((_DWORD *)v4 + 9) )
        {
          v6 = *v4;
          *((_DWORD *)v4 + 10) = 1;
          if ( *(_QWORD **)(v6 + 8) != v4 )
            goto LABEL_8;
          v7 = (_QWORD *)v4[1];
          if ( (_QWORD *)*v7 != v4 )
            goto LABEL_8;
          *v7 = v6;
          *(_QWORD *)(v6 + 8) = v7;
          v8 = *(_QWORD **)(a1 + 32);
          if ( *v8 != a1 + 24 )
            goto LABEL_8;
          *v4 = a1 + 24;
          v4[1] = v8;
          *v8 = v4;
          *(_QWORD *)(a1 + 32) = v4;
        }
        v4 = v5;
      }
      while ( v5 != v3 );
    }
    *(_DWORD *)(a1 + 64) = v1 & 0xFFFFFFFD;
  }
}

/*
 * XREFs of ?ShrinkExpressionList@CExpressionManager@@CAXAEAV?$DynArray@PEAVCBaseExpression@@$00@@@Z @ 0x18016DB10
 * Callers:
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x18016D708 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CExpressionManager::ShrinkExpressionList(__int64 a1)
{
  int v1; // edx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r11
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rax

  v1 = *(_DWORD *)(a1 + 24);
  if ( v1 )
  {
    v3 = 0LL;
    v4 = (unsigned int)(v1 - 1);
    if ( (_DWORD)v4 )
    {
      v5 = 0LL;
      v6 = 8LL * (unsigned int)v4;
      do
      {
        v7 = *(_QWORD *)a1;
        if ( *(_QWORD *)(*(_QWORD *)a1 + v5) )
        {
          do
          {
            if ( (unsigned int)v3 >= (unsigned int)v4 )
              break;
            v3 = (unsigned int)(v3 + 1);
          }
          while ( *(_QWORD *)(v7 + 8 * v3) );
        }
        while ( !*(_QWORD *)(v6 + v7) && (unsigned int)v3 < (unsigned int)v4 )
        {
          v4 = (unsigned int)(v4 - 1);
          v6 = 8LL * (unsigned int)v4;
        }
        v5 = 8 * v3;
        if ( !*(_QWORD *)(v7 + 8 * v3) )
        {
          v6 = 8 * v4;
          v8 = *(_QWORD *)(8 * v4 + v7);
          if ( v8 )
          {
            *(_QWORD *)(v7 + 8 * v3) = v8;
            *(_QWORD *)(v6 + *(_QWORD *)a1) = 0LL;
          }
        }
      }
      while ( (unsigned int)v3 < (unsigned int)v4 );
    }
    *(_DWORD *)(a1 + 24) = v4;
    DynArrayImpl<1>::ShrinkToSize(a1, 8u);
  }
}

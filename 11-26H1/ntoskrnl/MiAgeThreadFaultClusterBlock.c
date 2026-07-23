/*
 * XREFs of MiAgeThreadFaultClusterBlock @ 0x14046770C
 * Callers:
 *     MiAgeThreadFaultClusterContexts @ 0x140467600 (MiAgeThreadFaultClusterContexts.c)
 * Callees:
 *     MiClearFaultClusterContext @ 0x140467884 (MiClearFaultClusterContext.c)
 */

void __fastcall MiAgeThreadFaultClusterBlock(__int64 a1)
{
  signed __int32 v1; // ebx
  unsigned int v3; // r15d
  signed __int32 v4; // ebp
  unsigned int v5; // r12d
  __int64 v6; // rdi
  char v7; // r14
  int v8; // eax
  bool i; // zf
  signed __int32 v10; // eax
  signed __int32 v11; // r9d
  unsigned int v12; // r10d
  __int64 v13; // r11
  char v14; // cl
  unsigned int v15; // r8d
  int v16; // edx
  unsigned int v17; // eax
  int v18; // r8d

  v1 = *(_DWORD *)(a1 + 28);
  if ( v1 )
  {
    v3 = 0;
    v4 = *(_DWORD *)(a1 + 28);
    v5 = 0;
    v6 = ((unsigned int)(*(_QWORD *)(a1 + 24) >> 16) & 0xF) + 1;
    if ( ((*(_QWORD *)(a1 + 24) >> 16) & 0xF) != 0xFFFFFFFF )
    {
      v7 = 0;
      do
      {
        v8 = (v1 >> v7) & 3;
        if ( v8 )
        {
          if ( v8 == 3 )
          {
            MiClearFaultClusterContext(a1, v5);
            v18 = (*(int *)(a1 + 28) >> v7) & 3;
            v1 = (v18 << v7) | ~(3 << v7) & v1;
          }
          else
          {
            v18 = v8 + 1;
            if ( v8 == 2 )
              ++v3;
          }
          v4 = (v18 << v7) | ~(3 << v7) & v4;
        }
        ++v5;
        v7 += 2;
      }
      while ( v5 < (unsigned int)v6 );
      if ( v4 != v1 )
      {
        if ( v3 )
          _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 16) + 32LL), v3);
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 28), v4, v1);
        for ( i = v1 == v10; ; i = v10 == v11 )
        {
          v11 = v10;
          if ( i )
            break;
          v12 = 0;
          v13 = v6;
          v14 = 0;
          do
          {
            v15 = (v11 >> v14) & 3;
            if ( v15 <= 1 && v15 != ((v1 >> v14) & 3) )
            {
              v16 = (v4 >> v14) & 3;
              v17 = v12 + 1;
              v4 = (v15 << v14) | ~(3 << v14) & v4;
              if ( v16 != 3 )
                v17 = v12;
              v12 = v17;
            }
            v14 += 2;
            --v13;
          }
          while ( v13 );
          if ( v12 )
            _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 16) + 32LL), -(__int64)v12);
          if ( v4 == v11 )
            break;
          v1 = v11;
          v10 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 28), v4, v11);
        }
      }
    }
  }
}

/*
 * XREFs of InitCounterGroupAps @ 0x140BF0DF8
 * Callers:
 *     DefaultInitializeProfiling @ 0x140BF0D10 (DefaultInitializeProfiling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitCounterGroupAps(int a1, unsigned int a2)
{
  unsigned int v2; // r10d
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rcx

  v2 = 0;
  v4 = *(_QWORD *)(KiProcessorBlock[0] + 88);
  if ( a1 )
  {
    switch ( a1 )
    {
      case 1:
        v4 += 24LL;
        break;
      case 100:
        v4 += 48LL;
        break;
      case 101:
        v4 += 72LL;
        break;
      default:
        v4 = 0LL;
        break;
    }
  }
  v5 = a2;
  v6 = *(_QWORD *)(KiProcessorBlock[a2] + 88);
  if ( a1 )
  {
    v7 = a1 - 1;
    if ( v7 )
    {
      v8 = v7 - 99;
      if ( v8 )
      {
        if ( v8 == 1 )
          v6 += 72LL;
        else
          v6 = 0LL;
      }
      else
      {
        v6 += 48LL;
      }
    }
    else
    {
      v6 += 24LL;
    }
  }
  *(_DWORD *)v6 = *(_DWORD *)v4;
  v9 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v6 + 4) = v9;
  *(_DWORD *)(v6 + 8) = *(_DWORD *)(v4 + 8);
  result = *(_QWORD *)(v4 + 16) + 48 * v5;
  *(_QWORD *)(v6 + 16) = result;
  if ( v9 )
  {
    do
    {
      v11 = v2++;
      v12 = 3 * v11;
      result = *(_QWORD *)(v6 + 16);
      *(_DWORD *)(result + 16 * v12 + 28) = a1;
    }
    while ( v2 < *(_DWORD *)(v6 + 4) );
  }
  return result;
}

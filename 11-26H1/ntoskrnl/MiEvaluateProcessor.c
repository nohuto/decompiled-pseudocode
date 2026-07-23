/*
 * XREFs of MiEvaluateProcessor @ 0x1402F6CF4
 * Callers:
 *     MiEvaluateProcessorGroups @ 0x1402F6AC4 (MiEvaluateProcessorGroups.c)
 * Callees:
 *     MiObtainParkedCoreMasks @ 0x1402F6BD8 (MiObtainParkedCoreMasks.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1402F6E90 (KeFindFirstSetRightGroupAffinity.c)
 */

__int64 __fastcall MiEvaluateProcessor(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 FirstSetRightGroupAffinity; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // r9d
  __int64 i; // r10
  _QWORD *v14; // rdx
  int v15; // ebx
  __int64 v16; // rax
  __int64 result; // rax
  __int128 v18; // [rsp+20h] [rbp-38h]

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  FirstSetRightGroupAffinity = (unsigned int)KeFindFirstSetRightGroupAffinity(a3);
  v18 = *a3;
  v7 = 0LL;
  v8 = *(_QWORD *)(KiProcessorBlock[FirstSetRightGroupAffinity] + 36512);
  *(_QWORD *)&v18 = v8 & *(_QWORD *)a3;
  v9 = v18;
  *(_QWORD *)a3 &= ~v8;
  *(_OWORD *)(a1 + 8) = v18;
  *(_OWORD *)(a1 + 24) = v18;
  if ( !*(_WORD *)(a2 + 16) )
    MiObtainParkedCoreMasks((_OWORD *)(a2 + 16));
  if ( WORD4(v18) < *(_WORD *)(a2 + 16) )
    v7 = *(_QWORD *)(a2 + 8LL * WORD4(v18) + 24);
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  for ( i = v18; i; i &= ~v14[25] )
  {
    v14 = (_QWORD *)KiProcessorBlock[FirstSetRightGroupAffinity];
    if ( v14[1] == v14[3] )
    {
      ++v11;
      v10 |= v14[25];
    }
    else
    {
      ++v12;
    }
    FirstSetRightGroupAffinity = (unsigned int)(FirstSetRightGroupAffinity + 1);
  }
  v15 = 4;
  if ( v11 )
  {
    v16 = v10 & v7;
    if ( v12 )
    {
      if ( v16 == v10 )
      {
        v15 = 3;
        v9 = v10;
      }
      else
      {
        v15 = 2;
        v9 = v10 & ~v7;
      }
    }
    else
    {
      if ( v16 == v10 )
        v9 = v10;
      else
        v9 = v10 & ~v7;
      v15 = (v10 & v7) == v10;
    }
  }
  *(_QWORD *)(a1 + 8) = v9;
  result = KeFindFirstSetRightGroupAffinity(a1 + 8);
  *(_DWORD *)(a1 + 40) = v15;
  *(_DWORD *)(a1 + 4) = result;
  return result;
}

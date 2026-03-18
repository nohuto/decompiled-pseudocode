/*
 * XREFs of ?ColorMatch@@YAKVXEPALOBJ@@T_PAL_ULONG@@PEAK@Z @ 0x1403349FC
 * Callers:
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x140334AF8 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ColorMatch(__int64 a1, int a2, unsigned int *a3)
{
  bool v4; // cf
  __int64 result; // rax
  unsigned int v6; // esi
  unsigned int v7; // ebp
  __int64 v8; // rbx
  unsigned int v9; // r10d
  __int64 v10; // r14
  int v11; // eax
  unsigned int v12; // r15d
  int v13; // r9d
  int v14; // r8d
  int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // r8d

  if ( (a2 & 0x2000000) != 0 )
  {
    v4 = (unsigned int)(unsigned __int16)a2 < *(_DWORD *)(a1 + 28);
    *a3 = 0;
    return (unsigned __int16)a2 & (unsigned int)-v4;
  }
  else if ( (a2 & 0x1000000) != 0 )
  {
    *a3 = 0xFFFFFFF;
    return 0LL;
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 28);
    v7 = 0;
    v8 = 0LL;
    v9 = 0xFFFFFFF;
    if ( v6 )
    {
      v10 = *(_QWORD *)(a1 + 112);
      do
      {
        v11 = *(_DWORD *)(v10 + 4 * v8);
        v12 = v9;
        if ( (v11 & 0x10000000) != 0 && (v11 & 0x1000000) == 0 )
        {
          v13 = ((unsigned __int8)v11 - (unsigned __int8)a2) * ((unsigned __int8)v11 - (unsigned __int8)a2);
          v14 = (BYTE1(v11) - BYTE1(a2)) * (BYTE1(v11) - BYTE1(a2));
          v15 = BYTE2(v11) - BYTE2(a2);
          v16 = v8;
          v17 = v15 * v15 + v13 + v14;
          if ( v17 < v9 )
            v9 = v17;
          if ( v17 >= v12 )
            v16 = v7;
          v7 = v16;
          if ( !v9 )
            break;
        }
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < v6 );
    }
    result = v7;
    if ( (a2 & 0x4000000) != 0 )
      v9 = 0xFFFFFFF;
    *a3 = v9;
  }
  return result;
}

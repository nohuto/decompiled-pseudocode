/*
 * XREFs of StorPortSetBusDataByOffset @ 0x14004F840
 * Callers:
 *     StorPortSetBusDataByOffsetVrfy @ 0x1401C27F0 (StorPortSetBusDataByOffsetVrfy.c)
 * Callees:
 *     RaSetBusData @ 0x14005C97C (RaSetBusData.c)
 */

__int64 __fastcall StorPortSetBusDataByOffset(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  int **v7; // rax
  unsigned int v8; // r8d
  int *v10; // rcx
  int v11; // edx
  __int64 v12; // rcx
  int v13; // ecx

  v7 = *(int ***)(a1 - 16);
  v8 = 0;
  if ( v7 )
  {
    v10 = *v7;
    if ( *v7 )
    {
      v11 = *v10;
      if ( ((_DWORD)v7[31] & 1) != 0 )
      {
        if ( v11 == 1314275652 )
        {
          v12 = *((_QWORD *)v10 + 75);
          if ( v12 )
          {
            v13 = v12 + 16;
            return (unsigned int)RaSetBusData(v13, a2, a5, a6, a7);
          }
        }
      }
      else if ( v11 == 1094997074 )
      {
        v13 = (_DWORD)v10 + 792;
        return (unsigned int)RaSetBusData(v13, a2, a5, a6, a7);
      }
    }
  }
  return v8;
}

/*
 * XREFs of PpmPerfGetCurrentState @ 0x1404764D4
 * Callers:
 *     PoGetPerfStateAndParkingInfo @ 0x1404762E8 (PoGetPerfStateAndParkingInfo.c)
 *     PopProcessorInformation @ 0x140A89700 (PopProcessorInformation.c)
 *     PpmWmiGetAllData @ 0x140A91568 (PpmWmiGetAllData.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PpmPerfGetCurrentState(
        __int64 a1,
        _DWORD *a2,
        unsigned int *a3,
        unsigned int *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  _DWORD *v6; // rdi
  _DWORD *v8; // rbx
  unsigned int v10; // r10d
  unsigned __int64 result; // rax
  unsigned int v12; // r9d
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx

  v6 = *(_DWORD **)(a1 + 35264);
  v8 = *(_DWORD **)(a1 + 35272);
  v10 = 100;
  if ( v6 && v8 )
  {
    result = (unsigned int)v6[134];
    v12 = v8[20];
    if ( v12 >= (unsigned int)result )
      v12 = v6[134];
    if ( a2 )
    {
      result = (unsigned int)v8[21];
      *a2 = result;
    }
    if ( a3 )
    {
      v13 = v6[134] * v6[114];
      result = 1374389535 * v13;
      *a3 = v13 / 0x64;
    }
    if ( a5 )
    {
      result = (unsigned int)(v12 < v6[116]) + 1;
      *a5 = result;
    }
    if ( a6 )
    {
      result = (unsigned int)v8[8];
      *a6 = result;
      if ( v8[7] < 0x64u )
      {
        result = (unsigned int)result | 4;
        *a6 = result;
      }
    }
  }
  else
  {
    if ( a2 )
      *a2 = *(_DWORD *)(a1 + 68);
    if ( a3 )
      *a3 = *(_DWORD *)(a1 + 68);
    if ( a5 )
      *a5 = 0;
    result = (unsigned __int64)a6;
    if ( a6 )
      *a6 = 0;
  }
  if ( a4 )
  {
    v14 = *(_QWORD *)(a1 + 35264);
    if ( v14 )
    {
      v15 = *(_QWORD *)(a1 + 35272);
      if ( v15 )
      {
        result = *(unsigned int *)(v15 + 148);
        if ( (_DWORD)result == -1 )
          result = *(unsigned int *)(v15 + 160);
        v10 = *(_DWORD *)(v14 + 536);
        if ( (unsigned int)result < v10 )
          v10 = result;
      }
    }
    *a4 = v10;
  }
  return result;
}

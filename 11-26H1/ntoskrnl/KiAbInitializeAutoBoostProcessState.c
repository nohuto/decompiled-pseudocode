/*
 * XREFs of KiAbInitializeAutoBoostProcessState @ 0x1404D5F60
 * Callers:
 *     KeInitializeProcess @ 0x140B58704 (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiAbInitializeAutoBoostProcessState(__int64 a1, unsigned int *a2)
{
  unsigned __int64 result; // rax
  unsigned int v4; // r10d
  __int64 v5; // rcx
  unsigned int v6; // ecx
  __int64 v7; // r10

  result = KiAbpGlobalState;
  if ( (KiAbpGlobalState & 1) != 0 )
  {
    v4 = 0;
    result = ((unsigned int)(KeMaximumProcessors - 1) >> 3) + 1;
    *a2 = result;
    if ( (_DWORD)result )
    {
      do
      {
        result = v4++;
        v5 = 3 * result;
        *(_QWORD *)&a2[2 * v5 + 2] = 0LL;
        *(_QWORD *)&a2[2 * v5 + 4] = 0LL;
        *(_QWORD *)&a2[2 * v5 + 6] = 0LL;
      }
      while ( v4 < *a2 );
    }
  }
  else
  {
    v6 = ((unsigned int)(KeMaximumProcessors - 1) >> 3) + 1;
    if ( (unsigned int)(KeMaximumProcessors - 1) >> 3 != -1 )
    {
      result = (unsigned __int64)(a2 + 4);
      v7 = v6;
      do
      {
        *(_QWORD *)(result - 16) = 0LL;
        *(_QWORD *)(result - 8) = 0LL;
        *(_QWORD *)result = 0LL;
        result += 24LL;
        --v7;
      }
      while ( v7 );
    }
    *(_DWORD *)(a1 + 96) = v6;
  }
  *(_QWORD *)(a1 + 88) = a2;
  return result;
}

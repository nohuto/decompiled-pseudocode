/*
 * XREFs of PpmIdleInitializeConcurrency @ 0x1407CC980
 * Callers:
 *     PpmParkInitParkNode @ 0x140612C58 (PpmParkInitParkNode.c)
 * Callees:
 *     PpmQueryTime @ 0x14021C9E8 (PpmQueryTime.c)
 *     RtlCountSetBitsAffinityEx @ 0x140253280 (RtlCountSetBitsAffinityEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

__int64 __fastcall PpmIdleInitializeConcurrency(__int64 a1, unsigned __int16 *a2, __int64 *a3, __int64 a4)
{
  unsigned int v6; // esi
  int v7; // eax
  int v8; // r9d
  int v9; // ebp
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 result; // rax
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0;
  v7 = RtlCountSetBitsAffinityEx(a2);
  v9 = v7;
  if ( a4 && v7 == *(_DWORD *)(a4 + 8) )
  {
    v10 = a4;
  }
  else
  {
    v13 = 0LL;
    DWORD2(v13) = v8 | 0x80000000;
    LOBYTE(v13) = 3;
    *(_QWORD *)&v13 = v13 | 0x100;
    v11 = ExAllocatePool3(64LL, (unsigned int)(8 * v7 + 336), 1884115024LL, &v13, 1);
    v10 = v11;
    if ( v11 )
    {
      *(_QWORD *)v11 = 0LL;
      *(_DWORD *)(v11 + 8) = v9;
      PpmQueryTime();
    }
    v6 = -1073741670;
  }
  result = v6;
  *a3 = v10;
  return result;
}

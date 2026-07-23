/*
 * XREFs of MiLockHugePfnInternal @ 0x1404FABD8
 * Callers:
 *     MiTryLockHugePfnAtDpc @ 0x1406F2A6C (MiTryLockHugePfnAtDpc.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockHugePfnInternal(__int64 a1, char a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  char v5; // si
  unsigned __int64 v6; // rbx
  signed __int32 v7; // edx
  bool v8; // zf
  signed __int32 v9; // eax
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)&stru_140E2ED08.SystemCallNumber;
  v4 = ((a1 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFF;
  v11 = 0;
  v5 = v4 & 0x1F;
  v6 = (unsigned __int64)(unsigned int)v4 >> 5;
  while ( 2 )
  {
    v7 = *(_DWORD *)(v3 + 4 * v6);
    while ( ((v7 >> v5) & 1) == 0 )
    {
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 4 * v6), v7 | (1 << v5), v7);
      v8 = v7 == v9;
      v7 = v9;
      if ( v8 )
        return 1LL;
    }
    if ( (a2 & 1) == 0 )
    {
      KeYieldProcessorEx(&v11);
      continue;
    }
    break;
  }
  return 0LL;
}

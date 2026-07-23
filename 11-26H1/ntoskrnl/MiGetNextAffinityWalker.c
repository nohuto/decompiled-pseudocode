/*
 * XREFs of MiGetNextAffinityWalker @ 0x1402F68CC
 * Callers:
 *     MiFindBestZeroingProcessor @ 0x1402F6038 (MiFindBestZeroingProcessor.c)
 *     MiDoParentWork @ 0x1404FD268 (MiDoParentWork.c)
 *     MiLaunchChildWorkers @ 0x140510D28 (MiLaunchChildWorkers.c)
 * Callees:
 *     MiEvaluateProcessorGroups @ 0x1402F6AC4 (MiEvaluateProcessorGroups.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetNextAffinityWalker(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  ULONG_PTR v4; // rax
  ULONG_PTR v5; // rbx
  int v6; // ecx
  int v7; // esi
  _DWORD *v8; // rax
  __int64 v9; // rcx
  int v10; // ecx
  int v11; // edx
  _DWORD *v12; // r8
  int i; // ecx
  __int64 v14; // r8
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  unsigned int j; // ecx
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  int v22; // eax
  _DWORD v23[11]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v24[244]; // [rsp+5Ch] [rbp-11Ch] BYREF

  if ( !BugCheckParameter2 )
    return 3221226021LL;
  while ( 1 )
  {
    v4 = *(int *)(BugCheckParameter2 + 12);
    if ( (int)v4 >= 3 )
      KeBugCheckEx(0x1Au, 0x6180uLL, BugCheckParameter2, v4, 0LL);
    v5 = 32 * v4 + BugCheckParameter2 + 280;
    v6 = *(_DWORD *)(v5 + 4);
    if ( v6 )
      break;
    *(_DWORD *)(BugCheckParameter2 + 12) = v4 + 1;
  }
  *(_DWORD *)(v5 + 4) = v6 - 1;
  if ( *(_DWORD *)(BugCheckParameter2 + 12) )
  {
    v7 = *(_DWORD *)(v5 + 24);
    v8 = v24;
    v9 = 5LL;
    do
    {
      *(v8 - 10) = -1;
      *v8 = -1;
      v8 += 14;
      --v9;
    }
    while ( v9 );
    do
    {
      MiEvaluateProcessorGroups(v23, BugCheckParameter2, v5);
      v10 = *(_DWORD *)(v5 + 28);
      if ( v10 == -1 )
        break;
      v22 = ++*(_DWORD *)(v5 + 24);
      if ( v22 == v10 )
      {
        *(_DWORD *)(v5 + 24) = 0;
        v22 = 0;
      }
    }
    while ( v23[1] == -1 && v22 != v7 );
    v11 = 5;
    v12 = &v23[1];
    for ( i = 0; i < 5; ++i )
    {
      if ( *v12 != -1 )
      {
        if ( *(_BYTE *)(BugCheckParameter2 + 9) || ((i - 1) & 0xFFFFFFFD) != 0 )
          goto LABEL_14;
        v11 = i;
      }
      v12 += 14;
    }
    i = 5;
    if ( v11 == 5 )
      return 3221226021LL;
LABEL_14:
    if ( i != 5 )
      v11 = i;
    v14 = 14LL * v11;
    v15 = *(_OWORD *)&v23[v14];
    v16 = *(_OWORD *)&v23[v14 + 4];
    *(_QWORD *)(16LL * *(unsigned int *)&v24[v14 * 4 + 4] + *(_QWORD *)(v5 + 16)) &= ~*(_QWORD *)&v23[v14 + 6];
    *(_OWORD *)a2 = v15;
    v17 = *(_OWORD *)&v23[v14 + 8];
    *(_OWORD *)(a2 + 16) = v16;
    *(_QWORD *)&v16 = *(_QWORD *)&v24[v14 * 4 + 4];
    *(_OWORD *)(a2 + 32) = v17;
    *(_QWORD *)(a2 + 48) = v16;
  }
  else
  {
    for ( j = 0; j < *(_DWORD *)(v5 + 12); ++j )
    {
      v20 = *(_QWORD *)(v5 + 16);
      v21 = *(_QWORD *)(v20 + 16LL * j);
      if ( v21 )
      {
        *(_QWORD *)(v20 + 16LL * j) = v21 >> 1;
        return 0LL;
      }
    }
  }
  return 0LL;
}

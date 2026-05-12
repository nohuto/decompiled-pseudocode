/*
 * XREFs of NvmeDumpPopulateMiniportDumpInfo @ 0x1401A2568
 * Callers:
 *     NvmeDumpStorageDumpControl @ 0x1401A2750 (NvmeDumpStorageDumpControl.c)
 * Callees:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeDumpPopulateMiniportDumpInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  int v4; // ebx
  __int64 v5; // rax
  unsigned int v6; // r9d
  __int64 v9; // rdi
  _QWORD *v10; // r8
  _QWORD *v11; // rdx
  bool v12; // zf
  unsigned int v13; // ecx
  char *v14; // rcx
  __int64 v15; // rdx
  void *v16; // r8
  void *v18; // [rsp+50h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a2 + 48);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 0;
  v18 = 0LL;
  v9 = *(_QWORD *)(v5 + 128);
  if ( !*(_QWORD *)(v3 + 64) )
  {
    v10 = (_QWORD *)(a3 + 24);
    v11 = (_QWORD *)*v10;
    if ( (_QWORD *)*v10 == v10 )
      goto LABEL_8;
    do
    {
      v12 = v11[6] == a2;
      v13 = v6 + 1;
      v11 = (_QWORD *)*v11;
      if ( !v12 )
        v13 = v6;
      v6 = v13;
    }
    while ( v11 != v10 );
    if ( v13 <= 4 )
    {
LABEL_8:
      *(_DWORD *)(a2 + 72) = v6 << 16;
      v4 = StorPortExtendedFunction(0, v9, 152LL, 1145987410LL, &v18);
      if ( v4 < 0 )
      {
        v16 = v18;
      }
      else
      {
        memset_0(v18, 0, 0x98uLL);
        *(_WORD *)v18 = *(_WORD *)(*(_QWORD *)(v9 + 592) + 8LL);
        *((_WORD *)v18 + 1) = *(_WORD *)(*(_QWORD *)(v9 + 592) + 10LL);
        *((_BYTE *)v18 + 4) = *(_BYTE *)(*(_QWORD *)(v9 + 592) + 16LL);
        v14 = (char *)v18 + 16;
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1048LL);
        *((_OWORD *)v18 + 1) = *(_OWORD *)v15;
        *((_OWORD *)v14 + 1) = *(_OWORD *)(v15 + 16);
        *((_OWORD *)v14 + 2) = *(_OWORD *)(v15 + 32);
        *((_OWORD *)v14 + 3) = *(_OWORD *)(v15 + 48);
        *((_OWORD *)v14 + 4) = *(_OWORD *)(v15 + 64);
        *((_OWORD *)v14 + 5) = *(_OWORD *)(v15 + 80);
        *((_OWORD *)v14 + 6) = *(_OWORD *)(v15 + 96);
        v14 += 128;
        *((_OWORD *)v14 - 1) = *(_OWORD *)(v15 + 112);
        *(_DWORD *)v14 = *(_DWORD *)(v15 + 128);
        *((_DWORD *)v18 + 37) = *(_DWORD *)(a1 + 56);
        *((_DWORD *)v18 + 10) &= ~8u;
        *((_QWORD *)v18 + 1) = *(_DWORD *)(*(_QWORD *)(v9 + 592) + 24LL) & 0xFFFFC000;
        *((_QWORD *)v18 + 1) |= (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v9 + 592) + 28LL) << 32;
        v16 = 0LL;
        *(_QWORD *)(v3 + 64) = v18;
        *(_QWORD *)(v3 + 136) = v18;
        v18 = 0LL;
      }
      if ( v16 )
        StorPortExtendedFunction(1u, v9);
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v4;
}

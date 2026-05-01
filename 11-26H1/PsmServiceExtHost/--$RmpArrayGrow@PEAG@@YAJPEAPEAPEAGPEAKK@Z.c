/*
 * XREFs of ??$RmpArrayGrow@PEAG@@YAJPEAPEAPEAGPEAKK@Z @ 0x18001B9E0
 * Callers:
 *     ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x180019D3C (-HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x1800479D0 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?RmpReallocateHeap@@YAPEAXPEAX_K@Z @ 0x180049F94 (-RmpReallocateHeap@@YAPEAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 __fastcall RmpArrayGrow<unsigned short *>(void **a1, unsigned int *a2, unsigned int a3)
{
  int v5; // ebx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned int v10; // ebp
  char *Heap; // rax
  void *v12; // rdi
  unsigned __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0LL;
  if ( *a2 < a3 )
  {
    v6 = a3 - 1;
    if ( ((unsigned int)v6 & a3) != 0 )
    {
      v7 = v6 | ((unsigned __int64)(unsigned int)v6 >> 1) | ((v6 | ((unsigned __int64)(unsigned int)v6 >> 1)) >> 2);
      v8 = v7 | (v7 >> 4) | ((v7 | (v7 >> 4)) >> 8);
      v9 = (v8 | (v8 >> 16)) + 1;
    }
    else
    {
      v9 = 2 * a3;
    }
    if ( v9 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
    v10 = v9;
    v5 = RtlULongLongMult((unsigned int)v9, 8uLL, &v14);
    if ( v5 < 0 )
    {
      return (unsigned int)-1073741675;
    }
    else
    {
      if ( *a1 )
        Heap = (char *)RmpReallocateHeap(*a1, v14);
      else
        Heap = (char *)HampAllocateHeap(v14);
      v12 = Heap;
      if ( Heap )
      {
        memset_0(&Heap[8 * *a2], 0, 8LL * (v10 - *a2));
        *a2 = v10;
        *a1 = v12;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v5;
}

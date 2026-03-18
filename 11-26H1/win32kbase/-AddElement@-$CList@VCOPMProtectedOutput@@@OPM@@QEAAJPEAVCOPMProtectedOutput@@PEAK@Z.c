/*
 * XREFs of ?AddElement@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x14000A620
 * Callers:
 *     ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1400098D0 (-CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH.c)
 * Callees:
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x14000A430 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall OPM::CList<COPMProtectedOutput>::AddElement(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned __int64 v3; // rbx
  __int64 j; // rax
  __int64 Pool2; // rsi
  void *v10; // rdx
  __int64 i; // r8

  v3 = *(unsigned int *)(a1 + 12);
  if ( *(_DWORD *)(a1 + 8) == (_DWORD)v3 )
  {
    if ( (_DWORD)v3 )
    {
      v3 *= 2LL;
      if ( v3 > 0xFFFFFFFF )
        return 3221225621LL;
    }
    else
    {
      LODWORD(v3) = 16;
    }
    Pool2 = ExAllocatePool2(258LL, 8LL * (unsigned int)v3, 1297108807LL);
    if ( !Pool2 )
      return 3221225495LL;
    v10 = (void *)*(unsigned int *)(a1 + 12);
    for ( i = 0LL; (unsigned int)i < (unsigned int)v10; v10 = (void *)*(unsigned int *)(a1 + 12) )
    {
      *(_QWORD *)(Pool2 + 8 * i) = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
      i = (unsigned int)(i + 1);
    }
    if ( (unsigned int)v10 < (unsigned int)v3 )
      memset((void *)(Pool2 + 8LL * (unsigned int)v10), 0, 8LL * (unsigned int)(v3 - (_DWORD)v10));
    OPM::OPMFreeMemory(*(OPM **)a1, v10);
    *(_QWORD *)a1 = Pool2;
    *(_DWORD *)(a1 + 12) = v3;
  }
  for ( j = 0LL; (unsigned int)j < (unsigned int)v3; j = (unsigned int)(j + 1) )
  {
    if ( !*(_QWORD *)(*(_QWORD *)a1 + 8 * j) )
    {
      *(_QWORD *)(*(_QWORD *)a1 + 8 * j) = a2;
      *a3 = j;
      break;
    }
  }
  ++*(_DWORD *)(a1 + 8);
  return 0LL;
}

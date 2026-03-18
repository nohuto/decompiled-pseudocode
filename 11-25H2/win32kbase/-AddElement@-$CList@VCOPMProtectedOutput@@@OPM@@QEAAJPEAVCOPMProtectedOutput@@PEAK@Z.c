/*
 * XREFs of ?AddElement@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x14015C1F0
 * Callers:
 *     ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x140082BE8 (-CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH.c)
 * Callees:
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x140083440 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall OPM::CList<COPMProtectedOutput>::AddElement(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned __int64 v3; // rbx
  char *Pool2; // rax
  void *v8; // rdx
  char *v9; // r14
  __int64 v11; // rsi
  OPM *v12; // rbp
  __int64 i; // rax

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
    Pool2 = (char *)ExAllocatePool2(258LL, 8LL * (unsigned int)v3, 1297108807LL);
    v9 = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    v11 = *(unsigned int *)(a1 + 12);
    v12 = *(OPM **)a1;
    if ( (_DWORD)v11 )
      memmove(Pool2, *(const void **)a1, 8LL * (unsigned int)v11);
    if ( (unsigned int)v11 < (unsigned int)v3 )
      memset(&v9[8 * v11], 0, 8LL * (unsigned int)(v3 - v11));
    OPM::OPMFreeMemory(v12, v8);
    *(_QWORD *)a1 = v9;
    *(_DWORD *)(a1 + 12) = v3;
  }
  for ( i = 0LL; (unsigned int)i < (unsigned int)v3; i = (unsigned int)(i + 1) )
  {
    if ( !*(_QWORD *)(*(_QWORD *)a1 + 8 * i) )
    {
      *(_QWORD *)(*(_QWORD *)a1 + 8 * i) = a2;
      *a3 = i;
      break;
    }
  }
  ++*(_DWORD *)(a1 + 8);
  return 0LL;
}

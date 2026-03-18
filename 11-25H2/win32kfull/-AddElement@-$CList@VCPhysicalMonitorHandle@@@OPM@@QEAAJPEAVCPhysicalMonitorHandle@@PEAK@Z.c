/*
 * XREFs of ?AddElement@?$CList@VCPhysicalMonitorHandle@@@OPM@@QEAAJPEAVCPhysicalMonitorHandle@@PEAK@Z @ 0x14020041C
 * Callers:
 *     ?AddHandleToTable@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAVCPhysicalMonitorHandle@@PEAPEAX@Z @ 0x1402003BC (-AddHandleToTable@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAVCPhysicalMon.c)
 * Callees:
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall OPM::CList<CPhysicalMonitorHandle>::AddElement(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned __int64 v3; // rbx
  __int64 j; // rax
  _QWORD *v8; // rsi
  unsigned __int64 v10; // rdx
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
    v8 = OPM::OPMAllocateMemory((OPM *)(8LL * (unsigned int)v3), 0x100uLL, (unsigned __int64)a3);
    if ( !v8 )
      return 3221225495LL;
    v10 = *(unsigned int *)(a1 + 12);
    for ( i = 0LL; (unsigned int)i < (unsigned int)v10; v10 = *(unsigned int *)(a1 + 12) )
    {
      v8[i] = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
      i = (unsigned int)(i + 1);
    }
    if ( (unsigned int)v10 < (unsigned int)v3 )
      memset_0(&v8[(unsigned int)v10], 0, 8LL * (unsigned int)(v3 - v10));
    OPM::OPMFreeMemory(*(OPM **)a1, (void *)v10);
    *(_QWORD *)a1 = v8;
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

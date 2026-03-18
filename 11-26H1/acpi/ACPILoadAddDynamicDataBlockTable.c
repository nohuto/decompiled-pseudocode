/*
 * XREFs of ACPILoadAddDynamicDataBlockTable @ 0x1400DB694
 * Callers:
 *     ACPILoadProcessDSDT @ 0x1400DB740 (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessRSDT @ 0x1400DDE64 (ACPILoadProcessRSDT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPILoadAddDynamicDataBlockTable(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  _QWORD *Pool2; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rdx

  v2 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 1953522497LL);
  if ( Pool2 )
  {
    Pool2[3] = a1;
    if ( a2 )
    {
      v6 = AcpiDynamicDataBlockTableList;
      if ( *(__int64 **)(AcpiDynamicDataBlockTableList + 8) == &AcpiDynamicDataBlockTableList )
      {
        *Pool2 = AcpiDynamicDataBlockTableList;
        Pool2[1] = &AcpiDynamicDataBlockTableList;
        *(_QWORD *)(v6 + 8) = Pool2;
        AcpiDynamicDataBlockTableList = (__int64)Pool2;
        return v2;
      }
    }
    else
    {
      v7 = (_QWORD *)qword_14008E8A8;
      if ( *(__int64 **)qword_14008E8A8 == &AcpiDynamicDataBlockTableList )
      {
        *Pool2 = &AcpiDynamicDataBlockTableList;
        Pool2[1] = v7;
        *v7 = Pool2;
        qword_14008E8A8 = (__int64)Pool2;
        return v2;
      }
    }
    __fastfail(3u);
  }
  return (unsigned int)-1073741670;
}

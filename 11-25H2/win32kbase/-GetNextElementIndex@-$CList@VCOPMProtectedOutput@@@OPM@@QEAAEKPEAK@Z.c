/*
 * XREFs of ?GetNextElementIndex@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAEKPEAK@Z @ 0x14011E6BC
 * Callers:
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LUID@@PEAVCMutex@2@@Z @ 0x14011E624 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LU.c)
 * Callees:
 *     <none>
 */

char __fastcall OPM::CList<COPMProtectedOutput>::GetNextElementIndex(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // r9
  unsigned int v4; // edx

  v3 = a2 + 1;
  if ( (unsigned int)v3 >= a2 )
  {
    v4 = a2 + 2;
    while ( (unsigned int)v3 < *(_DWORD *)(a1 + 12) )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 8 * v3) )
      {
        *a3 = v3;
        return 1;
      }
      if ( v4 < (unsigned int)v3 )
        return 0;
      v3 = (unsigned int)(v3 + 1);
      ++v4;
    }
  }
  return 0;
}

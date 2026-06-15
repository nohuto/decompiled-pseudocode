/*
 * XREFs of ??$make_shared@VCPowerReference@@$$V@std@@YA?AV?$shared_ptr@VCPowerReference@@@0@XZ @ 0x180011E44
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180011774 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::make_shared<CPowerReference,>(_QWORD *a1)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v3; // rax
  _DWORD *v4; // rdx

  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x80uLL);
  v4 = v3;
  if ( v3 )
  {
    v3[2] = 1;
    v3[3] = 1;
    *(_QWORD *)v3 = &std::_Ref_count_obj2<CPowerReference>::`vftable';
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 0LL;
    *((_QWORD *)v3 + 4) = 0LL;
    *((_QWORD *)v3 + 5) = 0LL;
    *((_QWORD *)v3 + 6) = 0LL;
    *((_QWORD *)v3 + 7) = 0LL;
    *((_QWORD *)v3 + 8) = 0LL;
    *((_QWORD *)v3 + 9) = 0LL;
    *((_QWORD *)v3 + 10) = 0LL;
    *((_QWORD *)v3 + 11) = 0LL;
    *((_QWORD *)v3 + 12) = 0LL;
    *((_QWORD *)v3 + 13) = 0LL;
    *((_QWORD *)v3 + 14) = 0LL;
    *((_QWORD *)v3 + 15) = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  a1[1] = v4;
  *a1 = v4 + 4;
  return a1;
}

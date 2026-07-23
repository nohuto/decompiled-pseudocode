/*
 * XREFs of MxIsRegularMemory @ 0x140CFDFE0
 * Callers:
 *     MxMarkValidMappings @ 0x140CFA428 (MxMarkValidMappings.c)
 *     MxCreatePfnsForPtes @ 0x140CFC580 (MxCreatePfnsForPtes.c)
 * Callees:
 *     MxFindDescriptorByPfn @ 0x140CFCD38 (MxFindDescriptorByPfn.c)
 */

__int64 __fastcall MxIsRegularMemory(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rcx
  __int64 DescriptorByPfn; // rax
  __int64 v7; // r11
  unsigned __int64 v8; // rax
  __int64 v9; // rcx

  result = qword_14101FC28;
  if ( !qword_14101FC28
    || (v4 = *(_QWORD *)(qword_14101FC28 + 32), a2 < v4)
    || a2 >= *(_QWORD *)(qword_14101FC28 + 40) + v4 )
  {
    if ( !qword_14101FC30
      || (v5 = *(_QWORD *)(qword_14101FC30 + 32), a2 < v5)
      || a2 >= *(_QWORD *)(qword_14101FC30 + 40) + v5 )
    {
      DescriptorByPfn = MxFindDescriptorByPfn(a1, a2);
      v7 = DescriptorByPfn;
      if ( DescriptorByPfn )
      {
        v8 = *(int *)(DescriptorByPfn + 24);
        if ( (_DWORD)v8 != 30 )
        {
          if ( (unsigned int)v8 > 0x2C || (v9 = 0x15C580C00048LL, !_bittest64(&v9, v8)) )
          {
            qword_14101FC28 = v7;
            return v7;
          }
        }
        qword_14101FC30 = v7;
      }
    }
    return 0LL;
  }
  return result;
}

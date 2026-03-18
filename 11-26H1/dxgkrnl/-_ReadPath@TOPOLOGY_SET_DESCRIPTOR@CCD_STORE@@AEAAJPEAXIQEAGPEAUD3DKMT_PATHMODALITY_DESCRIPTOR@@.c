/*
 * XREFs of ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIQEAGPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1403CC604
 * Callers:
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1403CC820 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 * Callees:
 *     _CcdReadRegistryValues @ 0x1403CCF5C (_CcdReadRegistryValues.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_ReadPath(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        void *a2,
        unsigned int a3,
        unsigned __int16 *const a4,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a5)
{
  __int64 v7; // rbp
  int RegistryValues; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  int v11; // eax
  int v13; // eax
  int v14; // eax

  v7 = a3;
  RegistryValues = CcdReadRegistryValues(a2, a4, &unk_140166800, 13LL, a5);
  v9 = *(unsigned int *)a5;
  *(_QWORD *)a5 = v9;
  v10 = RegistryValues;
  if ( RegistryValues < 0 )
  {
    WdLogSingleEntry4(3LL, RegistryValues, a2, v7, a5);
    WdLogGlobalForLineNumber = 1899;
  }
  else
  {
    if ( (v9 & 0x100) != 0 )
    {
      v13 = CcdReadRegistryValues(a2, a4, &unk_140166E30, 6LL, a5);
      v10 = v13;
      if ( v13 < 0 )
      {
        WdLogSingleEntry4(3LL, v13, a2, v7, a5);
        WdLogGlobalForLineNumber = 1920;
        v14 = CcdReadRegistryValues(a2, 0LL, &unk_140166C00, 8LL, a5);
        if ( v14 < 0 )
        {
          WdLogSingleEntry3(2LL, v14, a2, v7);
          *(_QWORD *)a5 &= ~0x100uLL;
          WdLogGlobalForLineNumber = 1935;
        }
        if ( (*(_QWORD *)a5 & 0x100LL) != 0 )
          *(_QWORD *)a5 |= 0x20000uLL;
        v10 = 0;
      }
      v9 = *(_QWORD *)a5;
      if ( (*(_QWORD *)a5 & 0x100LL) != 0 )
      {
        *((_QWORD *)a5 + 13) = *((_QWORD *)a5 + 12);
        *((_DWORD *)a5 + 29) = 0;
      }
    }
    if ( (v9 & 0x800000) != 0 )
    {
      v11 = CcdReadRegistryValues(a2, a4, &unk_140166AE0, 5LL, a5);
      v10 = v11;
      if ( v11 < 0 )
      {
        WdLogSingleEntry4(3LL, v11, a2, v7, a5);
        *(_QWORD *)a5 &= ~0x800000uLL;
        v10 = 0;
        WdLogGlobalForLineNumber = 1987;
      }
      else if ( *((_DWORD *)a5 + 44) == *((_DWORD *)a5 + 42) || *((_DWORD *)a5 + 45) == *((_DWORD *)a5 + 43) )
      {
        *(_QWORD *)a5 &= ~0x800000uLL;
      }
    }
  }
  return v10;
}

/*
 * XREFs of ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x140318E54
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1403195E0 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1403D7540 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

void __fastcall CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(CCD_TOPOLOGY *this)
{
  unsigned int i; // ebx
  __int64 v3; // rax
  unsigned __int16 v4; // cx
  const signed __int64 *PathDescriptor; // rdi

  for ( i = 0; ; ++i )
  {
    v3 = *((_QWORD *)this + 8);
    v4 = v3 ? *(_WORD *)(v3 + 20) : 0;
    if ( i >= v4 )
      break;
    PathDescriptor = (const signed __int64 *)CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( _bittest64(PathDescriptor, 0x34u) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1243;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(PathDescriptor->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_PATH_SMI_TMI_FORCED_FIXED) == 0",
        1243LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*PathDescriptor & 0x800000) != 0 )
    {
      if ( (*PathDescriptor & 0x100) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1250;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"PathDescriptor->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_SMI_VALID",
          1250LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (*(_DWORD *)PathDescriptor & 0x20000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1251;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"PathDescriptor->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_CONTENT_SIZE_VALID",
          1251LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
  }
}

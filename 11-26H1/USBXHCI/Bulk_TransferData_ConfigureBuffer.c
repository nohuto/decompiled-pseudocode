/*
 * XREFs of Bulk_TransferData_ConfigureBuffer @ 0x140027240
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x14003B040 (Bulk_RetrieveNextStage.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1400274BC (WPP_RECORDER_SF_ddL.c)
 */

__int64 __fastcall Bulk_TransferData_ConfigureBuffer(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // esi
  int v4; // ecx
  __int64 v5; // rbp
  __int64 v6; // rax
  int v8; // ecx
  __int64 v9; // rax
  PMDL Mdl; // rax
  __int64 v11; // rcx
  PVOID v12; // rax
  int v13; // r9d
  int v14; // edx
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // edx

  v1 = *(_QWORD *)(a1 + 48);
  v2 = 0;
  if ( *(_WORD *)(v1 + 2) == 56 )
  {
LABEL_2:
    v4 = *(_DWORD *)(a1 + 76);
    v5 = *(_QWORD *)(a1 + 56);
    if ( v4 == 2 || (v8 = v4 - 1) == 0 )
    {
      v6 = *(_QWORD *)(v1 + 40);
      if ( v6 )
      {
        *(_QWORD *)(a1 + 88) = v6;
      }
      else
      {
        v11 = *(_QWORD *)(v1 + 48);
        if ( (*(_BYTE *)(v11 + 10) & 5) != 0 )
          v12 = *(PVOID *)(v11 + 24);
        else
          v12 = MmMapLockedPagesSpecifyCache((PMDL)v11, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010u);
        *(_QWORD *)(a1 + 88) = v12;
        if ( !v12 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v13 = 39;
LABEL_26:
            v18 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 143LL);
            LOBYTE(v18) = 2;
            WPP_RECORDER_SF_ddL(
              *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
              v18,
              14,
              v13,
              (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids,
              *(_BYTE *)(*(_QWORD *)(v5 + 48) + 143LL),
              *(_DWORD *)(*(_QWORD *)(v5 + 56) + 152LL),
              *(_DWORD *)(v5 + 64));
          }
          return (unsigned int)-1073741670;
        }
      }
    }
    else if ( v8 == 2 )
    {
      v9 = *(_QWORD *)(v1 + 48);
      if ( v9 )
      {
        *(_QWORD *)(a1 + 80) = v9;
        return v2;
      }
      Mdl = IoAllocateMdl(*(PVOID *)(v1 + 40), *(_DWORD *)(a1 + 104), 0, 0, 0LL);
      *(_QWORD *)(a1 + 80) = Mdl;
      if ( Mdl )
      {
LABEL_11:
        MmBuildMdlForNonPagedPool(*(PMDL *)(a1 + 80));
        return v2;
      }
      if ( (*(_DWORD *)(v1 + 32) & 0x10) != 0 && *(_QWORD *)(v5 + 120) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v14 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 143LL);
          LOBYTE(v14) = 5;
          WPP_RECORDER_SF_ddL(
            *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
            v14,
            14,
            40,
            (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids,
            *(_BYTE *)(*(_QWORD *)(v5 + 48) + 143LL),
            *(_DWORD *)(*(_QWORD *)(v5 + 56) + 152LL),
            *(_DWORD *)(v5 + 64));
        }
        v15 = *(_QWORD *)(v5 + 120);
        v16 = *(unsigned int *)(a1 + 104);
        *(_QWORD *)(a1 + 80) = v15;
        v17 = *(_QWORD *)(v1 + 40);
        *(_QWORD *)v15 = 0LL;
        *(_WORD *)(v15 + 10) = 0;
        *(_DWORD *)(v15 + 40) = v16;
        *(_QWORD *)(v15 + 32) = v17 & 0xFFFFFFFFFFFFF000uLL;
        *(_WORD *)(v15 + 8) = 8 * ((((unsigned __int64)(v17 & 0xFFF) + v16 + 4095) >> 12) + 6);
        *(_DWORD *)(v15 + 44) = v17 & 0xFFF;
        goto LABEL_11;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 41;
        goto LABEL_26;
      }
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    switch ( *(_WORD *)(v1 + 2) )
    {
      case '9':
      case ':':
        return v2;
      default:
        goto LABEL_2;
    }
  }
  return v2;
}

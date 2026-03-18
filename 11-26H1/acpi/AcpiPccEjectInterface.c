/*
 * XREFs of AcpiPccEjectInterface @ 0x1400500C8
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x14005A800 (ACPIBusIrpQueryInterface.c)
 *     ACPIRootIrpQueryInterface @ 0x1400CC6A0 (ACPIRootIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     AcpiPccUnlockSubspace @ 0x140040AA8 (AcpiPccUnlockSubspace.c)
 *     AcpiPccLockSubspace @ 0x14004B9A0 (AcpiPccLockSubspace.c)
 *     AcpiPccUpdateSciRefCount @ 0x14004D418 (AcpiPccUpdateSciRefCount.c)
 *     AcpiDiagTracePccEjectSubspace @ 0x140051C68 (AcpiDiagTracePccEjectSubspace.c)
 *     AcpiNullReference @ 0x140053370 (AcpiNullReference.c)
 *     AcpiPccIsCommandCompleteSet @ 0x1400653E4 (AcpiPccIsCommandCompleteSet.c)
 *     AcpiPccUpdateCommandCompleteStatus @ 0x140065688 (AcpiPccUpdateCommandCompleteStatus.c)
 */

__int64 __fastcall AcpiPccEjectInterface(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  char v4; // r12
  KIRQL CurrentIrql; // al
  __int64 v6; // rdi
  int v7; // r14d
  __int64 DeviceExtension; // rax
  unsigned int v9; // edx
  __int64 v10; // rbp
  char v11; // r15
  int v12; // esi
  unsigned int v13; // edi
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // r8d
  unsigned int v19; // eax
  char v20; // cl
  unsigned int v21; // eax
  __int64 v22; // rax
  int v23; // ecx
  KIRQL v25; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v6 = *(_QWORD *)(a2 + 184);
  v25 = CurrentIrql;
  v7 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  LODWORD(v10) = -2;
  v11 = -2;
  v12 = 1;
  if ( *(_WORD *)(v6 + 16) < 0x80u )
  {
    v13 = -1073741811;
    goto LABEL_43;
  }
  if ( !*(_WORD *)(v6 + 18) )
  {
    v13 = -1073741811;
    v12 = 2;
    goto LABEL_43;
  }
  v14 = *(_QWORD *)(v6 + 24);
  v10 = *(unsigned int *)(v14 + 32);
  if ( _bittest64((const signed __int64 *)(DeviceExtension + 8), 0x24u) && (_DWORD)v10 == -1 )
  {
    v15 = AcpiPccLegacySubspace;
  }
  else
  {
    if ( (unsigned int)v10 >= AcpiPccSubspaceCount )
    {
LABEL_42:
      v12 = 3;
      v13 = -1073741637;
      goto LABEL_43;
    }
    v15 = AcpiPccSubspaces + 824 * v10;
  }
  if ( !v15 )
    goto LABEL_42;
  v11 = *(_BYTE *)v15;
  if ( *(_BYTE *)v15 == 0xFF )
  {
    v16 = *(_QWORD *)(v15 + 56);
    v9 = 500;
    v17 = *(_DWORD *)(v16 + 16);
    *(_DWORD *)(v15 + 20) = v17;
    if ( v17 < 0x1F4 )
      v17 = 500;
    *(_DWORD *)(v15 + 24) = v17;
    v18 = *(_DWORD *)(v16 + 20);
    if ( v18 )
    {
      v9 = 0x1E8480 % v18;
      *(_DWORD *)(v15 + 28) = 0x1E8480 / v18;
    }
    if ( (*(_BYTE *)(v16 + 8) & 1) != 0 )
      *(_DWORD *)(v15 + 8) |= 1u;
  }
  if ( *(_QWORD *)(v14 + 40) && (*(_DWORD *)(v15 + 8) & 1) == 0 )
  {
    v13 = -1073741637;
LABEL_21:
    v12 = 4;
    goto LABEL_38;
  }
  AcpiPccLockSubspace(v15, &v25);
  v4 = 1;
  v19 = *(_DWORD *)(v15 + 8) & 0x1E;
  if ( v19 != 4 )
  {
    v12 = 5;
    v13 = v19 < 4 ? -1073741823 : -1073740024;
    goto LABEL_38;
  }
  if ( !*(_QWORD *)(v14 + 40) && *(_DWORD *)(v15 + 16) == 2 )
  {
    v13 = -1073741811;
    goto LABEL_21;
  }
  v20 = *(_BYTE *)v15;
  if ( *(_BYTE *)v15 == 1 || (unsigned __int8)(v20 - 2) <= 1u )
  {
    if ( (unsigned __int8)AcpiPccIsCommandCompleteSet(v15) )
    {
LABEL_31:
      if ( *(_BYTE *)v15 != 4 && *(_BYTE *)v15 != 3 )
        AcpiPccUpdateCommandCompleteStatus(v15);
      v21 = *(_DWORD *)(v15 + 8) & 0xFFFFFFE1 | 6;
      *(_DWORD *)(v15 + 8) = v21;
      if ( (v21 & 1) != 0 )
      {
        v22 = *(_QWORD *)(v14 + 40);
        if ( v22 )
        {
          *(_QWORD *)(v15 + 392) = v22;
          *(_QWORD *)(v15 + 400) = *(_QWORD *)(v14 + 48);
          *(_QWORD *)(v15 + 408) = BugCheckParameter3;
          AcpiPccUpdateSciRefCount(v15, 1);
        }
      }
      AcpiPccUnlockSubspace(v15, v25);
      *(_DWORD *)v14 = 65664;
      *(_QWORD *)(v14 + 16) = AcpiNullReference;
      v4 = 0;
      *(_QWORD *)(v14 + 24) = AcpiNullReference;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 56) = v15;
      *(_DWORD *)(v14 + 64) = *(_DWORD *)(v15 + 20);
      *(_DWORD *)(v14 + 68) = *(_DWORD *)(v15 + 28);
      *(_QWORD *)(v14 + 72) = *(_QWORD *)(v15 + 40);
      *(_DWORD *)(v14 + 80) = *(_DWORD *)(v15 + 48);
      v23 = *(_DWORD *)(v14 + 84) ^ (*(_DWORD *)(v15 + 8) ^ *(_DWORD *)(v14 + 84)) & 1;
      *(_QWORD *)(v14 + 88) = AcpiPccAcquireSubspace;
      *(_QWORD *)(v14 + 96) = AcpiPccAcquireSubspaceAsync;
      *(_QWORD *)(v14 + 104) = AcpiPccExecuteCommand;
      *(_QWORD *)(v14 + 112) = AcpiPccExecuteCommandAsync;
      *(_DWORD *)(v14 + 84) = v23;
      *(_QWORD *)(v14 + 120) = AcpiPccReleaseSubspace;
      AcpiNullReference(0LL);
      v13 = 0;
      v12 = 0;
      goto LABEL_38;
    }
  }
  else if ( v20 != 4 || !(unsigned __int8)AcpiPccIsCommandCompleteSet(v15) )
  {
    goto LABEL_31;
  }
  v13 = -1073740024;
  v12 = 6;
LABEL_38:
  v7 = *(_DWORD *)(v15 + 816);
  *(_DWORD *)(v15 + 820) = v12;
  if ( v4 )
    AcpiPccUnlockSubspace(v15, v25);
LABEL_43:
  LOBYTE(v9) = v11;
  AcpiDiagTracePccEjectSubspace(v10, v9, v13, v12, v7);
  return v13;
}

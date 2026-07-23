/*
 * XREFs of CmpCreateRootNode @ 0x140CF0C94
 * Callers:
 *     CmpCreateRegistryRoot @ 0x140CF0AAC (CmpCreateRegistryRoot.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 *     CmpNameSize @ 0x1408E3D10 (CmpNameSize.c)
 *     CmpCopyName @ 0x1408E3D50 (CmpCopyName.c)
 */

__int64 __fastcall CmpCreateRootNode(__int64 a1, __int64 a2, _DWORD *a3)
{
  ULONG_PTR v3; // rdi
  unsigned __int16 v5; // ax
  int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // esi
  unsigned __int16 v9; // ax
  unsigned int v10; // edx
  __int64 v11; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+48h] BYREF
  int v16; // [rsp+8Ch] [rbp+4Ch]
  __int64 v17; // [rsp+98h] [rbp+58h] BYREF

  v16 = HIDWORD(a2);
  v3 = CmpMasterHive;
  v14 = 0LL;
  DestinationString = 0LL;
  v15 = -1;
  v17 = 0LL;
  HvpGetCellContextInitialize(&v14);
  RtlInitUnicodeString(&DestinationString, L"REGISTRY");
  v5 = CmpNameSize(&DestinationString.Length);
  v6 = HvAllocateCell(v3, (unsigned int)v5 + 76, 0, &v15, &v17, (__int64)&v14);
  v7 = v17;
  v8 = v6;
  if ( v6 >= 0 )
  {
    *(_DWORD *)v17 = 813934;
    *(_QWORD *)(v7 + 4) = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(v7 + 16) = -1;
    *(_QWORD *)(v7 + 20) = 0LL;
    *(_DWORD *)(v7 + 28) = -1;
    *(_DWORD *)(v7 + 32) = -1;
    *(_DWORD *)(v7 + 36) = 0;
    *(_DWORD *)(v7 + 40) = -1;
    *(_DWORD *)(v7 + 44) = -1;
    *(_DWORD *)(v7 + 48) = -1;
    *(_WORD *)(v7 + 74) = 0;
    *(_QWORD *)(v7 + 60) = 0LL;
    *(_WORD *)(v7 + 52) = 0;
    *(_DWORD *)(v7 + 52) &= 0xFF00FFFF;
    *(_BYTE *)(v7 + 55) = 0;
    *(_DWORD *)(v7 + 56) = 0;
    v9 = CmpCopyName((_BYTE *)(v7 + 76), (const void **)&DestinationString);
    *(_WORD *)(v7 + 72) = v9;
    if ( v9 < DestinationString.Length )
      *(_WORD *)(v7 + 2) |= 0x20u;
    v10 = v15;
    v8 = 0;
    v11 = *(_QWORD *)(v3 + 64);
    *a3 = v15;
    *(_DWORD *)(v11 + 36) = v10;
  }
  if ( v7 )
  {
    if ( (*(_BYTE *)(v3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v3, (__int64)&v14);
    else
      HvpReleaseCellPaged(v3, (unsigned int *)&v14);
  }
  return v8;
}

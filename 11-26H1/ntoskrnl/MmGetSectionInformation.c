/*
 * XREFs of MmGetSectionInformation @ 0x1408EBD40
 * Callers:
 *     PspLocateSystemDll @ 0x1407F3EEC (PspLocateSystemDll.c)
 *     AlpcpMapLegacyPortView @ 0x1408EB9BC (AlpcpMapLegacyPortView.c)
 *     NtQuerySection @ 0x1408EBBB0 (NtQuerySection.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     DbgkpSendErrorMessage @ 0x140B5CE74 (DbgkpSendErrorMessage.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     MiAweControlArea @ 0x140489730 (MiAweControlArea.c)
 *     MiGetControlAreaLoadConfig @ 0x14048F4E4 (MiGetControlAreaLoadConfig.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     MiRelocateAmount @ 0x140B2909C (MiRelocateAmount.c)
 */

__int64 __fastcall MmGetSectionInformation(__int64 a1, int a2, __int64 *a3)
{
  int v5; // ebx
  unsigned __int64 v6; // r14
  __int64 *v7; // rcx
  unsigned __int64 v8; // r8
  __int64 v9; // r13
  bool IsUserAddress; // r15
  __int128 *v11; // r8
  size_t v12; // r8
  __int64 *v13; // rcx
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  __int16 v19; // r8
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int *ControlAreaLoadConfig; // rax
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int128 Src; // [rsp+20h] [rbp-78h] BYREF
  __int128 v30; // [rsp+30h] [rbp-68h]
  __int128 v31; // [rsp+40h] [rbp-58h]
  __int128 v32; // [rsp+50h] [rbp-48h]
  int v33; // [rsp+60h] [rbp-38h]

  v5 = *(_DWORD *)(a1 + 56);
  v6 = MiSectionControlArea(a1);
  if ( (unsigned int)MiAweControlArea(v6) )
    return 3221225485LL;
  v9 = *v7;
  IsUserAddress = MmIsUserAddress(v8);
  memset_0(&Src, 0, 0x48uLL);
  if ( !a2 )
  {
    v15 = ((v5 & 0x1000) << 14) | 0x8000000;
    if ( (v5 & 0x2000) == 0 )
      v15 = (v5 & 0x1000) << 14;
    if ( (v5 & 0x20) != 0 )
      v15 = 0x1000000;
    v16 = v15 | 0x200000;
    if ( (v5 & 0x40) == 0 )
      v16 = v15;
    v17 = v16 | 0x800000;
    if ( (v5 & 0x80u) == 0 )
      v17 = v16;
    v18 = v17 | 0x80000;
    if ( v5 >= 0 )
      v18 = v17;
    v19 = *(_WORD *)(v9 + 12);
    v20 = v18 | 0x10000000;
    if ( (v19 & 0x2000) == 0 )
      v20 = v18;
    v21 = v20 | 0x40000000;
    if ( (v19 & 0x1000) == 0 )
      v21 = v20;
    v22 = *(_DWORD *)(v6 + 56) & 0x20020;
    *(_QWORD *)&Src = *(_QWORD *)(a1 + 24) << 12;
    *(_QWORD *)&v30 = *(_QWORD *)(a1 + 48);
    v23 = v21 | 0x20000000;
    if ( v22 != 131104 )
      v23 = v21;
    DWORD2(Src) = v23;
    v12 = 24LL;
    v13 = a3;
    if ( IsUserAddress )
      goto LABEL_50;
    RtlCopyVolatileMemory(a3, &Src, 0x18uLL);
    return 0LL;
  }
  if ( (v5 & 0x20) != 0 )
  {
    if ( a2 != 1 && a2 != 4 )
    {
      v27 = MiRelocateAmount(v6);
      if ( a2 == 2 )
      {
        if ( (*(_DWORD *)(v6 + 56) & 0x8000) != 0 && (*(_DWORD *)(v6 + 56) & 0x20) != 0 )
          v27 += stru_140E2D2D0.Padding[3] - *(_QWORD *)(v9 + 32);
        if ( IsUserAddress )
          RtlWriteULong64ToUser(a3, v27);
        else
          *a3 = v27;
      }
      else
      {
        v28 = *(_QWORD *)(v9 + 32) - v27;
        if ( IsUserAddress )
          RtlWriteULong64ToUser(a3, v28);
        else
          *a3 = v28;
      }
      return 0LL;
    }
    v11 = *(__int128 **)(v9 + 56);
    Src = *v11;
    v30 = v11[1];
    v31 = v11[2];
    v32 = v11[3];
    if ( (*(_DWORD *)(v6 + 56) & 0x8000) != 0 && (*(_DWORD *)(v6 + 56) & 0x20) != 0 )
      *(_QWORD *)&Src = stru_140E2D2D0.Padding[3] | (unsigned __int16)Src;
    if ( a2 != 1 )
    {
      ControlAreaLoadConfig = (int *)MiGetControlAreaLoadConfig(v6);
      if ( ControlAreaLoadConfig )
      {
        v26 = *ControlAreaLoadConfig;
        if ( (v26 & 0x10) != 0 )
          v33 |= 1u;
        if ( (v26 & 8) != 0 )
          v33 |= 0x100u;
        if ( (v26 & 1) != 0 )
          v33 |= 0x200u;
      }
      if ( (*(_DWORD *)(v25 + 76) & 1) != 0 )
        v33 |= 2u;
      if ( (*(_DWORD *)(v25 + 76) & 2) != 0 )
        v33 |= 8u;
      if ( (*(_DWORD *)(v25 + 76) & 4) != 0 )
        v33 |= 0x10u;
      if ( (*(_DWORD *)(v25 + 76) & 8) != 0 )
        v33 |= 0x20u;
      if ( (*(_DWORD *)(v25 + 76) & 0x10) != 0 )
        v33 |= 0x40u;
      if ( (*(_DWORD *)(v25 + 76) & 0x20) != 0 )
        v33 |= 0x80u;
      v12 = 72LL;
      v13 = a3;
      if ( !IsUserAddress )
      {
        RtlCopyVolatileMemory(a3, &Src, 0x48uLL);
        return 0LL;
      }
      goto LABEL_50;
    }
    v12 = 64LL;
    v13 = a3;
    if ( IsUserAddress )
    {
LABEL_50:
      RtlCopyToUser(v13, &Src, v12);
      return 0LL;
    }
    RtlCopyVolatileMemory(a3, &Src, 0x40uLL);
    return 0LL;
  }
  return 3221225545LL;
}

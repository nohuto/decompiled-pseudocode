/*
 * XREFs of MiInitializeImageVad @ 0x14099ED2C
 * Callers:
 *     MiMapViewOfImageSection @ 0x14099E35C (MiMapViewOfImageSection.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     MiReferenceActiveSubsection @ 0x140454670 (MiReferenceActiveSubsection.c)
 *     MiUpdateVadStartVpn @ 0x140494C34 (MiUpdateVadStartVpn.c)
 *     MiInsertVadEvent @ 0x140494C48 (MiInsertVadEvent.c)
 *     MiControlAreaRequiresCharge @ 0x1404A3414 (MiControlAreaRequiresCharge.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404E06A4 (MiUpdatePrivateDemandZeroView.c)
 *     MiInsertVadCharges @ 0x140996DA0 (MiInsertVadCharges.c)
 *     MiInsertSharedCommitNode @ 0x140997340 (MiInsertSharedCommitNode.c)
 *     MiCreateFixupVad @ 0x14099F45C (MiCreateFixupVad.c)
 *     MiCreatePerSessionProtos @ 0x1409A0A14 (MiCreatePerSessionProtos.c)
 */

__int64 __fastcall MiInitializeImageVad(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  __int64 v5; // r15
  unsigned __int64 v6; // r13
  unsigned int v7; // ebp
  __int64 v8; // r9
  int v9; // r8d
  char v10; // r8^4
  __int64 v11; // rax
  unsigned __int64 i; // rcx
  unsigned __int64 v13; // rdx
  int v14; // eax
  __int64 result; // rax
  int v16; // eax
  int inserted; // eax
  int v18; // eax
  int FixupVad; // ecx
  int v20; // eax
  int v21; // eax
  unsigned int SessionId; // eax
  unsigned int v23; // edi
  __int64 v24; // rbx
  __int64 v25; // rax

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 72);
  v5 = *(_QWORD *)a1;
  v6 = *(_QWORD *)(v3 + 88);
  if ( v4 - **(unsigned int **)(a1 + 24) == *(_QWORD *)(*(_QWORD *)v1 + 32LL) )
  {
    v7 = 0;
  }
  else
  {
    v18 = *(_DWORD *)(a1 + 56);
    v7 = 1073741827;
    if ( (v18 & 2) != 0 && !*(_DWORD *)(a1 + 48) )
      *(_DWORD *)(a1 + 56) = v18 | 0x10;
  }
  MiUpdateVadStartVpn(v5, v4 >> 12);
  *(_DWORD *)(v5 + 28) = v9;
  *(_BYTE *)(v5 + 33) = v10;
  v11 = v1 + 128;
  for ( i = **(_QWORD **)(a1 + 24) >> 12; ; i -= v13 )
  {
    v13 = *(unsigned int *)(v11 + 44);
    if ( i < v13 )
      break;
    v11 = *(_QWORD *)(v11 + 16);
  }
  *(_QWORD *)(v5 + 80) = v11;
  *(_QWORD *)(v5 + 88) = *(_QWORD *)(v11 + 8) + 8 * i;
  *(_QWORD *)(v5 + 96) = *(_QWORD *)(v8 + 64) + 8 * (*(unsigned int *)(v8 + 8) - 1LL);
  v14 = *(_DWORD *)(a1 + 56);
  if ( (v14 & 0x14) != 0 )
  {
    if ( v7 == 1073741827 && (v14 & 2) != 0 )
      *(_DWORD *)(a1 + 48) |= 1u;
    FixupVad = MiCreateFixupVad(v6, v5, 0, *(_DWORD *)(a1 + 48), (*(_DWORD *)(v6 + 1532) >> 13) & 1);
    v20 = *(_DWORD *)(a1 + 56);
    if ( FixupVad >= 0 )
    {
      v21 = v20 | 8;
      *(_DWORD *)(a1 + 56) = v21;
      if ( v7 == 1073741827 && (v21 & 2) != 0 )
        v7 = 1073741878;
    }
    else if ( (v20 & 0x10) == 0 )
    {
      return (unsigned int)FixupVad;
    }
  }
  if ( *(_DWORD *)(v3 + 48) )
    *(_BYTE *)(*(_QWORD *)(v6 + 1040) + 1188LL) = 1;
  if ( (*(_DWORD *)(v1 + 56) & 8) != 0 && (*(_DWORD *)(v1 + 56) & 0x20) != 0 )
  {
    SessionId = PsGetSessionIdEx(v6);
    result = MiCreatePerSessionProtos(v1, SessionId);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 56) |= 0x200u;
  }
  if ( (*(_DWORD *)(a1 + 60) & 0x10) != 0 )
  {
    v23 = *(_DWORD *)(v5 + 52);
    v24 = *(unsigned __int8 *)(v5 + 34);
    v25 = MiUpdatePrivateDemandZeroView(v6, v5, 0) + ((v24 << 32) | v23);
    *(_DWORD *)(v5 + 52) = v25;
    *(_BYTE *)(v5 + 34) = BYTE4(v25);
    *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
    MiInsertVadEvent(v5, a1 + 128, 0);
    *(_DWORD *)(a1 + 56) |= 0x80u;
  }
  result = MiInsertSharedCommitNode(v1, v6, 0);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a1 + 56) |= 0x100u;
    v16 = MiControlAreaRequiresCharge(v1);
    if ( !v16 )
      return 3221227019LL;
    if ( v16 == 2 )
    {
      result = MiReferenceActiveSubsection((__int64 *)(v1 + 128), 4u, 0x11u);
      if ( (int)result < 0 )
        return result;
      *(_DWORD *)(a1 + 56) |= 0x400u;
    }
    inserted = MiInsertVadCharges(v5, v6);
    if ( inserted < 0 )
      return (unsigned int)inserted;
    return v7;
  }
  return result;
}

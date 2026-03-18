/*
 * XREFs of MiInitializeNewImageSectionProtos @ 0x1404AE73C
 * Callers:
 *     MiSectionCreated @ 0x14048555C (MiSectionCreated.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MmUnmapLockedPages @ 0x140281690 (MmUnmapLockedPages.c)
 *     MiLockLeafPage @ 0x140298E10 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x14031E324 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiInitializeTransitionPfn @ 0x14036A9A4 (MiInitializeTransitionPfn.c)
 *     MiReferenceControlAreaPfn @ 0x14036CB90 (MiReferenceControlAreaPfn.c)
 *     MiLockProtoPoolPageForce @ 0x1403A10E0 (MiLockProtoPoolPageForce.c)
 *     MiReturnPfnReferenceCount @ 0x1404AE950 (MiReturnPfnReferenceCount.c)
 */

void __fastcall MiInitializeNewImageSectionProtos(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 *v3; // rbx
  unsigned int v4; // esi
  unsigned int v6; // ecx
  __int64 *v7; // r15
  __int64 v8; // rax
  int v9; // r12d
  unsigned __int64 v10; // r13
  ULONG_PTR v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // [rsp+20h] [rbp-68h] BYREF
  __int64 v17; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h]
  unsigned __int8 v19; // [rsp+90h] [rbp+8h] BYREF
  __int64 *v20; // [rsp+98h] [rbp+10h]
  unsigned int v21; // [rsp+A0h] [rbp+18h]
  unsigned int v22; // [rsp+A8h] [rbp+20h]

  if ( !a2 )
    return;
  v20 = a2;
  v2 = *(_QWORD *)(a1 + 136);
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 172);
  v18 = v2;
  v21 = v4;
  do
  {
    if ( (*((_BYTE *)v3 + 10) & 4) != 0 )
      goto LABEL_5;
    MmUnmapLockedPages((PVOID)v3[3], (PMDL)v3);
    v7 = v3 + 6;
    v8 = 0LL;
    v9 = *((_DWORD *)v3 + 10) >> 12;
    v10 = 0LL;
    v22 = *((_DWORD *)v3 + 4);
    v6 = v22;
    v19 = 17;
    v11 = v2 + 8LL * v22;
    v17 = 0LL;
    if ( !v9 )
      goto LABEL_5;
    while ( 1 )
    {
      v12 = *v7;
      v13 = 48 * *v7 - 0x220000000000LL;
      if ( v6 < v4 )
      {
        if ( (v11 & 0xFFFFFFFFFFFFF000uLL) != v10 )
        {
          if ( v10 )
            MiUnlockProtoPoolPage(v8, v19);
          v17 = MiLockProtoPoolPageForce(v11, &v19);
          v10 = v11 & 0xFFFFFFFFFFFFF000uLL;
        }
        v14 = MiLockLeafPage((unsigned __int64 *)v11, 0);
        if ( v14 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else if ( (*(_QWORD *)v11 & 0x400LL) != 0 )
        {
          v16 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v16);
            while ( *(__int64 *)(v13 + 24) < 0 );
          }
          MiInitializeTransitionPfn(v12, (__int64 *)v11, v15);
          _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (*(_DWORD *)(v13 + 16) & 0x400LL) != 0 )
            MiReferenceControlAreaPfn(a1, 0LL, 1u);
          goto LABEL_16;
        }
        MiReturnPfnReferenceCountAtDpc(v13);
        *v7 = -1LL;
LABEL_16:
        v4 = v21;
        goto LABEL_17;
      }
      MiReturnPfnReferenceCount(48 * *v7 - 0x220000000000LL);
      *v7 = -1LL;
LABEL_17:
      v11 += 8LL;
      v6 = v22 + 1;
      ++v7;
      ++v22;
      if ( !--v9 )
        break;
      v8 = v17;
    }
    v3 = v20;
    if ( v10 )
      MiUnlockProtoPoolPage(v17, v19);
    v2 = v18;
LABEL_5:
    v3 = (__int64 *)*v3;
    v20 = v3;
  }
  while ( v3 );
}

/*
 * XREFs of MiInitializeNewImageSectionProtos @ 0x1404A7DCC
 * Callers:
 *     MiSectionCreated @ 0x14047EECC (MiSectionCreated.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     MiLockLeafPage @ 0x140298370 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x140320354 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiInitializeTransitionPfn @ 0x14036C744 (MiInitializeTransitionPfn.c)
 *     MiReferenceControlAreaPfn @ 0x14036E930 (MiReferenceControlAreaPfn.c)
 *     MiLockProtoPoolPageForce @ 0x1403A2E40 (MiLockProtoPoolPageForce.c)
 *     MiReturnPfnReferenceCount @ 0x1404A7FE0 (MiReturnPfnReferenceCount.c)
 */

void __fastcall MiInitializeNewImageSectionProtos(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 *v3; // rbx
  unsigned int v4; // esi
  __int64 v6; // r8
  unsigned int v7; // ecx
  __int64 *v8; // r15
  __int64 v9; // rax
  int v10; // r12d
  unsigned __int64 v11; // r13
  ULONG_PTR v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // [rsp+20h] [rbp-68h] BYREF
  __int64 v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+30h] [rbp-58h]
  unsigned __int8 v22; // [rsp+90h] [rbp+8h] BYREF
  __int64 *v23; // [rsp+98h] [rbp+10h]
  unsigned int v24; // [rsp+A0h] [rbp+18h]
  unsigned int v25; // [rsp+A8h] [rbp+20h]

  if ( !a2 )
    return;
  v23 = a2;
  v2 = *(_QWORD *)(a1 + 136);
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 172);
  v21 = v2;
  v24 = v4;
  do
  {
    if ( (*((_BYTE *)v3 + 10) & 4) != 0 )
      goto LABEL_5;
    MmUnmapLockedPages((PVOID)v3[3], (PMDL)v3);
    v8 = v3 + 6;
    v9 = 0LL;
    v10 = *((_DWORD *)v3 + 10) >> 12;
    v11 = 0LL;
    v25 = *((_DWORD *)v3 + 4);
    v7 = v25;
    v22 = 17;
    v12 = v2 + 8LL * v25;
    v20 = 0LL;
    if ( !v10 )
      goto LABEL_5;
    while ( 1 )
    {
      v13 = *v8;
      v14 = 0xFFFFDE0000000000uLL;
      v15 = 48 * *v8 - 0x220000000000LL;
      if ( v7 < v4 )
      {
        if ( (v12 & 0xFFFFFFFFFFFFF000uLL) != v11 )
        {
          if ( v11 )
          {
            LOBYTE(v14) = v22;
            MiUnlockProtoPoolPage(v9, v14, v6);
          }
          v20 = MiLockProtoPoolPageForce(v12, &v22);
          v11 = v12 & 0xFFFFFFFFFFFFF000uLL;
        }
        v16 = MiLockLeafPage((unsigned __int64 *)v12, 0);
        if ( v16 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else if ( (*(_QWORD *)v12 & 0x400LL) != 0 )
        {
          v19 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v19);
            while ( *(__int64 *)(v15 + 24) < 0 );
          }
          MiInitializeTransitionPfn(v13, (__int64 *)v12, v17);
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (*(_DWORD *)(v15 + 16) & 0x400LL) != 0 )
            MiReferenceControlAreaPfn(a1, 0LL, 1u);
          goto LABEL_16;
        }
        MiReturnPfnReferenceCountAtDpc(v15);
        *v8 = -1LL;
LABEL_16:
        v4 = v24;
        goto LABEL_17;
      }
      MiReturnPfnReferenceCount(48 * *v8 - 0x220000000000LL);
      *v8 = -1LL;
LABEL_17:
      v12 += 8LL;
      v7 = v25 + 1;
      ++v8;
      ++v25;
      if ( !--v10 )
        break;
      v9 = v20;
    }
    v3 = v23;
    if ( v11 )
    {
      LOBYTE(v18) = v22;
      MiUnlockProtoPoolPage(v20, v18, v6);
    }
    v2 = v21;
LABEL_5:
    v3 = (__int64 *)*v3;
    v23 = v3;
  }
  while ( v3 );
}

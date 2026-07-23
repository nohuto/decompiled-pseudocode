/*
 * XREFs of MiRevertValidPte @ 0x1402E69F4
 * Callers:
 *     MiSectionProtectValidPte @ 0x1402E64E0 (MiSectionProtectValidPte.c)
 *     MiProtectValidPte @ 0x140313A6C (MiProtectValidPte.c)
 *     MiSetReadOnlyOnSectionView @ 0x14036D8F4 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiRotatedToFrameBuffer @ 0x1403145E4 (MiRotatedToFrameBuffer.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiLockPageAndSetDirty @ 0x14031C814 (MiLockPageAndSetDirty.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403459B0 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiMarkPfnVerified @ 0x14038E794 (MiMarkPfnVerified.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14049109C (MiCaptureWriteWatchDirtyBit.c)
 */

__int64 __fastcall MiRevertValidPte(__int64 a1, __int64 *a2, unsigned int a3, unsigned __int64 a4, __int64 a5)
{
  unsigned int v5; // edi
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r9
  unsigned __int64 v9; // rax
  unsigned int v10; // r10d
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // r12
  __int64 v14; // rsi
  int v15; // ecx
  int v16; // eax
  _QWORD *v17; // r15
  volatile signed __int32 *v18; // r14
  __int64 v19; // r13
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r14d
  unsigned __int64 ValidPte; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 *v26; // r14
  int v27; // r12d
  __int64 v28; // rdi
  BOOL v29; // esi
  unsigned int v30; // r15d
  __int64 LeafVa; // rax
  __int64 v32; // rax
  __int64 result; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  char v37; // di
  char v38; // si
  ULONG_PTR v39; // r15
  __int64 v40; // r14
  __int64 *v41; // rbx
  unsigned __int64 v42; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v43; // [rsp+28h] [rbp-80h]
  unsigned int v44; // [rsp+2Ch] [rbp-7Ch]
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-78h] BYREF
  __int64 v46; // [rsp+38h] [rbp-70h]
  BOOL v47; // [rsp+40h] [rbp-68h]
  __int64 v48; // [rsp+48h] [rbp-60h]
  __int64 v49; // [rsp+50h] [rbp-58h]
  __int64 v50; // [rsp+58h] [rbp-50h]
  __int64 v51; // [rsp+60h] [rbp-48h]

  v5 = *(_DWORD *)(a1 + 48);
  v6 = a4;
  v7 = (unsigned __int64)a2;
  v43 = v5;
  v44 = 0;
  v47 = (v5 & 0x180000) == 1572864;
  if ( (v5 & 0x80000) != 0 && (v5 & 0x200000) != 0 )
  {
    v9 = ((unsigned __int64)v5 >> 17) & 3;
    v10 = MiVadPageIndices[v9];
    v11 = 2 - v10;
    v48 = v10;
    if ( v10 > 1 )
      v11 = 0;
    v12 = 16LL;
    v44 = v11;
    v46 = MiVadPageSizes[v9];
    v13 = v46;
    if ( v46 == 16 )
      v13 = 1LL;
    else
      v12 = 1LL;
    v49 = v12;
  }
  else
  {
    v48 = 3LL;
    v13 = 1LL;
    v46 = 1LL;
    v49 = 1LL;
  }
  v14 = *(_QWORD *)v7;
  v50 = v14;
  v51 = (__int64)(v7 << 25) >> 16;
  v15 = a3 & 0x18;
  if ( (v14 & 0x18) == 8 )
  {
    v16 = a3 | 0x18;
    if ( v15 == 24 )
      v16 = a3;
    a3 = v16;
  }
  else if ( (v14 & 0x10) != 0 )
  {
    if ( v15 != 8 )
      a3 = a3 & 0xFFFFFFE7 | 8;
  }
  else if ( (a3 & 0x18) != 0 )
  {
    a3 &= 0xFFFFFFE7;
  }
  if ( v6 > qword_140E2D920 || ((*(_QWORD *)(48 * v6 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
  {
    v17 = 0LL;
LABEL_35:
    BugCheckParameter2 = (ULONG_PTR)v17;
    goto LABEL_36;
  }
  v17 = (_QWORD *)(48 * v6 - 0x220000000000LL);
  BugCheckParameter2 = (ULONG_PTR)v17;
  if ( _bittest64(&MiFlags, 0x13u) && (a3 & 2) != 0 )
  {
    if ( v13 )
    {
      v18 = (volatile signed __int32 *)(v17 + 3);
      v19 = v13;
      do
      {
        LODWORD(BugCheckParameter2) = 0;
        while ( _interlockedbittestandset64(v18, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&BugCheckParameter2);
          while ( *(__int64 *)v18 < 0 );
        }
        if ( !(unsigned int)MiGetPagePrivilege(v17, 1LL, 0LL) )
          MiMarkPfnVerified(v17, 7LL, v20, v21);
        _InterlockedAnd64((volatile signed __int64 *)v18, 0x7FFFFFFFFFFFFFFFuLL);
        v17 += 6;
        v18 += 12;
        --v19;
      }
      while ( v19 );
      v6 = a4;
      v7 = (unsigned __int64)a2;
    }
    v17 -= 6 * v13;
    goto LABEL_35;
  }
LABEL_36:
  v22 = a3 | 0x4000000;
  if ( (unsigned int)v48 > 1 )
    v22 = a3;
  ValidPte = MiMakeValidPte(v7, v6, v22);
  v42 = ValidPte;
  v24 = ValidPte;
  if ( v17 )
  {
    if ( (MiFlags & 0x4000000) != 0 && (v14 & 0x42) == 0x40 )
    {
      v25 = v42;
      if ( (unsigned __int64)&v42 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v42 <= 0xFFFFF6FB7DBED7F8uLL )
        v25 = MiReadPteShadow(&v42, v42);
      MiWriteValidPteNewProtection((__int64 *)&v42, v25 | 0x40);
      v24 = v42;
    }
  }
  else if ( (v22 & 4) != 0 )
  {
    v24 = ValidPte | 0x42;
  }
  v26 = a2;
  v27 = 0;
  v28 = v49;
  v29 = v47;
  v30 = v48;
  do
  {
    if ( v29 && (*v26 & 0x42) != 0 )
    {
      LeafVa = MiGetLeafVa(v26);
      MiCaptureWriteWatchDirtyBit(KeGetCurrentThread()->ApcState.Process, LeafVa, a1);
      v29 = 0;
    }
    v24 = v24 & 0xFFF0000000000FFFuLL | ((v6 & 0xFFFFFFFFFFLL) << 12);
    if ( !v27 )
    {
      if ( (MiFlags & 0x400) == 0 && (MiFlags & 0x800) == 0
        || (v32 = *v26, (v24 & 0x40) == 0) && (v32 & 0x40) != 0
        || (v24 & 2) == 0 && (v32 & 2) != 0
        || v24 < 0 && v32 >= 0 )
      {
        v27 = 1;
      }
    }
    ++v6;
    if ( v30 > 1 )
      result = MiWriteValidPteNewProtection(v26, v24);
    else
      result = MiRewritePteWithLockBit(
                 (signed __int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
                 0,
                 (unsigned __int64)v26,
                 v24);
    ++v26;
    --v28;
  }
  while ( v28 );
  v37 = v43;
  v38 = v50;
  v39 = BugCheckParameter2;
  if ( !v27 )
  {
    v40 = v46;
    goto LABEL_70;
  }
  if ( !v44 )
  {
    v40 = v46;
    result = MiInsertTbFlushEntry(a5, v51, v46);
LABEL_70:
    v41 = a2;
    goto LABEL_71;
  }
  v41 = a2;
  result = MiInsertLargeTbFlushEntry(a5, v44, a2);
  v40 = v46;
LABEL_71:
  if ( v40 == 1 && (v38 & 0x42) != 0 )
  {
    if ( v39 )
    {
      if ( (v37 & 0x1C) != 0x10 )
        return MiLockPageAndSetDirty(v39);
      result = MiRotatedToFrameBuffer(v41, v34, v35, v36);
      if ( (_DWORD)result )
        return MiLockPageAndSetDirty(v39);
    }
  }
  return result;
}

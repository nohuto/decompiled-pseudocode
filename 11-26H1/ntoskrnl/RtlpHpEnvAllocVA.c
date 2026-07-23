/*
 * XREFs of RtlpHpEnvAllocVA @ 0x140366310
 * Callers:
 *     RtlpHpVaMgrAllocAligned @ 0x1403531DC (RtlpHpVaMgrAllocAligned.c)
 *     RtlpCSparseBitmapPageCommit @ 0x140353424 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpAllocVA @ 0x1403660F0 (RtlpHpAllocVA.c)
 *     RtlpHpVaMgrRangeCommit @ 0x140525A2C (RtlpHpVaMgrRangeCommit.c)
 *     RtlCSparseBitmapStart @ 0x14063CD08 (RtlCSparseBitmapStart.c)
 * Callees:
 *     MiReservePoolMemory @ 0x1402A41EC (MiReservePoolMemory.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MmFreePoolMemory @ 0x14035231C (MmFreePoolMemory.c)
 *     MiMakeProtectionMask @ 0x1403667E0 (MiMakeProtectionMask.c)
 *     MiCommitPoolMemory @ 0x140366880 (MiCommitPoolMemory.c)
 *     MiGetPoolPages @ 0x1403677D0 (MiGetPoolPages.c)
 *     MiGetLargePoolPages @ 0x1403D1B98 (MiGetLargePoolPages.c)
 *     KasanTrackAddressNoInline @ 0x140534710 (KasanTrackAddressNoInline.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RtlpHpEnvAllocVA(
        ULONG_PTR *a1,
        __int64 *a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7,
        ULONG_PTR a8,
        unsigned int a9)
{
  __int64 v9; // r13
  unsigned __int64 v11; // rcx
  int v13; // r8d
  int v14; // r15d
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r14
  ULONG_PTR v17; // r12
  unsigned int v18; // ebx
  ULONG_PTR v19; // r8
  int LargePoolPages; // ebx
  unsigned __int8 CurrentIrql; // al
  unsigned int ProtectionMask; // eax
  ULONG_PTR BugCheckParameter4; // rcx
  ULONG_PTR v24; // r8
  unsigned __int64 v25; // r9
  __int16 v26; // ax
  unsigned __int16 *v27; // rcx
  __int16 v28; // ax
  unsigned int v29; // r14d
  ULONG_PTR v31; // rcx
  ULONG_PTR v32; // r14
  ULONG_PTR v33; // r14
  bool v34; // zf
  ULONG_PTR v35; // rcx
  unsigned __int64 v36; // rdi
  __int64 v37; // rax
  int v38; // edx
  unsigned __int64 v39; // rax
  signed __int64 v40; // [rsp+30h] [rbp-79h] BYREF
  __int64 v41; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v42[2]; // [rsp+40h] [rbp-69h] BYREF
  __int128 v43; // [rsp+50h] [rbp-59h]
  __int64 v44; // [rsp+60h] [rbp-49h]
  __int64 v45; // [rsp+68h] [rbp-41h]
  __int64 v46; // [rsp+70h] [rbp-39h]
  __int64 v47; // [rsp+78h] [rbp-31h]
  __int64 v48; // [rsp+80h] [rbp-29h]
  void *v49; // [rsp+88h] [rbp-21h]
  unsigned __int64 v50; // [rsp+90h] [rbp-19h]
  __int64 v51; // [rsp+98h] [rbp-11h]
  unsigned int v52; // [rsp+A0h] [rbp-9h]
  __int16 v53; // [rsp+A4h] [rbp-5h]
  unsigned __int8 v54; // [rsp+A6h] [rbp-3h]
  ULONG_PTR v57; // [rsp+100h] [rbp+57h] BYREF

  v9 = *a2;
  v11 = 1LL;
  if ( a3 )
    v11 = a3;
  v40 = v11;
  v13 = 3;
  if ( (a4 & 0x20001000) != 0x20001000 )
    v13 = a7;
  v14 = a4 & 0x2000;
  if ( (a4 & 0x2000) != 0 )
  {
    v9 = v9 - (((_DWORD)v9 - 1) & 0x1FFFFF) + 0x1FFFFF;
    v41 = v9;
    v15 = v9;
    a8 = v9;
    if ( v11 > 0x200000 )
    {
      v15 = v11 + v9;
      a8 = v11 + v9;
    }
  }
  else
  {
    v41 = v9;
    v15 = v9;
    a8 = v9;
  }
  v16 = 64LL;
  if ( !v13 )
    v16 = 256LL;
  if ( (a5 & 0x60) != 0 && v13 )
    v16 = 128LL;
  v17 = *a1;
  v18 = a9;
  v57 = *a1;
  a7 = a9 + 1;
  memset_0(v42, 0, 0x68uLL);
  if ( v18 == -1 || v18 + 1 > (unsigned __int16)KeNumberNodes )
    return (unsigned int)-1073741583;
  v52 = v18;
  v19 = v17;
  if ( v14 )
  {
    v37 = MiReservePoolMemory(0LL, (v16 >> 8) & 1 | 4, v15, v18);
    v17 = v37;
    if ( !v37 )
      return (unsigned int)-1073741801;
    v57 = v37;
    v19 = v37;
  }
  LargePoolPages = 0;
  if ( (a4 & 0x1000) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v54 = CurrentIrql;
    v42[0] = v17;
    v46 = 0LL;
    v50 = (((v19 + v15 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v51 = 0LL;
    v42[1] = ((__int64)((((v19 + v15 - 1) >> 9) & 0x7FFFFFFFF8LL) - ((v19 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1;
    v47 = 0LL;
    v45 = 0LL;
    ProtectionMask = MiMakeProtectionMask(a5);
    if ( ProtectionMask != 4 )
    {
      if ( ProtectionMask > 0x18 || (v38 = 16777282, !_bittest(&v38, ProtectionMask)) )
        KeBugCheckEx(0x1Au, 0x5300uLL, v24, v15, BugCheckParameter4);
    }
    v26 = 8 * (ProtectionMask & 0x1F);
    v53 = v26;
    if ( (a4 & 0x40000000) != 0 )
    {
      v26 |= 0x200u;
      v53 = v26;
    }
    v48 = 4LL;
    v44 = 0LL;
    v27 = (unsigned __int16 *)&unk_140E375C0;
    v49 = &unk_140E375C0;
    v43 = 0LL;
    if ( (v16 & 0x100) != 0 )
    {
      v27 = (unsigned __int16 *)&unk_140E37200;
      LODWORD(v48) = 5;
      v49 = &unk_140E37200;
      v28 = v26 | 2;
    }
    else
    {
      if ( (a4 & 0x20000000) == 0 )
        goto LABEL_20;
      v28 = v26 | 4;
    }
    v53 = v28;
LABEL_20:
    if ( (v53 & 2) != 0 )
    {
      LargePoolPages = -1073741670;
      if ( (unsigned int)MiChargeCommit(*(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * v27[87]), v25, 1u) )
        LargePoolPages = 0;
    }
    else if ( (v53 & 4) != 0 )
    {
      LargePoolPages = MiGetLargePoolPages(v42);
    }
    else
    {
      LargePoolPages = MiGetPoolPages(v42);
    }
    if ( LargePoolPages < 0 || (LargePoolPages = MiCommitPoolMemory(v42), LargePoolPages < 0) )
    {
      if ( v14 )
      {
        v57 = v17;
        MmFreePoolMemory(&v57, &a8, 0x8000u);
      }
      v17 = 0LL;
      v57 = 0LL;
    }
    v15 = (v15 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( LargePoolPages >= 0 )
  {
    if ( !v14 )
      goto LABEL_28;
    v31 = v17;
    v17 = -v40 & (v17 + v40 - 1);
    v57 = v17;
    v32 = v17 - v31;
    if ( v17 != v31 )
    {
      v33 = v32 - ((v31 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL);
      v40 = (v31 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
      v34 = v31 + v33 == 0;
      v32 = v31 + v33;
      a8 = v32;
      if ( v34 )
      {
        LargePoolPages = 0;
        v32 = 0LL;
      }
      else
      {
        LargePoolPages = MmFreePoolMemory((ULONG_PTR *)&v40, &a8, 0x8000u);
      }
    }
    v35 = v17 + v9;
    v36 = v15 - v32 - v9;
    if ( v36 )
    {
      v29 = 0x8000;
      v40 = (v35 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
      a8 = v35 - v40 + v36;
      if ( a8 )
        LargePoolPages = MmFreePoolMemory((ULONG_PTR *)&v40, &a8, 0x8000u);
      else
        LargePoolPages = 0;
    }
    else
    {
LABEL_28:
      v29 = 0x8000;
    }
    if ( (a4 & 0x1000) == 0 )
      goto LABEL_30;
    if ( !byte_140FC8BD8 )
    {
      LargePoolPages = 0;
LABEL_30:
      *a1 = v17;
      *a2 = v9;
      return (unsigned int)LargePoolPages;
    }
    LargePoolPages = KasanTrackAddressNoInline(v17, v9, a7);
    if ( LargePoolPages >= 0 )
      goto LABEL_30;
    if ( v17 )
    {
      if ( v14 )
      {
        v39 = (v17 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
        v57 = v39;
        v41 = v17 + v9 - v39;
        if ( v17 + v9 == v39 )
          return (unsigned int)LargePoolPages;
      }
      else
      {
        v29 = 0x4000;
      }
      MmFreePoolMemory(&v57, (ULONG_PTR *)&v41, v29);
    }
  }
  return (unsigned int)LargePoolPages;
}

/*
 * XREFs of MiResolvePageTablePage @ 0x1402CEAB0
 * Callers:
 *     MiPerformFaultClusterMaintenance @ 0x1402CD110 (MiPerformFaultClusterMaintenance.c)
 *     MiLockAndConfirmFaultClusterDescriptor @ 0x1403A14FC (MiLockAndConfirmFaultClusterDescriptor.c)
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x14029E130 (MiLockNestedPageTable.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockFaultPageTable @ 0x1402CD850 (MiUnlockFaultPageTable.c)
 *     MiFastLockLeafPageTable @ 0x1402CF2D0 (MiFastLockLeafPageTable.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiInPagePageTable @ 0x1403A69D0 (MiInPagePageTable.c)
 *     MiLargePageFault @ 0x1403A95C0 (MiLargePageFault.c)
 *     MiIsPdeOrAboveAccessible @ 0x140482E0C (MiIsPdeOrAboveAccessible.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiResolvePageTablePage(__int64 a1, int a2)
{
  __int64 v3; // rbp
  unsigned __int64 v5; // rdx
  int v6; // eax
  unsigned __int64 v7; // rdx
  int v9; // r12d
  unsigned int v10; // r13d
  unsigned __int64 v11; // r8
  unsigned __int64 *i; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r15
  __int64 v15; // r11
  __int64 v16; // rax
  __int64 HasShadow; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 *v21; // rcx
  __int64 PteShadow; // rax
  _BYTE *v23; // rax
  __int64 v24; // r11
  __int64 v25; // rax
  ULONG_PTR v26; // r9
  ULONG_PTR v27; // rdx
  unsigned __int64 *v28; // [rsp+60h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(a1 + 69) & 1) != 0
    || (v5 = *(_QWORD *)a1, *(_QWORD *)a1 >= 0xFFFFF68000000000uLL) && v5 <= 0xFFFFF6FFFFFFFFFFuLL
    || (v6 = MiFastLockLeafPageTable(*(_QWORD *)(a1 + 56), v5, 0LL)) == 0 )
  {
    v9 = 0;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 8LL * v6 + 24);
    *(_QWORD *)(a1 + 72) = v7;
    if ( v6 == 1 )
      return 0LL;
    MiUnlockPageTableInternal(v3, v7);
    v9 = 0;
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  if ( a2 )
    return 3221226548LL;
  if ( (*(_BYTE *)(a1 + 69) & 1) == 0 )
  {
    *(_QWORD *)(a1 + 72) = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v3, 0xFFFFF6FB7DBEDF68uLL, 0LL);
  }
  v10 = 3;
  v11 = 0xFFFFF6FB7DBED7F8uLL;
  for ( i = (unsigned __int64 *)(a1 + 48); ; --i )
  {
    v13 = 0xFFFFF6FB7DBED000uLL;
    v28 = i;
    if ( !v10 )
      break;
    v14 = *i;
    v15 = *(_QWORD *)*i;
    if ( *i >= 0xFFFFF6FB7DBED000uLL && v14 <= v11 )
    {
      v13 = *(_QWORD *)*i;
      if ( (v15 & 1) == 0 )
      {
LABEL_39:
        if ( !(unsigned int)MiIsPdeOrAboveAccessible(v14, v13, v11) )
          goto LABEL_48;
        if ( !v24 )
        {
          v25 = *(_QWORD *)(a1 + 16);
          if ( (v25 & 1) != 0 )
          {
            v23 = (_BYTE *)(v25 & 0xFFFFFFFFFFFFFFFEuLL);
            if ( *v23 == 8 )
              goto LABEL_47;
          }
        }
        v9 = MiInPagePageTable(a1, v10);
        if ( v9 < 0 )
          goto LABEL_43;
        ++v10;
        i = v28 + 1;
        goto LABEL_21;
      }
      if ( (v15 & 0x20) == 0 || (v15 & 0x42) == 0 )
      {
        HasShadow = MiPteHasShadow(i, v13, v11);
        if ( HasShadow )
        {
          v18 = *(_QWORD *)(HasShadow + 1288);
          if ( v18 )
          {
            v19 = *(_QWORD *)(v18 + 8 * ((v14 >> 3) & 0x1FF));
            if ( (v19 & 0x20) != 0 )
              v13 |= 0x20uLL;
            LOBYTE(v15) = v13 | 0x42;
            if ( (v19 & 0x42) == 0 )
              LOBYTE(v15) = v13;
          }
        }
        i = v28;
      }
    }
    if ( (v15 & 1) == 0 )
      goto LABEL_39;
    if ( (v15 & 0x80u) != 0LL )
    {
      v26 = *(_QWORD *)(a1 + 16);
      if ( (v26 & 1) == 0 || *(_BYTE *)(v26 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
      {
        v27 = *(_QWORD *)a1;
        if ( *(_QWORD *)a1 >= 0xFFFFF68000000000uLL && v27 <= 0xFFFFF6FFFFFFFFFFuLL )
          KeBugCheckEx(0x50u, v27, *(_QWORD *)(a1 + 8), v26, 8uLL);
      }
      v9 = MiLargePageFault(a1, v14, v11);
      if ( v9 >= 0 )
        v9 = -1073740748;
      goto LABEL_43;
    }
    v16 = *(_QWORD *)(a1 + 72);
    if ( v16 && v14 != v16 )
    {
      MiLockNestedPageTable(v3, v14);
      MiUnlockPageTableInternal(v3, *(_QWORD *)(a1 + 72));
      i = v28;
      *(_QWORD *)(a1 + 72) = v14;
LABEL_21:
      v11 = 0xFFFFF6FB7DBED7F8uLL;
    }
    --v10;
  }
  v20 = *(_QWORD *)(a1 + 16);
  if ( (v20 & 1) != 0 && *(_BYTE *)(v20 & 0xFFFFFFFFFFFFFFFEuLL) == 8 )
  {
    v21 = *(__int64 **)(a1 + 24);
    PteShadow = *v21;
    if ( (unsigned __int64)v21 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v21 <= v11 )
      PteShadow = MiReadPteShadow(v21, *v21);
    if ( !PteShadow )
    {
      v23 = (_BYTE *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_47:
      v23[44] = 1;
LABEL_48:
      v9 = -1073741819;
LABEL_43:
      MiUnlockFaultPageTable((__int64 *)(a1 + 56));
    }
  }
  return (unsigned int)v9;
}

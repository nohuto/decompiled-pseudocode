/*
 * XREFs of MiActOnPte @ 0x1402B61E0
 * Callers:
 *     MiWalkVaRange @ 0x1402B5320 (MiWalkVaRange.c)
 * Callees:
 *     MiSharedVaToPartition @ 0x140282C7C (MiSharedVaToPartition.c)
 *     MiActOnValidPte @ 0x140296698 (MiActOnValidPte.c)
 *     MiMakePageFilePte @ 0x140298330 (MiMakePageFilePte.c)
 *     MiCheckUserVirtualAddress @ 0x1402B36E0 (MiCheckUserVirtualAddress.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MI_CLEAR_RESET_PTE @ 0x140316F98 (MI_CLEAR_RESET_PTE.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiActOnTransitionPte @ 0x14033E930 (MiActOnTransitionPte.c)
 *     MI_IS_RESET_PTE @ 0x140369B90 (MI_IS_RESET_PTE.c)
 *     MiUpdatePageTableUseCount @ 0x1403DD1D0 (MiUpdatePageTableUseCount.c)
 */

__int64 __fastcall MiActOnPte(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        int a5,
        __int64 a6,
        ULONG **a7,
        unsigned __int64 *a8)
{
  unsigned __int64 *v9; // r15
  __int64 v10; // rcx
  ULONG **v11; // r14
  __int64 *v12; // rdi
  int v13; // esi
  unsigned __int64 v14; // r10
  _KPROCESS *Process; // r12
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rbx
  ULONG *v19; // r9
  __int16 v20; // ax
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  char v23; // al
  int v24; // ecx
  __int64 v25; // r10
  __int64 HasShadow; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  int valid; // eax
  int v31; // eax
  __int64 v32; // rax
  __int64 Blink_high; // rcx
  __int64 v34; // rcx
  _KPROCESS *v35; // r8
  unsigned __int64 KernelWaitTime; // r9
  __int64 v37; // rdx
  ULONG *v38; // rax
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rax
  unsigned __int64 PageFilePte; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v45; // [rsp+28h] [rbp-58h] BYREF
  __int64 v46; // [rsp+30h] [rbp-50h] BYREF
  ULONG *v47; // [rsp+38h] [rbp-48h]
  unsigned __int64 v48; // [rsp+40h] [rbp-40h]
  __int64 *v49; // [rsp+48h] [rbp-38h]
  __int64 *v50; // [rsp+50h] [rbp-30h]
  unsigned __int64 v51; // [rsp+58h] [rbp-28h]
  __int64 v52; // [rsp+60h] [rbp-20h]
  int v53; // [rsp+68h] [rbp-18h]
  int v54; // [rsp+6Ch] [rbp-14h]
  __int64 v55; // [rsp+70h] [rbp-10h]
  int v56; // [rsp+C0h] [rbp+40h] BYREF
  int v57; // [rsp+C8h] [rbp+48h]
  __int64 *v58; // [rsp+D0h] [rbp+50h]

  v58 = a3;
  v57 = a2;
  v9 = a8;
  v10 = 0LL;
  v11 = a7;
  v12 = a4;
  v13 = a5;
  v14 = (unsigned __int64)a3;
  v56 = 0;
  *a8 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v55 = a6;
  v54 = 0;
  *v11 = 0LL;
  v52 = a1;
  v53 = v13;
  v50 = a4;
  v49 = a3;
  while ( 1 )
  {
    v16 = 0xFFFFF6FB7DBED7F8uLL;
    v17 = 0xFFFFF6FB7DBED000uLL;
    if ( v12 )
    {
      v18 = *v12;
    }
    else
    {
      v18 = *(_QWORD *)v14;
      if ( v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        a2 = *(_QWORD *)v14;
        if ( (v18 & 1) != 0 && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
        {
          HasShadow = MiPteHasShadow(v10, a2, 0xFFFFF6FB7DBED000uLL);
          if ( HasShadow )
          {
            v28 = *(_QWORD *)(HasShadow + 1288);
            if ( v28 )
            {
              v29 = *(_QWORD *)(v28 + 8 * ((v14 >> 3) & 0x1FF));
              if ( (v29 & 0x20) != 0 )
                a2 |= 0x20uLL;
              v18 = a2 | 0x42;
              if ( (v29 & 0x42) == 0 )
                v18 = a2;
            }
          }
        }
      }
    }
    v44 = v18;
    v51 = v18;
    if ( (v18 & 1) == 0 )
      break;
    valid = MiActOnValidPte((__int64)&v46, a2, v17);
    v10 = (unsigned int)valid;
    if ( valid >= 0 || (_DWORD)v46 != 2 )
    {
LABEL_49:
      *v11 = v47;
      *v9 = v48;
      return (unsigned int)v10;
    }
LABEL_89:
    v14 = (unsigned __int64)v58;
  }
  if ( (v18 & 0x400) != 0 )
    return 0LL;
  if ( (v18 & 0x800) != 0 )
  {
    v31 = MiActOnTransitionPte(&v46, a2, v17);
    v10 = (unsigned int)v31;
    if ( v31 >= 0 || (_DWORD)v46 != 2 )
      goto LABEL_49;
    goto LABEL_89;
  }
  if ( v13 == 2 )
    return 0LL;
  if ( v18 )
  {
    v19 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * HIWORD(Process[2].ProcessListEntry.Blink));
    if ( v12 )
    {
      if ( v57 )
      {
        v38 = MiSharedVaToPartition((__int64)&Process[2].ReadyListHead.Blink, (__int64)(v14 << 25) >> 16, v12);
        v14 = (unsigned __int64)v58;
        v19 = v38;
        v17 = 0xFFFFF6FB7DBED000uLL;
        v16 = 0xFFFFF6FB7DBED7F8uLL;
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 48) & 0x80000) != 0 || (v32 = *(_QWORD *)(a1 + 80)) == 0 )
          Blink_high = HIWORD(Process[2].ProcessListEntry.Blink);
        else
          Blink_high = *(_DWORD *)(*(_QWORD *)v32 + 60LL) & 0x3FF;
        v19 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8 * Blink_high);
      }
    }
    v20 = v18;
    if ( qword_140E2D8C0 && (v18 & 0x10) == 0 )
      v20 = qword_140E2D8C8 & v18;
    if ( (v20 & 0x400) != 0 || (v20 & 0x800) != 0 || (v20 & 8) != 0 )
    {
      if ( v13 != 1 )
      {
        v45 = v44;
        if ( (v44 & 8) != 0 )
        {
          v44 &= ~8uLL;
          v43 = v45;
          if ( (unsigned __int64)&v45 >= v17 && (unsigned __int64)&v45 <= v16 )
            v43 = MiReadPteShadow(&v45, v45);
          v18 = v44;
          v40 = v43 & 0xFFFFFFFFFFFFFFFBuLL;
          v45 = v40;
        }
        else
        {
          v40 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        }
        *v9 = v40;
        if ( v40 )
        {
          *v11 = v19;
          if ( !v12 )
          {
            _InterlockedDecrement64((volatile signed __int64 *)Process[1].Padding);
            v12 = (__int64 *)v14;
          }
          *v12 = v18;
        }
        return 0LL;
      }
    }
    else
    {
      if ( v13 != 1 )
      {
        if ( (v18 & 4) != 0 )
        {
          a8 = (unsigned __int64 *)v18;
          v21 = v18;
          if ( (v18 & 8) == 0 )
          {
            v21 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
            if ( (v18 & 4) != 0 )
              v21 = v18;
          }
          if ( v21 )
          {
            MiReleasePageFileInfo(v19, v21, 1LL);
            v17 = 0xFFFFF6FB7DBED000uLL;
          }
          v22 = v44;
          if ( (unsigned __int64)&v44 >= v17 && (unsigned __int64)&v44 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            v34 = v44;
            if ( (v44 & 1) != 0 && ((v44 & 0x20) == 0 || (v44 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
            {
              v35 = KeGetCurrentThread()->ApcState.Process;
              if ( v35->AddressPolicy != 1 )
              {
                KernelWaitTime = v35[2].KernelWaitTime;
                if ( KernelWaitTime )
                {
                  v37 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)&v44 >> 3) & 0x1FF));
                  if ( (v37 & 0x20) != 0 )
                    v34 = v44 | 0x20;
                  v22 = v34 | 0x42;
                  if ( (v37 & 0x42) == 0 )
                    v22 = v34;
                }
              }
            }
          }
          v44 = v22 & 0xFFFFFFFFFFFFFFFBuLL;
          v18 = v22 & 0xFFFFFFFFFFFFFFFBuLL;
        }
        if ( v18 )
        {
          if ( qword_140E2D8C0 )
          {
            v23 = v18;
            v24 = qword_140E2D8C8 & v18;
            LODWORD(v18) = v18 & 0xFFFFFFEF;
            if ( (v23 & 0x10) == 0 )
              LODWORD(v18) = v24;
          }
        }
        v25 = (unsigned int)v18 | 0x100000000LL;
        if ( qword_140E2D8C0 )
        {
          if ( (qword_140E2D8C0 & v25) != 0 )
            v25 = (unsigned int)v18 | 0x100000010LL;
          else
            v25 |= qword_140E2D8C0;
        }
LABEL_32:
        if ( !v12 )
          v12 = v58;
        *v12 = v25;
        return 0LL;
      }
      if ( (unsigned int)MI_IS_RESET_PTE(v18) )
      {
        MI_CLEAR_RESET_PTE(&v44);
        v25 = v44;
        goto LABEL_32;
      }
    }
  }
  else if ( !v12 && !v13 )
  {
    v39 = (__int64)(v14 << 25) >> 16;
    if ( !MiCheckUserVirtualAddress(v39, a1, 0, &v56) && v56 != 24 )
    {
      PageFilePte = MiMakePageFilePte(1u);
      *v58 = v42 ^ (v42 ^ PageFilePte) & 0xFFFFFFFFFFFFFC1FuLL;
      MiUpdatePageTableUseCount(v39, 1LL);
      return 0LL;
    }
  }
  return 3221226548LL;
}

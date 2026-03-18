/*
 * XREFs of MiStoreEvictPageFile @ 0x14040B5E0
 * Callers:
 *     MiStoreEvictThread @ 0x1404B0390 (MiStoreEvictThread.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     RtlSetBits @ 0x140358D10 (RtlSetBits.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140448570 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreEvictPageFile(__int64 a1)
{
  volatile LONG *v2; // r14
  KIRQL v3; // al
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  KIRQL v6; // al
  __int64 v7; // r12
  unsigned __int64 v8; // rdi
  unsigned int v9; // r13d
  unsigned __int64 v10; // rax
  char v11; // bl
  _DWORD *v12; // rax
  int v13; // r9d
  unsigned __int64 v14; // r10
  unsigned int v15; // r8d
  _DWORD *v16; // rcx
  int v17; // r8d
  __int64 v18; // rcx
  ULONG v19; // ebp
  unsigned int v20; // edx
  unsigned int *v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // edi
  ULONG v24; // edi
  unsigned __int64 v25; // rbx
  ULONG v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rsi
  int v29; // eax
  ULONG v30; // ebx
  KIRQL v31; // al
  int *v32; // r12
  unsigned __int64 v33; // rbx
  int v34; // edi
  __int64 v35; // [rsp+40h] [rbp-48h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  ULONG v37; // [rsp+90h] [rbp+8h] BYREF
  int *v38; // [rsp+98h] [rbp+10h]

  if ( *(_DWORD *)(a1 + 168) )
  {
    v2 = (volatile LONG *)(a1 + 200);
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
    v4 = *(_DWORD *)(a1 + 104);
    v5 = v3;
    *(_DWORD *)(a1 + 104) = -1;
    if ( v3 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        *v2 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        *v2 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
      __writecr8(v5);
    }
    v6 = ExAcquireSpinLockExclusive(v2);
    v7 = *(_QWORD *)(a1 + 80);
    v8 = v6;
    v38 = (int *)v7;
    ++*(_DWORD *)v7;
    v9 = *(_DWORD *)a1;
    v35 = *(_QWORD *)(v7 + 32);
    if ( v6 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        *v2 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        *v2 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
      __writecr8(v8);
    }
    while ( 1 )
    {
      v37 = 0;
      if ( v9 <= v4 )
        break;
      v10 = v4;
      v11 = v4 & 0x1F;
      v12 = (_DWORD *)(v35 + 4 * (v10 >> 5));
      v13 = 0;
      v14 = v35 + 4 * ((unsigned __int64)(v9 - 1) >> 5);
      v15 = ~(*v12 | ((1 << v11) - 1));
      if ( (*v12 | ((1 << v11) - 1)) == 0xFFFFFFFF )
      {
        v16 = v12 + 1;
        while ( (unsigned __int64)v16 <= v14 )
        {
          v17 = v12[1];
          ++v12;
          v15 = ~v17;
          ++v16;
          if ( v15 )
            goto LABEL_31;
        }
        break;
      }
LABEL_31:
      _BitScanForward64((unsigned __int64 *)&v18, v15);
      v19 = v18 + 32 * (((__int64)v12 - v35) >> 2);
      if ( v19 <= v9 )
      {
        v20 = ~(v15 | ((1 << v18) - 1));
        if ( (v15 | ((1 << v18) - 1)) != 0xFFFFFFFF )
          goto LABEL_35;
        while ( 1 )
        {
          v13 += 32;
          v21 = v12 + 1;
          if ( (unsigned __int64)(v12 + 1) > v14 )
            break;
          v20 = *v21;
          ++v12;
          if ( *v21 )
            goto LABEL_35;
        }
        if ( v20 )
LABEL_35:
          _BitScanForward64((unsigned __int64 *)&v22, v20);
        else
          LODWORD(v22) = 32;
        v23 = 32 * (((__int64)v12 - v35) >> 2) + v22;
        if ( v23 > v9 )
          v23 = v9;
        v24 = v23 - v19;
        if ( v24 )
        {
          v25 = ExAcquireSpinLockExclusive(v2);
          RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 80) + 24LL), v19, v24);
          v26 = *(_DWORD *)(a1 + 168) - v24;
          *(_DWORD *)(a1 + 168) = v26;
          if ( !v26 )
            *(_DWORD *)(a1 + 104) = -1;
          if ( (_BYTE)v25 == 17 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
              *v2 = 0;
            else
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
          }
          else
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
              *v2 = 0;
            else
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v25);
            __writecr8(v25);
          }
          v27 = *(_QWORD *)(a1 + 224);
          v37 = v19;
          v28 = *(_QWORD *)(*(_QWORD *)(v27 + 256) + 24LL);
          v29 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v28, &v37, v24);
          v30 = v24 - v29;
          if ( v24 != v29 )
          {
            do
            {
              v37 += v29;
              v29 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v28, &v37, v30);
              v30 -= v29;
            }
            while ( v30 );
          }
          if ( *(_DWORD *)(a1 + 168) )
          {
            v4 = v24 + v19;
            if ( v24 + v19 < v9 )
              continue;
          }
        }
      }
      break;
    }
    v31 = ExAcquireSpinLockExclusive(v2);
    v32 = v38;
    v33 = v31;
    v34 = *v38 - 1;
    *v38 = v34;
    if ( v31 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        *v2 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        *v2 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v33);
      __writecr8(v33);
    }
    if ( v34 )
      v32 = 0LL;
    if ( v32 )
      ExFreePoolWithTag(v32, 0);
  }
}

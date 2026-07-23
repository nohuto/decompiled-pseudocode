/*
 * XREFs of MiStoreEvictPageFile @ 0x140404A30
 * Callers:
 *     MiStoreEvictThread @ 0x1404A9A20 (MiStoreEvictThread.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140441060 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  unsigned __int64 v13; // r9
  unsigned int v14; // r8d
  _DWORD *v15; // rcx
  int v16; // r8d
  __int64 v17; // rcx
  ULONG v18; // ebp
  unsigned int v19; // edx
  unsigned int *v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // esi
  ULONG v23; // esi
  unsigned __int64 v24; // rbx
  ULONG v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rdi
  int v28; // eax
  ULONG v29; // ebx
  KIRQL v30; // al
  int *v31; // r12
  unsigned __int64 v32; // rbx
  int v33; // edi
  __int64 v34; // [rsp+40h] [rbp-48h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  ULONG v36; // [rsp+90h] [rbp+8h] BYREF
  int *v37; // [rsp+98h] [rbp+10h]

  if ( *(_DWORD *)(a1 + 168) )
  {
    v2 = (volatile LONG *)(a1 + 200);
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
    v4 = *(_DWORD *)(a1 + 104);
    v5 = v3;
    *(_DWORD *)(a1 + 104) = -1;
    if ( v3 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *v2 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
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
    v37 = (int *)v7;
    ++*(_DWORD *)v7;
    v9 = *(_DWORD *)a1;
    v34 = *(_QWORD *)(v7 + 32);
    if ( v6 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *v2 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *v2 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
      __writecr8(v8);
    }
    while ( 1 )
    {
      v36 = 0;
      if ( v9 <= v4 )
        break;
      v10 = v4;
      v11 = v4 & 0x1F;
      v12 = (_DWORD *)(v34 + 4 * (v10 >> 5));
      v13 = v34 + 4 * ((unsigned __int64)(v9 - 1) >> 5);
      v14 = ~(*v12 | ((1 << v11) - 1));
      if ( (*v12 | ((1 << v11) - 1)) == 0xFFFFFFFF )
      {
        v15 = v12 + 1;
        while ( (unsigned __int64)v15 <= v13 )
        {
          v16 = v12[1];
          ++v12;
          v14 = ~v16;
          ++v15;
          if ( v14 )
            goto LABEL_31;
        }
        break;
      }
LABEL_31:
      _BitScanForward64((unsigned __int64 *)&v17, v14);
      v18 = v17 + 32 * (((__int64)v12 - v34) >> 2);
      if ( v18 <= v9 )
      {
        v19 = ~(v14 | ((1 << v17) - 1));
        if ( (v14 | ((1 << v17) - 1)) == 0xFFFFFFFF )
        {
          while ( 1 )
          {
            v20 = v12 + 1;
            if ( (unsigned __int64)(v12 + 1) > v13 )
              break;
            v19 = *v20;
            ++v12;
            if ( *v20 )
              goto LABEL_35;
          }
          LODWORD(v21) = 32;
        }
        else
        {
LABEL_35:
          _BitScanForward64((unsigned __int64 *)&v21, v19);
        }
        v22 = 32 * (((__int64)v12 - v34) >> 2) + v21;
        if ( v22 > v9 )
          v22 = v9;
        v23 = v22 - v18;
        if ( v23 )
        {
          v24 = ExAcquireSpinLockExclusive(v2);
          RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 80) + 24LL), v18, v23);
          v25 = *(_DWORD *)(a1 + 168) - v23;
          *(_DWORD *)(a1 + 168) = v25;
          if ( !v25 )
            *(_DWORD *)(a1 + 104) = -1;
          if ( (_BYTE)v24 == 17 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
              *v2 = 0;
            else
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
          }
          else
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
              *v2 = 0;
            else
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v24);
            __writecr8(v24);
          }
          v26 = *(_QWORD *)(a1 + 224);
          v36 = v18;
          v27 = *(_QWORD *)(*(_QWORD *)(v26 + 256) + 24LL);
          v28 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v27, &v36, v23);
          v29 = v23 - v28;
          if ( v23 != v28 )
          {
            do
            {
              v36 += v28;
              v28 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v27, &v36, v29);
              v29 -= v28;
            }
            while ( v29 );
          }
          if ( *(_DWORD *)(a1 + 168) )
          {
            v4 = v23 + v18;
            if ( v23 + v18 < v9 )
              continue;
          }
        }
      }
      break;
    }
    v30 = ExAcquireSpinLockExclusive(v2);
    v31 = v37;
    v32 = v30;
    v33 = *v37 - 1;
    *v37 = v33;
    if ( v30 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *v2 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *v2 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v32);
      __writecr8(v32);
    }
    if ( v33 )
      v31 = 0LL;
    if ( v31 )
      ExFreePoolWithTag(v31, 0);
  }
}

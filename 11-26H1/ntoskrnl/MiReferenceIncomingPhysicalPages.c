/*
 * XREFs of MiReferenceIncomingPhysicalPages @ 0x140707250
 * Callers:
 *     NtMapUserPhysicalPagesScatter @ 0x14087FCE0 (NtMapUserPhysicalPagesScatter.c)
 *     NtMapUserPhysicalPages @ 0x140B3C1D0 (NtMapUserPhysicalPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetAweViewPageSize @ 0x14047165C (MiGetAweViewPageSize.c)
 *     MiDecrementAweMapCount @ 0x1404799BC (MiDecrementAweMapCount.c)
 *     MiGetVadCacheAttribute @ 0x1404DBCAC (MiGetVadCacheAttribute.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiGetAweNode @ 0x1405289D4 (MiGetAweNode.c)
 *     MiIncrementAweMapCount @ 0x140706818 (MiIncrementAweMapCount.c)
 */

__int64 __fastcall MiReferenceIncomingPhysicalPages(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 **a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int64 v7; // r14
  __int64 v8; // rbx
  int v9; // r13d
  unsigned int VadCacheAttribute; // eax
  __int64 v11; // r8
  unsigned __int64 v12; // rdi
  __int64 v13; // r10
  __int64 AweViewPageSize; // rax
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r11
  __int64 v18; // r12
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 v22; // rbx
  bool v23; // cf
  unsigned __int8 v24; // cl
  unsigned __int64 v25; // r9
  __int64 AweNode; // rax
  __int64 v27; // r8
  __int64 v28; // r11
  __int64 v29; // rax
  int v30; // eax
  unsigned int v31; // ecx
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rbx
  __int64 v36; // [rsp+30h] [rbp-68h]
  unsigned __int64 v37; // [rsp+38h] [rbp-60h]
  __int64 v38; // [rsp+40h] [rbp-58h]
  unsigned __int8 v39; // [rsp+48h] [rbp-50h]
  unsigned __int64 v42; // [rsp+B0h] [rbp+18h]
  unsigned int v44; // [rsp+C8h] [rbp+30h]

  v42 = a3;
  v7 = a3;
  v8 = a2;
  v9 = 0;
  v38 = *(_QWORD *)(a6 + 40);
  VadCacheAttribute = MiGetVadCacheAttribute(*(_DWORD *)(v38 + 48));
  v12 = *(_QWORD *)(v11 + 16);
  v37 = v12;
  v44 = VadCacheAttribute;
  AweViewPageSize = MiGetAweViewPageSize(v13);
  v18 = a7;
  v19 = v12;
  if ( AweViewPageSize )
    v19 = AweViewPageSize;
  v20 = 0LL;
  v36 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v39 = CurrentIrql;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v15) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v15);
    v17 = v38;
    v16 = a4;
  }
  if ( v7 )
  {
    do
    {
      v22 = *(_QWORD *)(v8 + 8 * v20);
      if ( !v16 )
        goto LABEL_30;
      if ( !v22 )
        goto LABEL_10;
      v25 = *(_QWORD *)(v16 + 8 * v20);
      v18 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v25 < (*(unsigned int *)(v17 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 32) << 32)) << 12
        || (v15 = *(unsigned int *)(v17 + 28),
            v25 > (((v15 | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32)) << 12) | 0xFFF)) )
      {
        AweNode = MiGetAweNode(v25);
        v27 = MiGetAweViewPageSize(AweNode);
        v29 = v12;
        if ( v27 )
          v29 = v27;
        if ( v29 != v19
          || (v38 = *(_QWORD *)(v28 + 40), v30 = MiGetVadCacheAttribute(*(_DWORD *)(v38 + 48)), v31 = v44, v30 != v44) )
        {
LABEL_24:
          v18 = a7;
          v7 = v20;
          v42 = v20;
          v9 = -1073741800;
          v20 = 0LL;
          v36 = 0LL;
LABEL_25:
          v23 = v20 < v7;
          goto LABEL_26;
        }
      }
      else
      {
LABEL_30:
        v31 = v44;
      }
      v33 = v22 & 0x7FFFFFFFFFFFFFFFLL;
      if ( ((v19 - 1) & v33) != 0 )
        goto LABEL_24;
      v34 = 0LL;
      if ( v9 < 0 )
      {
        if ( v19 )
        {
          do
          {
            MiDecrementAweMapCount(a1, v33, 2u, a5);
            v33 += v37;
            v34 += v37;
          }
          while ( v34 < v19 );
          v20 = v36;
          CurrentIrql = v39;
          v7 = v42;
        }
      }
      else
      {
        while ( v34 < v19 )
        {
          v9 = MiIncrementAweMapCount(a1, v33, CurrentIrql, v31, v18);
          if ( v9 < 0 )
          {
            if ( v34 )
            {
              v35 = v33 - v34;
              do
              {
                v34 -= v37;
                MiDecrementAweMapCount(a1, v35 + v34, 2u, a5);
              }
              while ( v34 );
              v20 = v36;
              CurrentIrql = v39;
            }
            goto LABEL_24;
          }
          v33 += v37;
          v34 += v37;
          v31 = v44;
        }
      }
      v18 += 8 * v19;
LABEL_10:
      v36 = ++v20;
      if ( (v20 & 0x3F) != 0 )
        goto LABEL_25;
      v23 = v20 < v7;
      if ( v20 != v7 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        v24 = KeGetCurrentIrql();
        if ( v24 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v15) = 2;
          KiRaiseIrqlProcessIrqlFlags(v24, v15);
        }
        goto LABEL_25;
      }
LABEL_26:
      v12 = v37;
      v17 = v38;
      v16 = a4;
      v8 = a2;
    }
    while ( v23 );
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return (unsigned int)v9;
}

/*
 * XREFs of ?KiSelectIdealProcessorSetForGroup@@YAXPEAU_GROUP_AFFINITY@@GK_KPEA_KPEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS@@@Z @ 0x140201520
 * Callers:
 *     ?KiSelectIdealProcessorSetsForProcess@@YAXPEAU_KPROCESS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@PEAU_KAFFINITY_EX@@PEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS@@@Z @ 0x1402013E4 (-KiSelectIdealProcessorSetsForProcess@@YAXPEAU_KPROCESS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@PEAU.c)
 *     KiAdjustProcessIdealProcessorSetsForThreadCreation @ 0x1402018E4 (KiAdjustProcessIdealProcessorSetsForThreadCreation.c)
 * Callees:
 *     KeQueryNodeGroupAffinity @ 0x14020183C (KeQueryNodeGroupAffinity.c)
 *     KiFindBiasedProcessorIndex @ 0x140201890 (KiFindBiasedProcessorIndex.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 */

void __fastcall KiSelectIdealProcessorSetForGroup(
        struct _GROUP_AFFINITY *a1,
        unsigned __int16 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 *a5,
        struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS *a6)
{
  struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS *v6; // r14
  unsigned int v7; // ebx
  struct _GROUP_AFFINITY *v8; // r15
  unsigned int v9; // r12d
  __int64 Prcb; // rax
  __int64 v11; // r9
  unsigned int v12; // esi
  int v13; // edi
  unsigned __int16 v14; // r13
  unsigned __int64 v15; // r8
  int v16; // edx
  __int16 v17; // cx
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 NodeGroupAffinity; // rax
  unsigned __int16 BiasedProcessorIndex; // r10
  unsigned int Group; // r11d
  __int64 v23; // r9
  unsigned int j; // edx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // r13d
  unsigned int v30; // ebp
  __int64 v31; // r14
  __int64 v32; // rdi
  unsigned int v33; // r15d
  unsigned int v34; // r12d
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // rcx
  unsigned int v38; // eax
  unsigned __int64 v39; // rcx
  unsigned int v40; // eax
  int v41; // edi
  char v42; // [rsp+20h] [rbp-88h]
  __int16 v43; // [rsp+24h] [rbp-84h]
  int i; // [rsp+28h] [rbp-80h]
  _BYTE v45[6]; // [rsp+2Eh] [rbp-7Ah]
  unsigned int v46; // [rsp+34h] [rbp-74h]
  unsigned __int64 v47; // [rsp+38h] [rbp-70h]
  unsigned __int64 v48; // [rsp+58h] [rbp-50h]

  v6 = a6;
  v7 = 0;
  v8 = a1;
  if ( !a1->Mask )
  {
    v41 = 537133055;
    *a5 = 0LL;
    goto LABEL_39;
  }
  v46 = 0;
  v9 = 0;
  v47 = 0LL;
  Prcb = KeGetPrcb(a2);
  LOBYTE(v11) = 0;
  v42 = 0;
  v12 = 0;
  *(_WORD *)&v45[4] = 0;
  v13 = 2048;
  v14 = *(_WORD *)(*(_QWORD *)(Prcb + 192) + 138LL);
  *(_DWORD *)v45 = v14;
LABEL_3:
  v15 = v47;
  v16 = 0;
  v17 = 0;
  v43 = 0;
  for ( i = 0; ; v16 = i )
  {
    while ( 1 )
    {
      if ( v17 )
      {
        i = ++v16;
        if ( v16 == (unsigned __int16)KeNumberNodes )
          v18 = 0xFFFFFFFFLL;
        else
          v18 = *(unsigned int *)(qword_140E2D810 + 4LL * (v16 + v14 * (unsigned int)(unsigned __int16)KeNumberNodes));
        v17 = v43;
      }
      else
      {
        v17 = 1;
        v18 = v14;
        v43 = 1;
      }
      if ( (_DWORD)v18 == -1 )
      {
        if ( v9 )
          goto LABEL_36;
        LOBYTE(v11) = 1;
        v42 = 1;
        goto LABEL_3;
      }
      v19 = KeNodeBlock[v18];
      if ( v19 && ((_BYTE)v11 || (*(_BYTE *)(v19 + 10) & 1) == 0) )
      {
        NodeGroupAffinity = KeQueryNodeGroupAffinity(KeNodeBlock[v18], v8->Group);
        v15 = v47;
        v16 = i;
        v17 = v43;
        LOBYTE(v11) = v42;
        if ( NodeGroupAffinity )
          break;
      }
    }
    v48 = NodeGroupAffinity & v8->Mask;
    if ( v48 )
      break;
LABEL_41:
    ;
  }
  if ( *(_WORD *)v19 == v14 )
    BiasedProcessorIndex = a2;
  else
    BiasedProcessorIndex = KiFindBiasedProcessorIndex(v8->Group, a4, NodeGroupAffinity & v8->Mask, v11);
  Group = v8->Group;
  v23 = 0LL;
  for ( j = 0; ; ++j )
  {
    v25 = j;
    if ( j >= *(_DWORD *)(v19 + 48) )
      break;
    v26 = *(_QWORD *)(*(_QWORD *)(v19 + 32) + 8 * v25);
    if ( *(_WORD *)(v26 + 136) == (_WORD)Group )
      v23 |= *(_QWORD *)(v26 + 168);
  }
  v27 = 0LL;
  v28 = BiasedProcessorIndex;
  v29 = 0;
  v30 = 0;
  if ( a3 != v9 )
  {
    v31 = 0LL;
    v32 = v23;
    v33 = a3 - v9;
    v34 = Group;
    do
    {
      v35 = KeGetPrcb(v28);
      v37 = *(_QWORD *)(v35 + 36528);
      if ( !v37 )
        v37 = *(_QWORD *)(v35 + 200);
      v32 &= ~v37;
      v38 = v29 + 1;
      v39 = v48 & v37;
      if ( !v39 )
        v38 = v30;
      v31 |= v39;
      v30 = v38;
      v29 += __popcnt(v39);
      if ( !v32 )
        break;
      v28 = (unsigned int)KiFindBiasedProcessorIndex(v34, a4, v32, v36);
    }
    while ( v29 < v33 );
    v12 = *(_DWORD *)&v45[2];
    v13 = 2048;
    v8 = a1;
    v9 = v46;
    v27 = v31;
    v6 = a6;
  }
  v40 = v9 + v30;
  if ( !v27 )
    v40 = v12;
  v9 += v29;
  v15 = v27 | v47;
  *(_DWORD *)&v45[2] = v40;
  v12 = v40;
  v46 = v9;
  v47 |= v27;
  if ( v9 < a3 )
  {
    v14 = *(_WORD *)v45;
    v17 = v43;
    LOBYTE(v11) = v42;
    goto LABEL_41;
  }
  if ( v15 != v8->Mask )
    v13 = v9;
LABEL_36:
  *a5 = v15;
  if ( v12 > 2 )
    v7 = v12;
  v7 <<= 18;
  v41 = (v13 << 18) + 0x3FFFF;
LABEL_39:
  *v6 = 0LL;
  v6->Low.AllFields = v7;
  v6->High.AllFields = v41;
}

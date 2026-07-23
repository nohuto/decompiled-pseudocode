/*
 * XREFs of RtlRbInsertNodeEx @ 0x18008CB50
 * Callers:
 *     RtlpHpVaMgrFree @ 0x18006FC80 (RtlpHpVaMgrFree.c)
 *     RtlpHpLargeAlloc @ 0x18006FE4C (RtlpHpLargeAlloc.c)
 *     LdrpCheckForRetryLoading @ 0x18007AEA0 (LdrpCheckForRetryLoading.c)
 *     RtlpHpSegFreeRangeInsert @ 0x18008B1C8 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpVsChunkFree @ 0x18008B490 (RtlpHpVsChunkFree.c)
 *     EtwpInsertRegistration @ 0x18008D400 (EtwpInsertRegistration.c)
 *     RtlpCreateWnfNameSubscription @ 0x18008E8D0 (RtlpCreateWnfNameSubscription.c)
 *     RtlpHpVsFreeChunkInsert @ 0x1800E63DC (RtlpHpVsFreeChunkInsert.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x1800FB790 (LdrpInsertModuleToIndexLockHeld.c)
 *     EtwpInsertGuidEntry @ 0x18010235C (EtwpInsertGuidEntry.c)
 *     RtlCompareExchangePointerMapping @ 0x1801457C0 (RtlCompareExchangePointerMapping.c)
 *     LdrpAddRedirectedFunction @ 0x18015DDB0 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     RtlpRbReportFatalError @ 0x1801416C8 (RtlpRbReportFatalError.c)
 */

BOOLEAN __cdecl RtlRbInsertNodeEx(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Parent, BOOLEAN Right, PRTL_BALANCED_NODE Node)
{
  _RTL_BALANCED_NODE *v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  PRTL_BALANCED_NODE v11; // rcx
  unsigned __int64 v12; // rax
  char v13; // cl
  _RTL_BALANCED_NODE *Min; // rcx
  $7D93978C745EB1C2D28075BAF55422B4 v15; // r12
  unsigned __int64 v16; // r15
  char v17; // dl
  __int64 v18; // r9
  unsigned __int64 v19; // r11
  int v20; // r10d
  BOOL v21; // r13d
  _BOOL8 v22; // rbp
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  int v25; // r12d
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rbp
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  _RTL_BALANCED_NODE *v35; // rax
  unsigned __int64 Root; // r9
  _BOOL8 v37; // r13
  unsigned __int64 v38; // rcx
  int v39; // ebp
  __int64 v40; // rcx
  unsigned __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rax
  __int64 v45; // rbx
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rcx
  BOOL v49; // edx
  unsigned __int64 v50; // rax
  BOOL v52; // [rsp+20h] [rbp-68h]
  BOOL v53; // [rsp+28h] [rbp-60h]
  _BOOL8 v54; // [rsp+30h] [rbp-58h]
  _BOOL8 v55; // [rsp+38h] [rbp-50h]
  _BOOL8 v56; // [rsp+40h] [rbp-48h]
  unsigned int v57; // [rsp+40h] [rbp-48h]
  unsigned __int64 v58; // [rsp+98h] [rbp+10h]
  unsigned __int64 v59; // [rsp+A8h] [rbp+20h]

  v4 = 0LL;
  v5 = (unsigned __int64)Node;
  Node->Children[0] = 0LL;
  v6 = (unsigned __int64)Parent;
  Node->Children[1] = 0LL;
  LOBYTE(v8) = *(_BYTE *)&Tree->0 & 1;
  if ( Parent )
  {
    v10 = (unsigned __int64)Node ^ (unsigned __int64)Parent;
    v11 = (PRTL_BALANCED_NODE)v10;
    if ( !(_BYTE)v8 )
      v11 = Node;
    *(_QWORD *)(v6 + 8LL * Right) = v11;
    v12 = v6;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      v12 = v10;
    v8 = v12 | 1;
    Node->ParentValue = v8;
    if ( !Right )
    {
      Min = Tree->Min;
      if ( ((unsigned __int8)Min & 1) != 0 )
      {
        if ( Min == (_RTL_BALANCED_NODE *)1 )
          goto LABEL_10;
        v8 = (unsigned __int64)Min ^ ((unsigned __int64)Tree | 1);
      }
      else
      {
        v8 = (unsigned __int64)Tree->Min;
      }
      if ( v6 == v8 )
      {
        if ( ((unsigned __int8)Min & 1) != 0 )
        {
          Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)Tree);
          LOBYTE(v8) = (unsigned __int8)Node ^ (unsigned __int8)Tree | 1;
          Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)v8;
        }
        else
        {
          Tree->Min = Node;
        }
      }
    }
    while ( 1 )
    {
LABEL_10:
      v13 = *(_BYTE *)(v6 + 16);
      if ( (v13 & 1) == 0 )
        return v8;
      v15 = Tree->0;
      v16 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v17 = *(_BYTE *)&v15 & 1;
      if ( (*(_BYTE *)&v15 & 1) != 0 && v16 )
      {
        v16 ^= v6;
        v19 = v16;
        v58 = v16;
        v18 = *(_QWORD *)v16;
      }
      else
      {
        v18 = *(_QWORD *)v16;
        v19 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v58 = v19;
        if ( !v17 )
          goto LABEL_19;
      }
      if ( !v18 )
      {
LABEL_19:
        v20 = v18 != v6;
        v21 = v20;
        v22 = v18 == v6;
        v53 = v20;
        v52 = v20;
        v54 = v18 != v6;
        v56 = v54;
        v23 = *(_QWORD *)(v16 + 8 * v22);
        v55 = v54;
        if ( !v17 )
          goto LABEL_20;
        goto LABEL_96;
      }
      v52 = (v16 ^ v18) != v6;
      v20 = v52;
      v54 = (v16 ^ v18) != v6;
      v22 = (v16 ^ v18) == v6;
      v56 = v54;
      v21 = v52;
      v55 = v54;
      v53 = v52;
      v23 = *(_QWORD *)(v19 + 8 * v22);
LABEL_96:
      if ( !v23 )
        goto LABEL_21;
      v23 ^= v16;
LABEL_20:
      if ( !v23 || (*(_BYTE *)(v23 + 16) & 1) == 0 )
      {
LABEL_21:
        if ( Right != v20 )
        {
          v24 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          v25 = *(_BYTE *)&v15 & 1;
          if ( v25 && v24 )
            v24 ^= v5;
          if ( v24 != v6 )
            RtlpRbReportFatalError(v24, v6);
          v26 = *(_QWORD *)(v6 + 8 * v22);
          if ( v25 && v26 )
            v26 ^= v6;
          if ( v26 != v5 )
            RtlpRbReportFatalError(v26, v5);
          v27 = *(_QWORD *)(v16 + 8 * v54);
          if ( v25 && v27 )
            v27 ^= v16;
          if ( v27 != v6 )
            RtlpRbReportFatalError(v27, v6);
          v28 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v25 && v28 )
            v28 ^= v6;
          if ( v28 != v16 )
            RtlpRbReportFatalError(v28, v16);
          v29 = v58 ^ v5;
          if ( v25 )
          {
            v57 = v53;
            *(_QWORD *)(v58 + 8 * v55) = v29;
          }
          else
          {
            v29 = v16;
            *(_QWORD *)(v58 + 8 * v56) = v5;
            v57 = v53;
          }
          *(_QWORD *)(v5 + 16) = v29 | *(_DWORD *)(v5 + 16) & 3;
          v30 = *(_QWORD *)(v5 + 8 * v54);
          if ( v25 )
          {
            if ( v30 )
            {
              v30 ^= v5;
              goto LABEL_39;
            }
          }
          else
          {
LABEL_39:
            if ( v30 )
            {
              v31 = *(_QWORD *)(v30 + 16);
              v32 = v31 & 0xFFFFFFFFFFFFFFFCuLL;
              if ( v25 && v32 )
                v32 ^= v30;
              if ( v32 != v5 )
                RtlpRbReportFatalError(v32, v5);
              v33 = v6;
              if ( v25 )
                v33 = v6 ^ v30;
              *(_QWORD *)(v30 + 16) = v33 | v31 & 3;
            }
          }
          if ( v25 && v30 )
          {
            v49 = v52;
            *(_QWORD *)(v6 + 8 * !v52) = v6 ^ v30;
LABEL_102:
            *(_QWORD *)(v5 + 8LL * v49) = v5 ^ v6;
            v34 = v5 ^ v6;
          }
          else
          {
            *(_QWORD *)(v6 + 8 * (v57 ^ 1LL)) = v30;
            if ( v25 )
            {
              v49 = v52;
              goto LABEL_102;
            }
            v34 = v5;
            *(_QWORD *)(v5 + 8LL * v52) = v6;
          }
          *(_QWORD *)(v6 + 16) = v34 | *(_DWORD *)(v6 + 16) & 3;
          v6 = v5;
        }
        v35 = Tree->Min;
        Root = (unsigned __int64)Tree->Root;
        if ( ((unsigned __int8)v35 & 1) != 0 )
        {
          if ( Root )
            Root ^= (unsigned __int64)Tree;
          else
            Root = 0LL;
        }
        v59 = Root;
        v37 = !v21;
        v38 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v39 = (unsigned __int8)v35 & 1;
        if ( ((unsigned __int8)v35 & 1) != 0 && v38 )
          v38 ^= v6;
        if ( v38 != v16 )
          RtlpRbReportFatalError(v38, v16);
        v40 = *(_QWORD *)(v16 + 8 * !v37);
        if ( ((unsigned __int8)v35 & 1) != 0 && v40 )
          v40 ^= v16;
        if ( v40 != v6 )
          RtlpRbReportFatalError(v40, v6);
        v41 = *(_QWORD *)(v16 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( ((unsigned __int8)v35 & 1) != 0 )
        {
          if ( v41 )
          {
            v41 ^= v16;
            goto LABEL_58;
          }
        }
        else
        {
LABEL_58:
          if ( v41 )
          {
            v42 = *(_QWORD *)(v41 + 8);
            if ( v39 && v42 )
              v42 ^= v41;
            if ( v42 == v16 )
            {
              v50 = v6;
              if ( v39 )
                v50 = v6 ^ v41;
              *(_QWORD *)(v41 + 8) = v50;
            }
            else
            {
              v43 = *(_QWORD *)v41;
              if ( v39 && v43 )
                v43 ^= v41;
              if ( v43 != v16 )
                RtlpRbReportFatalError(v43, v16);
              v44 = v6;
              if ( v39 )
                v44 = v6 ^ v41;
              *(_QWORD *)v41 = v44;
            }
            goto LABEL_67;
          }
        }
        if ( Root != v16 )
          RtlpRbReportFatalError(Root, v16);
        v59 = v6;
LABEL_67:
        if ( v39 && v41 )
          v41 ^= v6;
        *(_QWORD *)(v6 + 16) = v41 | *(_DWORD *)(v6 + 16) & 3;
        v45 = *(_QWORD *)(v6 + 8 * v37);
        if ( v39 )
        {
          if ( v45 )
          {
            v45 ^= v6;
            goto LABEL_71;
          }
        }
        else
        {
LABEL_71:
          if ( v45 )
          {
            v46 = *(_QWORD *)(v45 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v39 && v46 )
              v46 ^= v45;
            if ( v46 != v6 )
              RtlpRbReportFatalError(v46, v6);
            v47 = v16;
            if ( v39 )
              v47 = v16 ^ v45;
            *(_QWORD *)(v45 + 16) = v47 | *(_DWORD *)(v45 + 16) & 3;
          }
        }
        if ( v39 && v45 )
        {
          *(_QWORD *)(v58 + 8 * !v37) = v16 ^ v45;
LABEL_98:
          *(_QWORD *)(v6 + 8 * v37) = v6 ^ v16;
          v48 = v6 ^ v16;
        }
        else
        {
          *(_QWORD *)(v16 + 8 * !v37) = v45;
          if ( v39 )
            goto LABEL_98;
          *(_QWORD *)(v6 + 8 * v37) = v16;
          v48 = v6;
        }
        v8 = v48 | *(_DWORD *)(v16 + 16) & 3;
        *(_QWORD *)(v16 + 16) = v8;
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
        {
          LOBYTE(v8) = (unsigned __int8)Tree ^ v59;
          if ( v59 )
            v4 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ v59);
          Tree->Root = v4;
          *(_BYTE *)(v16 + 16) |= 1u;
          *(_BYTE *)(v6 + 16) &= ~1u;
        }
        else
        {
          Tree->Root = (_RTL_BALANCED_NODE *)v59;
          *(_BYTE *)(v16 + 16) |= 1u;
          *(_BYTE *)(v6 + 16) &= ~1u;
        }
        return v8;
      }
      v5 = v16;
      *(_BYTE *)(v6 + 16) = v13 & 0xFE;
      *(_BYTE *)(v23 + 16) &= ~1u;
      v8 = *(_QWORD *)(v16 + 16);
      v6 = v8 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      {
        if ( !v6 )
          return v8;
        v6 ^= v16;
      }
      if ( !v6 )
        return v8;
      *(_BYTE *)(v16 + 16) = v8 | 1;
      v8 = *(_QWORD *)v6;
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v8 )
        v8 ^= v6;
      Right = v16 != v8;
    }
  }
  v9 = (unsigned __int64)Node ^ (unsigned __int64)Tree;
  if ( (_BYTE)v8 )
  {
    Tree->Root = (_RTL_BALANCED_NODE *)v9;
    Tree->Min = (_RTL_BALANCED_NODE *)v9;
    Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)(v9 | 1);
  }
  else
  {
    Tree->Root = Node;
    Tree->Min = Node;
  }
  Node->ParentValue = 0LL;
  return v8;
}

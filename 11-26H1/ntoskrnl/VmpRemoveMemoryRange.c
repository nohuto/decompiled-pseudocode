/*
 * XREFs of VmpRemoveMemoryRange @ 0x14050AC9C
 * Callers:
 *     VmDeleteMemoryRange @ 0x140B0A210 (VmDeleteMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     VmpVaRangeNumberOfGpaRanges @ 0x1404C294C (VmpVaRangeNumberOfGpaRanges.c)
 *     VmpFindNextPinnedPageStateHelper @ 0x1406C4DA8 (VmpFindNextPinnedPageStateHelper.c)
 *     VmpInvalidateSlatBatched @ 0x1406C5010 (VmpInvalidateSlatBatched.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     VmpUnpinMemoryRanges @ 0x140823DB8 (VmpUnpinMemoryRanges.c)
 *     VmpFreeMemoryRanges @ 0x140B020AC (VmpFreeMemoryRanges.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmpRemoveMemoryRange(
        PEX_SPIN_LOCK SpinLock,
        _RTL_BALANCED_NODE *a2,
        _RTL_BALANCED_NODE *a3,
        __int64 a4,
        __int64 a5)
{
  _RTL_BALANCED_NODE *ParentValue; // rsi
  _RTL_BALANCED_NODE *v7; // r13
  unsigned __int64 v9; // r12
  __int64 v10; // r14
  unsigned int v11; // ebx
  _RTL_BALANCED_NODE *v12; // rbx
  _RTL_BALANCED_NODE *v13; // r11
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  _RTL_BALANCED_NODE *v16; // r10
  _RTL_BALANCED_NODE *v17; // r8
  _RTL_BALANCED_NODE *v18; // r9
  bool v19; // zf
  unsigned __int64 v20; // r13
  __int64 NextPinnedPageStateHelper; // r12
  __int64 v22; // r13
  KIRQL v23; // al
  _RTL_BALANCED_NODE *v24; // rcx
  _RTL_BALANCED_NODE *v25; // rcx
  _RTL_BALANCED_NODE *v26; // rax
  _RTL_BALANCED_NODE *v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  int v31; // [rsp+40h] [rbp-51h]
  __int64 v32; // [rsp+48h] [rbp-49h]
  __int64 v33; // [rsp+50h] [rbp-41h]
  _RTL_BALANCED_NODE *P; // [rsp+70h] [rbp-21h]
  __int64 v36; // [rsp+78h] [rbp-19h] BYREF
  _RTL_BALANCED_NODE *v37; // [rsp+80h] [rbp-11h]
  KIRQL OldIrql[8]; // [rsp+88h] [rbp-9h] BYREF
  __int64 v39; // [rsp+90h] [rbp-1h]

  v36 = 0LL;
  ParentValue = 0LL;
  P = 0LL;
  v7 = a2;
  v37 = (_RTL_BALANCED_NODE *)((char *)a2 + a4);
  v32 = (__int64)a2 + a4 - 1;
  v33 = (__int64)a3 + a4;
  v9 = (unsigned __int64)a3 + a4 - 1;
  v10 = ExAcquireSpinLockExclusive(SpinLock);
  *(_QWORD *)OldIrql = v10;
  if ( *((_QWORD *)SpinLock + 15) != a5 )
  {
    v11 = -1073740007;
    goto LABEL_77;
  }
  VmpInvalidateSlatBatched(SpinLock, (__int64)OldIrql, 12, 0LL);
  v12 = (_RTL_BALANCED_NODE *)*((_QWORD *)SpinLock + 5);
  v13 = 0LL;
  if ( !v12 || a3 > v12[2].Children[1] || a3 < v12[2].Children[0] )
  {
    v14 = *((_QWORD *)SpinLock + 1);
    if ( (SpinLock[4] & 1) != 0 )
    {
      if ( v14 )
        v14 ^= (unsigned __int64)(SpinLock + 2);
      else
        v14 = 0LL;
    }
    while ( v14 )
    {
      if ( (unsigned __int64)a3 > *(_QWORD *)(v14 + 32) )
      {
        v15 = *(_QWORD *)(v14 + 8);
      }
      else
      {
        if ( (unsigned __int64)a3 >= *(_QWORD *)(v14 + 24) )
          break;
        v15 = *(_QWORD *)v14;
      }
      if ( (SpinLock[4] & 1) != 0 && v15 )
        v14 ^= v15;
      else
        v14 = v15;
    }
    if ( !v14 )
      goto LABEL_75;
    v12 = (_RTL_BALANCED_NODE *)(v14 - 24);
    *((_QWORD *)SpinLock + 5) = v12;
  }
  if ( !v12 )
  {
LABEL_75:
    v11 = -1073741172;
    goto LABEL_76;
  }
  ParentValue = (_RTL_BALANCED_NODE *)v12->ParentValue;
  v16 = v12 + 2;
  v31 = 0;
  if ( v12[2].Children[0] == a3
    && v12[2].Children[1] == (_RTL_BALANCED_NODE *)v9
    && ParentValue[1].Children[0] == v7
    && ParentValue[1].Children[1] == (_RTL_BALANCED_NODE *)v32 )
  {
    goto LABEL_40;
  }
  if ( (unsigned __int64)VmpVaRangeNumberOfGpaRanges((__int64)ParentValue) <= 1 )
  {
    if ( a3 == v17 && v7 == ParentValue[1].Children[0] )
    {
      v19 = (_RTL_BALANCED_NODE *)v9 == v12[2].Children[1];
      if ( (_RTL_BALANCED_NODE *)v9 < v12[2].Children[1] )
      {
        if ( v18 >= ParentValue[1].Children[1] )
          goto LABEL_28;
        v31 = 1;
LABEL_40:
        v10 = *(_QWORD *)OldIrql;
        if ( ParentValue[2].Children[1] == v13 )
        {
          v24 = (_RTL_BALANCED_NODE *)v33;
        }
        else
        {
          v20 = (unsigned __int64)a3;
          while ( 1 )
          {
            NextPinnedPageStateHelper = VmpFindNextPinnedPageStateHelper(SpinLock, v20, v9, 1LL);
            if ( NextPinnedPageStateHelper == -1 )
              break;
            if ( NextPinnedPageStateHelper == v33 - 1 )
            {
              v22 = v33;
            }
            else
            {
              v22 = VmpFindNextPinnedPageStateHelper(SpinLock, NextPinnedPageStateHelper + 1, v33 - 1, 0LL);
              if ( v22 == -1 )
                v22 = v33;
            }
            if ( v10 == -2 )
              ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
            else
              ExReleaseSpinLockExclusive(SpinLock, v10);
            *(_QWORD *)OldIrql = NextPinnedPageStateHelper;
            v39 = v22 - NextPinnedPageStateHelper;
            VmpUnpinMemoryRanges(SpinLock, a5, 3, (__int64)&v36);
            v20 = v22 + 1;
            v23 = ExAcquireSpinLockExclusive(SpinLock);
            v24 = (_RTL_BALANCED_NODE *)v33;
            v10 = v23;
            v9 = v33 - 1;
            if ( v20 > v33 - 1 )
              goto LABEL_54;
          }
          v24 = (_RTL_BALANCED_NODE *)v33;
LABEL_54:
          v16 = v12 + 2;
          LODWORD(v13) = 0;
          v7 = a2;
        }
        if ( v31 )
        {
          if ( v31 == 1 )
          {
            v27 = v37;
            v16->Children[0] = v24;
            ParentValue[1].Children[0] = v27;
          }
          else
          {
            v12[2].Children[1] = (_RTL_BALANCED_NODE *)((char *)a3 - 1);
            ParentValue[1].Children[1] = (_RTL_BALANCED_NODE *)((char *)v7 - 1);
          }
        }
        else
        {
          RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 2), v12 + 1);
          LODWORD(v13) = 0;
          v12[1].ParentValue = -1LL;
          if ( *((_RTL_BALANCED_NODE **)SpinLock + 5) == v12 )
            *((_QWORD *)SpinLock + 5) = 0LL;
          v25 = v12->Children[0];
          if ( v12->Children[0]->Children[1] != v12 || (v26 = v12->Children[1], v26->Children[0] != v12) )
            __fastfail(3u);
          v26->Children[0] = v25;
          v25->Children[1] = v26;
          P = v12;
          if ( ($00098E9587C659455CF60FD08F0E11F5 *)ParentValue[1].ParentValue == &ParentValue[1].16 )
          {
            RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 6), ParentValue);
            LODWORD(v13) = 0;
            ParentValue->ParentValue = -1LL;
            if ( *((_RTL_BALANCED_NODE **)SpinLock + 6) == ParentValue )
              *((_QWORD *)SpinLock + 6) = 0LL;
LABEL_68:
            ++*((_QWORD *)SpinLock + 11);
            v28 = (unsigned __int64)(SpinLock + 2);
            if ( (SpinLock[4] & 1) != 0 )
            {
              if ( !*(_QWORD *)v28 )
                goto LABEL_73;
              v29 = *(_QWORD *)v28 ^ v28;
            }
            else
            {
              v29 = *(_QWORD *)v28;
            }
            if ( v29 )
            {
LABEL_74:
              v11 = (unsigned int)v13;
              goto LABEL_77;
            }
LABEL_73:
            *((_QWORD *)SpinLock + 15) = -1LL;
            *((_WORD *)SpinLock + 76) = (_WORD)v13;
            goto LABEL_74;
          }
        }
        ParentValue = 0LL;
        goto LABEL_68;
      }
    }
    else
    {
      v19 = (_RTL_BALANCED_NODE *)v9 == v12[2].Children[1];
    }
    if ( !v19 || v18 != ParentValue[1].Children[1] || a3 <= v17 || v7 <= ParentValue[1].Children[0] )
      goto LABEL_28;
    v31 = 2;
    goto LABEL_40;
  }
LABEL_28:
  v11 = -1073741637;
  ParentValue = v13;
LABEL_76:
  v10 = *(_QWORD *)OldIrql;
LABEL_77:
  if ( v10 != -1 )
  {
    if ( v10 == -2 )
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    else
      ExReleaseSpinLockExclusive(SpinLock, v10);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( ParentValue )
    VmpFreeMemoryRanges(ParentValue);
  return v11;
}

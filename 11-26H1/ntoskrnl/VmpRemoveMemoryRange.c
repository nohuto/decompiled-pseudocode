/*
 * XREFs of VmpRemoveMemoryRange @ 0x14051122C
 * Callers:
 *     VmDeleteMemoryRange @ 0x140B080E0 (VmDeleteMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 *     VmpVaRangeNumberOfGpaRanges @ 0x1404C8FB0 (VmpVaRangeNumberOfGpaRanges.c)
 *     VmpFindNextPinnedPageStateHelper @ 0x1406C11C8 (VmpFindNextPinnedPageStateHelper.c)
 *     VmpInvalidateSlatBatched @ 0x1406C1430 (VmpInvalidateSlatBatched.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     VmpUnpinMemoryRanges @ 0x14081DBA8 (VmpUnpinMemoryRanges.c)
 *     VmpFreeMemoryRanges @ 0x140B0037C (VmpFreeMemoryRanges.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmpRemoveMemoryRange(
        PEX_SPIN_LOCK SpinLock,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD *v5; // rsi
  unsigned __int64 v7; // r13
  unsigned __int64 v9; // r12
  __int64 v10; // r14
  unsigned int v11; // ebx
  __int64 *v12; // rbx
  _QWORD *v13; // r11
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 *v16; // r10
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  bool v19; // zf
  unsigned __int64 v20; // r13
  __int64 NextPinnedPageStateHelper; // r12
  __int64 v22; // r13
  KIRQL v23; // al
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 **v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  int v31; // [rsp+40h] [rbp-51h]
  __int64 v32; // [rsp+48h] [rbp-49h]
  __int64 v33; // [rsp+50h] [rbp-41h]
  __int64 *P; // [rsp+70h] [rbp-21h]
  __int64 v36; // [rsp+78h] [rbp-19h] BYREF
  __int64 v37; // [rsp+80h] [rbp-11h]
  KIRQL OldIrql[8]; // [rsp+88h] [rbp-9h] BYREF
  __int64 v39; // [rsp+90h] [rbp-1h]

  v36 = 0LL;
  v5 = 0LL;
  P = 0LL;
  v7 = a2;
  v37 = a4 + a2;
  v32 = a4 + a2 - 1;
  v33 = a4 + a3;
  v9 = a4 + a3 - 1;
  v10 = ExAcquireSpinLockExclusive(SpinLock);
  *(_QWORD *)OldIrql = v10;
  if ( *((_QWORD *)SpinLock + 15) != a5 )
  {
    v11 = -1073740007;
    goto LABEL_77;
  }
  VmpInvalidateSlatBatched(SpinLock, (__int64)OldIrql, 12, 0LL);
  v12 = (__int64 *)*((_QWORD *)SpinLock + 5);
  v13 = 0LL;
  if ( !v12 || a3 > v12[7] || a3 < v12[6] )
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
      if ( a3 > *(_QWORD *)(v14 + 32) )
      {
        v15 = *(_QWORD *)(v14 + 8);
      }
      else
      {
        if ( a3 >= *(_QWORD *)(v14 + 24) )
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
    v12 = (__int64 *)(v14 - 24);
    *((_QWORD *)SpinLock + 5) = v12;
  }
  if ( !v12 )
  {
LABEL_75:
    v11 = -1073741172;
    goto LABEL_76;
  }
  v5 = (_QWORD *)v12[2];
  v16 = v12 + 6;
  v31 = 0;
  if ( v12[6] == a3 && v12[7] == v9 && v5[3] == v7 && v5[4] == v32 )
    goto LABEL_40;
  if ( (unsigned __int64)VmpVaRangeNumberOfGpaRanges((__int64)v5) <= 1 )
  {
    if ( a3 == v17 && v7 == v5[3] )
    {
      v19 = v9 == v12[7];
      if ( v9 < v12[7] )
      {
        if ( v18 >= v5[4] )
          goto LABEL_28;
        v31 = 1;
LABEL_40:
        v10 = *(_QWORD *)OldIrql;
        if ( (_QWORD *)v5[7] == v13 )
        {
          v24 = v33;
        }
        else
        {
          v20 = a3;
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
            v24 = v33;
            v10 = v23;
            v9 = v33 - 1;
            if ( v20 > v33 - 1 )
              goto LABEL_54;
          }
          v24 = v33;
LABEL_54:
          v16 = v12 + 6;
          LODWORD(v13) = 0;
          v7 = a2;
        }
        if ( v31 )
        {
          if ( v31 == 1 )
          {
            v27 = v37;
            *v16 = v24;
            v5[3] = v27;
          }
          else
          {
            v12[7] = a3 - 1;
            v5[4] = v7 - 1;
          }
        }
        else
        {
          RtlRbRemoveNode((__int64)(SpinLock + 2), (__int64)(v12 + 3));
          LODWORD(v13) = 0;
          v12[5] = -1LL;
          if ( *((__int64 **)SpinLock + 5) == v12 )
            *((_QWORD *)SpinLock + 5) = 0LL;
          v25 = (__int64 *)*v12;
          if ( *(__int64 **)(*v12 + 8) != v12 || (v26 = (__int64 **)v12[1], *v26 != v12) )
            __fastfail(3u);
          *v26 = v25;
          v25[1] = (__int64)v26;
          P = v12;
          if ( (_QWORD *)v5[5] == v5 + 5 )
          {
            RtlRbRemoveNode((__int64)(SpinLock + 6), (__int64)v5);
            LODWORD(v13) = 0;
            v5[2] = -1LL;
            if ( *((_QWORD **)SpinLock + 6) == v5 )
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
        v5 = 0LL;
        goto LABEL_68;
      }
    }
    else
    {
      v19 = v9 == v12[7];
    }
    if ( !v19 || v18 != v5[4] || a3 <= v17 || v7 <= v5[3] )
      goto LABEL_28;
    v31 = 2;
    goto LABEL_40;
  }
LABEL_28:
  v11 = -1073741637;
  v5 = v13;
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
  if ( v5 )
    VmpFreeMemoryRanges(v5);
  return v11;
}

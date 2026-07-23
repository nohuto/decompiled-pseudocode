/*
 * XREFs of MiResolveTransitionFault @ 0x1403A8C64
 * Callers:
 *     MiDispatchFault @ 0x1403A5BC0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1403A7B0C (MiResolveProtoPteFault.c)
 * Callees:
 *     MiUpdatePfnPriority @ 0x140298800 (MiUpdatePfnPriority.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A90E0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiAllocateWsle @ 0x1402B9CD8 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x1402BAC10 (MiCompleteProtoPteFault.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MiQueueCoreWorkingSetEntries @ 0x1402CC3A0 (MiQueueCoreWorkingSetEntries.c)
 *     MiHandleTransitionFault @ 0x1402D85D0 (MiHandleTransitionFault.c)
 *     MiCompleteTransitionPfnFault @ 0x1402E40B0 (MiCompleteTransitionPfnFault.c)
 *     MiLockAndDecrementShareCount @ 0x1402EB25C (MiLockAndDecrementShareCount.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiFreeInPageSupportBlock @ 0x14031F608 (MiFreeInPageSupportBlock.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 *     MiHandleCollidedFault @ 0x14038D1C8 (MiHandleCollidedFault.c)
 *     MiCheckWriteInProgressFault @ 0x1406FC2EC (MiCheckWriteInProgressFault.c)
 */

__int64 MiResolveTransitionFault(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, ...)
{
  __int64 v4; // r9
  __int64 v5; // r12
  _SLIST_ENTRY **v9; // rdi
  unsigned __int64 PteShadow; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r15d
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 result; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  _SLIST_ENTRY *v20; // rbp
  __int64 v21; // rbx
  int v22; // eax
  unsigned int v23; // ecx
  char v24; // bp
  __int64 v25; // r15
  _BYTE *v26; // r12
  char v27; // r12
  __int64 v28; // [rsp+48h] [rbp-40h]
  unsigned int v29; // [rsp+90h] [rbp+8h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+20h]
  _SLIST_ENTRY **v32; // [rsp+B0h] [rbp+28h] BYREF
  va_list va; // [rsp+B0h] [rbp+28h]
  va_list va1; // [rsp+B8h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v32 = va_arg(va1, _SLIST_ENTRY **);
  v31 = a4;
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 16);
  v28 = *(_QWORD *)(a1 + 56);
  v29 = 0;
  ListEntry = 0LL;
  *v32 = 0LL;
  if ( a3 )
  {
    PteShadow = *a2;
    if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow((unsigned __int64)a2, *a2);
    v11 = PteShadow;
    if ( qword_140E2D8C0 != v4 && (PteShadow & 0x10) == 0 )
      v11 = PteShadow & qword_140E2D8C8;
    v9 = (_SLIST_ENTRY **)(48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  }
  else
  {
    v9 = (_SLIST_ENTRY **)MiLockTransitionLeafPageEx((ULONG_PTR)a2, 0LL, 1);
    if ( !v9 )
      return 3221226548LL;
    PteShadow = *a2;
    if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow((unsigned __int64)a2, *a2);
  }
  if ( (v5 & 1) != 0 && *(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiUpdatePfnPriority((unsigned __int64)v9, *(_DWORD *)((v5 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7, 0);
    v14 = 0;
LABEL_27:
    _InterlockedAnd64((volatile signed __int64 *)v9 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    if ( a3 )
    {
      LOBYTE(v12) = 17;
      MiUnlockProtoPoolPage(a3, v12, v13);
    }
    return (unsigned int)v14;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * (((unsigned __int64)v9[5] >> 43) & 0x3FF)) + 4LL) & 0x20) != 0 )
  {
    v9 = (_SLIST_ENTRY **)MiHandleSpecialPurposeMemoryCachedFault(
                            a1,
                            *(_QWORD *)a1,
                            (unsigned __int64 *)a2,
                            (ULONG_PTR)v9);
    if ( !v9 )
    {
      if ( a3 )
      {
        LOBYTE(v15) = 17;
        MiUnlockProtoPoolPage(a3, v15, v16);
      }
      return 3221226548LL;
    }
    PteShadow = *a2;
    if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow((unsigned __int64)a2, *a2);
  }
  __incgsdword(0x2E98u);
  LOBYTE(v12) = *((_BYTE *)v9 + 34);
  if ( (v12 & 8) != 0 )
  {
    v14 = MiCheckWriteInProgressFault(v9);
    if ( v14 < 0 )
    {
      *(_DWORD *)(a1 + 80) |= 4u;
      goto LABEL_27;
    }
  }
  if ( (v12 & 0x20) != 0 )
  {
    result = MiHandleCollidedFault((__int64 *)a1, (_SLIST_ENTRY *)a2, a3, (__int64)v9, v32, &v29);
    if ( v29 <= 1 || (int)result < 0 )
      return result;
  }
  else
  {
    v32 = 0LL;
    result = MiHandleTransitionFault(
               (unsigned __int64 *)a1,
               (ULONG_PTR)a2,
               a3,
               (ULONG_PTR *)v9,
               (__int64 *)va,
               PteShadow,
               (__int64 *)&ListEntry);
    if ( (int)result < 0 )
      return result;
    if ( v32 )
      v9 = v32;
  }
  v18 = v31;
  v19 = MiCompleteTransitionPfnFault((_QWORD *)a1, (unsigned __int64)a2, a3, (ULONG_PTR)v9, PteShadow, v31);
  v20 = ListEntry;
  v21 = v19;
  if ( ListEntry )
  {
    if ( SLODWORD(ListEntry[11].Next) > 1 )
      KeSetEvent((PRKEVENT)(&ListEntry[3].Next + 1), 0, 0);
    MiFreeInPageSupportBlock(v20);
  }
  if ( (__int64)v9[5] < 0 )
  {
    v22 = MiCompleteProtoPteFault((__int64 *)a1, (__int64)(v9 + 0x44000000000LL) / 48, v18, 0, v5);
    v23 = 272;
    if ( v22 < 0 )
      return (unsigned int)v22;
    return v23;
  }
  if ( (v5 & 1) != 0 )
  {
    if ( *(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      *a2 = v21;
      return 272LL;
    }
    v24 = 0;
    v25 = 0LL;
    if ( *(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
    {
      v24 = 1;
    }
    else
    {
      v26 = (_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( *v26 == 5 )
        v25 = (__int64)v26;
    }
  }
  else
  {
    v24 = 0;
    v25 = 0LL;
  }
  if ( (*(_BYTE *)(a1 + 69) & 0x20) != 0 )
    v21 &= ~0x20uLL;
  if ( (unsigned int)MiQueueCoreWorkingSetEntries(a1 + 56, (unsigned int)a2, (__int64)v9) )
    v24 |= 4u;
  v27 = v24 | 0x10;
  if ( (*(_BYTE *)(a1 + 69) & 1) == 0 )
    v27 = v24;
  if ( (unsigned int)MiAllocateWsle(v28, a2, v9, 0, v21, v27, v25) )
    return 272LL;
  MiLockAndDecrementShareCount((ULONG_PTR)v9, 2LL);
  if ( (v27 & 4) != 0 )
    --*(_WORD *)(a1 + 66);
  return 3221225495LL;
}

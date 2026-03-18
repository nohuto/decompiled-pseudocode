/*
 * XREFs of MiResolveTransitionFault @ 0x1403A6F04
 * Callers:
 *     MiDispatchFault @ 0x1403A3E60 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1403A5DAC (MiResolveProtoPteFault.c)
 * Callees:
 *     MiUpdatePfnPriority @ 0x1402992A0 (MiUpdatePfnPriority.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A9CD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiAllocateWsle @ 0x1402D7F18 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x1402D8E50 (MiCompleteProtoPteFault.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     MiQueueCoreWorkingSetEntries @ 0x1402EA360 (MiQueueCoreWorkingSetEntries.c)
 *     MiHandleTransitionFault @ 0x1402F6550 (MiHandleTransitionFault.c)
 *     MiCompleteTransitionPfnFault @ 0x140302030 (MiCompleteTransitionPfnFault.c)
 *     MiLockAndDecrementShareCount @ 0x1403091DC (MiLockAndDecrementShareCount.c)
 *     MiReadPteShadow @ 0x140314FF0 (MiReadPteShadow.c)
 *     MiFreeInPageSupportBlock @ 0x14031D5D8 (MiFreeInPageSupportBlock.c)
 *     MiLockTransitionLeafPageEx @ 0x14033E050 (MiLockTransitionLeafPageEx.c)
 *     MiHandleCollidedFault @ 0x14038B418 (MiHandleCollidedFault.c)
 *     MiCheckWriteInProgressFault @ 0x1406F767C (MiCheckWriteInProgressFault.c)
 */

__int64 MiResolveTransitionFault(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, ...)
{
  __int64 v4; // r9
  __int64 v5; // r12
  struct _SLIST_ENTRY **v9; // rdi
  unsigned __int64 PteShadow; // rbx
  unsigned __int64 v11; // rax
  int v12; // r15d
  __int64 result; // rax
  char v14; // dl
  __int64 v15; // r15
  __int64 v16; // rax
  struct _SLIST_ENTRY *v17; // rbp
  __int64 v18; // rbx
  int v19; // eax
  unsigned int v20; // ecx
  char v21; // bp
  __int64 v22; // r15
  _BYTE *v23; // r12
  char v24; // r12
  __int64 v25; // [rsp+48h] [rbp-40h]
  unsigned int v26; // [rsp+90h] [rbp+8h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+20h]
  struct _SLIST_ENTRY **v29; // [rsp+B0h] [rbp+28h] BYREF
  va_list va; // [rsp+B0h] [rbp+28h]
  va_list va1; // [rsp+B8h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v29 = va_arg(va1, struct _SLIST_ENTRY **);
  v28 = a4;
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 16);
  v25 = *(_QWORD *)(a1 + 56);
  v26 = 0;
  ListEntry = 0LL;
  *v29 = 0LL;
  if ( a3 )
  {
    PteShadow = *a2;
    if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow((unsigned __int64)a2, *a2);
    v11 = PteShadow;
    if ( qword_140E2D740 != v4 && (PteShadow & 0x10) == 0 )
      v11 = PteShadow & qword_140E2D748;
    v9 = (struct _SLIST_ENTRY **)(48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  }
  else
  {
    v9 = (struct _SLIST_ENTRY **)MiLockTransitionLeafPageEx((ULONG_PTR)a2, 0LL, 1);
    if ( !v9 )
      return 3221226548LL;
    PteShadow = *a2;
    if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow((unsigned __int64)a2, *a2);
  }
  if ( (v5 & 1) != 0 && *(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiUpdatePfnPriority((unsigned __int64)v9, *(_DWORD *)((v5 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7, 0);
    v12 = 0;
LABEL_27:
    _InterlockedAnd64((volatile signed __int64 *)v9 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    if ( a3 )
      MiUnlockProtoPoolPage(a3, 0x11u);
    return (unsigned int)v12;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * (((unsigned __int64)v9[5] >> 43) & 0x3FF)) + 4LL) & 0x20) != 0 )
  {
    v9 = (struct _SLIST_ENTRY **)MiHandleSpecialPurposeMemoryCachedFault(
                                   a1,
                                   *(_QWORD *)a1,
                                   (unsigned __int64 *)a2,
                                   (ULONG_PTR)v9);
    if ( !v9 )
    {
      if ( a3 )
        MiUnlockProtoPoolPage(a3, 0x11u);
      return 3221226548LL;
    }
    PteShadow = *a2;
    if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow((unsigned __int64)a2, *a2);
  }
  __incgsdword(0x2E98u);
  v14 = *((_BYTE *)v9 + 34);
  if ( (v14 & 8) != 0 )
  {
    v12 = MiCheckWriteInProgressFault(v9);
    if ( v12 < 0 )
    {
      *(_DWORD *)(a1 + 80) |= 4u;
      goto LABEL_27;
    }
  }
  if ( (v14 & 0x20) != 0 )
  {
    result = MiHandleCollidedFault((__int64 *)a1, (_SLIST_ENTRY *)a2, a3, (__int64)v9, v29, &v26);
    if ( v26 <= 1 || (int)result < 0 )
      return result;
  }
  else
  {
    v29 = 0LL;
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
    if ( v29 )
      v9 = v29;
  }
  v15 = v28;
  v16 = MiCompleteTransitionPfnFault((_QWORD *)a1, (unsigned __int64)a2, a3, (ULONG_PTR)v9, PteShadow, v28);
  v17 = ListEntry;
  v18 = v16;
  if ( ListEntry )
  {
    if ( SLODWORD(ListEntry[11].Next) > 1 )
      KeSetEvent((PRKEVENT)(&ListEntry[3].Next + 1), 0, 0);
    MiFreeInPageSupportBlock(v17);
  }
  if ( (__int64)v9[5] < 0 )
  {
    v19 = MiCompleteProtoPteFault((__int64 *)a1, (__int64)(v9 + 0x44000000000LL) / 48, v15, 0, v5);
    v20 = 272;
    if ( v19 < 0 )
      return (unsigned int)v19;
    return v20;
  }
  if ( (v5 & 1) != 0 )
  {
    if ( *(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      *a2 = v18;
      return 272LL;
    }
    v21 = 0;
    v22 = 0LL;
    if ( *(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
    {
      v21 = 1;
    }
    else
    {
      v23 = (_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( *v23 == 5 )
        v22 = (__int64)v23;
    }
  }
  else
  {
    v21 = 0;
    v22 = 0LL;
  }
  if ( (*(_BYTE *)(a1 + 69) & 0x20) != 0 )
    v18 &= ~0x20uLL;
  if ( (unsigned int)MiQueueCoreWorkingSetEntries(a1 + 56, (unsigned int)a2, (__int64)v9) )
    v21 |= 4u;
  v24 = v21 | 0x10;
  if ( (*(_BYTE *)(a1 + 69) & 1) == 0 )
    v24 = v21;
  if ( (unsigned int)MiAllocateWsle(v25, a2, v9, 0, v18, v24, v22) )
    return 272LL;
  MiLockAndDecrementShareCount((ULONG_PTR)v9, 2LL);
  if ( (v24 & 4) != 0 )
    --*(_WORD *)(a1 + 66);
  return 3221225495LL;
}

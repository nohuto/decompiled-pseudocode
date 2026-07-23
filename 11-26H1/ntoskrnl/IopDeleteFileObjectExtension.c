/*
 * XREFs of IopDeleteFileObjectExtension @ 0x1403DE990
 * Callers:
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     IopDeleteFile @ 0x140A282F0 (IopDeleteFile.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x1402631B0 (KeAreAllApcsDisabled.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269140 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PsReleaseSiloHardReference @ 0x1403DEE00 (PsReleaseSiloHardReference.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     IopCleanupNotifications @ 0x1404DE388 (IopCleanupNotifications.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ObpDeregisterObject @ 0x14077CC7C (ObpDeregisterObject.c)
 *     ObpRemoveObjectRoutine @ 0x1408FF6D0 (ObpRemoveObjectRoutine.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140933710 (FsRtlFreeExtraCreateParameter.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A67000 (ObpHandleRevocationBlockRemoveObject.c)
 *     PspAdjustKeepAliveCountProcess @ 0x140B07994 (PspAdjustKeepAliveCountProcess.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopDeleteFileObjectExtension(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 i; // rbx
  _SLIST_ENTRY *v5; // rdi
  _SLIST_ENTRY *v6; // r14
  _QWORD *v7; // r14
  ULONG_PTR v8; // r14
  signed __int64 v9; // rax
  bool v10; // cc
  signed __int64 BugCheckParameter4; // rax
  int Next_high; // eax
  void *v13; // rcx
  ULONG_PTR v14; // r14
  signed __int64 v15; // rax
  signed __int64 v16; // rax
  _SLIST_ENTRY *v17; // rcx
  void *v18; // rcx
  BOOLEAN v19; // al
  __int64 v20; // rcx
  __int64 v21; // rax
  _BYTE *v22; // r15
  _QWORD *v23; // r13
  KIRQL v24; // r12
  _SLIST_ENTRY *Next; // r14
  _QWORD *v26; // rcx
  _SLIST_ENTRY *v27; // rcx
  _QWORD *v28; // rdi
  unsigned __int8 v29; // [rsp+60h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 208);
  if ( !v2 || (__int64 *)v2 == qword_1400137E0 )
    return;
  for ( i = 0LL; i < 10; ++i )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = *(_SLIST_ENTRY **)(v2 + 8 * i + 8);
        if ( !v5 )
          goto LABEL_6;
        if ( i == 4 )
        {
          Next = v5->Next;
          while ( Next != v5 )
          {
            v27 = Next;
            Next = Next->Next;
            ExFreePoolWithTag(v27, 0);
          }
          goto LABEL_20;
        }
        if ( !i )
        {
          v18 = (void *)*((_QWORD *)&v5->Next + 1);
          if ( !v18 )
            goto LABEL_20;
          ObDereferenceObjectDeferDeleteWithTag(v18, 0x746C6644u);
          ExFreePoolWithTag(*(PVOID *)(v2 + 8), 0);
          goto LABEL_6;
        }
        if ( i != 5 )
          break;
        FsRtlFreeExtraCreateParameter(v5);
        i = 6LL;
      }
      if ( i == 1 )
        break;
      if ( i != 6 )
      {
        if ( i == 2 )
        {
          v26 = (_QWORD *)*((_QWORD *)&v5[2].Next + 1);
          if ( v26 )
          {
            do
            {
              v28 = (_QWORD *)v26[5];
              ExFreePoolWithTag(v26, 0);
              v26 = v28;
            }
            while ( v28 );
          }
          goto LABEL_20;
        }
        if ( i != 7 )
        {
          if ( i == 8 )
            ObfDereferenceObjectWithTag(v5->Next, 0x6F466F49u);
LABEL_20:
          ExFreePoolWithTag(*(PVOID *)(v2 + 8 * i + 8), 0);
          goto LABEL_6;
        }
        Next_high = HIDWORD(v5->Next);
        if ( (Next_high & 1) != 0 )
        {
          v13 = (void *)*((_QWORD *)&v5->Next + 1);
          HIDWORD(v5->Next) = Next_high & 0xFFFFFFFE;
          PsReleaseSiloHardReference(v13);
        }
        v14 = *((_QWORD *)&v5->Next + 1);
        if ( ObpTraceFlags )
          ObpPushStackInfo(v14 - 48, -1, 0x70536F49u);
        v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 48), 0xFFFFFFFFFFFFFFFFuLL);
        v10 = v15 <= 1;
        v16 = v15 - 1;
        if ( !v10 )
          goto LABEL_20;
        if ( *(_QWORD *)(v14 - 40) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v14 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v14 - 48) >> 8)],
            v14,
            3uLL,
            *(_QWORD *)(v14 - 40));
        if ( v16 < 0 )
          KeBugCheckEx(0x18u, 0LL, v14, 4uLL, v16);
        v20 = v14 - 48;
LABEL_66:
        ObpDeferObjectDeletion(v20);
        ExFreePoolWithTag(*(PVOID *)(v2 + 8 * i + 8), 0);
        goto LABEL_6;
      }
      ++unk_140E1185C;
      if ( LOWORD(IopOplockFoExtLookasideList.Alignment) < unk_140E11850 )
      {
        RtlpInterlockedPushEntrySList(&IopOplockFoExtLookasideList, v5);
      }
      else
      {
        ++unk_140E11860;
        guard_dispatch_icall_no_overrides(v5, a2);
      }
      i = 7LL;
    }
    v6 = v5[1].Next;
    while ( v6 )
    {
      v17 = v6;
      v6 = v6->Next;
      ExFreePoolWithTag(v17, 0);
    }
    v7 = (_QWORD *)*((_QWORD *)&v5[1].Next + 1);
    while ( v7 )
    {
      v22 = (_BYTE *)v7[3];
      v23 = v7;
      v7 = (_QWORD *)*v7;
      v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&IopPerfIoTrackingLock.SuspendEvent.Header.WaitListHead.Blink);
      v29 = v22[18];
      if ( v22[16] == 1 )
        v22[17] = 1;
      else
        ExFreePoolWithTag(v22, 0);
      KeReleaseSpinLock((PKSPIN_LOCK)&IopPerfIoTrackingLock.SuspendEvent.Header.WaitListHead.Blink, v24);
      if ( *((_DWORD *)v23 + 4) )
      {
        PspAdjustKeepAliveCountProcess(v23[1], 0xFFFFFFFFLL, a1, v29);
        ObfDereferenceObjectWithTag((PVOID)v23[1], 0x746C6644u);
      }
      ExFreePoolWithTag(v23, 0);
    }
    v8 = *((_QWORD *)&v5->Next + 1);
    if ( !v8 )
      goto LABEL_20;
    if ( ObpTraceFlags )
      ObpPushStackInfo(v8 - 48, -1, 0x746C6644u);
    v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 48), 0xFFFFFFFFFFFFFFFFuLL);
    v10 = v9 <= 1;
    BugCheckParameter4 = v9 - 1;
    if ( !v10 )
      goto LABEL_20;
    if ( *(_QWORD *)(v8 - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v8 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v8 - 48) >> 8)],
        v8,
        1uLL,
        *(_QWORD *)(v8 - 40));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, v8, 2uLL, BugCheckParameter4);
    v19 = KeAreAllApcsDisabled();
    v20 = v8 - 48;
    if ( v19 )
      goto LABEL_66;
    v21 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v20);
    if ( v21 )
      ObpHandleRevocationBlockRemoveObject(v21);
    if ( ObpTraceFlags )
      ObpDeregisterObject(v8 - 48);
    ObpRemoveObjectRoutine(v8 - 48, 0LL);
    ExFreePoolWithTag(*(PVOID *)(v2 + 16), 0);
LABEL_6:
    ;
  }
  if ( (*(_DWORD *)v2 & 2) != 0 )
    IopCleanupNotifications(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), a1);
  ExFreePoolWithTag((PVOID)v2, 0);
}

/*
 * XREFs of WmipGenerateRegistrationNotification @ 0x140A0CD54
 * Callers:
 *     WmipRemoveDS @ 0x140A0B50C (WmipRemoveDS.c)
 *     WmipAddDataSource @ 0x140A0BC24 (WmipAddDataSource.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 *     WmipSendGuidUpdateNotifications @ 0x140A0C3E8 (WmipSendGuidUpdateNotifications.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140A0C854 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipEnableCollectionForNewGuid @ 0x140A0D350 (WmipEnableCollectionForNewGuid.c)
 *     WmipUnreferenceEntry @ 0x140A0EF48 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x140A0FB50 (WmipReferenceEntry.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipGenerateRegistrationNotification(ULONG_PTR a1, int a2)
{
  ULONG_PTR v3; // r15
  _QWORD *v4; // r13
  unsigned int v5; // r14d
  _QWORD *v6; // rdi
  void *v7; // rbx
  unsigned int v8; // r15d
  _QWORD *v9; // rsi
  _OWORD *v10; // rbp
  __int64 v11; // rax
  void *Pool2; // rax
  void *v15; // [rsp+78h] [rbp+20h]

  v3 = a1;
  WmipReferenceEntry(a1);
  v4 = (_QWORD *)(v3 + 40);
  v5 = 0;
  v6 = *(_QWORD **)(v3 + 40);
  v7 = 0LL;
  if ( v6 != (_QWORD *)(v3 + 40) )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = v6 - 5;
      if ( (*(_DWORD *)(v6 - 3) & 8) == 0 )
        break;
LABEL_8:
      v6 = (_QWORD *)*v6;
      if ( v6 == v4 )
      {
        v3 = a1;
        goto LABEL_10;
      }
    }
    v10 = (_OWORD *)(v9[7] + 72LL);
    if ( v5 == v8 )
    {
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      v15 = Pool2;
      if ( !Pool2 )
      {
LABEL_6:
        if ( a2 == 1 )
        {
          WmipEnableCollectionForNewGuid(v10, v6 - 5);
        }
        else if ( a2 == 2 )
        {
          WmipDisableCollectionForRemovedGuid(v10, (__int64)(v6 - 5));
        }
        goto LABEL_8;
      }
      memmove(Pool2, v7, 16LL * v8);
      v8 += 64;
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      v7 = v15;
    }
    v11 = 2LL * v5++;
    *((_QWORD *)v7 + v11) = v10;
    *((_QWORD *)v7 + v11 + 1) = v9;
    goto LABEL_6;
  }
LABEL_10:
  WmipSendGuidUpdateNotifications(a2, v5, (_OWORD **)v7);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return WmipUnreferenceEntry(&WmipDSChunkInfo, v3);
}

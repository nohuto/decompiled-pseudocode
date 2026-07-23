/*
 * XREFs of WmipProcessEvent @ 0x140A0CBD4
 * Callers:
 *     WmipGenerateBinaryMofNotification @ 0x14082A070 (WmipGenerateBinaryMofNotification.c)
 *     WmipSendGuidUpdateNotifications @ 0x140A0B3B8 (WmipSendGuidUpdateNotifications.c)
 *     WmipEventNotification @ 0x140A0CB60 (WmipEventNotification.c)
 *     WmipGenerateMofResourceNotification @ 0x140B551C8 (WmipGenerateMofResourceNotification.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     WmipWriteWnodeToObject @ 0x1403FB190 (WmipWriteWnodeToObject.c)
 *     ObReferenceObjectSafe @ 0x140441D40 (ObReferenceObjectSafe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     WmipIncludeStaticNames @ 0x140A0C8EC (WmipIncludeStaticNames.c)
 *     WmipFindGEByGuid @ 0x140A0D800 (WmipFindGEByGuid.c)
 *     WmipUnreferenceEntry @ 0x140A0E124 (WmipUnreferenceEntry.c)
 *     WmipDereferenceEvent @ 0x140B5FA28 (WmipDereferenceEvent.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipProcessEvent(unsigned int *Src, __int64 a2, char a3)
{
  char v3; // bp
  unsigned int *v4; // rsi
  unsigned int *v5; // rdi
  unsigned int *v6; // rbx
  __int64 GEByGuid; // r13
  unsigned int v8; // r15d
  _QWORD *v9; // r12
  __int64 v10; // rbp
  __int64 v12; // rax
  char v14; // [rsp+88h] [rbp+10h]
  unsigned int *v16; // [rsp+98h] [rbp+20h]

  v14 = a2;
  v3 = a3;
  v4 = Src;
  if ( (Src[11] & 0x2000) == 0 )
  {
    v5 = 0LL;
    v6 = Src;
    v16 = 0LL;
LABEL_3:
    if ( (v6[11] & 0x80u) != 0 )
      v6 = WmipIncludeStaticNames(v6, *v6);
    LOBYTE(a2) = 1;
    GEByGuid = WmipFindGEByGuid(v6 + 6, a2);
    if ( GEByGuid )
    {
      v8 = 0;
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      v9 = *(_QWORD **)(GEByGuid + 40);
      if ( v9 != (_QWORD *)(GEByGuid + 40) )
      {
        do
        {
          v10 = (__int64)(v9 - 5);
          v9 = (_QWORD *)*v9;
          if ( ObReferenceObjectSafe(v10) )
          {
            if ( (*(_DWORD *)(v10 + 164) & 2) != 0 )
            {
              if ( *(_QWORD *)(v10 + 72) )
                guard_dispatch_icall_no_overrides((__int64)v6, *(_QWORD *)(v10 + 80));
            }
            else if ( (int)WmipWriteWnodeToObject(v10, v6, v14) < 0 )
            {
              v8 = -1073741823;
            }
            ObfDereferenceObject((PVOID)v10);
          }
        }
        while ( v9 != (_QWORD *)(GEByGuid + 40) );
        v5 = v16;
        v4 = Src;
        v3 = a3;
      }
      KeReleaseMutex(&WmipSMMutex, 0);
      WmipUnreferenceEntry(&WmipGEChunkInfo, GEByGuid);
    }
    else
    {
      v8 = -1073741163;
    }
    if ( v3 )
      ExFreePoolWithTag(v4, 0);
    if ( v6 != v4 && v6 != v5 )
      ExFreePoolWithTag(v6, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    return v8;
  }
  v12 = WmipDereferenceEvent();
  v16 = (unsigned int *)v12;
  v5 = (unsigned int *)v12;
  if ( v12 )
  {
    v6 = (unsigned int *)v12;
    goto LABEL_3;
  }
  if ( v3 )
    ExFreePoolWithTag(v4, 0);
  return 3221225473LL;
}

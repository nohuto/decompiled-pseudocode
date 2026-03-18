/*
 * XREFs of DxgkDispMgrCreate @ 0x1403C5460
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 *     ?SetNtObjectPointer@DXGDISPLAYMANAGEROBJECT@@QEAAXPEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@Z @ 0x1403C573C (-SetNtObjectPointer@DXGDISPLAYMANAGEROBJECT@@QEAAXPEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@Z.c)
 *     ??0DXGDISPLAYMANAGEROBJECT@@QEAA@_N@Z @ 0x1403C57C8 (--0DXGDISPLAYMANAGEROBJECT@@QEAA@_N@Z.c)
 */

__int64 __fastcall DxgkDispMgrCreate(void *Src)
{
  DXGDISPLAYMANAGEROBJECT *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r9
  DXGDISPLAYMANAGEROBJECT *v5; // rsi
  int v6; // eax
  __int64 v7; // r14
  NTSTATUS inserted; // eax
  __int64 v9; // rsi
  ACCESS_MASK DesiredAccess[4]; // [rsp+50h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-18h] BYREF
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  *(_OWORD *)DesiredAccess = 0LL;
  Handle = 0LL;
  RtlCopyFromUser(DesiredAccess, Src, 0x18uLL);
  v2 = (DXGDISPLAYMANAGEROBJECT *)operator new(0xC0uLL, 0x4B677844u, 256LL);
  if ( v2 )
    v5 = DXGDISPLAYMANAGEROBJECT::DXGDISPLAYMANAGEROBJECT(v2, DesiredAccess[3] & 1);
  else
    v5 = 0LL;
  if ( v5 && *((_BYTE *)v5 + 64) )
  {
    Object = 0LL;
    LOBYTE(v4) = 1;
    LOBYTE(v3) = 1;
    v6 = ObCreateObject(v3, g_pDxgkDisplayManagerObjectType, *(_QWORD *)DesiredAccess, v4, 0LL, 16, 208, 0, &Object);
    v7 = v6;
    if ( v6 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 837;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to create NT object for display manager (0x%I64x)",
        v7,
        0LL,
        0LL,
        0LL,
        0LL);
      ReferenceCounted::Release(v5);
      return (unsigned int)v7;
    }
    else
    {
      *(_OWORD *)Object = 0LL;
      DXGDISPLAYMANAGEROBJECT::SetNtObjectPointer(v5, (struct DXGDISPLAYMANAGEROBJECT_CONTAINER *)Object);
      *(_QWORD *)Object = v5;
      inserted = ObInsertObject(Object, 0LL, DesiredAccess[2], 0, 0LL, &Handle);
      v9 = inserted;
      if ( inserted >= 0 )
      {
        RtlWriteULong64ToUser((_QWORD *)Src + 2, (__int64)Handle);
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 852;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to create NT handle for display manager object (0x%I64x)",
          v9,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      return (unsigned int)v9;
    }
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 818;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for DXGDISPLAYMANAGEROBJECT",
      818LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v5 )
      ReferenceCounted::Release(v5);
    return 3221225495LL;
  }
}

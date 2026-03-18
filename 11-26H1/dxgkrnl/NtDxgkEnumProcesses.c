/*
 * XREFs of NtDxgkEnumProcesses @ 0x1403C1BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003DB88 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtDxgkEnumProcesses(void *Src)
{
  DXGADAPTER *v2; // rdi
  __int64 v4; // rsi
  __int64 v5; // r14
  struct _LUID v6; // rcx
  _DWORD *v7; // rbx
  _QWORD *v8; // r15
  _QWORD *v9; // rsi
  __int64 v10; // rbx
  unsigned int v11; // r15d
  DXGADAPTER *v12; // [rsp+50h] [rbp-58h] BYREF
  struct _LUID v13[2]; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+70h] [rbp-38h]

  *(_OWORD *)&v13[0].LowPart = 0LL;
  v14 = 0LL;
  RtlCopyFromUser(v13, Src, 0x18uLL);
  v12 = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)&v12, v13);
  v2 = v12;
  if ( !v12 )
  {
    WdLogSingleEntry2(2LL, v13[0].HighPart, v13[0].LowPart);
    WdLogGlobalForLineNumber = 7073;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"NtDxgkEnumProcesses: Invalid Adapter (0x%I64x-0x%I64x) specified",
      v13[0].HighPart,
      v13[0].LowPart,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v4 = *((_QWORD *)v12 + 396);
  if ( !v4 )
  {
    WdLogSingleEntry2(3LL, v13[0].HighPart, v13[0].LowPart);
    WdLogGlobalForLineNumber = 7082;
LABEL_16:
    DXGADAPTER::ReleaseReference(v2);
    return 3221225485LL;
  }
  if ( v14 > 0x3FFFFFFF )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 7094;
    goto LABEL_16;
  }
  v5 = v4 + 72;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4 + 72, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 88));
  v6 = v13[1];
  if ( *(_QWORD *)&v13[1] && v14 >= *(unsigned int *)(v4 + 312) )
  {
    v7 = (_DWORD *)v13[1];
    v8 = (_QWORD *)(v4 + 296);
    v9 = *(_QWORD **)(v4 + 296);
    while ( v9 != v8 )
    {
      RtlWriteULongToUser(v7++, *(_QWORD *)(*(_QWORD *)(*(v9 - 3) + 64LL) + 80LL));
      v9 = (_QWORD *)*v9;
      v6 = v13[1];
    }
    v10 = ((__int64)v7 - *(_QWORD *)&v6) >> 2;
    v11 = 0;
  }
  else
  {
    v11 = -1073741789;
    v10 = *(unsigned int *)(v4 + 312);
  }
  RtlWriteULong64ToUser((_QWORD *)Src + 2, v10);
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 16));
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  if ( v2 )
    DXGADAPTER::ReleaseReference(v2);
  return v11;
}

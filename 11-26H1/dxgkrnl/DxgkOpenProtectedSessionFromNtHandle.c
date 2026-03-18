/*
 * XREFs of DxgkOpenProtectedSessionFromNtHandle @ 0x1401FB230
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x14018DFF4 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1401F9BAC (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOpenProtectedSessionFromNtHandle(char *Src)
{
  unsigned int v2; // esi
  __int64 v3; // rcx
  NTSTATUS v5; // eax
  __int64 v6; // r14
  __int64 v7; // rcx
  DXGPROTECTEDSESSION **v8; // rsi
  int v9; // eax
  unsigned __int64 v10; // rsi
  struct DXGPROCESS *v11; // r13
  char *v12; // r14
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rcx
  HANDLE Handle[2]; // [rsp+50h] [rbp-58h] BYREF
  int v18; // [rsp+60h] [rbp-48h] BYREF
  __int64 v19; // [rsp+68h] [rbp-40h]
  char v20; // [rsp+70h] [rbp-38h]
  PVOID Object; // [rsp+B8h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+C0h] [rbp+18h] BYREF
  struct DXGPROCESS *Current; // [rsp+C8h] [rbp+20h]

  v18 = -1;
  v19 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v20 = 1;
    v18 = 2152;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 2152);
  HandleInformation = 0LL;
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 730;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PsGetCurrentThreadPreviousMode() == UserMode",
      730LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v2 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 737;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( v20 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v3, (__int64)&EventProfilerExit);
    }
    return v2;
  }
  *(_OWORD *)Handle = 0LL;
  RtlCopyFromUser(Handle, Src, 0x10uLL);
  LODWORD(Handle[1]) = 0;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(
         Handle[0],
         0x20000u,
         g_pDxgkSharedProtectedSessionObjectType,
         1,
         &Object,
         &HandleInformation);
  v2 = v5;
  LODWORD(v6) = -1073741788;
  if ( v5 == -1073741788 )
  {
    WdLogSingleEntry2(3LL, Handle[0], -1073741788LL);
    WdLogGlobalForLineNumber = 774;
LABEL_15:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit);
    return (unsigned int)v6;
  }
  if ( v5 < 0 )
  {
    WdLogSingleEntry2(3LL, Handle[0], v5);
    WdLogGlobalForLineNumber = 781;
    goto LABEL_9;
  }
  v8 = (DXGPROTECTEDSESSION **)Object;
  if ( !*(_QWORD *)Object )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 792;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pSharedProtectedSessionObject->pProtectedSession",
      792LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = DXGPROTECTEDSESSION::Open(*v8, (unsigned int *)&Handle[1]);
  v6 = v9;
  if ( v9 < 0 )
  {
    if ( LODWORD(Handle[1]) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 800;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"NULL == KMOpenProtectedSessionFromNtHandle.hHandle",
        800LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    WdLogSingleEntry2(3LL, Handle[0], v6);
    WdLogGlobalForLineNumber = 803;
    if ( LODWORD(Handle[1]) )
    {
      DXGPROTECTEDSESSION::DestroyProtectedSession(*v8, (unsigned int)Handle[1]);
      LODWORD(Handle[1]) = 0;
    }
    ObfDereferenceObject(v8);
    goto LABEL_15;
  }
  if ( !LODWORD(Handle[1]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 807;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"KMOpenProtectedSessionFromNtHandle.hHandle",
      807LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  RtlCopyToUser(Src + 8, &Handle[1], 4uLL);
  ObfDereferenceObject(v8);
  v10 = LODWORD(Handle[1]);
  v11 = Current;
  v12 = (char *)Current + 248;
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
  v13 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v13 < *((_DWORD *)v11 + 74) )
  {
    v14 = *((_QWORD *)v11 + 35);
    if ( (((unsigned int)v10 >> 25) & 0x60) == (*(_BYTE *)(v14 + 16 * v13 + 8) & 0x60)
      && (*(_DWORD *)(v14 + 16 * v13 + 8) & 0x1F) != 0 )
    {
      v15 = 16 * ((v10 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v14 + v15 + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 224;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          224LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(v15 + *((_QWORD *)v11 + 35) + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)v12 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v12, 0LL);
  KeLeaveCriticalRegion();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
  return 0LL;
}

/*
 * XREFs of DxgkQueryProtectedSessionInfoFromNtHandle @ 0x1401FB7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 */

__int64 __fastcall DxgkQueryProtectedSessionInfoFromNtHandle(char *Src)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  NTSTATUS v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 *v9; // r14
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // eax
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+58h] [rbp-70h] BYREF
  int v15; // [rsp+60h] [rbp-68h] BYREF
  __int64 v16; // [rsp+68h] [rbp-60h]
  char v17; // [rsp+70h] [rbp-58h]
  HANDLE Handle[2]; // [rsp+78h] [rbp-50h] BYREF
  void *v19[2]; // [rsp+88h] [rbp-40h]
  __int64 v20; // [rsp+98h] [rbp-30h]
  unsigned int Srca; // [rsp+D8h] [rbp+10h] BYREF
  unsigned int v22; // [rsp+E0h] [rbp+18h] BYREF
  PVOID Object; // [rsp+E8h] [rbp+20h] BYREF

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 538;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PsGetCurrentThreadPreviousMode() == UserMode",
      538LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v15 = -1;
  v16 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 2151;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 2151);
  HandleInformation = 0LL;
  *(_OWORD *)Handle = 0LL;
  *(_OWORD *)v19 = 0LL;
  v20 = 0LL;
  RtlCopyFromUser(Handle, Src, 0x28uLL);
  if ( Handle[1] )
  {
    if ( LODWORD(v19[0]) )
      goto LABEL_12;
LABEL_11:
    WdLogSingleEntry3(3LL, Handle[1], LODWORD(v19[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 572;
    goto LABEL_17;
  }
  if ( LODWORD(v19[0]) )
    goto LABEL_11;
LABEL_12:
  if ( v19[1] )
  {
    if ( (_DWORD)v20 )
    {
LABEL_21:
      Object = 0LL;
      v5 = ObReferenceObjectByHandle(
             Handle[0],
             0x20000u,
             g_pDxgkSharedProtectedSessionObjectType,
             1,
             &Object,
             &HandleInformation);
      v6 = v5;
      if ( v5 == -1073741788 )
      {
        WdLogSingleEntry2(3LL, Handle[0], -1073741788LL);
        WdLogGlobalForLineNumber = 602;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
        if ( v17 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit);
        }
        return 3221225508LL;
      }
      else
      {
        if ( v5 >= 0 )
        {
          v9 = (__int64 *)Object;
          if ( !*(_QWORD *)Object )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 616;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pSharedProtectedSessionObject->pProtectedSession",
              616LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v10 = *v9;
          v11 = *(_DWORD *)(*v9 + 96);
          Srca = v11;
          if ( v11 && LODWORD(v19[0]) >= v11 )
            RtlCopyToUser(Handle[1], *(void **)(v10 + 88), v11);
          RtlCopyToUser(Src + 16, &Srca, 4uLL);
          if ( Handle[1] && LODWORD(v19[0]) < Srca )
            v6 = -1073741789;
          v12 = *v9;
          v13 = *(_DWORD *)(*v9 + 112);
          v22 = v13;
          if ( v13 && (unsigned int)v20 >= v13 )
            RtlCopyToUser(v19[1], *(void **)(v12 + 104), v13);
          RtlCopyToUser(Src + 32, &v22, 4uLL);
          if ( v19[1] && (unsigned int)v20 < v22 )
            v6 = -1073741789;
          ObfDereferenceObject(v9);
        }
        else
        {
          WdLogSingleEntry2(3LL, Handle[0], v5);
          WdLogGlobalForLineNumber = 609;
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
        if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit);
        return v6;
      }
    }
  }
  else if ( !(_DWORD)v20 )
  {
    goto LABEL_21;
  }
  WdLogSingleEntry3(3LL, v19[1], (unsigned int)v20, -1073741811LL);
  WdLogGlobalForLineNumber = 584;
LABEL_17:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v3, (__int64)&EventProfilerExit);
  return 3221225485LL;
}

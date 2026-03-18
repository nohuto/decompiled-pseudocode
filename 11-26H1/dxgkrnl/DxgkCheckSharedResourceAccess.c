/*
 * XREFs of DxgkCheckSharedResourceAccess @ 0x1401BB270
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x14004611C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1400464C4 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ??0DXGPROCESSACCESSLISTMUTEX@@QEAA@PEAVDXGSHAREDRESOURCEACCESS@@@Z @ 0x140057080 (--0DXGPROCESSACCESSLISTMUTEX@@QEAA@PEAVDXGSHAREDRESOURCEACCESS@@@Z.c)
 *     RtlReadULong64FromUser @ 0x140196750 (RtlReadULong64FromUser.c)
 */

__int64 __fastcall DxgkCheckSharedResourceAccess(volatile void *a1)
{
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v4; // rcx
  __int64 v6; // rbx
  __int64 *i; // rsi
  HANDLE CurrentProcessId; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  _BYTE v11[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v12[16]; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+48h] [rbp-20h]
  char v15; // [rsp+50h] [rbp-18h]
  __int64 ULong64FromUser; // [rsp+78h] [rbp+10h]

  v13 = -1;
  v14 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v15 = 1;
    v13 = 2059;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v13, 2059);
  ULong64FromUser = RtlReadULong64FromUser(a1);
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v11);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  Global = DXGGLOBAL::GetGlobal();
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, ULong64FromUser, 2);
  if ( ObjectA )
  {
    v6 = *(_QWORD *)(ObjectA + 152);
    if ( v6 )
    {
      DXGPROCESSACCESSLISTMUTEX::DXGPROCESSACCESSLISTMUTEX(
        (DXGPROCESSACCESSLISTMUTEX *)v12,
        *(struct DXGSHAREDRESOURCEACCESS **)(ObjectA + 152));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
      for ( i = *(__int64 **)(v6 + 56); i != (__int64 *)(v6 + 56); i = (__int64 *)*i )
      {
        if ( *((_BYTE *)i + 16) )
          CurrentProcessId = PsGetCurrentProcessId();
        else
          CurrentProcessId = PsGetProcessId((PEPROCESS)i[3]);
        if ( CurrentProcessId == (HANDLE)HIDWORD(ULong64FromUser) )
        {
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
          goto LABEL_19;
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
      if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
      return 3221225506LL;
    }
    else
    {
LABEL_19:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
      if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry2(3LL, (unsigned int)ULong64FromUser, -1073741811LL);
    WdLogGlobalForLineNumber = 12166;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
    if ( v15 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
}

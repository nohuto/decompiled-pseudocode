/*
 * XREFs of DxgkGetSharedResourceAdapterLuid @ 0x1401BB580
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x14004611C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1400464C4 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetSharedResourceAdapterLuid(void *a1)
{
  int v2; // ebx
  const wchar_t *v3; // r9
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  __int64 v7; // rcx
  PVOID v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  _BYTE v18[16]; // [rsp+50h] [rbp-58h] BYREF
  int v19; // [rsp+60h] [rbp-48h] BYREF
  __int64 v20; // [rsp+68h] [rbp-40h]
  char v21; // [rsp+70h] [rbp-38h]
  HANDLE Handle[2]; // [rsp+78h] [rbp-30h] BYREF
  __int64 v23; // [rsp+88h] [rbp-20h]
  PVOID Object; // [rsp+B8h] [rbp+10h] BYREF

  v19 = -1;
  v20 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v21 = 1;
    v19 = 2088;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 2088);
  if ( !DXGPROCESS::GetCurrent() )
  {
    v2 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 12684;
    v3 = L"Invalid process context, returning 0x%I64x";
LABEL_42:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v3, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_15;
  }
  *(_OWORD *)Handle = 0LL;
  v23 = 0LL;
  RtlCopyFromUser(Handle, a1, 0x18uLL);
  v23 = 0LL;
  if ( Handle[1] )
  {
    Object = 0LL;
    v4 = ObReferenceObjectByHandle(Handle[1], 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
    v2 = v4;
    if ( v4 == -1073741788 )
    {
      WdLogSingleEntry2(3LL, Handle[1], -1073741788LL);
      WdLogGlobalForLineNumber = 12723;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
      if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit);
      return 3221225508LL;
    }
    if ( v4 < 0 )
    {
      WdLogSingleEntry2(3LL, Handle[1], v4);
      WdLogGlobalForLineNumber = 12730;
LABEL_15:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
      if ( v21 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit);
      }
      return (unsigned int)v2;
    }
    v8 = Object;
    v9 = *((_QWORD *)Object + 2);
    if ( !v9 )
    {
      v2 = -1073741811;
      WdLogSingleEntry2(3LL, Object, -1073741811LL);
      WdLogGlobalForLineNumber = 12740;
    }
    v10 = *(_QWORD *)(v9 + 96);
    if ( v10 )
      goto LABEL_25;
    v11 = *(_QWORD *)(v9 + 80);
    if ( v11 )
      v10 = *(_QWORD *)(v11 + 16);
    if ( v10 )
LABEL_25:
      v23 = *(_QWORD *)(v10 + 412);
    ObfDereferenceObject(v8);
    if ( v2 < 0 )
      goto LABEL_15;
  }
  else
  {
    if ( !LODWORD(Handle[0]) )
    {
      v2 = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 12797;
      v3 = L"Caller passed NULL for both the NT object and the global shared handle. Returning 0x%I64x";
      goto LABEL_42;
    }
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v18);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
    Global = DXGGLOBAL::GetGlobal();
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, (unsigned int)Handle[0], 2);
    v14 = ObjectA;
    if ( !ObjectA )
    {
      v2 = -1073741811;
      WdLogSingleEntry2(3LL, LODWORD(Handle[0]), -1073741811LL);
      WdLogGlobalForLineNumber = 12780;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v18);
      goto LABEL_15;
    }
    v15 = *(_QWORD *)(ObjectA + 96);
    if ( v15 )
      goto LABEL_35;
    v16 = *(_QWORD *)(v14 + 80);
    if ( v16 )
      v15 = *(_QWORD *)(v16 + 16);
    if ( v15 )
LABEL_35:
      v23 = *(_QWORD *)(v15 + 412);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v18);
  }
  RtlCopyToUser(a1, Handle, 0x18uLL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
  return 0LL;
}

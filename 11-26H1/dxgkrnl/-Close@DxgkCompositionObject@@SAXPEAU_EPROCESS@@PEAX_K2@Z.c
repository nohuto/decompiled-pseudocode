/*
 * XREFs of ?Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x14000E690
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x14033698C (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x140411CCC (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 */

void __fastcall DxgkCompositionObject::Close(struct _EPROCESS *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  __int64 CurrentProcess; // rax
  unsigned int v10; // ebx
  _QWORD *CurrentThreadWin32Thread; // rax
  _QWORD *v12; // rbx
  DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *SessionMgr; // rax
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  __int64 v18; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  _QWORD v27[31]; // [rsp+68h] [rbp-A0h] BYREF
  char v28; // [rsp+160h] [rbp+58h]
  char v29; // [rsp+168h] [rbp+60h]
  PRKPROCESS PROCESS; // [rsp+170h] [rbp+68h] BYREF
  unsigned int v31; // [rsp+178h] [rbp+70h]
  struct _KAPC_STATE ApcState; // [rsp+180h] [rbp+78h] BYREF

  v4 = a2[2];
  PROCESS = 0LL;
  v29 = 0;
  v31 = v4;
  CurrentProcess = PsGetCurrentProcess();
  v10 = v31;
  if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != v31 )
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionMgr = DXGGLOBAL::GetSessionMgr(Global);
    if ( (int)DXGSESSIONMGR::ReferenceSessionCSRSSProcess(SessionMgr, v10, &PROCESS) < 0 )
      goto LABEL_11;
    KeStackAttachProcess(PROCESS, &ApcState);
    v29 = 1;
  }
  memset(v27, 0, sizeof(v27));
  v28 = 0;
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread();
  v12 = CurrentThreadWin32Thread;
  if ( CurrentThreadWin32Thread )
  {
    if ( *CurrentThreadWin32Thread )
    {
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v18 = PsGetCurrentProcess(),
            ProcessSessionId = PsGetProcessSessionIdEx(v18),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        if ( *(_DWORD *)(*v12 + 368LL) )
        {
          v27[0] = *v12;
          if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2650;
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
                McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                  v25,
                  v24,
                  v26,
                  0LL,
                  2,
                  -1,
                  (__int64)L"m_pGlobal != NULL",
                  2650LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
            }
          }
          if ( (*(int (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304968LL) + 8LL))(*v12) <= 1 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 101;
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
                McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                  v16,
                  v15,
                  v17,
                  0LL,
                  2,
                  -1,
                  (__int64)L"newRefCount > 1",
                  101LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
            }
          }
        }
      }
    }
  }
  else
  {
    ExInitializeFastOwnerEntry(&v27[4]);
    ExInitializeFastOwnerEntry(&v27[13]);
    ExInitializeFastOwnerEntry(&v27[22]);
    LODWORD(v27[3]) |= 1u;
    PsSetThreadWin32Thread(KeGetCurrentThread(), v27, 0LL);
    v28 = 1;
  }
  (*(void (__fastcall **)(_QWORD, struct _EPROCESS *, _DWORD *, __int64, __int64))(**((_QWORD **)a2 + 2) + 24LL))(
    *((_QWORD *)a2 + 2),
    a1,
    a2,
    a3,
    a4);
  if ( v28 )
  {
    PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, v27);
  }
  else if ( v27[0] )
  {
    if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2650;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v22,
            v21,
            v23,
            0LL,
            2,
            -1,
            (__int64)L"m_pGlobal != NULL",
            2650LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304968LL) + 16LL))(v27[0]);
  }
LABEL_11:
  if ( v29 )
    KeUnstackDetachProcess(&ApcState);
  if ( PROCESS )
    ObfDereferenceObject(PROCESS);
}

/*
 * XREFs of ?Attach@DxgkAttachToObjectSession@@QEAAJXZ @ 0x14003091C
 * Callers:
 *     ?Delete@DxgkCompositionObject@@SAXPEAX@Z @ 0x1400304F0 (-Delete@DxgkCompositionObject@@SAXPEAX@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x14033698C (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x140411CCC (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 */

__int64 __fastcall DxgkAttachToObjectSession::Attach(DxgkAttachToObjectSession *this)
{
  unsigned int v1; // ebp
  int v3; // edi
  __int64 CurrentProcess; // rax
  DXGSESSIONMGR *SessionMgr; // rax
  int v7; // edx
  int v8; // r8d

  v1 = *((_DWORD *)this + 4);
  v3 = 0;
  CurrentProcess = PsGetCurrentProcess();
  if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != v1 )
  {
    if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2650;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            2650,
            v7,
            v8,
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
    SessionMgr = DXGGLOBAL::GetSessionMgr(*(DXGGLOBAL **)&DXGGLOBAL::m_pGlobal);
    v3 = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(SessionMgr, v1, (struct _KPROCESS **)this + 1);
    if ( v3 >= 0 )
    {
      KeStackAttachProcess(*((PRKPROCESS *)this + 1), (PRKAPC_STATE)((char *)this + 24));
      *(_BYTE *)this = 1;
    }
  }
  return (unsigned int)v3;
}

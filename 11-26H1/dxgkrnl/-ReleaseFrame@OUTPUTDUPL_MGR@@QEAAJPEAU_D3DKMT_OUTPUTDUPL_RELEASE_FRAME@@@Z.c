/*
 * XREFs of ?ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1403C8E48
 * Callers:
 *     _lambda_693db078d59c16956e85dd4c51bec7d2_::_lambda_invoker_cdecl_ @ 0x1403C8E30 (_lambda_693db078d59c16956e85dd4c51bec7d2_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1402B0E60 (-ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ReleaseFrame(OUTPUTDUPL_MGR *this, struct _D3DKMT_OUTPUTDUPL_RELEASE_FRAME *a2)
{
  struct DXGFASTMUTEX *v4; // rbx
  __int64 v5; // rcx
  __int64 CurrentProcess; // r14
  OUTPUTDUPL_CONTEXT *v7; // rcx
  OUTPUTDUPL_CONTEXT **v8; // rbx
  unsigned int i; // edi
  __int64 v10; // rax
  bool v11; // zf
  unsigned int v12; // ebx
  _BYTE v14[16]; // [rsp+50h] [rbp-18h] BYREF

  v4 = (struct DXGFASTMUTEX *)(*((_QWORD *)this + 2) + 72LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, v4, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  CurrentProcess = PsGetCurrentProcess(v5);
  if ( !DXGFASTMUTEX::IsOwner(v4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1735;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pContextList->Mutex.IsOwner()", 1735LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = (OUTPUTDUPL_CONTEXT **)*((_QWORD *)v4 + 6);
  for ( i = 0; i < *((_DWORD *)this + 2); ++i )
  {
    if ( *v8 )
    {
      v10 = PsGetCurrentProcess(v7);
      v7 = *v8;
      v11 = *((_QWORD *)*v8 + 3) == v10;
    }
    else
    {
      v11 = CurrentProcess == 0;
    }
    if ( v11 )
    {
      if ( v8 )
      {
        v12 = OUTPUTDUPL_CONTEXT::ReleaseFrame(*v8, a2);
        goto LABEL_10;
      }
      break;
    }
    ++v8;
  }
  v12 = -1073741275;
LABEL_10:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
  return v12;
}

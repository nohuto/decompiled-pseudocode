/*
 * XREFs of ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400305C0
 * Callers:
 *     ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x14000B1C0 (-DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z.c)
 *     ?Delete@DxgkCompositionObject@@SAXPEAX@Z @ 0x1400304F0 (-Delete@DxgkCompositionObject@@SAXPEAX@Z.c)
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z @ 0x1403AF3A0 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged(CTempW32ThreadNonPaged *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d

  if ( *((_BYTE *)this + 248) )
  {
    PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, this);
  }
  else if ( *(_QWORD *)this )
  {
    if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2650;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v3,
            v2,
            v4,
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
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304968LL) + 16LL))(*(_QWORD *)this);
  }
}

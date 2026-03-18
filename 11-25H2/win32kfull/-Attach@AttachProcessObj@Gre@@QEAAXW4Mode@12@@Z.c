/*
 * XREFs of ?Attach@AttachProcessObj@Gre@@QEAAXW4Mode@12@@Z @ 0x14010EB48
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1400B2070 (EngMapFontFileFDInternal.c)
 *     ?SecureConnectPort@PROXYPORT@@SAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@0PEAXPEAK@Z @ 0x1403380D4 (-SecureConnectPort@PROXYPORT@@SAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@P.c)
 * Callees:
 *     ?Attach@AttachProcessObj@Gre@@QEAAXPEAU_EPROCESS@@@Z @ 0x14010EBB8 (-Attach@AttachProcessObj@Gre@@QEAAXPEAU_EPROCESS@@@Z.c)
 */

void __fastcall Gre::AttachProcessObj::Attach(__int64 a1, int a2)
{
  struct _KPROCESS *v2; // r8
  __int64 v4; // rdx
  __int64 CSRSSProcess; // rax

  v2 = 0LL;
  if ( !*(_BYTE *)(a1 + 48) )
  {
    if ( a2 )
    {
      v4 = (unsigned int)(a2 - 1);
      if ( (_DWORD)v4 )
      {
        if ( (_DWORD)v4 == 1 )
          v2 = *(struct _KPROCESS **)(*(_QWORD *)(W32GetSessionState(a1, v4, 0LL) + 96) + 24192LL);
        goto LABEL_6;
      }
      CSRSSProcess = UserGetCSRSSProcess();
    }
    else
    {
      CSRSSProcess = PsGetCurrentThreadProcess();
    }
    v2 = (struct _KPROCESS *)CSRSSProcess;
LABEL_6:
    Gre::AttachProcessObj::Attach((PRKAPC_STATE)a1, v2);
  }
}

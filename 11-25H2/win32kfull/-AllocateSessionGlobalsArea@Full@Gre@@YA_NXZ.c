/*
 * XREFs of ?AllocateSessionGlobalsArea@Full@Gre@@YA_NXZ @ 0x1401EA8F0
 * Callers:
 *     AllocateEditionSessionGlobalsArea @ 0x1402FB8D0 (AllocateEditionSessionGlobalsArea.c)
 * Callees:
 *     ?InitializeGlobals@Font@Gre@@YAXAEAUGLOBALS@12@@Z @ 0x1401EAA0C (-InitializeGlobals@Font@Gre@@YAXAEAUGLOBALS@12@@Z.c)
 *     ?UMPDInitializeSecurityLevel@@YA?AW4UMPDSecurityLevel@@XZ @ 0x1401EB128 (-UMPDInitializeSecurityLevel@@YA-AW4UMPDSecurityLevel@@XZ.c)
 *     ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x14026D794 (-Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z.c)
 */

char __fastcall Gre::Full::AllocateSessionGlobalsArea(Gre::Full *this, __int64 a2)
{
  __int64 SessionState; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // rbx
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rax
  struct Gre::Font::GLOBALS *v10; // rdx
  bool v11; // cl
  struct NSInstrumentation::CPointerHashTable *v12; // rax
  ULONG *v13; // rax

  SessionState = W32GetSessionState((_DWORD)this, a2);
  v3 = Win32AllocPoolZInit(24328LL, 860309319LL);
  *(_QWORD *)(SessionState + 96) = v3;
  if ( !v3 )
    return 0;
  v6 = *(_QWORD *)(W32GetSessionState(v5, v4) + 96);
  *(_QWORD *)(v6 + 4656) = -1LL;
  *(_DWORD *)(v6 + 92) = 1;
  *(_DWORD *)(v6 + 124) = 1;
  *(_DWORD *)(v6 + 136) = 1;
  *(_DWORD *)(v6 + 140) = 1;
  v9 = W32GetSessionState(v8, v7);
  Gre::Font::InitializeGlobals((Gre::Font *)(*(_QWORD *)(v9 + 96) + 4872LL), v10);
  *(_DWORD *)(v6 + 4712) = -1;
  *(_QWORD *)(v6 + 4720) = -1LL;
  *(_DWORD *)(v6 + 4740) = 1;
  *(_DWORD *)(v6 + 4752) = UMPDInitializeSecurityLevel();
  *(_DWORD *)(v6 + 4780) = 15;
  v12 = NSInstrumentation::CPointerHashTable::Create(v11);
  *(_QWORD *)(v6 + 4840) = v12;
  if ( !v12 )
    return 0;
  v13 = (ULONG *)Win32AllocPoolZInit(4096LL, 860309319LL);
  *(_QWORD *)(v6 + 4864) = v13;
  if ( !v13 )
    return 0;
  RtlInitializeBitMap((PRTL_BITMAP)(v6 + 4848), v13, 0x8000u);
  return 1;
}

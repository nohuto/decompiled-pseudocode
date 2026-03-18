/*
 * XREFs of ?AllocateSessionGlobalsArea@Full@Gre@@YA_NXZ @ 0x1402234C8
 * Callers:
 *     AllocateEditionSessionGlobalsArea @ 0x1402234B0 (AllocateEditionSessionGlobalsArea.c)
 * Callees:
 *     ?InitializeGlobals@Font@Gre@@YAXAEAUGLOBALS@12@@Z @ 0x1402235FC (-InitializeGlobals@Font@Gre@@YAXAEAUGLOBALS@12@@Z.c)
 *     ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x140294FA4 (-Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z.c)
 */

char __fastcall Gre::Full::AllocateSessionGlobalsArea(Gre::Full *this)
{
  __int64 v1; // rdx
  int v2; // ecx
  __int64 SessionState; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // rbx
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // rax
  struct Gre::Font::GLOBALS *v11; // rdx
  bool v12; // cl
  struct NSInstrumentation::CPointerHashTable *v13; // rax
  ULONG *v14; // rax

  if ( (unsigned int)UserIsCurrentSessionHostServiceSession(this) )
    *(_QWORD *)&WPP_MAIN_CB.SectorSize = 0LL;
  SessionState = W32GetSessionState(v2, v1);
  v4 = Win32AllocPoolZInit(24312LL, 860309319LL);
  *(_QWORD *)(SessionState + 96) = v4;
  if ( !v4 )
    return 0;
  v7 = *(_QWORD *)(W32GetSessionState(v6, v5) + 96);
  *(_DWORD *)(v7 + 92) = 1;
  *(_DWORD *)(v7 + 124) = 1;
  *(_DWORD *)(v7 + 136) = 1;
  *(_DWORD *)(v7 + 140) = 1;
  *(_QWORD *)(v7 + 4656) = -1LL;
  v10 = W32GetSessionState(v9, v8);
  Gre::Font::InitializeGlobals((Gre::Font *)(*(_QWORD *)(v10 + 96) + 4864LL), v11);
  *(_DWORD *)(v7 + 4712) = -1;
  *(_QWORD *)(v7 + 4720) = -1LL;
  *(_DWORD *)(v7 + 4740) = 1;
  *(_DWORD *)(v7 + 4772) = 15;
  v13 = NSInstrumentation::CPointerHashTable::Create(v12);
  *(_QWORD *)(v7 + 4832) = v13;
  if ( !v13 )
    return 0;
  v14 = (ULONG *)Win32AllocPoolZInit(4096LL, 860309319LL);
  *(_QWORD *)(v7 + 4856) = v14;
  if ( !v14 )
    return 0;
  RtlInitializeBitMap((PRTL_BITMAP)(v7 + 4840), v14, 0x8000u);
  return 1;
}

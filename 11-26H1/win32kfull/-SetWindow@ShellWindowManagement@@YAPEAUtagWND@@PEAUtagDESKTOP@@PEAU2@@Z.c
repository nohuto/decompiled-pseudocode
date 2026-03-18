/*
 * XREFs of ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x140261368
 * Callers:
 *     ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14004544C (-xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1402AE7B0 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1402DBAC4 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall ShellWindowManagement::SetWindow(
        ShellWindowManagement *this,
        struct tagDESKTOP *a2,
        struct tagWND *a3)
{
  __int64 v4; // rbx
  char *v5; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  v5 = (char *)this + 328;
  if ( a2 )
  {
    v7[0] = v5;
    v7[1] = a2;
    HMAssignmentLock(v7, 0LL);
  }
  else
  {
    v4 = HMAssignmentUnlock(v5);
    *((_DWORD *)this + 84) = 0;
  }
  return (struct tagWND *)v4;
}

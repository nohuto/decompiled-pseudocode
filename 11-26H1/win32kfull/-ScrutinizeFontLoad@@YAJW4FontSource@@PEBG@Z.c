/*
 * XREFs of ?ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z @ 0x1400CEA00
 * Callers:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x1400CF7D0 (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x14021C4D0 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x140327194 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1403273E8 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEA.c)
 * Callees:
 *     ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400CEB08 (-IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400CEB58 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?ScrutinizeProcessFontLoad@@YAJPEAXW4FontSource@@PEBG@Z @ 0x1400CEB94 (-ScrutinizeProcessFontLoad@@YAJPEAXW4FontSource@@PEBG@Z.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1400CF0F4 (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 */

NTSTATUS __fastcall ScrutinizeFontLoad(unsigned int a1, const wchar_t *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _KTHREAD *CurrentThread; // rcx
  PEPROCESS ThreadProcess; // rax
  NTSTATUS result; // eax
  struct UmfdTls *v10; // rax
  __int64 v11; // rcx
  void *Handle; // [rsp+60h] [rbp+18h] BYREF

  Handle = 0LL;
  if ( !UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread()
    || (result = _wcsicmp(L"\\SystemRoot\\System32\\winsrv.dll", a2)) != 0 )
  {
    if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock()
      && *(_BYTE *)(*(_QWORD *)(W32GetSessionState(v5, v4, v6) + 96) + 24274LL) )
    {
      v10 = UmfdTls::EnsureTls();
      if ( !v10 )
        return -1073741801;
      v11 = *((_QWORD *)v10 + 3);
      if ( !v11 )
        return -1073741801;
      CurrentThread = *(struct _KTHREAD **)(v11 + 16);
      if ( !CurrentThread )
        return -1073741801;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
    }
    ThreadProcess = PsGetThreadProcess(CurrentThread);
    result = ObOpenObjectByPointer(ThreadProcess, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 0, &Handle);
    if ( result >= 0 )
      return ScrutinizeProcessFontLoad(Handle, a1, a2);
  }
  return result;
}

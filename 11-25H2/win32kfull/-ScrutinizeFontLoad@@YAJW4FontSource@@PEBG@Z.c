/*
 * XREFs of ?ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z @ 0x14010DE2C
 * Callers:
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x14010DAC8 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x140228C20 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEA.c)
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x140305B64 (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x14030F174 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 * Callees:
 *     ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14010DF30 (-IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14010DF88 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?ScrutinizeProcessFontLoad@@YAJPEAXW4FontSource@@PEBG@Z @ 0x14010DFC4 (-ScrutinizeProcessFontLoad@@YAJPEAXW4FontSource@@PEBG@Z.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x140161CB8 (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
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
      && *(_BYTE *)(*(_QWORD *)(W32GetSessionState(v5, v4, v6) + 96) + 24290LL) )
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

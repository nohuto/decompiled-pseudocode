/*
 * XREFs of ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1400D07B0
 * Callers:
 *     ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400CEDC4 (-UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400D06A4 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1402828A0 (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x140349ED4 (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock(struct W32_PUSH_LOCK **this)
{
  struct W32_PUSH_LOCK *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    GreReleasePushLockShared(v2);
    *this = 0LL;
  }
}

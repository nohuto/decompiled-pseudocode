/*
 * XREFs of ??1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x14010EA20
 * Callers:
 *     ?bCreateFontFileView@@YAHPEBUFONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x14010E5AC (-bCreateFontFileView@@YAHPEBUFONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAUFONTFILEVIEW@@I@Z @ 0x14010E8B0 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAUFONTFILEVIEW@@I@Z.c)
 * Callees:
 *     ??1AttachProcessObj@Gre@@QEAA@XZ @ 0x14010EA74 (--1AttachProcessObj@Gre@@QEAA@XZ.c)
 */

void __fastcall UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::~AutoAttachFonDrvProcess(
        UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *this)
{
  ULONG v2; // ecx
  struct W32_PUSH_LOCK *v3; // rcx

  if ( *((_BYTE *)this + 64) )
  {
    v2 = *((_DWORD *)this + 17);
    if ( v2 )
      EngSetLastError(v2);
  }
  v3 = (struct W32_PUSH_LOCK *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    GreReleasePushLockShared(v3);
    *((_QWORD *)this + 7) = 0LL;
  }
  Gre::AttachProcessObj::~AttachProcessObj(this);
}

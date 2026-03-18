/*
 * XREFs of ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAUFONTFILEVIEW@@I@Z @ 0x140140298
 * Callers:
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCHECKSUM@@PEAPEAUFONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x14013F72C (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCH.c)
 * Callees:
 *     ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x140140358 (--0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ??1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x140140398 (--1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ComputeFileviewCheckSum @ 0x140140440 (ComputeFileviewCheckSum.c)
 *     ?Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_K@Z @ 0x1401404A4 (-Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall ComputeFileviewCheckSumInFontDriverAddressSpace(struct FONTFILEVIEW **a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-68h] BYREF
  char v7; // [rsp+50h] [rbp-38h]
  _BYTE v8[12]; // [rsp+58h] [rbp-30h] BYREF
  int v9; // [rsp+64h] [rbp-24h]

  v2 = a2;
  v4 = 0;
  v7 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock((UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *)v8);
  v8[8] = 0;
  v9 = 0;
  if ( (_DWORD)v2 && UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::Attach(&ApcState, *((_QWORD *)*a1 + 9)) )
  {
    do
    {
      v4 += ComputeFileviewCheckSum(*((_QWORD *)*a1 + 2), *((unsigned int *)*a1 + 6));
      ++a1;
      --v2;
    }
    while ( v2 );
  }
  UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::~AutoAttachFonDrvProcess((UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)&ApcState);
  return v4;
}

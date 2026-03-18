/*
 * XREFs of DestroyKF @ 0x1400F6304
 * Callers:
 *     DestroyKL @ 0x1400F6658 (DestroyKL.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011CA28 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?DestroyKFIfSupported@@YAXPEAUtagKBDFILE@@@Z @ 0x1401A4FF0 (-DestroyKFIfSupported@@YAXPEAUtagKBDFILE@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     _HMPheFromObjectWorker @ 0x14003B3B0 (_HMPheFromObjectWorker.c)
 *     HMMarkObjectDestroy @ 0x14003E6E0 (HMMarkObjectDestroy.c)
 *     HMFreeObject @ 0x1400F67F0 (HMFreeObject.c)
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1400F6C9C (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x140108CFC (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 *     RemoveKeyboardLayoutFile @ 0x14015A79C (RemoveKeyboardLayoutFile.c)
 */

void __fastcall DestroyKF(void *a1, __int64 a2)
{
  struct _HANDLEENTRY *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  v3 = (struct _HANDLEENTRY *)HMPheFromObjectWorker((int *)a1, a2);
  IdentifyPrimaryDestroyTarget::Identify((IdentifyPrimaryDestroyTarget *)&v7, v3);
  if ( (unsigned int)HMMarkObjectDestroy((struct _HEAD *)a1, v4) )
  {
    RemoveKeyboardLayoutFile(a1);
    GreDeleteFastMutex(*((char **)a1 + 3));
    HMFreeObject(a1);
    IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v7);
  }
  else if ( v7 )
  {
    *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19768) = 0LL;
  }
}

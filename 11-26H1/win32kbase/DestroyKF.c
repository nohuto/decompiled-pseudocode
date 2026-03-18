/*
 * XREFs of DestroyKF @ 0x140118D3C
 * Callers:
 *     DestroyKL @ 0x140118548 (DestroyKL.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011BC8C (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?DestroyKFIfSupported@@YAXPEAUtagKBDFILE@@@Z @ 0x1401DDB90 (-DestroyKFIfSupported@@YAXPEAUtagKBDFILE@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     HMMarkObjectDestroy @ 0x140048740 (HMMarkObjectDestroy.c)
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x140049540 (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     _HMPheFromObjectWorker @ 0x140071E30 (_HMPheFromObjectWorker.c)
 *     HMFreeObject @ 0x1401187F0 (HMFreeObject.c)
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x14014890C (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 *     RemoveKeyboardLayoutFile @ 0x140199E24 (RemoveKeyboardLayoutFile.c)
 */

void __fastcall DestroyKF(char **a1, int a2, int a3)
{
  struct _HANDLEENTRY *v4; // rax
  int v5; // r8d
  int v6; // edx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // edx
  int v15; // r8d
  char v16; // [rsp+38h] [rbp+10h] BYREF

  v16 = 0;
  v4 = (struct _HANDLEENTRY *)HMPheFromObjectWorker(a1, a2, a3);
  IdentifyPrimaryDestroyTarget::Identify((Identify *)&v16, v4, v5);
  if ( (unsigned int)HMMarkObjectDestroy((struct _HEAD *)a1, v6, v7) )
  {
    RemoveKeyboardLayoutFile(a1);
    GreDeleteFastMutex(a1[3], v11, v12, v13);
    HMFreeObject((struct _HEAD *)a1, v14, v15);
    IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v16);
  }
  else if ( v16 )
  {
    *(_QWORD *)(W32GetUserSessionState(v9, v8, v10) + 19800) = 0LL;
  }
}

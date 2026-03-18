/*
 * XREFs of HMDestroyObject @ 0x1401186A0
 * Callers:
 *     ?HMNullFnDestroy@@YAXPEAU_HEAD@@@Z @ 0x140118530 (-HMNullFnDestroy@@YAXPEAU_HEAD@@@Z.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401D6B70 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     DestroyBaseWindow @ 0x1401EA340 (DestroyBaseWindow.c)
 * Callees:
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x140049540 (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     _HMPheFromObjectWorker @ 0x140071E30 (_HMPheFromObjectWorker.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z @ 0x140118714 (-HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z.c)
 *     HMFreeObject @ 0x1401187F0 (HMFreeObject.c)
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x14014890C (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 */

__int64 __fastcall HMDestroyObject(struct _HEAD *a1, int a2, int a3)
{
  struct _HANDLEENTRY *v4; // rax
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  char v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0;
  v4 = (struct _HANDLEENTRY *)HMPheFromObjectWorker(a1, a2, a3);
  IdentifyPrimaryDestroyTarget::Identify((Identify *)&v10, v4, v5);
  if ( (unsigned int)HMMarkObjectDestroyWorker(a1) )
  {
    HMFreeObject(a1);
    if ( v10 )
      *(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 19800) = 0LL;
    return 1LL;
  }
  else
  {
    IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v10);
    return 0LL;
  }
}

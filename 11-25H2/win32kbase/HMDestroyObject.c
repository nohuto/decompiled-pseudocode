/*
 * XREFs of HMDestroyObject @ 0x1400F6780
 * Callers:
 *     ?HMNullFnDestroy@@YAXPEAU_HEAD@@@Z @ 0x1400F6640 (-HMNullFnDestroy@@YAXPEAU_HEAD@@@Z.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401B3110 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     DestroyBaseWindow @ 0x1401C17B0 (DestroyBaseWindow.c)
 * Callees:
 *     _HMPheFromObjectWorker @ 0x14003B3B0 (_HMPheFromObjectWorker.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z @ 0x14003E754 (-HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z.c)
 *     HMFreeObject @ 0x1400F67F0 (HMFreeObject.c)
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1400F6C9C (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x140108CFC (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 */

__int64 __fastcall HMDestroyObject(struct _HEAD *a1, __int64 a2)
{
  struct _HANDLEENTRY *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  v3 = (struct _HANDLEENTRY *)HMPheFromObjectWorker((int *)a1, a2);
  IdentifyPrimaryDestroyTarget::Identify((IdentifyPrimaryDestroyTarget *)&v8, v3);
  if ( (unsigned int)HMMarkObjectDestroyWorker(a1, v4) )
  {
    HMFreeObject(a1);
    if ( v8 )
      *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19768) = 0LL;
    return 1LL;
  }
  else
  {
    IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v8);
    return 0LL;
  }
}

/*
 * XREFs of ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F237C
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x140023CB8 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x14001F150 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x140191B8C (--1XEPALOBJ2@@QEAA@XZ.c)
 *     ??0XEPALOBJ2@@QEAA@XZ @ 0x140194898 (--0XEPALOBJ2@@QEAA@XZ.c)
 *     ?bGarbageCollect@XEPALOBJ2@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401EDE88 (-bGarbageCollect@XEPALOBJ2@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall vGarbageCollectObject<XEPALOBJ2>(struct Gre::Base::SESSION_GLOBALS *a1, unsigned int a2)
{
  unsigned int *v4; // rax
  __int64 v5; // [rsp+20h] [rbp-48h] BYREF
  int v6; // [rsp+28h] [rbp-40h]
  char v7; // [rsp+2Dh] [rbp-3Bh]
  unsigned int *v8[6]; // [rsp+38h] [rbp-30h] BYREF

  XEPALOBJ2::XEPALOBJ2((XEPALOBJ2 *)v8);
  v4 = (unsigned int *)HmgShareLock((__int64)a1, a2, 8, 1);
  v8[0] = v4;
  if ( v4 && v4[2] <= 1 )
  {
    HANDLELOCK::HANDLELOCK(&v5, (unsigned int *)a1, a2, 1);
    if ( v6 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
      if ( XEPALOBJ2::bGarbageCollect((XEPALOBJ2 *)v8, (struct _ERESOURCE **)a1) )
        _InterlockedDecrement((volatile signed __int32 *)a1 + 461);
    }
    else
    {
      v7 = 1;
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v5);
  }
  XEPALOBJ2::~XEPALOBJ2(v8);
}

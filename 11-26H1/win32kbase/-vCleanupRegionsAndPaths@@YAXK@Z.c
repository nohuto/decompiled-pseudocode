/*
 * XREFs of ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x1401FAA10
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1401FA56C (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 *     HmgRemoveObject @ 0x14001AB00 (HmgRemoveObject.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x140023C30 (HmgIsProcessCleanupRequiredByW32Pid.c)
 *     ?HmgNextOwned@@YAIIKPEAPEAUHOBJ__@@PEAPEAVOBJECT@@@Z @ 0x140024260 (-HmgNextOwned@@YAIIKPEAPEAUHOBJ__@@PEAPEAVOBJECT@@@Z.c)
 *     ?HmgLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140035B80 (-HmgLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     ?vFreeBlocks@PATH_CORE@@QEAAXXZ @ 0x140045470 (-vFreeBlocks@PATH_CORE@@QEAAXXZ.c)
 *     bDeleteRegion @ 0x1400555E0 (bDeleteRegion.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400B7864 (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 */

void __fastcall vCleanupRegionsAndPaths(unsigned int a1)
{
  __int64 v2; // rcx
  __int64 SessionState; // rax
  unsigned int v4; // ecx
  struct Gre::Base::SESSION_GLOBALS *v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rax
  struct OBJECT *v8; // rax
  struct OBJECT *v9; // rbx
  unsigned int v10; // ebp
  HRGN v11; // [rsp+68h] [rbp+10h] BYREF
  struct OBJECT *v12; // [rsp+70h] [rbp+18h] BYREF

  if ( HmgIsProcessCleanupRequiredByW32Pid(a1) )
  {
    SessionState = W32GetSessionState(v2);
    v11 = 0LL;
    v4 = 0;
    v5 = *(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88);
    while ( 1 )
    {
      v10 = HmgNextOwned(v4, a1, (struct HOBJ__ **)&v11, &v12);
      if ( !v10 )
        break;
      if ( (BYTE2(v11) & 0x1F) == 4 )
      {
        v6 = HmgLock((__int64)v5, (unsigned int)v11, 4, 0);
        if ( v6 )
        {
          v7 = HmgPentryFromPobj((__int64)v5);
          if ( v7 )
            *(_QWORD *)(v7 + 16) = 0LL;
          _InterlockedDecrement16((volatile signed __int16 *)(v6 + 12));
        }
        bDeleteRegion(v11);
      }
      else if ( (BYTE2(v11) & 0x1F) == 7 )
      {
        v8 = HmgRemoveObject(v5, (unsigned int)v11, 0, 0, 1, 7, 0LL);
        v9 = v8;
        if ( v8 )
        {
          PATH_CORE::vFreeBlocks((struct OBJECT *)((char *)v8 + 24));
          FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(v9);
        }
      }
      v4 = v10;
    }
  }
}

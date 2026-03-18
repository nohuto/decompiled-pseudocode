/*
 * XREFs of ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x140085D1C
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1400845B0 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     ?vFreeBlocks@PATH_CORE@@QEAAXXZ @ 0x14000DA60 (-vFreeBlocks@PATH_CORE@@QEAAXXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x14000DAB0 (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     bDeleteRegion @ 0x1400146C0 (bDeleteRegion.c)
 *     HmgLock @ 0x140018210 (HmgLock.c)
 *     HmgRemoveObject @ 0x140019EC0 (HmgRemoveObject.c)
 *     HmgPentryFromPobj @ 0x14001AA80 (HmgPentryFromPobj.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001BC00 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     HmgNextOwned @ 0x140045150 (HmgNextOwned.c)
 */

void __fastcall vCleanupRegionsAndPaths(unsigned int a1)
{
  unsigned int v2; // edx
  unsigned int i; // ecx
  OBJECT *v4; // rax
  OBJECT *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  void *v8; // rbx
  unsigned int Owned; // esi
  HRGN v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v2 = a1;
  for ( i = 0; ; i = Owned )
  {
    Owned = HmgNextOwned(i, v2, (unsigned __int64 *)&v10);
    if ( !Owned )
      break;
    if ( (BYTE2(v10) & 0x1F) == 4 )
    {
      v4 = (OBJECT *)HmgLock((__int64)v10, 4);
      v5 = v4;
      if ( v4 )
      {
        v6 = HmgPentryFromPobj(v4);
        if ( v6 )
          *(_QWORD *)(v6 + 16) = 0LL;
        OBJECT::InterlockedDecrementExclusiveLockCount(v5);
      }
      bDeleteRegion(v10);
    }
    else if ( (BYTE2(v10) & 0x1F) == 7 )
    {
      v7 = HmgRemoveObject((__int64)v10, 0, 0, 1, 7, 0LL);
      v8 = (void *)v7;
      if ( v7 )
      {
        PATH_CORE::vFreeBlocks((PATH_CORE *)(v7 + 24));
        FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(v8);
      }
    }
    v2 = a1;
  }
}

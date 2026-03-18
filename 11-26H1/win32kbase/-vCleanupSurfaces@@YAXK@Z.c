/*
 * XREFs of ?vCleanupSurfaces@@YAXK@Z @ 0x1401FAB18
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1401FA56C (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001D21C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x140023C30 (HmgIsProcessCleanupRequiredByW32Pid.c)
 *     ?HmgNextOwned@@YAIIKPEAPEAUHOBJ__@@PEAPEAVOBJECT@@@Z @ 0x140024260 (-HmgNextOwned@@YAIIKPEAPEAUHOBJ__@@PEAPEAVOBJECT@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140025488 (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1400546C0 (--1SURFREF@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@H@Z @ 0x140181878 (-bDeleteSurface@SURFREF@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@H@Z.c)
 */

void __fastcall vCleanupSurfaces(unsigned int a1)
{
  __int64 v2; // rcx
  __int64 SessionState; // rax
  unsigned int v4; // ecx
  struct Gre::Base::SESSION_GLOBALS *v5; // rsi
  int v6; // eax
  int v7; // r8d
  unsigned int v8; // edi
  __int64 *v9[4]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h]
  HSURF v11; // [rsp+78h] [rbp+28h] BYREF
  __int64 v12; // [rsp+80h] [rbp+30h] BYREF
  struct OBJECT *v13; // [rsp+88h] [rbp+38h] BYREF

  if ( HmgIsProcessCleanupRequiredByW32Pid(a1) )
  {
    v11 = 0LL;
    SessionState = W32GetSessionState(v2);
    v4 = 0;
    v5 = *(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88);
    while ( 1 )
    {
      v8 = HmgNextOwned(v4, a1, (struct HOBJ__ **)&v11, &v13);
      if ( !v8 )
        break;
      if ( (BYTE2(v11) & 0x1F) == 5 )
      {
        SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v12, v5);
        SURFREF::SURFREF((SURFREF *)v9, v11, v5);
        if ( v10 )
        {
          v6 = *(_DWORD *)(v10 + 112);
          if ( v6 >= 0 || (v6 & 0x40000) != 0 )
            SURFREF::bDeleteSurface(v9, v5, 0);
        }
        SURFREF::~SURFREF((unsigned int **)v9);
        GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          v12,
          v7);
      }
      v4 = v8;
    }
  }
}

/*
 * XREFs of ?vCleanupSurfaces@@YAXK@Z @ 0x140086260
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1400845B0 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     HmgNextOwned @ 0x140045150 (HmgNextOwned.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140046948 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x140086F7C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x14008D2D8 (--1SURFREF@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

void __fastcall vCleanupSurfaces(unsigned int a1)
{
  unsigned int v2; // edx
  unsigned int i; // ecx
  unsigned int Owned; // ebx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  _BYTE v8[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]
  HSURF v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v2 = a1;
  v10 = 0LL;
  for ( i = 0; ; i = Owned )
  {
    Owned = HmgNextOwned(i, v2, (unsigned __int64 *)&v10);
    if ( !Owned )
      break;
    if ( (BYTE2(v10) & 0x1F) == 5 )
    {
      SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v11);
      SURFREF::SURFREF((SURFREF *)v8, v10);
      if ( v9 )
      {
        v5 = *(_DWORD *)(v9 + 112);
        if ( v5 >= 0 || (v5 & 0x40000) != 0 )
        {
          v6 = SURFACE::bDeleteSurface(v9, 0LL, 0LL);
          v7 = v9;
          if ( v6 )
            v7 = 0LL;
          v9 = v7;
        }
      }
      SURFREF::~SURFREF((SURFREF *)v8);
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v11);
    }
    v2 = a1;
  }
}

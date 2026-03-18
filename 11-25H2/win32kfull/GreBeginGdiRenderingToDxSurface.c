/*
 * XREFs of GreBeginGdiRenderingToDxSurface @ 0x140092A38
 * Callers:
 *     NtGdiBeginGdiRendering @ 0x140092A20 (NtGdiBeginGdiRendering.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x140089AA4 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009347C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bReset@DC@@QEAAHXZ @ 0x1401C6C2C (-bReset@DC@@QEAAHXZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreBeginGdiRenderingToDxSurface(Gre::Base *a1, unsigned int a2, __int64 a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  unsigned int v7; // esi
  __int64 v8; // rdi
  __int64 v9; // rbx
  HDC v10; // rdx
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64); // rax
  unsigned int v13; // eax
  _BYTE v14[32]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-98h]
  DC *v16[14]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v17; // [rsp+F0h] [rbp+18h] BYREF

  if ( a3 && (int)GreDxgkEnableUnorderedWaitsForDevice((unsigned int)a3, 0LL) < 0 )
    return 0LL;
  v6 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v17, v6);
  SURFREF::SURFREF((SURFREF *)v14, (HSURF)a1);
  v7 = 0;
  if ( v15 )
  {
    if ( ((unsigned int)a1 & 0x800000) == 0 )
    {
      if ( (unsigned int)GreGetObjectOwner(a1, 5LL) )
      {
        v8 = v15;
        if ( v15 )
        {
          v9 = *(_QWORD *)(v15 + 48);
          if ( (*(_DWORD *)(v15 + 116) & 8) != 0 || *(_QWORD *)(v15 + 224) )
          {
            v10 = *(HDC *)(v15 + 160);
            *(_WORD *)(v15 + 102) &= ~0x200u;
            if ( v10 )
            {
              APIDCOBJ::APIDCOBJ((APIDCOBJ *)v16, v10);
              if ( v16[0] )
                v7 = DC::bReset(v16[0]);
              APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v16);
              if ( v7 && (*(_DWORD *)(v8 + 116) & 8) != 0 )
              {
                v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v9 + 3472);
                v7 = 0;
                if ( v12 )
                {
                  v13 = v12(v8 + 24, a2, a3);
                  *(_DWORD *)(v8 + 116) |= 0x200u;
                  v7 = v13;
                }
              }
            }
          }
        }
      }
    }
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v14);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v17);
  return v7;
}

/*
 * XREFs of GreSpDwmSyncCaptureSurfaceBits @ 0x1401178F4
 * Callers:
 *     xxxPrintWindow @ 0x140241E1C (xxxPrintWindow.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14005B3F8 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007A2CC (--0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x140087B54 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FD90 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009347C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x140117B90 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GreSpDwmSyncCaptureSurfaceBits(Gre::Base *a1, HDC a2, float a3, int a4, int a5, int a6, int a7)
{
  struct Gre::Base::SESSION_GLOBALS *v10; // rdi
  unsigned int updated; // ebx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  int v16; // eax
  HSURF v17; // rdi
  int v18; // ecx
  int v19; // edx
  int v20; // r8d
  int v21; // r9d
  int v22; // eax
  __int64 v23; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v24[14]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v25[144]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v26; // [rsp+168h] [rbp+60h] BYREF
  int v27; // [rsp+170h] [rbp+68h]
  int v28; // [rsp+174h] [rbp+6Ch]

  v10 = Gre::Base::Globals(a1);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v24, a2, v10);
  if ( !v24[0] )
    goto LABEL_2;
  v13 = *(_QWORD *)(v24[0] + 8LL * (*(_DWORD *)(v24[0] + 40LL) & 1) + 1016);
  v26 = v13;
  v27 = v13 + a6;
  v28 = HIDWORD(v13) + a7;
  if ( (int)v13 > (int)v13 + a6 )
  {
    LODWORD(v26) = v13 + a6;
    v27 = v13;
  }
  if ( SHIDWORD(v13) > HIDWORD(v13) + a7 )
  {
    HIDWORD(v26) = HIDWORD(v13) + a7;
    v28 = HIDWORD(v13);
  }
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v23, v10);
  v14 = *(_QWORD *)v10 + 1144LL;
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v14);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v25);
  if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v25, (struct XDCOBJ *)v24, 0) )
  {
    v15 = *(_QWORD *)(v24[0] + 496LL);
    if ( v15 )
    {
      v16 = *(_DWORD *)(v15 + 56);
      v17 = *(HSURF *)(v15 + 32);
      v18 = *(_DWORD *)(v15 + 60);
      v19 = v26;
      v20 = HIDWORD(v26);
      v21 = v27;
      if ( (int)v26 < 0 )
        v19 = 0;
      LODWORD(v26) = v19;
      if ( v26 < 0 )
        v20 = 0;
      HIDWORD(v26) = v20;
      if ( v16 < v27 )
        v21 = v16;
      v22 = v28;
      v27 = v21;
      if ( v18 < v28 )
        v22 = v18;
      v28 = v22;
      if ( v21 < v19 )
      {
        LODWORD(v26) = v21;
      }
      else
      {
        if ( v22 < v20 )
          v20 = v22;
        HIDWORD(v26) = v20;
      }
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v25);
      if ( v14 )
        GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          v14);
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v23);
      if ( (int)v26 < v27 && SHIDWORD(v26) < v28 && !KeAreApcsDisabled() )
      {
        updated = bSpDwmUpdateSurface((HWND)a1, 0LL, (struct XDCOBJ *)v24, v17, a3, a4, a5, (struct ERECTL *)&v26, 0LL);
        goto LABEL_3;
      }
LABEL_2:
      updated = 0;
LABEL_3:
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v24);
      return updated;
    }
  }
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v25);
  if ( v14 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v14);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v23);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v24);
  return 0LL;
}

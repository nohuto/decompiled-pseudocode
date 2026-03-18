/*
 * XREFs of ?UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1402050C0
 * Callers:
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1401D0A90 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D2E48 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D2F30 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_GRETHREAD@@@Z @ 0x1400D36CC (-vUMPDCachedResourceCleanup@@YAXPEAU_GRETHREAD@@@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D425C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall UMPDDrvDisablePDEV(struct DHPDEV__ *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  size_t Size; // [rsp+20h] [rbp-48h]
  UMPDOBJ *v6; // [rsp+30h] [rbp-38h] BYREF
  _DWORD Src[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v8; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+48h] [rbp-20h]
  struct DHPDEV__ *v10; // [rsp+50h] [rbp-18h]

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v6);
  if ( v6 )
  {
    Src[0] = 0;
    v8 = 0LL;
    Src[1] = 2;
    LODWORD(Size) = 0;
    v9 = *(_QWORD *)v6;
    v10 = a1;
    UMPDOBJ::Thunk(v6, Src, 0x20u, 0LL, Size);
  }
  XUMPDOBJ::~XUMPDOBJ(&v6);
  CurrentThread = GreGetCurrentThread(v3, v2);
  if ( *((struct _GRETHREAD **)CurrentThread + 9) == (struct _GRETHREAD *)((char *)CurrentThread + 72) )
    vUMPDCachedResourceCleanup(CurrentThread);
}

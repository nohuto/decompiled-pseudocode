/*
 * XREFs of ?UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x140235610
 * Callers:
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x140282E80 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_GRETHREAD@@@Z @ 0x1400D6ED0 (-vUMPDCachedResourceCleanup@@YAXPEAU_GRETHREAD@@@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall UMPDDrvDisablePDEV(struct DHPDEV__ *a1)
{
  __int64 v2; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  size_t Size; // [rsp+20h] [rbp-48h]
  UMPDOBJ *v5; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v6[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v7; // [rsp+40h] [rbp-28h]
  __int64 v8; // [rsp+48h] [rbp-20h]
  struct DHPDEV__ *v9; // [rsp+50h] [rbp-18h]

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v5);
  if ( v5 )
  {
    v6[0] = 0;
    v7 = 0LL;
    v6[1] = 2;
    LODWORD(Size) = 0;
    v8 = *(_QWORD *)v5;
    v9 = a1;
    UMPDOBJ::Thunk(v5, v6, 0x20u, 0LL, Size);
  }
  XUMPDOBJ::~XUMPDOBJ(&v5);
  CurrentThread = GreGetCurrentThread(v2);
  if ( *((struct _GRETHREAD **)CurrentThread + 9) == (struct _GRETHREAD *)((char *)CurrentThread + 72) )
    vUMPDCachedResourceCleanup(CurrentThread);
}

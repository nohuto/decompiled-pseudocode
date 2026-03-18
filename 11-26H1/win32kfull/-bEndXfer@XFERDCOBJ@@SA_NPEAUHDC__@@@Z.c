/*
 * XREFs of ?bEndXfer@XFERDCOBJ@@SA_NPEAUHDC__@@@Z @ 0x140197674
 * Callers:
 *     NtGdiMakeObjectUnXferable @ 0x1401975E0 (NtGdiMakeObjectUnXferable.c)
 *     XFERDCOBJ_bEndXfer @ 0x140312770 (XFERDCOBJ_bEndXfer.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x140197710 (--0DCOBJ@@QEAA@XZ.c)
 *     ?PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14019778C (-PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     Feature_ContainerCompatibleXferDc__private_IsEnabledNoReportingNoInline @ 0x14019780C (Feature_ContainerCompatibleXferDc__private_IsEnabledNoReportingNoInline.c)
 */

char __fastcall XFERDCOBJ::bEndXfer(HDC a1)
{
  __int64 v2; // r8
  DC *v3; // rax
  struct _ENTRY *v5; // rax
  DC *v6[2]; // [rsp+20h] [rbp-48h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v7; // [rsp+30h] [rbp-38h]

  DCOBJ::DCOBJ((DCOBJ *)v6);
  LOBYTE(v2) = 1;
  v3 = (DC *)HmgLock(v7, a1, v2, 0LL);
  v6[0] = v3;
  if ( v3 && *((_DWORD *)v3 + 534) )
  {
    if ( (unsigned int)Feature_ContainerCompatibleXferDc__private_IsEnabledNoReportingNoInline() )
    {
      v5 = DC::PentryFromPobj(v6[0], v7);
      *((_BYTE *)v5 + 15) &= ~0x20u;
    }
    *((_DWORD *)v6[0] + 534) = 0;
    DCOBJ::~DCOBJ((DCOBJ *)v6);
    return 1;
  }
  else
  {
    DCOBJ::~DCOBJ((DCOBJ *)v6);
    return 0;
  }
}

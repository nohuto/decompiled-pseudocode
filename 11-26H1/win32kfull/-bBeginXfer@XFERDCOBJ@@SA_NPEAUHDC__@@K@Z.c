/*
 * XREFs of ?bBeginXfer@XFERDCOBJ@@SA_NPEAUHDC__@@K@Z @ 0x140197540
 * Callers:
 *     NtGdiMakeObjectXferable @ 0x1401974A0 (NtGdiMakeObjectXferable.c)
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14019778C (-PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     Feature_ContainerCompatibleXferDc__private_IsEnabledNoReportingNoInline @ 0x14019780C (Feature_ContainerCompatibleXferDc__private_IsEnabledNoReportingNoInline.c)
 */

char __fastcall XFERDCOBJ::bBeginXfer(HDC a1, int a2)
{
  struct _ENTRY *v4; // rax
  DC *v5[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  if ( !v5[0]
    || *((_DWORD *)v5[0] + 534)
    || (*(_DWORD *)(*((_QWORD *)v5[0] + 6) + 40LL) & 0x8000) == 0
    || a2 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
    return 0;
  }
  else
  {
    if ( (unsigned int)Feature_ContainerCompatibleXferDc__private_IsEnabledNoReportingNoInline() )
    {
      v4 = DC::PentryFromPobj(v5[0], v5[2]);
      *((_BYTE *)v4 + 15) |= 0x20u;
    }
    *((_DWORD *)v5[0] + 534) = a2;
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
    return 1;
  }
}

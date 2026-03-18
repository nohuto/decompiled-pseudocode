/*
 * XREFs of CmFcpCreateAlpcSectionView @ 0x140B39034
 * Callers:
 *     CmFcpSendFeatureUsageReportAlpcMessage @ 0x1404E9848 (CmFcpSendFeatureUsageReportAlpcMessage.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x140438B60 (AlpcGetMessageAttribute.c)
 *     ZwAlpcCreatePortSection @ 0x1407243B0 (ZwAlpcCreatePortSection.c)
 *     ZwAlpcCreateSectionView @ 0x1407243F0 (ZwAlpcCreateSectionView.c)
 *     ZwAlpcDeletePortSection @ 0x140724430 (ZwAlpcDeletePortSection.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

__int64 __fastcall CmFcpCreateAlpcSectionView(__int64 a1, const void *a2, size_t a3, _DWORD *a4, _QWORD *a5)
{
  char *MessageAttribute; // rbx
  int PortSection; // edi

  MessageAttribute = AlpcGetMessageAttribute(a4, 0x40000000);
  PortSection = ZwAlpcCreatePortSection(a1, 0x40000LL);
  if ( PortSection >= 0 )
  {
    *(_DWORD *)MessageAttribute = 0;
    *((_QWORD *)MessageAttribute + 1) = 0LL;
    *((_QWORD *)MessageAttribute + 2) = 0LL;
    *((_QWORD *)MessageAttribute + 3) = a3;
    PortSection = ZwAlpcCreateSectionView(a1, 0LL);
    if ( PortSection >= 0 && *((_QWORD *)MessageAttribute + 2) )
    {
      *(_DWORD *)MessageAttribute = 393216;
      a4[1] |= 0x40000000u;
      memmove(*((void **)MessageAttribute + 2), a2, a3);
      *a5 = 0LL;
    }
    else
    {
      ZwAlpcDeletePortSection(a1, 0LL);
      *(_OWORD *)MessageAttribute = 0LL;
      *((_OWORD *)MessageAttribute + 1) = 0LL;
    }
  }
  return (unsigned int)PortSection;
}

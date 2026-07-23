/*
 * XREFs of CmFcpCreateAlpcSectionView @ 0x140B3B244
 * Callers:
 *     CmFcpSendFeatureUsageReportAlpcMessage @ 0x1404E2BF8 (CmFcpSendFeatureUsageReportAlpcMessage.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x1404277C0 (AlpcGetMessageAttribute.c)
 *     ZwAlpcCreatePortSection @ 0x140728F80 (ZwAlpcCreatePortSection.c)
 *     ZwAlpcCreateSectionView @ 0x140728FC0 (ZwAlpcCreateSectionView.c)
 *     ZwAlpcDeletePortSection @ 0x140729000 (ZwAlpcDeletePortSection.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall CmFcpCreateAlpcSectionView(
        HANDLE PortHandle,
        void *Src,
        size_t Size,
        PALPC_MESSAGE_ATTRIBUTES Buffer,
        HANDLE *a5)
{
  _ALPC_DATA_VIEW_ATTR *MessageAttribute; // rbx
  NTSTATUS SectionView; // edi
  HANDLE SectionHandle; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR ActualSectionSize[4]; // [rsp+38h] [rbp-20h] BYREF

  ActualSectionSize[0] = 0LL;
  SectionHandle = 0LL;
  MessageAttribute = (_ALPC_DATA_VIEW_ATTR *)AlpcGetMessageAttribute(Buffer, 0x40000000u);
  SectionView = ZwAlpcCreatePortSection(PortHandle, 0x40000u, 0LL, Size, &SectionHandle, ActualSectionSize);
  if ( SectionView >= 0 )
  {
    MessageAttribute->Flags = 0;
    MessageAttribute->SectionHandle = SectionHandle;
    MessageAttribute->ViewBase = 0LL;
    MessageAttribute->ViewSize = Size;
    SectionView = ZwAlpcCreateSectionView(PortHandle, 0, MessageAttribute);
    if ( SectionView >= 0 && MessageAttribute->ViewBase )
    {
      MessageAttribute->Flags = 393216;
      Buffer->ValidAttributes |= 0x40000000u;
      memmove(MessageAttribute->ViewBase, Src, Size);
      *a5 = SectionHandle;
    }
    else
    {
      ZwAlpcDeletePortSection(PortHandle, 0, SectionHandle);
      *(_OWORD *)&MessageAttribute->Flags = 0LL;
      *(_OWORD *)&MessageAttribute->ViewBase = 0LL;
    }
  }
  return (unsigned int)SectionView;
}

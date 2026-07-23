/*
 * XREFs of RtlQueryImageFileExecutionOptions @ 0x140806800
 * Callers:
 *     PsBootPhaseComplete @ 0x1407F3820 (PsBootPhaseComplete.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     RtlQueryImageFileKeyOption @ 0x140A786C0 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x140AB6238 (RtlpOpenBaseImageFileOptionsKey.c)
 */

__int64 RtlQueryImageFileExecutionOptions()
{
  int ImageFileKeyOption; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  Handle = 0LL;
  ImageFileKeyOption = RtlpOpenBaseImageFileOptionsKey(&Handle);
  if ( ImageFileKeyOption >= 0 )
  {
    ImageFileKeyOption = RtlQueryImageFileKeyOption(Handle, 4, 0LL);
    if ( RtlpDisableIFEOCaching )
      ZwClose(Handle);
  }
  return (unsigned int)ImageFileKeyOption;
}

/*
 * XREFs of RtlQueryImageFileExecutionOptions @ 0x140800D60
 * Callers:
 *     PsBootPhaseComplete @ 0x1407EDCC0 (PsBootPhaseComplete.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     RtlQueryImageFileKeyOption @ 0x1409665B0 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x140AB4E98 (RtlpOpenBaseImageFileOptionsKey.c)
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

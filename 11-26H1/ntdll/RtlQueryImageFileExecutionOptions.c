/*
 * XREFs of RtlQueryImageFileExecutionOptions @ 0x1800D13E0
 * Callers:
 *     LdrQueryImageFileExecutionOptions @ 0x1800D12B0 (LdrQueryImageFileExecutionOptions.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x1800D1480 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x1800D1810 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D18C8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 */

__int64 __fastcall RtlQueryImageFileExecutionOptions(
        __int64 a1,
        wchar_t *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int v8; // eax
  unsigned int ImageFileKeyOption; // ebx
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  if ( a1 )
    v8 = RtlpOpenImageFileOptionsKeyEx(a1, 9LL, 0LL, &Handle);
  else
    v8 = RtlpOpenBaseImageFileOptionsKey(&Handle);
  ImageFileKeyOption = v8;
  if ( v8 >= 0 )
  {
    ImageFileKeyOption = RtlQueryImageFileKeyOption(Handle, a2, a5, a6);
    if ( a1 )
      NtClose(Handle);
  }
  return ImageFileKeyOption;
}

/*
 * XREFs of RtlQueryImageFileExecutionOptions @ 0x1800D2FD0
 * Callers:
 *     LdrQueryImageFileExecutionOptions @ 0x1800D2EA0 (LdrQueryImageFileExecutionOptions.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x1800D3070 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x1800D3400 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D34B8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 */

__int64 __fastcall RtlQueryImageFileExecutionOptions(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int v10; // eax
  unsigned int ImageFileKeyOption; // ebx
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  if ( a1 )
    v10 = RtlpOpenImageFileOptionsKeyEx(a1, 9LL, 0LL, &Handle);
  else
    v10 = RtlpOpenBaseImageFileOptionsKey(&Handle);
  ImageFileKeyOption = v10;
  if ( v10 >= 0 )
  {
    ImageFileKeyOption = RtlQueryImageFileKeyOption(Handle, a2, a3, a4, a5, a6);
    if ( a1 )
      NtClose(Handle);
  }
  return ImageFileKeyOption;
}

/*
 * XREFs of swscanf_s @ 0x180133F90
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     _swinput_s @ 0x180136B38 (_swinput_s.c)
 */

int swscanf_s(const wchar_t *const Buffer, const wchar_t *const Format, ...)
{
  size_t v5; // rax
  va_list va; // [rsp+70h] [rbp+18h] BYREF

  va_start(va, Format);
  if ( Format )
  {
    v5 = wcslen(Buffer);
    return swinput_s(Buffer, v5, Format, va);
  }
  else
  {
    invalid_parameter();
    return -1;
  }
}

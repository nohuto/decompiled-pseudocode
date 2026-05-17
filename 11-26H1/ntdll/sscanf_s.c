/*
 * XREFs of sscanf_s @ 0x180133CF0
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x1800E9120 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     _invalid_parameter @ 0x180126898 (_invalid_parameter.c)
 *     _sinput_s @ 0x180135E94 (_sinput_s.c)
 *     strlen @ 0x180164FE0 (strlen.c)
 */

int sscanf_s(const char *const Buffer, const char *const Format, ...)
{
  size_t v5; // rax
  va_list va; // [rsp+70h] [rbp+18h] BYREF

  va_start(va, Format);
  if ( Format )
  {
    v5 = strlen(Buffer);
    return sinput_s(Buffer, v5, Format, va);
  }
  else
  {
    invalid_parameter();
    return -1;
  }
}

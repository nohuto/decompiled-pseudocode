/*
 * XREFs of ?ReadStringArrayLength@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAI@Z @ 0x14024B998
 * Callers:
 *     ?ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z @ 0x140153C68 (-ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoreMessaging::Calling::ReceiveProcessor::ReadStringArrayLength(
        CoreMessaging::Calling::ReceiveProcessor *this,
        unsigned int *a2)
{
  char *v2; // rax
  unsigned int v3; // r8d
  char v4; // r9

  v2 = (char *)*((_QWORD *)this + 1);
  v3 = 0;
  *a2 = 0;
  v4 = *v2;
  *((_QWORD *)this + 1) = v2 + 1;
  if ( v4 != 13 )
  {
    *((_DWORD *)this + 30) = 205;
    return (unsigned int)-2147024809;
  }
  if ( *((_DWORD *)this + 21) < 4u )
  {
    *((_DWORD *)this + 30) = 7;
    return (unsigned int)-2147024809;
  }
  *a2 = **((_DWORD **)this + 52);
  return v3;
}

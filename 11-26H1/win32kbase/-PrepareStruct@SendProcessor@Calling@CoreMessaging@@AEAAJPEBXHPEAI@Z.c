/*
 * XREFs of ?PrepareStruct@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXHPEAI@Z @ 0x1400D9268
 * Callers:
 *     ?ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z @ 0x1400D9060 (-ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoreMessaging::Calling::SendProcessor::PrepareStruct(
        CoreMessaging::Calling::SendProcessor *this,
        const void *a2,
        int a3,
        unsigned int *a4)
{
  unsigned __int8 *v5; // rdx
  int v6; // r8d
  int v7; // ecx

  *a4 = 0;
  if ( !a3 && !a2 )
    return 2147500035LL;
  v5 = (unsigned __int8 *)*((_QWORD *)this + 1);
  v6 = *v5;
  *((_QWORD *)this + 1) = v5 + 1;
  v7 = v5[1];
  *((_QWORD *)this + 1) = v5 + 2;
  *a4 = v6 | (v7 << 8);
  return 0LL;
}

/*
 * XREFs of DecodeProviderTraits @ 0x140411450
 * Callers:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DecodeProviderTraits(unsigned __int16 *a1, char a2, _WORD *a3, _QWORD *a4)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a2 )
    {
      *a3 = 0;
      *a4 = a1 + 3;
    }
    else
    {
      result = *a1;
      *a3 = result;
      *a4 = 0LL;
    }
  }
  else
  {
    *a3 = 0;
    *a4 = 0LL;
  }
  return result;
}

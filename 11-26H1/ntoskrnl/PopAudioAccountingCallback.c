/*
 * XREFs of PopAudioAccountingCallback @ 0x1409C20B0
 * Callers:
 *     PopWnfAudioCallback @ 0x1409C24C0 (PopWnfAudioCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAudioAccountingCallback(char a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    qword_140E270D0 = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    if ( qword_140E27088 )
    {
      if ( qword_140E27088 <= (unsigned __int64)qword_140E270D0 )
        result = MEMORY[0xFFFFF78000000008] - qword_140E270D0;
      else
        result = MEMORY[0xFFFFF78000000008] - qword_140E27088;
      qword_140E270D8 += result;
    }
    qword_140E270D0 = 0LL;
  }
  return result;
}

/*
 * XREFs of PspSetThreadPpmPolicy @ 0x140AB8480
 * Callers:
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 * Callees:
 *     KeSetThreadPpmPolicy @ 0x14030F130 (KeSetThreadPpmPolicy.c)
 */

__int64 __fastcall PspSetThreadPpmPolicy(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // edx
  int v4; // edx
  int v5; // edx

  result = 0LL;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          if ( v5 != 5 )
            return result;
          LOBYTE(result) = 4;
        }
        else
        {
          LOBYTE(result) = 3;
        }
      }
      else
      {
        LOBYTE(result) = 2;
      }
    }
    else
    {
      LOBYTE(result) = 1;
    }
  }
  return KeSetThreadPpmPolicy(a1, result);
}

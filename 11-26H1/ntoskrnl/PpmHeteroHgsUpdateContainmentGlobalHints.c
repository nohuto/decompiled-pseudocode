/*
 * XREFs of PpmHeteroHgsUpdateContainmentGlobalHints @ 0x1405316B8
 * Callers:
 *     PpmHeteroHgsUpdateContainmentConfiguration @ 0x14025D3AC (PpmHeteroHgsUpdateContainmentConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmHeteroHgsUpdateContainmentGlobalHints(char a1)
{
  __int64 result; // rax
  unsigned int SystemCallNumber; // r8d
  unsigned __int16 i; // dx
  __int64 v4; // r9

  result = (unsigned int)PpmHeteroHgsContainmentState;
  if ( (PpmHeteroHgsContainmentState & 4) != 0 )
  {
    SystemCallNumber = PopModernStandbyStateNotify.SystemCallNumber;
    for ( i = 0; i < SystemCallNumber; result = i )
    {
      v4 = *(_QWORD *)(1264LL * i + *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 1240);
      if ( v4 )
        *(_BYTE *)(v4 + 827) = a1;
      ++i;
    }
  }
  return result;
}

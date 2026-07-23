/*
 * XREFs of MmRaisePoolQuota @ 0x1404A5C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall MmRaisePoolQuota(int a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rcx
  char result; // al
  unsigned __int64 v7; // rcx

  if ( a1 == 1 )
  {
    v4 = 0x80000LL;
    if ( a3 )
      v4 = a3;
    v7 = v4;
    if ( v4 < 0x100000 )
      v7 = 0x100000LL;
    if ( stru_140E366D8.WaitStatus - (unsigned __int64)stru_140E366D8.ApcState.Process > v7 >> 12
      && v4 + qword_140E2C790 >= qword_140E2C790 )
    {
      qword_140E2C790 += v4;
      goto LABEL_9;
    }
  }
  else
  {
    v4 = 0x10000LL;
    if ( a3 )
      v4 = a3;
    v5 = v4;
    if ( v4 < 0x100000 )
      v5 = 0x100000LL;
    if ( *(_QWORD *)&MiState - qword_140E2C708 > v5 >> 12 && v4 + qword_140E2C798 >= qword_140E2C798 )
    {
      qword_140E2C798 += v4;
LABEL_9:
      result = 1;
      *a4 = a2 + v4;
      return result;
    }
  }
  return 0;
}

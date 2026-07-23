/*
 * XREFs of SeQueryHSTIResults @ 0x1408B1980
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 */

__int64 __fastcall SeQueryHSTIResults(void *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx

  v3 = dword_140FE4650;
  *a3 = dword_140FE4650;
  v4 = 0;
  if ( v3 )
  {
    if ( a2 >= v3 )
    {
      if ( KeGetCurrentThread()->PreviousMode )
        RtlCopyToUser(a1, qword_140FE4658, (unsigned int)dword_140FE4650);
      else
        RtlCopyVolatileMemory(a1, qword_140FE4658, (unsigned int)dword_140FE4650);
    }
    else
    {
      return (unsigned int)-1073741820;
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v4;
}

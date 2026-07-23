/*
 * XREFs of ExpQueryOriginalImageFeatureInformation @ 0x14084CA90
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     ExpGetOriginalImageVersion @ 0x1406D80A0 (ExpGetOriginalImageVersion.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall ExpQueryOriginalImageFeatureInformation(
        _DWORD *a1,
        unsigned int a2,
        _BYTE *a3,
        unsigned int a4,
        _DWORD *a5)
{
  unsigned int v5; // ebx
  unsigned int OriginalImageVersion; // eax

  v5 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    return (unsigned int)-1073741790;
  }
  else if ( a1 && a2 >= 0x14 && *a1 == 1 )
  {
    if ( a5 )
      *a5 = 5;
    if ( a3 && a4 >= 5 )
    {
      memset_0(a3, 0, a4);
      *(_DWORD *)a3 = 1;
      OriginalImageVersion = ExpGetOriginalImageVersion();
      if ( OriginalImageVersion >= 0xA00000C && a1[4] <= OriginalImageVersion )
        a3[4] = 1;
    }
    else
    {
      return (unsigned int)-1073741820;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}

/*
 * XREFs of IvtFindDevice @ 0x1405B1D80
 * Callers:
 *     <none>
 * Callees:
 *     IvtIommuFindDevice @ 0x1405B1DE8 (IvtIommuFindDevice.c)
 */

__int64 __fastcall IvtFindDevice(__int64 a1, __int64 a2, char a3, int *a4)
{
  int v7; // eax

  if ( !(unsigned __int8)IvtIommuFindDevice(a1, a2, a3 & 1) )
    return 3221226021LL;
  if ( a4 )
  {
    v7 = *a4;
    *a4 = 1;
    if ( !v7 )
      return 3221225507LL;
    *((_QWORD *)a4 + 1) = *(unsigned __int16 *)(a2 + 12);
    *((_QWORD *)a4 + 2) = 1LL;
  }
  return 0LL;
}

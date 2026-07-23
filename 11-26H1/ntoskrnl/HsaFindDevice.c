/*
 * XREFs of HsaFindDevice @ 0x1405ABF40
 * Callers:
 *     <none>
 * Callees:
 *     HsaIommuFindDevice @ 0x1405ACA68 (HsaIommuFindDevice.c)
 */

__int64 __fastcall HsaFindDevice(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v7; // eax

  if ( !(unsigned __int8)HsaIommuFindDevice(a1, a2, 0LL) )
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

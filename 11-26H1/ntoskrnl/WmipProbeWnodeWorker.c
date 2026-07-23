/*
 * XREFs of WmipProbeWnodeWorker @ 0x140A0B754
 * Callers:
 *     WmipProbeWnodeSingleItem @ 0x140829C5C (WmipProbeWnodeSingleItem.c)
 *     WmipProbeWnodeSingleInstance @ 0x140A0B6D4 (WmipProbeWnodeSingleInstance.c)
 *     WmipIoControl @ 0x140A0BC50 (WmipIoControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WmipProbeWnodeWorker(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        char a8,
        char a9)
{
  unsigned int v9; // ecx

  if ( !a3 )
  {
    if ( !a4 )
      goto LABEL_14;
LABEL_13:
    if ( a4 >= a2 )
      goto LABEL_14;
    return 3221225473LL;
  }
  if ( a3 < a2 )
    return 3221225473LL;
  if ( ((a3 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != a3 )
    return 3221225473LL;
  if ( a3 > (unsigned __int64)a6 - 2 )
    return 3221225473LL;
  v9 = a3 + *(unsigned __int16 *)(a3 + a1) + 2;
  if ( v9 < a3 || v9 > a6 || v9 > a7 && a8 )
    return 3221225473LL;
  if ( a4 )
  {
    if ( a4 < v9 )
      return 3221225473LL;
    goto LABEL_13;
  }
LABEL_14:
  if ( ((a4 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) != a4
    || a9 && a4 && (a5 > a6 || a4 > a6 - a5)
    || a8 && (a7 < a2 || a4 > a7 || !a4) )
  {
    return 3221225473LL;
  }
  return 0LL;
}

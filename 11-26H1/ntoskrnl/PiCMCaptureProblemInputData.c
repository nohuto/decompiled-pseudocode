/*
 * XREFs of PiCMCaptureProblemInputData @ 0x14077A8AC
 * Callers:
 *     PiCMSetDeviceProblem @ 0x140B6CA80 (PiCMSetDeviceProblem.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCaptureProblemInputData(void *Src, unsigned int a2, __int64 a3, _WORD *a4)
{
  int v5; // ebx

  v5 = 0;
  if ( Src && a2 >= 0x1A0 )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyFromUser(a4, Src, 0x1A0uLL);
    if ( *(_DWORD *)a4 == 416 )
      a4[203] = 0;
    else
      v5 = -1073741811;
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v5 < 0 )
    memset_0(a4, 0, 0x1A0uLL);
  return (unsigned int)v5;
}

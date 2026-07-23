/*
 * XREFs of PiCMCaptureEnumerateInputData @ 0x140974B80
 * Callers:
 *     PiCMEnumerateSubKeys @ 0x140974874 (PiCMEnumerateSubKeys.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCaptureEnumerateInputData(void *Src, unsigned int a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax

  if ( Src && a2 >= 0x14 )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyFromUser(a4, Src, 0x14uLL);
    result = 0LL;
    if ( *a4 != 20 )
      result = 3221225485LL;
  }
  else
  {
    result = 3221225485LL;
  }
  if ( (int)result < 0 )
  {
    *(_OWORD *)a4 = 0LL;
    a4[4] = 0;
  }
  return result;
}

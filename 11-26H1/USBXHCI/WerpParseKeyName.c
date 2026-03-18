/*
 * XREFs of WerpParseKeyName @ 0x140059280
 * Callers:
 *     WerKernelSubmitReport @ 0x140058738 (WerKernelSubmitReport.c)
 * Callees:
 *     WerpGetReverseCharPosition @ 0x140059254 (WerpGetReverseCharPosition.c)
 */

__int64 __fastcall WerpParseKeyName(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rbx
  _WORD *ReverseCharPosition; // rax
  unsigned __int64 v10; // rcx
  _QWORD *v11; // r9
  _DWORD *v12; // r11
  unsigned int v13; // r10d
  _WORD *v14; // rax
  __int64 v15; // r8

  if ( a1 && a2 && a3 && a4 && a5 && a6 )
  {
    v8 = 2LL * a2;
    ReverseCharPosition = WerpGetReverseCharPosition(a1, (_WORD *)(v8 + a1 - 2));
    if ( ReverseCharPosition )
    {
      *v11 = ReverseCharPosition + 1;
      *v12 = (__int64)(v8 - (_QWORD)ReverseCharPosition + v10 - 2) >> 1;
      if ( (unsigned __int64)ReverseCharPosition > v10 )
      {
        v14 = WerpGetReverseCharPosition(v10, ReverseCharPosition - 1);
        if ( v14 )
        {
          *a3 = v14 + 1;
          *a4 = ((v15 - (__int64)v14 - 2) >> 1) - 1;
          return v13;
        }
        DbgPrintEx(
          0x96u,
          0,
          "WERLIVEKERNELREPORTING:%u: ERROR Could not find \\ in the keyname looking for Report Type\n",
          433LL);
      }
      else
      {
        DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR No report type can be detected\n", 423LL);
      }
    }
    else
    {
      DbgPrintEx(
        0x96u,
        0,
        "WERLIVEKERNELREPORTING:%u: ERROR Could not find \\ in the keyname looking for Reportid\n",
        409LL);
    }
    return (unsigned int)-1073741811;
  }
  return 3221225485LL;
}

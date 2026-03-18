/*
 * XREFs of NtGdiRemoveMergeFont @ 0x1403290B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x140082B04 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z @ 0x140338AB8 (-bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z.c)
 */

__int64 __fastcall NtGdiRemoveMergeFont(HDC a1, char a2)
{
  unsigned int v4; // ebx
  _QWORD v5[11]; // [rsp+30h] [rbp-58h] BYREF

  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v5, a1);
  if ( v5[0] )
  {
    if ( (*(_DWORD *)(v5[0] + 36LL) & 1) != 0 )
    {
      v4 = 0;
    }
    else
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v4 = XDCOBJ::bRemoveMergeFont(v5);
    }
    UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v5);
    return v4;
  }
  else
  {
    UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v5);
    return 0LL;
  }
}

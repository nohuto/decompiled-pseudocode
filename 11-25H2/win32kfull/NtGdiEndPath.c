/*
 * XREFs of NtGdiEndPath @ 0x1401CB520
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiEndPath(HDC a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  _QWORD v4[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v4, a1);
  v1 = 0;
  if ( v4[0] )
  {
    v2 = *(_DWORD *)(v4[0] + 248LL);
    if ( (v2 & 1) != 0 )
    {
      v1 = 1;
      *(_DWORD *)(v4[0] + 248LL) = v2 & 0xFFFFFFFE;
    }
    else
    {
      EngSetLastError(0x3EBu);
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v4);
    return v1;
  }
  else
  {
    EngSetLastError(6u);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v4);
    return 0LL;
  }
}

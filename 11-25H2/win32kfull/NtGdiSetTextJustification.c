/*
 * XREFs of NtGdiSetTextJustification @ 0x140311EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x140082B20 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSetTextJustification(HDC a1, int a2, int a3)
{
  unsigned int v5; // ebx
  _QWORD v7[10]; // [rsp+20h] [rbp-58h] BYREF

  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v7, a1);
  v5 = 0;
  if ( v7[0] )
  {
    v5 = 1;
    *(_DWORD *)(*(_QWORD *)(v7[0] + 976LL) + 284LL) = a2;
    *(_DWORD *)(*(_QWORD *)(v7[0] + 976LL) + 288LL) = a3;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v5;
}

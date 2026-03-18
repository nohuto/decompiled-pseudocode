/*
 * XREFs of ?GreExtEscape@@YAHPEAUHDC__@@HHPEADH1@Z @ 0x14016DE10
 * Callers:
 *     NtGdiExtEscape @ 0x14027EE60 (NtGdiExtEscape.c)
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1@Z @ 0x14016D63C (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1@Z.c)
 *     ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14025958C (--0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1XFERDCOBJ@@QEAA@XZ @ 0x140295574 (--1XFERDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreExtEscape(HDC a1, unsigned int a2, unsigned int a3, char *a4, unsigned int a5, char *a6)
{
  unsigned int v10; // ebx
  _QWORD v12[14]; // [rsp+30h] [rbp-E8h] BYREF
  _QWORD v13[14]; // [rsp+A0h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v13, a1);
  v10 = 0;
  if ( v13[0] )
  {
    v10 = GrepExtEscape((struct XDCOBJ *)v13, a2, a3, a4, a5, a6);
  }
  else
  {
    XFERDCOBJ::XFERDCOBJ((XFERDCOBJ *)v12, a1);
    if ( v12[0] )
      v10 = GrepExtEscape((struct XDCOBJ *)v12, a2, a3, a4, a5, a6);
    XFERDCOBJ::~XFERDCOBJ((XFERDCOBJ *)v12);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v13);
  return v10;
}

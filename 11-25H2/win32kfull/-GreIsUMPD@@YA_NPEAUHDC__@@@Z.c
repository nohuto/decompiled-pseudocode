/*
 * XREFs of ?GreIsUMPD@@YA_NPEAUHDC__@@@Z @ 0x1401F31EC
 * Callers:
 *     NtGdiExtEscape @ 0x140167C30 (NtGdiExtEscape.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

bool __fastcall GreIsUMPD(HDC a1)
{
  bool v1; // bl
  _QWORD v3[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  v1 = 0;
  if ( v3[0] )
    v1 = (*(_DWORD *)(*(_QWORD *)(v3[0] + 48LL) + 40LL) & 0x8000) != 0;
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
  return v1;
}

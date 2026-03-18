/*
 * XREFs of ?GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z @ 0x1401EC3DC
 * Callers:
 *     FONTOBJ_pvTrueTypeFontFile @ 0x140309E80 (FONTOBJ_pvTrueTypeFontFile.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1400B0A5C (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     EngUnmapFontFileFD @ 0x1400B2490 (EngUnmapFontFileFD.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PFFOBJ::GetTrueTypeFile(PFFOBJ *this, __int64 a2, unsigned int *a3)
{
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, unsigned int *); // rbx
  ULONG_PTR *v7; // rbx
  __int64 v8; // rdi
  ULONG_PTR *v10; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+28h] [rbp-10h]

  v5 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(*(_QWORD *)this + 96LL) + 3080LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v10, this);
  *a3 = 0;
  if ( v6 )
    v5 = v6(a2, a3);
  if ( v11 )
  {
    v7 = v10;
    v8 = v11;
    do
    {
      EngUnmapFontFileFD(*v7++);
      --v8;
    }
    while ( v8 );
  }
  return v5;
}

/*
 * XREFs of ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1401DE628
 * Callers:
 *     XLATEOBJ_cGetPalette @ 0x1401F38B0 (XLATEOBJ_cGetPalette.c)
 *     EngQueryPalette @ 0x1403071D0 (EngQueryPalette.c)
 *     GreGetSystemPaletteEntries @ 0x140310B00 (GreGetSystemPaletteEntries.c)
 *     PALOBJ_cGetColors @ 0x1403125D0 (PALOBJ_cGetColors.c)
 *     NtGdiColorCorrectPalette @ 0x14033DC50 (NtGdiColorCorrectPalette.c)
 * Callees:
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall XEPALOBJ::ulGetEntries(
        XEPALOBJ *this,
        unsigned int a2,
        unsigned int a3,
        struct tagPALETTEENTRY *a4,
        int a5)
{
  __int64 v5; // rdi
  struct tagPALETTEENTRY *v6; // rbx
  __int64 result; // rax
  unsigned int v8; // eax
  struct tagPALETTEENTRY *v9; // rcx

  v5 = a3;
  v6 = a4;
  result = *(unsigned int *)(*(_QWORD *)this + 28LL);
  if ( a4 )
  {
    if ( a2 >= (unsigned int)result )
    {
      return 0LL;
    }
    else
    {
      v8 = result - a2;
      if ( a3 > v8 )
        v5 = v8;
      memmove(a4, (const void *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 4LL * a2), 4 * v5);
      if ( a5 )
      {
        v9 = &v6[v5];
        while ( v6 < v9 )
        {
          v6->peFlags = 0;
          ++v6;
        }
      }
      return (unsigned int)v5;
    }
  }
  return result;
}

/*
 * XREFs of ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x14020CB40
 * Callers:
 *     XLATEOBJ_cGetPalette @ 0x1401850F0 (XLATEOBJ_cGetPalette.c)
 *     EngQueryPalette @ 0x14031E750 (EngQueryPalette.c)
 *     NtGdiColorCorrectPalette @ 0x140330700 (NtGdiColorCorrectPalette.c)
 *     GreGetSystemPaletteEntries @ 0x140331B20 (GreGetSystemPaletteEntries.c)
 *     PALOBJ_cGetColors @ 0x140334F90 (PALOBJ_cGetColors.c)
 * Callees:
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall XEPALOBJ::ulGetEntries(
        XEPALOBJ *this,
        unsigned int a2,
        unsigned int a3,
        struct tagPALETTEENTRY *a4,
        int a5)
{
  __int64 v5; // rax
  struct tagPALETTEENTRY *v6; // rbx
  unsigned int v7; // edi
  unsigned int v8; // ecx
  __int64 v9; // rax
  unsigned int v10; // ecx
  struct tagPALETTEENTRY *v12; // rcx

  v5 = *(_QWORD *)this;
  v6 = a4;
  v7 = a3;
  if ( !a4 )
    return *(unsigned int *)(v5 + 28);
  v8 = *(_DWORD *)(v5 + 28);
  if ( a2 >= v8 )
    return 0LL;
  v9 = *(_QWORD *)(v5 + 112);
  v10 = v8 - a2;
  if ( a3 > v10 )
    v7 = v10;
  memmove(a4, (const void *)(v9 + 4LL * a2), 4LL * v7);
  if ( a5 )
  {
    v12 = &v6[v7];
    while ( v6 < v12 )
    {
      v6->peFlags = 0;
      ++v6;
    }
  }
  return v7;
}

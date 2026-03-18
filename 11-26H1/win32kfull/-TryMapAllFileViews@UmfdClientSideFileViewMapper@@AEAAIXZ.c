/*
 * XREFs of ?TryMapAllFileViews@UmfdClientSideFileViewMapper@@AEAAIXZ @ 0x14025FA80
 * Callers:
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x140222080 (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1400D09E8 (EngMapFontFileFDInternal.c)
 */

__int64 __fastcall UmfdClientSideFileViewMapper::TryMapAllFileViews(UmfdClientSideFileViewMapper *this)
{
  __int64 v1; // rax
  __int64 i; // rbx
  __int64 v4; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)this;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)this + 36LL); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(v1 + 208);
    v7 = 0LL;
    v6 = 0;
    if ( !(unsigned int)EngMapFontFileFDInternal(*(struct FILEVIEW **)(v4 + 8 * i), &v7, &v6, 0) )
      break;
    v1 = *(_QWORD *)this;
  }
  return (unsigned int)i;
}

/*
 * XREFs of ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x1401BED10
 * Callers:
 *     ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1401BEB50 (-UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z.c)
 * Callees:
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     ?IsValidIFIMETRICS@@YA_NPEBU_IFIMETRICS@@K@Z @ 0x1401BEE4C (-IsValidIFIMETRICS@@YA_NPEBU_IFIMETRICS@@K@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

struct _IFIMETRICS *__fastcall ProbeAndReadIFIMETRICS(struct _IFIMETRICS *Src, int a2, unsigned __int64 a3)
{
  __int64 v5; // rdx
  __int64 cjThis; // rbx
  char *v7; // rcx
  struct _IFIMETRICS *v8; // rax
  struct _IFIMETRICS *v9; // rdi
  ULONG v11; // [rsp+20h] [rbp-28h]

  if ( a3 < 0xC0 )
    return 0LL;
  if ( a2 )
  {
    v5 = (unsigned __int8)Src & 3;
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    v5 = (unsigned __int8)Src & 3;
  }
  cjThis = Src->cjThis;
  v11 = Src->cjThis;
  if ( a2 && (_DWORD)cjThis )
  {
    if ( v5 )
      ExRaiseDatatypeMisalignment();
    v7 = (char *)Src + cjThis;
    if ( (unsigned __int64)Src + cjThis > MmUserProbeAddress || v7 < (char *)Src )
      LODWORD(cjThis) = v11;
  }
  if ( (unsigned int)cjThis < 0xC0 )
    return 0LL;
  if ( (unsigned int)cjThis > a3 )
    return 0LL;
  if ( (unsigned int)cjThis > 0x2710000 )
    return 0LL;
  v8 = (struct _IFIMETRICS *)PALLOCMEM(cjThis, 1886221639LL);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  memmove(v8, Src, (unsigned int)cjThis);
  if ( !IsValidIFIMETRICS(v9, cjThis) )
  {
    Win32FreePool(v9);
    return 0LL;
  }
  return v9;
}

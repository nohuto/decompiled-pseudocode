/*
 * XREFs of ?cKernPairs@PFEOBJ@@QEAAKPEAPEBU_FD_KERNINGPAIR@@@Z @ 0x1401DD2B8
 * Callers:
 *     ?GrepGetKerningPairs@@YAKAEAVDCOBJ@@KPEAUtagKERNINGPAIR@@@Z @ 0x1401DCE60 (-GrepGetKerningPairs@@YAKAEAVDCOBJ@@KPEAUtagKERNINGPAIR@@@Z.c)
 * Callees:
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1401DD3CC (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 */

unsigned __int64 __fastcall PFEOBJ::cKernPairs(PFEOBJ *this, const struct _FD_KERNINGPAIR **a2)
{
  const struct _FD_KERNINGPAIR *v4; // r8
  __int64 v5; // r9
  unsigned __int64 result; // rax
  void *FontTree; // rax
  __int64 v8; // rcx
  _WORD *i; // rax
  _QWORD v10[6]; // [rsp+38h] [rbp-30h] BYREF

  v4 = *(const struct _FD_KERNINGPAIR **)(*(_QWORD *)this + 48LL);
  *a2 = v4;
  v5 = *(_QWORD *)this;
  if ( v4 )
    return *(unsigned int *)(v5 + 64);
  v10[0] = *(_QWORD *)v5;
  FontTree = PFFOBJ::QueryFontTree(
               (PFFOBJ *)v10,
               *(struct DHPDEV__ **)(v10[0] + 104LL),
               *(_QWORD *)(v10[0] + 88LL),
               *(_DWORD *)(v5 + 8),
               2u,
               (unsigned __int64 *)(v5 + 56));
  *(_QWORD *)(*(_QWORD *)this + 48LL) = FontTree;
  v8 = *(_QWORD *)this;
  if ( FontTree )
  {
    for ( i = *(_WORD **)(v8 + 48); *i || i[1] || i[2]; i += 3 )
      ;
    *a2 = *(const struct _FD_KERNINGPAIR **)(*(_QWORD *)this + 48LL);
    result = 0xAAAAAAAAAAAAAAABuLL * (((__int64)i - *(_QWORD *)(*(_QWORD *)this + 48LL)) >> 1);
    *(_DWORD *)(*(_QWORD *)this + 64LL) = result;
  }
  else
  {
    *(_QWORD *)(v8 + 48) = &unk_14035EB38;
    *(_DWORD *)(*(_QWORD *)this + 64LL) = 0;
    return 0LL;
  }
  return result;
}

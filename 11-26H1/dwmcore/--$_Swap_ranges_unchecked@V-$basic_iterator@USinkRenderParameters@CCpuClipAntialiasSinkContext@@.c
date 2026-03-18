/*
 * XREFs of ??$_Swap_ranges_unchecked@V?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@V12@@std@@YA?AV?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@V12@V12@0@Z @ 0x18025ADCC
 * Callers:
 *     ??$swap_generic@V?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAXAEAV01@@Z @ 0x18025B410 (--$swap_generic@V-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_i.c)
 * Callees:
 *     ??1SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAA@XZ @ 0x1800C5A88 (--1SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAA@XZ.c)
 *     ??4SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAAAEAU01@$$QEAU01@@Z @ 0x180209304 (--4SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 **__fastcall std::_Swap_ranges_unchecked<detail::basic_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters>,detail::basic_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters>>(
        __int64 **a1,
        __int64 *a2,
        _QWORD *a3,
        __int64 **a4)
{
  __int64 *i; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // xmm0_4
  __int64 v12; // rax
  __int64 **result; // rax
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+28h] [rbp-30h]
  int v16; // [rsp+2Ch] [rbp-2Ch]
  __int64 v17; // [rsp+30h] [rbp-28h]
  __int64 v18; // [rsp+38h] [rbp-20h]
  char v19; // [rsp+40h] [rbp-18h]
  char v20; // [rsp+41h] [rbp-17h]

  for ( i = *a4; ; i = *a4 )
  {
    v9 = *a2;
    if ( *a2 == *a3 )
      break;
    v10 = *(_QWORD *)v9;
    *(_QWORD *)v9 = 0LL;
    v11 = *(_DWORD *)(v9 + 8);
    v14 = v10;
    v16 = *(_DWORD *)(v9 + 12);
    v12 = *(_QWORD *)(v9 + 16);
    *(_QWORD *)(v9 + 16) = 0LL;
    v17 = v12;
    v18 = *(_QWORD *)(v9 + 24);
    *(_QWORD *)(v9 + 24) = 0LL;
    v19 = *(_BYTE *)(v9 + 32);
    v20 = *(_BYTE *)(v9 + 33);
    v15 = v11;
    CCpuClipAntialiasSinkContext::SinkRenderParameters::operator=(v9, i);
    CCpuClipAntialiasSinkContext::SinkRenderParameters::operator=((__int64)i, &v14);
    CCpuClipAntialiasSinkContext::SinkRenderParameters::~SinkRenderParameters((CCpuClipAntialiasSinkContext::SinkRenderParameters *)&v14);
    *a2 += 40LL;
    *a4 += 5;
  }
  result = a1;
  *a1 = i;
  return result;
}

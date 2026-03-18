/*
 * XREFs of ?clear@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180183358
 * Callers:
 *     ??1?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180183324 (--1-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClipStackState@CScope.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::clear(
        __int64 *a1)
{
  __int64 v1; // rbx
  _QWORD *result; // rax
  __int64 v4; // r8
  __int64 v5; // rsi
  __int64 v6; // rbp
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *a1;
  result = (_QWORD *)0xCCCCCCCCCCCCCCCDLL;
  v4 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  if ( v4 )
  {
    v5 = 8 * ((a1[1] - *a1) >> 3);
    v6 = v5 + v1;
    result = stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v7, *a1, v4);
    while ( v1 != v6 )
    {
      if ( *(_BYTE *)(v1 + 8) )
      {
        if ( *(_QWORD *)v1 )
          result = (_QWORD *)(***(__int64 (__fastcall ****)(_QWORD, __int64))v1)(*(_QWORD *)v1, 1LL);
      }
      *(_QWORD *)v1 = 0LL;
      *(_BYTE *)(v1 + 8) = 0;
      v1 += 40LL;
    }
    a1[1] -= v5;
  }
  return result;
}

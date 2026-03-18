/*
 * XREFs of ??$destruct_range@UCpuClipStackState@CScopedClipStack@@@detail@@YAXPEAUCpuClipStackState@CScopedClipStack@@0@Z @ 0x180178770
 * Callers:
 *     ??$emplace_back@$$V@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C5380 (--$emplace_back@$$V@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClip.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall detail::destruct_range<CScopedClipStack::CpuClipStackState>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *(_BYTE *)(v3 + 8) )
      {
        if ( *(_QWORD *)v3 )
          result = (***(__int64 (__fastcall ****)(_QWORD, __int64))v3)(*(_QWORD *)v3, 1LL);
      }
      *(_QWORD *)v3 = 0LL;
      *(_BYTE *)(v3 + 8) = 0;
      v3 += 40LL;
    }
    while ( v3 != a2 );
  }
  return result;
}

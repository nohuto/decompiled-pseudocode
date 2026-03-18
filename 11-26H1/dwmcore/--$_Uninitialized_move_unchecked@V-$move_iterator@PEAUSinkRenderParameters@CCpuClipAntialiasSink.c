/*
 * XREFs of ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@std@@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@std@@YAPEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@0@V30@PEAU12@@Z @ 0x18019DD20
 * Callers:
 *     ??$uninitialized_move@V?$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x18019DC78 (--$uninitialized_move@V-$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@s.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_move_unchecked<std::move_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters *>,CCpuClipAntialiasSinkContext::SinkRenderParameters *>(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *i; // rcx
  __int64 *v4; // r9
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  for ( i = (__int64 *)(a1 + 16); ; i += 5 )
  {
    v4 = i - 2;
    if ( i - 2 == a2 )
      break;
    v5 = *v4;
    *v4 = 0LL;
    *(_QWORD *)a3 = v5;
    *(_DWORD *)(a3 + 8) = *((_DWORD *)i - 2);
    *(_DWORD *)(a3 + 12) = *((_DWORD *)i - 1);
    v6 = *i;
    *i = 0LL;
    *(_QWORD *)(a3 + 16) = v6;
    v7 = i[1];
    i[1] = 0LL;
    *(_QWORD *)(a3 + 24) = v7;
    *(_BYTE *)(a3 + 32) = *((_BYTE *)i + 16);
    *(_BYTE *)(a3 + 33) = *((_BYTE *)i + 17);
    a3 += 40LL;
  }
  return a3;
}

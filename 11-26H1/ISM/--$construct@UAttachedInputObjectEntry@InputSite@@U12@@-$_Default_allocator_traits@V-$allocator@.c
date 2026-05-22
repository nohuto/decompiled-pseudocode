/*
 * XREFs of ??$construct@UAttachedInputObjectEntry@InputSite@@U12@@?$_Default_allocator_traits@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@SAXAEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@1@QEAUAttachedInputObjectEntry@InputSite@@$$QEAU34@@Z @ 0x180071AD8
 * Callers:
 *     ??$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@AEAAPEAUAttachedInputObjectEntry@InputSite@@QEAU23@$$QEAU23@@Z @ 0x180040190 (--$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@-$vector@UAttachedInputObjectEntry@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<InputSite::AttachedInputObjectEntry>>::construct<InputSite::AttachedInputObjectEntry,InputSite::AttachedInputObjectEntry>(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 result; // rax
  __int64 *v4; // r8
  __int64 *v5; // rdx

  result = *a3;
  v4 = a3 + 1;
  *a2 = result;
  v5 = a2 + 1;
  *v5 = 0LL;
  if ( v5 != v4 )
  {
    result = *v4;
    *v5 = *v4;
    *v4 = 0LL;
  }
  return result;
}

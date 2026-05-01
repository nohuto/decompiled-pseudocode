/*
 * XREFs of ?_Become_small@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18038EB14
 * Callers:
 *     ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x180171490 (-EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

void __fastcall std::wstring::_Become_small(void **a1)
{
  void *v2; // rbx

  v2 = *a1;
  memcpy_0(a1, *a1, 2LL * (_QWORD)a1[2] + 2);
  std::_Deallocate<16>(v2, (struct std::nothrow_t *)(2LL * (_QWORD)a1[3] + 2));
  a1[3] = (void *)7;
}

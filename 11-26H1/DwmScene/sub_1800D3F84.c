/*
 * XREFs of sub_1800D3F84 @ 0x1800D3F84
 * Callers:
 *     sub_180042B80 @ 0x180042B80 (sub_180042B80.c)
 *     sub_180049850 @ 0x180049850 (sub_180049850.c)
 *     sub_18004A530 @ 0x18004A530 (sub_18004A530.c)
 *     sub_18006BF04 @ 0x18006BF04 (sub_18006BF04.c)
 *     sub_18007ABA0 @ 0x18007ABA0 (sub_18007ABA0.c)
 *     sub_18008F590 @ 0x18008F590 (sub_18008F590.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_1800D3E4C @ 0x1800D3E4C (sub_1800D3E4C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800D3F84(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = sub_18001C514(184LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Utils::ThreadPool::TaskHandler>::`vftable';
    sub_1800D3E4C();
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  _InterlockedExchange((volatile __int32 *)(v3 + 32), 2);
  return a1;
}

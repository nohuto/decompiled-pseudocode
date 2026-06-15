/*
 * XREFs of sub_140007394 @ 0x140007394
 * Callers:
 *     sub_1400070E0 @ 0x1400070E0 (sub_1400070E0.c)
 *     sub_140021ACC @ 0x140021ACC (sub_140021ACC.c)
 *     sub_140023A68 @ 0x140023A68 (sub_140023A68.c)
 *     sub_14003586C @ 0x14003586C (sub_14003586C.c)
 *     sub_1400359C4 @ 0x1400359C4 (sub_1400359C4.c)
 *     sub_140041294 @ 0x140041294 (sub_140041294.c)
 *     sub_14004E530 @ 0x14004E530 (sub_14004E530.c)
 *     sub_140050AE0 @ 0x140050AE0 (sub_140050AE0.c)
 *     sub_140051420 @ 0x140051420 (sub_140051420.c)
 *     sub_140053700 @ 0x140053700 (sub_140053700.c)
 *     sub_140053838 @ 0x140053838 (sub_140053838.c)
 *     sub_140053AF0 @ 0x140053AF0 (sub_140053AF0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_1400075D4 @ 0x1400075D4 (sub_1400075D4.c)
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall sub_140007394(struct _RTL_CRITICAL_SECTION *a1, __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // esi
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // r15
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v11[9]; // [rsp+38h] [rbp-48h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+28h]

  v4 = a1 + 1;
  EnterCriticalSection(a1 + 1);
  if ( a1[2].DebugInfo )
  {
    v5 = sub_1400B6010(a1->SpinCount);
    if ( v5 >= 0 )
      v5 = sub_1400B6010(0LL);
    if ( v5 < 0 )
    {
      sub_140007934(
        retaddr,
        369LL,
        "avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
        (unsigned int)v5);
    }
    else
    {
      DebugInfo = a1[2].DebugInfo;
      v7 = a2[1];
      if ( v7 )
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v8 = *a2;
      v9 = a2[1];
      v11[0] = off_1400B9840;
      v11[1] = v8;
      v11[2] = v9;
      v10 = 0LL;
      v11[3] = 0LL;
      v11[7] = v11;
      sub_1400075D4(DebugInfo, v11);
      sub_140003238(&v10);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}

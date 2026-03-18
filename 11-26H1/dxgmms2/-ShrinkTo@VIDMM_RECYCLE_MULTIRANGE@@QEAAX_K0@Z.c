/*
 * XREFs of ?ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x1400EDE24
 * Callers:
 *     ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400EE4D8 (-RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1400EEAAC (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F0C7C (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::ShrinkTo(
        VIDMM_RECYCLE_MULTIRANGE *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edx
  int v12; // edx

  v3 = (_QWORD *)*((_QWORD *)this + 8);
  v4 = (_QWORD *)*((_QWORD *)this + 9);
  while ( 1 )
  {
    v7 = v3[4];
    v8 = v3 + 5;
    if ( v7 >= a3 || *v8 <= a2 )
    {
      v11 = *((_DWORD *)this + 42);
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
            v3[19] = 0LL;
        }
        else
        {
          v3[18] = 0LL;
        }
      }
      else
      {
        v3[17] = 0LL;
      }
    }
    if ( v7 == a2 )
      *((_QWORD *)this + 8) = v3;
    if ( *v8 == a3 )
      *((_QWORD *)this + 9) = v3;
    if ( v3 == v4 )
      break;
    v9 = v3[15];
    v10 = v3[9];
    v3 = 0LL;
    if ( v9 != v10 + 72 )
      v3 = (_QWORD *)(v9 - 120);
  }
  *((_QWORD *)this + 5) = a3;
  *((_QWORD *)this + 4) = a2;
  *((_QWORD *)this + 6) = a2;
}

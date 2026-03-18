/*
 * XREFs of ?VidMmHandleTrimWnf@@YAXPEAVVIDMM_GLOBAL@@_N@Z @ 0x14010C844
 * Callers:
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x14010C244 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 * Callees:
 *     HandleTrimWnfInternal @ 0x1400A6470 (HandleTrimWnfInternal.c)
 *     CalculateTrimIntervals @ 0x14010CB90 (CalculateTrimIntervals.c)
 */

void __fastcall VidMmHandleTrimWnf(struct VIDMM_GLOBAL *this, char a2)
{
  __int64 v4; // rdi
  __int64 *v5; // r14
  char v6; // si
  __int64 **v7; // rbp
  __int64 v8; // r15
  _BYTE v9[8]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+38h] [rbp-30h] BYREF

  CalculateTrimIntervals(this, v9, &v10);
  do
  {
    v4 = *((_QWORD *)this + 5019);
    v5 = (__int64 *)v9;
    v6 = 0;
    v7 = (__int64 **)((char *)this + 40168);
    v8 = 2LL;
    do
    {
      HandleTrimWnfInternal(this, v4, v7, *v5, a2);
      v6 |= *((_BYTE *)v7 + 32);
      ++v5;
      v7 += 5;
      --v8;
    }
    while ( v8 );
    if ( !v6 )
      break;
    _InterlockedExchange64((volatile __int64 *)this + 5020, v4);
  }
  while ( v4 != *((_QWORD *)this + 5019) );
}

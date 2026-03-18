/*
 * XREFs of ?AddAndSet@?$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z @ 0x180164614
 * Callers:
 *     ?OpenChannel@CComposition@@IEAAJIK_KPEAX@Z @ 0x180163C50 (-OpenChannel@CComposition@@IEAAJIK_KPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x18010E8D0 (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<CChannelContext *,1>::AddAndSet(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  unsigned int v4; // edi
  int v8; // eax
  unsigned int v9; // esi
  int v10; // edx
  unsigned __int64 *v11; // r8
  unsigned __int64 *v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 *v14; // rcx
  __int64 v15; // rdx

  v4 = 0;
  v8 = DynArrayImpl<1>::Grow(a1, 8u, a2, a4, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x11Au, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xE3u, 0LL);
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 24);
    v11 = (unsigned __int64 *)(*(_QWORD *)a1 + (unsigned int)(8 * v10));
    *(_DWORD *)(a1 + 24) = v10 + a2;
    if ( a2 )
    {
      v12 = v11;
      if ( a2 < 2 || v11 <= a3 && &v11[a2 - 1] >= a3 )
        goto LABEL_9;
      v13 = a2 & 0xFFFFFFFE;
      v12 = v11;
      do
        v4 += 2;
      while ( v4 < (unsigned int)v13 );
      memset64(v11, *a3, (2 * (v13 >> 1)) & 0x1FFFFFFFFFFFFFFFLL);
      if ( v4 < a2 )
      {
LABEL_9:
        v14 = &v12[v4];
        v15 = a2 - v4;
        do
        {
          *v14++ = *a3;
          --v15;
        }
        while ( v15 );
      }
    }
  }
  return v9;
}

/*
 * XREFs of ?_SetCapacity@?$vector@PEAVDC@@U?$GreAllocator@PEAVDC@@$0HAGNHEEH@@@@utl@@AEAA_N_K@Z @ 0x140331688
 * Callers:
 *     ??$_PushBackOne2@AEBQEAVDC@@@?$vector@PEAVDC@@U?$GreAllocator@PEAVDC@@$0HAGNHEEH@@@@utl@@AEAA_NAEBQEAVDC@@@Z @ 0x140331298 (--$_PushBackOne2@AEBQEAVDC@@@-$vector@PEAVDC@@U-$GreAllocator@PEAVDC@@$0HAGNHEEH@@@@utl@@AEAA_NA.c)
 * Callees:
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     ?_Uninit@?$vector@PEAVDC@@U?$GreAllocator@PEAVDC@@$0HAGNHEEH@@@@utl@@AEAAXXZ @ 0x14028F5C8 (-_Uninit@-$vector@PEAVDC@@U-$GreAllocator@PEAVDC@@$0HAGNHEEH@@@@utl@@AEAAXXZ.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

char __fastcall utl::vector<DC *,GreAllocator<DC *,1886221383>>::_SetCapacity(__int64 a1, unsigned __int64 a2)
{
  char v2; // si
  unsigned __int64 v5; // rcx
  char *v6; // rax
  char *v7; // rdi
  char *v8; // rbp
  char *v9; // rbx
  __m128i si128; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v2 = 0;
  if ( a2 > 0xFFFFFFFF )
    goto LABEL_6;
  v5 = 8LL * (unsigned int)a2;
  if ( v5 > 0xFFFFFFFF )
    goto LABEL_6;
  v6 = (char *)PALLOCMEM(v5, 1886221383LL);
  si128.m128i_i64[0] = (__int64)v6;
  v7 = v6;
  if ( !v6 )
    goto LABEL_6;
  si128.m128i_i64[1] = (__int64)v6;
  v8 = &v6[8 * a2];
  v12 = (__int64)v8;
  if ( v6 != (char *)-1LL )
  {
    memmove(v6, *(const void **)a1, (*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    v9 = &v7[8 * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3)];
    utl::vector<DC *,GreAllocator<DC *,1886221383>>::_Uninit(a1);
    *(_QWORD *)a1 = v7;
    v2 = 1;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 16) = v8;
LABEL_6:
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    v12 = -1LL;
  }
  utl::vector<DC *,GreAllocator<DC *,1886221383>>::_Uninit((__int64)&si128);
  return v2;
}

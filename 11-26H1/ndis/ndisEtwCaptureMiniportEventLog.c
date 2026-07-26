/*
 * XREFs of ndisEtwCaptureMiniportEventLog @ 0x1400987A4
 * Callers:
 *     ndisEtwWriteMiniportRundown @ 0x140099298 (ndisEtwWriteMiniportRundown.c)
 * Callees:
 *     ?reset@?$KArray@_W$00@Rtl@@AEAAXXZ @ 0x140001C00 (-reset@-$KArray@_W$00@Rtl@@AEAAXXZ.c)
 *     ?resize@?$KArray@UEtwMiniportEvent@@$00@Rtl@@QEAA_N_K@Z @ 0x140001C94 (-resize@-$KArray@UEtwMiniportEvent@@$00@Rtl@@QEAA_N_K@Z.c)
 */

__int64 __fastcall ndisEtwCaptureMiniportEventLog(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // r13d
  unsigned int v9; // eax
  unsigned int v10; // r15d
  unsigned __int64 v12; // r14
  unsigned int v13; // ecx
  __int64 i; // rsi
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+28h] [rbp-8h]
  unsigned int v19; // [rsp+60h] [rbp+30h]

  Rtl::KArray<EtwMiniportEvent,1>::resize(a2, 0LL);
  *a3 = 0LL;
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 12);
  v8 = *(_DWORD *)(a1 + 8);
  v19 = v7;
  if ( v8 != -1 )
    v6 = *(_DWORD *)(a1 + 12);
  v17 = 0LL;
  v18 = 0LL;
  v9 = v8 + 1;
  if ( v8 >= v7 )
    v9 = v6;
  v10 = v9;
  if ( Rtl::KArray<EtwMiniportEvent,1>::resize((__int64)&v17, v9) )
  {
    v12 = HIDWORD(v17);
    v13 = 0;
    for ( i = v18; v13 < v10; *(_WORD *)(i + 4 * v16 + 2) = *(_WORD *)(v15 + a1 + 32) )
    {
      v15 = (v8 + v19 + v13 - v10 + 1) % v19 * *(unsigned __int16 *)(a1 + 26);
      v16 = v13;
      if ( v13 >= v12 )
        __fastfail(5u);
      ++v13;
      *(_WORD *)(i + 4 * v16) = *(_WORD *)(v15 + a1 + 34);
    }
    Rtl::KArray<wchar_t,1>::reset((_QWORD *)a2);
    *(_DWORD *)a2 = v17;
    *(_QWORD *)(a2 + 8) = i;
    *(_DWORD *)(a2 + 4) = v12;
    v18 = 0LL;
    v17 = 0LL;
    *a3 = *(_QWORD *)a1;
    Rtl::KArray<wchar_t,1>::reset(&v17);
    return 0LL;
  }
  else
  {
    Rtl::KArray<wchar_t,1>::reset(&v17);
    return 8LL;
  }
}

/*
 * XREFs of ?RestoreScopeFromClipStack@CScopedClipStack@@QEAAXAEBV1@@Z @ 0x18019F060
 * Callers:
 *     ?EndFrame@CSubDrawingContext@@AEAAX_N@Z @ 0x18019EF30 (-EndFrame@CSubDrawingContext@@AEAAX_N@Z.c)
 * Callees:
 *     ?pop_back@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C27F4 (-pop_back@-$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkEntry@CCp.c)
 */

void __fastcall CScopedClipStack::RestoreScopeFromClipStack(CScopedClipStack *this, const struct CScopedClipStack *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // r11
  unsigned int v9; // r9d
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r8
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax

  v2 = *(_QWORD *)a2;
  v4 = *((_QWORD *)this + 243);
  v5 = 0LL;
  v6 = *((_QWORD *)this + 1);
  v7 = *(_QWORD *)(v2 + 32);
  v8 = *((_QWORD *)this + 244);
  v9 = -858993459 * ((v8 - v4) >> 3) - *(_DWORD *)(v6 - 176);
  v10 = v9;
  if ( v9 < 0xCCCCCCCCCCCCCCCDuLL * ((v8 - v4) >> 3) )
  {
    v12 = v4;
    do
    {
      v13 = v5;
      v14 = v4 + 40 * v10;
      v4 = v12;
      v15 = v8;
      if ( !v7 && *(_QWORD *)(v14 + 24) )
      {
        *(_QWORD *)(v14 + 24) = 0LL;
        --*(_QWORD *)(v6 - 160);
        v4 = *((_QWORD *)this + 243);
        v15 = *((_QWORD *)this + 244);
      }
      ++v5;
      v8 = v15;
      v12 = v4;
      if ( !*(_BYTE *)(v14 + 36) )
        v5 = v13;
      v10 = ++v9;
    }
    while ( v9 < 0xCCCCCCCCCCCCCCCDuLL * ((v15 - v4) >> 3) );
  }
  v11 = *(_QWORD *)(v6 - 16);
  if ( v11 )
  {
    while ( 0x84BDA12F684BDA13uLL * ((__int64)(*(_QWORD *)(v11 + 24) - *(_QWORD *)(v11 + 16)) >> 4) > v5 )
      detail::vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>::pop_back((__int64 *)(v11 + 16));
  }
}

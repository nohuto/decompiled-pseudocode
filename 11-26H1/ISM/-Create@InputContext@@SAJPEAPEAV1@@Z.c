/*
 * XREFs of ?Create@InputContext@@SAJPEAPEAV1@@Z @ 0x180012500
 * Callers:
 *     ?GetTargetingInfo@KeyboardProcessor@@AEAAJPEAPEAVInputContext@@PEAPEAUIInputTarget@@@Z @ 0x1800123F8 (-GetTargetingInfo@KeyboardProcessor@@AEAAJPEAPEAVInputContext@@PEAPEAUIInputTarget@@@Z.c)
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180020F50 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverRawMouseToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x1800223E4 (-DeliverRawMouseToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAV.c)
 *     ?OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005E4E0 (-OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnTargetWithFocusChanged@NonPointerProcessor@@UEAAJPEAUIInputTarget@@0@Z @ 0x180071F40 (-OnTargetWithFocusChanged@NonPointerProcessor@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801BD350 (-OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall InputContext::Create(struct InputContext **a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // r14
  _QWORD *v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  int v17; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a1 )
  {
    v2 = malloc(0xC0uLL);
    v3 = v2;
    if ( v2 )
      memset_0(v2, 0, 0xC0uLL);
    if ( v3 )
    {
      v3[1] = 0LL;
      *((_DWORD *)v3 + 7) = 0;
      *((_OWORD *)v3 + 3) = 0LL;
      *((_OWORD *)v3 + 4) = 0LL;
      *((_OWORD *)v3 + 5) = 0LL;
      *((_OWORD *)v3 + 6) = 0LL;
      *((_OWORD *)v3 + 7) = 0LL;
      *((_OWORD *)v3 + 8) = 0LL;
      *((_OWORD *)v3 + 9) = 0LL;
      *((_OWORD *)v3 + 10) = 0LL;
      *((_OWORD *)v3 + 11) = 0LL;
      *((_DWORD *)v3 + 2) = 1;
      *v3 = &InputContext::`vftable';
      v3[2] = 0LL;
      *((_DWORD *)v3 + 6) = 0;
      v3[4] = 0LL;
      v3[5] = 0LL;
      v4 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(32LL);
      *v4 = v4;
      v4[1] = v4;
      v3[4] = v4;
      v3[6] = 0LL;
      v3[7] = 0LL;
      v3[8] = 0LL;
      v3[9] = 7LL;
      v3[10] = 8LL;
      *((_DWORD *)v3 + 6) = 1065353216;
      v5 = v3[4];
      v6 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(128LL);
      v7 = v3[6];
      v8 = (v3[8] - v7) >> 3;
      if ( v8 )
        std::_Deallocate<16>(v7, 8 * v8);
      v3[6] = v6;
      v9 = v6 + 16;
      v3[7] = v6 + 16;
      v3[8] = v6 + 16;
      do
        *v6++ = v5;
      while ( v6 != v9 );
      *((_DWORD *)v3 + 28) = 0;
      v3[15] = 0LL;
      v3[16] = 0LL;
      v10 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(24LL);
      *v10 = v10;
      v10[1] = v10;
      v3[15] = v10;
      v3[17] = 0LL;
      v3[18] = 0LL;
      v3[19] = 0LL;
      v3[20] = 7LL;
      v3[21] = 8LL;
      *((_DWORD *)v3 + 28) = 1065353216;
      v11 = v3[15];
      v12 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(128LL);
      v13 = v3[17];
      v14 = (v3[19] - v13) >> 3;
      if ( v14 )
        std::_Deallocate<16>(v13, 8 * v14);
      v3[17] = v12;
      v15 = v12 + 16;
      v3[18] = v12 + 16;
      v3[19] = v12 + 16;
      do
        *v12++ = v11;
      while ( v12 != v15 );
      v3[22] = 0LL;
    }
    else
    {
      v3 = 0LL;
    }
    if ( v3 )
    {
      *a1 = (struct InputContext *)v3;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\ContextualProcessors\\inc\\IContextualProcessor.h",
        (const char *)0x8007000ELL,
        v17);
      return 2147942414LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\ContextualProcessors\\inc\\IContextualProcessor.h",
      (const char *)0x80070057LL,
      v17);
    return 2147942487LL;
  }
}

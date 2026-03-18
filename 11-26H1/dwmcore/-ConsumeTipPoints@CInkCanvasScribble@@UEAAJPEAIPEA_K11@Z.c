/*
 * XREFs of ?ConsumeTipPoints@CInkCanvasScribble@@UEAAJPEAIPEA_K11@Z @ 0x18026C720
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x180050318 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x1800E4EBC (McTemplateU0xx_EventWriteTransfer.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800F8600 (McTemplateU0x_EventWriteTransfer.c)
 *     ?PopAll@CSharedCircularQueue@@QEBAXV?$span@E$0?0@gsl@@IPEAI1@Z @ 0x180126D4C (-PopAll@CSharedCircularQueue@@QEBAXV-$span@E$0-0@gsl@@IPEAI1@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801CA790 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInkCanvasScribble::ConsumeTipPoints(
        CInkCanvasScribble *this,
        unsigned int *a2,
        unsigned __int64 *a3,
        LARGE_INTEGER *a4,
        unsigned __int64 *a5)
{
  __int64 v5; // r10
  unsigned int v8; // r12d
  unsigned int v9; // eax
  __int64 v10; // rbx
  unsigned int **v11; // rsi
  unsigned int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // r14
  unsigned int i; // esi
  __int64 v16; // rbx
  __int64 v17; // r15
  int v18; // eax
  unsigned int v19; // ebx
  unsigned int *v21; // rcx
  unsigned int v22; // [rsp+30h] [rbp-40h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v25; // [rsp+50h] [rbp-20h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int v28; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int *v29; // [rsp+B8h] [rbp+48h]
  unsigned __int64 *v30; // [rsp+C0h] [rbp+50h]

  v30 = a3;
  v29 = a2;
  v5 = *((_QWORD *)this + 7);
  v8 = *(_DWORD *)(v5 + 8);
  v9 = *(_DWORD *)(v5 + 12) * v8;
  v25 = 0LL;
  v26 = 0LL;
  if ( v9 )
    std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>((void **)&v25, v9);
  v10 = v25;
  v11 = (unsigned int **)*((_QWORD *)this + 7);
  v12 = *((_DWORD *)this + 6);
  v28 = 0;
  v22 = 0;
  gsl::details::extent_type<-1>::extent_type<-1>(v24, DWORD2(v25) - (int)v25);
  if ( v24[0] == -1LL || !v10 && v24[0] )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  v24[1] = v10;
  CSharedCircularQueue::PopAll(v11, (__int64)v24, v12, &v28, &v22);
  v14 = 0LL;
  for ( i = 0; i < v28; ++i )
  {
    v16 = v25;
    v17 = v8 * (v28 - i - 1);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0x_EventWriteTransfer(
        v13,
        &EVTDESC_DELEGATEDINKCANVAS_CORRELATIONID,
        *(_QWORD *)(v25 + v8 * (v28 - i - 1) + 24));
    if ( *(_QWORD *)(v16 + v17 + 24) > *((_QWORD *)this + 8) )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)this + 2) + 32LL))(
              *((_QWORD *)this + 2),
              v17 + v25,
              v8,
              a5,
              v30);
      v19 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x107,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\delegatedinkcanvas.cpp",
          (const char *)(unsigned int)v18);
        std::vector<unsigned char>::_Tidy((__int64)&v25);
        return v19;
      }
      ++v14;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    McTemplateU0xx_EventWriteTransfer(v13, &EVTDESC_DELEGATEDINKCANVAS_CONSUMETIPPOINTS, *((_QWORD *)this + 8), v14);
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  v21 = v29;
  *a4 = PerformanceCount;
  *v21 = v22;
  std::vector<unsigned char>::_Tidy((__int64)&v25);
  return 0LL;
}

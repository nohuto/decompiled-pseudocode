/*
 * XREFs of ?CreatePointQueue@CDelegatedInkCanvas@@AEAAJXZ @ 0x18026C8FC
 * Callers:
 *     ?Initialize@CDelegatedInkCanvas@@UEAAJXZ @ 0x18026CDE0 (-Initialize@CDelegatedInkCanvas@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VCSharedCircularQueueProducer@@U?$default_delete@VCSharedCircularQueueProducer@@@std@@@std@@QEAA@XZ @ 0x1801A2068 (--1-$unique_ptr@VCSharedCircularQueueProducer@@U-$default_delete@VCSharedCircularQueueProducer@@.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801CA790 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?GetInkCanvasInputHost@CMit@@SAJPEAPEAUIInkCanvasInputHost@@@Z @ 0x18022835C (-GetInkCanvasInputHost@CMit@@SAJPEAPEAUIInkCanvasInputHost@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSharedCircularQueueProducer@@U?$default_delete@VCSharedCircularQueueProducer@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1802636B4 (--1-$out_param_t@V-$unique_ptr@VCSharedCircularQueueProducer@@U-$default_delete@VCSharedCircular.c)
 *     ?Create@CSharedCircularQueueProducer@@SAJV?$span@E$0?0@gsl@@IPEAPEAV1@@Z @ 0x1802637A4 (-Create@CSharedCircularQueueProducer@@SAJV-$span@E$0-0@gsl@@IPEAPEAV1@@Z.c)
 *     ?reset@?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAAXPEAVCSharedCircularQueue@@@Z @ 0x18026CEDC (-reset@-$unique_ptr@VCSharedCircularQueue@@U-$default_delete@VCSharedCircularQueue@@@std@@@std@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDelegatedInkCanvas::CreatePointQueue(CDelegatedInkCanvas *this)
{
  __int64 *v1; // rbx
  __int64 v2; // rsi
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdx
  int v10; // edi
  void *v11; // rdx
  int InkCanvasInputHost; // eax
  __int64 v13; // rdx
  __int64 v15[2]; // [rsp+20h] [rbp-30h] BYREF
  void **v16; // [rsp+30h] [rbp-20h] BYREF
  volatile __int32 **v17; // [rsp+38h] [rbp-18h] BYREF
  char v18; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IInkCanvasInputHost *v20; // [rsp+70h] [rbp+20h] BYREF
  void *v21; // [rsp+78h] [rbp+28h] BYREF

  v1 = (__int64 *)((char *)this + 168);
  v2 = *((_QWORD *)this + 22);
  v4 = *((_QWORD *)this + 21);
  v5 = v2 - v4;
  if ( (unsigned __int64)(v2 - v4) > 0x1C08 )
  {
    v6 = v4 + 7176;
LABEL_7:
    v1[1] = v6;
    goto LABEL_8;
  }
  if ( v5 < 0x1C08 )
  {
    if ( (unsigned __int64)(*((_QWORD *)this + 23) - v4) >= 0x1C08 )
    {
      v7 = 7176 - v5;
      memset_0(*((void **)this + 22), 0, 7176 - v5);
      v6 = v7 + v2;
      goto LABEL_7;
    }
    std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>((void **)this + 21, 0x1C08uLL);
  }
LABEL_8:
  v8 = *v1;
  v9 = v1[1];
  v16 = &v21;
  v21 = 0LL;
  v17 = 0LL;
  v18 = 1;
  gsl::details::extent_type<-1>::extent_type<-1>(v15, v9 - v8);
  if ( v15[0] == -1 || !v8 && v15[0] )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  v15[1] = v8;
  v10 = CSharedCircularQueueProducer::Create(v15, 0x38u, &v17);
  wil::details::out_param_t<std::unique_ptr<CSharedCircularQueueProducer>>::~out_param_t<std::unique_ptr<CSharedCircularQueueProducer>>((__int64)&v16);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD2,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\delegatedinkcanvas.cpp",
      (const char *)(unsigned int)v10);
LABEL_18:
    std::unique_ptr<CSharedCircularQueueProducer>::~unique_ptr<CSharedCircularQueueProducer>(&v21);
    return (unsigned int)v10;
  }
  v11 = v21;
  v21 = 0LL;
  std::unique_ptr<CSharedCircularQueue>::reset((char *)this + 192, v11);
  v20 = 0LL;
  InkCanvasInputHost = CMit::GetInkCanvasInputHost(&v20);
  v10 = InkCanvasInputHost;
  if ( InkCanvasInputHost < 0 )
  {
    v13 = 215LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\delegatedinkcanvas.cpp",
      (const char *)(unsigned int)InkCanvasInputHost);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
    goto LABEL_18;
  }
  InkCanvasInputHost = (*(__int64 (__fastcall **)(struct IInkCanvasInputHost *, __int64))(*(_QWORD *)v20 + 24LL))(
                         v20,
                         *v1);
  v10 = InkCanvasInputHost;
  if ( InkCanvasInputHost < 0 )
  {
    v13 = 217LL;
    goto LABEL_17;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
  std::unique_ptr<CSharedCircularQueueProducer>::~unique_ptr<CSharedCircularQueueProducer>(&v21);
  return 0LL;
}

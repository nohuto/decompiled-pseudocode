/*
 * XREFs of ?GetTipPoints@CGenericInkTipPointSource@@QEAAJIPEAV?$vector@EV?$allocator@E@std@@@std@@PEAI11@Z @ 0x1801CA600
 * Callers:
 *     ?ConsumeTipPoints@CSuperWetInkScribble@@MEAAJPEAIPEA_K11@Z @ 0x1801CA470 (-ConsumeTipPoints@CSuperWetInkScribble@@MEAAJPEAIPEA_K11@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopAll@CSharedCircularQueue@@QEBAXV?$span@E$0?0@gsl@@IPEAI1@Z @ 0x180126D4C (-PopAll@CSharedCircularQueue@@QEBAXV-$span@E$0-0@gsl@@IPEAI1@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801CA790 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801CA870 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGenericInkTipPointSource::GetTipPoints(
        RTL_SRWLOCK *a1,
        unsigned int a2,
        __int64 *a3,
        _DWORD *a4,
        unsigned int *a5,
        _DWORD *a6)
{
  RTL_SRWLOCK *v6; // rsi
  _DWORD *Ptr; // rcx
  int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rbx
  unsigned int **v18; // rbp
  __int64 v20; // rax
  size_t v21; // rbx
  _QWORD v22[2]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  RTL_SRWLOCK *v24; // [rsp+70h] [rbp+8h] BYREF

  v6 = a1 + 4;
  AcquireSRWLockShared(a1 + 4);
  Ptr = a1[3].Ptr;
  v24 = v6;
  if ( !Ptr )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericinktippointsource.cpp",
      (const char *)0x8898008BLL);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v24);
    return 2291662987LL;
  }
  v12 = Ptr[2];
  v13 = (unsigned int)(Ptr[3] * v12);
  v14 = a3[1];
  v15 = *a3;
  v16 = v14 - *a3;
  if ( (unsigned int)v13 < v16 )
  {
    v20 = v15 + v13;
  }
  else
  {
    if ( (unsigned int)v13 <= v16 )
      goto LABEL_6;
    if ( (unsigned int)v13 > (unsigned __int64)(a3[2] - v15) )
    {
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(a3, (unsigned int)v13);
      goto LABEL_6;
    }
    v21 = (unsigned int)v13 - v16;
    memset_0((void *)a3[1], 0, v21);
    v20 = v21 + v14;
  }
  a3[1] = v20;
LABEL_6:
  v17 = *a3;
  v18 = (unsigned int **)a1[3].Ptr;
  gsl::details::extent_type<-1>::extent_type<-1>(v22, (int)(*((_DWORD *)a3 + 2) - *a3));
  if ( v22[0] == -1LL || !v17 && v22[0] )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  v22[1] = v17;
  CSharedCircularQueue::PopAll(v18, (__int64)v22, a2, a5, a6);
  *a4 = v12;
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return 0LL;
}

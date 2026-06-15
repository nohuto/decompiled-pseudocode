/*
 * XREFs of ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180082D78
 * Callers:
 *     ?OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x18005C9D0 (-OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@.c)
 *     ?OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z @ 0x180082D10 (-OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z.c)
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x1801254A4 (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x180125B00 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180126A34 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180013110 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x18001BEB0 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x18001BF60 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x18001CBC4 (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x18007B7DC (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$?0VWorkItem@CWorkFifo@@$0A@@?$shared_ptr@VWorkItem@CWorkFifo@@@std@@QEAA@PEAVWorkItem@CWorkFifo@@@Z @ 0x1801241A8 (--$-0VWorkItem@CWorkFifo@@$0A@@-$shared_ptr@VWorkItem@CWorkFifo@@@std@@QEAA@PEAVWorkItem@CWorkFi.c)
 *     ??$_Emplace_back_internal@AEBV?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@AEAAXAEBV?$shared_ptr@VWorkItem@CWorkFifo@@@1@@Z @ 0x18012435C (--$_Emplace_back_internal@AEBV-$shared_ptr@VWorkItem@CWorkFifo@@@std@@@-$deque@V-$shared_ptr@VWo.c)
 *     ?Initialize@CWorkFifo@@AEAAJXZ @ 0x1801256D8 (-Initialize@CWorkFifo@@AEAAJXZ.c)
 *     ?Initialize@WorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18012572C (-Initialize@WorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWorkFifo::ScheduleWorkItem(PTP_WORK *this, __int64 a2)
{
  __int64 v2; // rsi
  int v4; // eax
  void *v5; // rdx
  unsigned int v6; // edi
  _QWORD *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v13; // [rsp+20h] [rbp-68h] BYREF
  std::_Ref_count_base *v14; // [rsp+28h] [rbp-60h]
  _BYTE v15[88]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  struct _Mtx_internal_imp_t *v17; // [rsp+90h] [rbp+8h]

  v2 = a2;
  v17 = (struct _Mtx_internal_imp_t *)(this + 18);
  std::_Mutex_base::lock((std::_Mutex_base *)(this + 18));
  if ( std::_Atomic_storage<bool,1>::load((__int64)(this + 17)) )
    goto LABEL_17;
  v4 = CWorkFifo::Initialize((CWorkFifo *)this);
  v6 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
      (const char *)(unsigned int)v4);
    goto LABEL_18;
  }
  wil::details::ResetEvent(this[28], v5);
  v7 = operator new[](0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    *v7 = 0LL;
    v7[1] = 0LL;
  }
  std::shared_ptr<CWorkFifo::WorkItem>::shared_ptr<CWorkFifo::WorkItem>(&v13, v7);
  v8 = v13;
  if ( !v13 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
      (const char *)0x8007000ELL);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
LABEL_22:
    v6 = -2147024882;
    goto LABEL_18;
  }
  v9 = std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v15, v2);
  v10 = CWorkFifo::WorkItem::Initialize(v8, v9);
  v6 = v10;
  if ( v10 >= 0 )
  {
    try
    {
      std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::_Emplace_back_internal<std::shared_ptr<CWorkFifo::WorkItem> const &>(
        this + 12,
        &v13);
      if ( this[16] == (PTP_WORK)1 && !std::_Atomic_storage<bool,1>::load((__int64)this + 137) )
        SubmitThreadpoolWork(this[2]);
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
    }
    catch ( std::bad_alloc )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x62,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
        (const char *)0x8007000ELL);
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
      v2 = a2;
      goto LABEL_22;
    }
LABEL_17:
    v6 = 0;
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5B,
    (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
    (const char *)(unsigned int)v10);
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
LABEL_18:
  _Mtx_unlock(v17);
  std::_Func_class<void,>::~_Func_class<void,>(v2, v11);
  return v6;
}

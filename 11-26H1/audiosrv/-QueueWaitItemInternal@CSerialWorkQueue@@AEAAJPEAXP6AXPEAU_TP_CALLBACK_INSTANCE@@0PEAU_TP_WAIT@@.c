/*
 * XREFs of ?QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@J@ZV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@5@@Z @ 0x18001CA40
 * Callers:
 *     ?QueueRecurringWaitItem@CSerialWorkQueue@@QEAAJPEAXV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@3@@Z @ 0x18003FD48 (-QueueRecurringWaitItem@CSerialWorkQueue@@QEAAJPEAXV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_.c)
 * Callees:
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x18001BEB0 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x18001BF60 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?Initialize@CSerialWorkQueue@@AEAAJXZ @ 0x18001BFA0 (-Initialize@CSerialWorkQueue@@AEAAJXZ.c)
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x18001CBC4 (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 *     ?Initialize@_WaitTask@@QEAAJPEAXV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x18001CC00 (-Initialize@_WaitTask@@QEAAJPEAXV-$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z.c)
 *     ?reset@?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@std@@QEAAXPEAU_WaitTask@@@Z @ 0x1800462F4 (-reset@-$unique_ptr@U_WaitTask@@U-$default_delete@U_WaitTask@@@std@@@std@@QEAAXPEAU_WaitTask@@@Z.c)
 *     ??R?$default_delete@U_WaitTask@@@std@@QEBAXPEAU_WaitTask@@@Z @ 0x18004670C (--R-$default_delete@U_WaitTask@@@std@@QEBAXPEAU_WaitTask@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSerialWorkQueue::QueueWaitItemInternal(
        CSerialWorkQueue *this,
        HANDLE h,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v8; // esi
  PTP_WAIT *v9; // rax
  __int64 v10; // rcx
  PTP_WAIT *v11; // rdi
  PTP_WAIT *v12; // rbx
  __int64 v13; // rax
  PTP_WAIT ThreadpoolWait; // rax
  struct _TP_WAIT *v15; // rbp
  signed int LastError; // eax
  char v18[104]; // [rsp+20h] [rbp-68h] BYREF

  v8 = 0;
  if ( std::_Atomic_storage<bool,1>::load((__int64)this + 80) )
    goto LABEL_17;
  v8 = CSerialWorkQueue::Initialize((PTP_POOL *)this);
  if ( v8 < 0 )
    goto LABEL_17;
  v9 = (PTP_WAIT *)operator new[](0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v9;
  if ( v9 )
  {
    *v9 = 0LL;
    v9[1] = 0LL;
    v9[2] = 0LL;
    v9[3] = 0LL;
    v9[4] = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = v11;
  if ( v11 )
  {
    v13 = std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v18, a4);
    v8 = _WaitTask::Initialize(v11, h, v13, this);
    if ( v8 >= 0 )
    {
      ThreadpoolWait = CreateThreadpoolWait(
                         CSerialWorkQueue::RecurringWaitCallback,
                         v11,
                         (PTP_CALLBACK_ENVIRON)((char *)this + 8));
      v15 = ThreadpoolWait;
      if ( ThreadpoolWait )
      {
        v8 = 0;
        *v11 = ThreadpoolWait;
      }
      else
      {
        LastError = GetLastError();
        v8 = LastError;
        if ( LastError > 0 )
          v8 = (unsigned __int16)LastError | 0x80070000;
        *v11 = 0LL;
        if ( v8 < 0 )
          goto LABEL_15;
      }
      SetThreadpoolWait(v15, h, 0LL);
      v12 = 0LL;
      std::unique_ptr<_WaitTask>::reset(a5, v11);
    }
  }
  else
  {
    v8 = -2147024882;
  }
LABEL_15:
  if ( v12 )
    std::default_delete<_WaitTask>::operator()(v10, v12);
LABEL_17:
  std::_Func_class<void,>::~_Func_class<void,>(a4);
  return (unsigned int)v8;
}

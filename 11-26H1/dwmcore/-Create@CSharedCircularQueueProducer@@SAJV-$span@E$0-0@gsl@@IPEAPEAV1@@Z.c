/*
 * XREFs of ?Create@CSharedCircularQueueProducer@@SAJV?$span@E$0?0@gsl@@IPEAPEAV1@@Z @ 0x1802637A4
 * Callers:
 *     ?EnsureVailPerFrameDataHostReaderQueue@CSuperWetSource@@QEAAJI@Z @ 0x180263834 (-EnsureVailPerFrameDataHostReaderQueue@CSuperWetSource@@QEAAJI@Z.c)
 *     ?CreatePointQueue@CDelegatedInkCanvas@@AEAAJXZ @ 0x18026C8FC (-CreatePointQueue@CDelegatedInkCanvas@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0E$0?0$0?0$0A@@?$span@$$CBE$0?0@gsl@@QEAA@AEBV?$span@E$0?0@1@@Z @ 0x1801020F0 (--$-0E$0-0$0-0$0A@@-$span@$$CBE$0-0@gsl@@QEAA@AEBV-$span@E$0-0@1@@Z.c)
 *     ?Create@CSharedCircularQueue@@SAJV?$span@$$CBE$0?0@gsl@@IPEAPEAV1@@Z @ 0x1802636EC (-Create@CSharedCircularQueue@@SAJV-$span@$$CBE$0-0@gsl@@IPEAPEAV1@@Z.c)
 */

__int64 __fastcall CSharedCircularQueueProducer::Create(__int64 *a1, unsigned int a2, volatile __int32 ***a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  volatile __int32 **v8; // rax
  volatile __int32 *v9; // rcx
  int v10[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  volatile __int32 **v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  *(_OWORD *)v10 = *(_OWORD *)gsl::span<unsigned char const,-1>::span<unsigned char const,-1>(v11, a1);
  v5 = CSharedCircularQueue::Create((unsigned int *)v10, a2, &v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = v13;
    *a3 = v13;
    v9 = *v8;
    _InterlockedExchange(*v8, 0);
    _InterlockedExchange(v9 + 1, 0);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x92,
      (int)"onecoreuap\\windows\\DWM\\common\\shared\\SharedCircularQueue.h",
      (const char *)(unsigned int)v5);
    return v6;
  }
}

/*
 * XREFs of ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1402970A4
 * Callers:
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAUVIDMM_MULTI_ALLOC@@IE@Z @ 0x140295E70 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x140299A80 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGCONTEXT::WaitForQueuedPresentLimit(
        DXGCONTEXT *this,
        unsigned int a2,
        char a3,
        struct COREDEVICEACCESS *a4)
{
  int v8; // ebx
  __int64 v10; // r8
  int v11; // ebp
  const char *v12; // rdx

  if ( *((_BYTE *)this + 434) )
    return 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                             + 16LL)
                                                                                 + 736LL)
                                                                     + 8LL)
                                                         + 200LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 800LL),
         a2,
         0LL);
  if ( v8 != -1071775486 )
    goto LABEL_3;
  if ( !a3 )
    goto LABEL_9;
  COREDEVICEACCESS::Release(a4);
  LOBYTE(v10) = 1;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                              + 16LL)
                                                                                  + 736LL)
                                                                      + 8LL)
                                                          + 200LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 800LL),
         a2,
         v10);
  v11 = COREDEVICEACCESS::AcquireShared(a4, 0LL);
  if ( v11 >= 0 )
  {
LABEL_3:
    if ( v8 >= 0 )
      return (unsigned int)v8;
LABEL_9:
    WdLogSingleEntry2(4LL, v8, this);
    WdLogGlobalForLineNumber = 3700;
    if ( v8 != -1071775486 && v8 != -1073741130 && v8 != -1071775232 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3703;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(STATUS_GRAPHICS_ALLOCATION_BUSY == ntStatus) || (STATUS_DEVICE_REMOVED == ntStatus) || (STATUS_GRAPHIC"
                  "S_GPU_EXCEPTION_ON_DEVICE == ntStatus)",
        3703LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return (unsigned int)v8;
  }
  WdLogSingleEntry1(4LL);
  WdLogGlobalForLineNumber = 3692;
  COREDEVICEACCESS::AcquireSharedUncheck(a4, v12);
  return (unsigned int)v11;
}

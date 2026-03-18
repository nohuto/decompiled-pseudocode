/*
 * XREFs of ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x14003DEDC
 * Callers:
 *     ??1DXGPRESENTMUTEX@@QEAA@XZ @ 0x14003DEC4 (--1DXGPRESENTMUTEX@@QEAA@XZ.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1402BBFE4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall DXGPRESENTMUTEX::Release(DXGPRESENTMUTEX *this)
{
  __int64 v1; // rbx
  int v3; // edx
  int v4; // r8d

  if ( *((_BYTE *)this + 16) )
  {
    v1 = *((_QWORD *)this + 1) + 776LL;
    *((_BYTE *)this + 16) = 0;
    if ( *(struct _KTHREAD **)(v1 + 24) != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v1, 0LL, 0LL);
      WdLogGlobalForLineNumber = 553;
    }
    if ( *(int *)(v1 + 32) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 556;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            556,
            v3,
            v4,
            0LL,
            2,
            -1,
            (__int64)L"m_OwnerAcquireCount > 0",
            556LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( (*(_DWORD *)(v1 + 32))-- == 1 )
    {
      *(_QWORD *)(v1 + 24) = 0LL;
      ExReleasePushLockExclusiveEx(v1 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}

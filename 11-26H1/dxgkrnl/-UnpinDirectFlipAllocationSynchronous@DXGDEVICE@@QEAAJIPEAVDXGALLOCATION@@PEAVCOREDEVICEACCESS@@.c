/*
 * XREFs of ?UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x14031761C
 * Callers:
 *     ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1403171F0 (-DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x140317484 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x140007D70 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAI@Z @ 0x14003DE60 (-VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEA.c)
 *     ?VidMmIsAllocationPinned@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1400515D4 (-VidMmIsAllocationPinned@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x14005FCC4 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmWaitOnAllocationPresentQueue@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@I@Z @ 0x140070678 (-VidMmWaitOnAllocationPresentQueue@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@I.c)
 */

__int64 __fastcall DXGDEVICE::UnpinDirectFlipAllocationSynchronous(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGALLOCATION *a3,
        struct COREDEVICEACCESS *a4)
{
  unsigned int v8; // ebp
  __int64 v9; // rcx
  struct VIDMM_MULTI_ALLOC *v10; // r8
  struct DXGALLOCATION *v11; // r9
  char IsAllocationInPresentQueue; // r14
  int v13; // eax
  const char *v14; // rdx
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  if ( (unsigned __int8)VIDMM_EXPORT::VidMmIsAllocationPinned(
                          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                          *((struct VIDMM_MULTI_ALLOC **)a3 + 3)) )
  {
    v9 = *((_QWORD *)this + 2);
    v10 = (struct VIDMM_MULTI_ALLOC *)*((_QWORD *)a3 + 3);
    v16 = 0;
    IsAllocationInPresentQueue = VIDMM_EXPORT::VidMmIsAllocationInPresentQueue(
                                   *(VIDMM_EXPORT **)(v9 + 760),
                                   *(struct VIDMM_GLOBAL **)(v9 + 768),
                                   v10,
                                   &v16);
    if ( a4 )
      COREDEVICEACCESS::Release(a4);
    if ( IsAllocationInPresentQueue )
    {
      if ( v16 <= 1 )
      {
        v13 = VIDMM_EXPORT::VidMmWaitOnAllocationPresentQueue(
                *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                *((struct VIDMM_MULTI_ALLOC **)a3 + 3),
                a2);
        v8 = v13;
        if ( v13 < 0 )
        {
          WdLogSingleEntry3(3LL, a3, *((_QWORD *)a3 + 3), v13);
          WdLogGlobalForLineNumber = 7739;
        }
      }
    }
    DXGDEVICE::TestAndSetDisplayedPrimary(this, a2, a3, v11);
    if ( a4 )
      COREDEVICEACCESS::AcquireSharedUncheck(a4, v14);
    VIDMM_EXPORT::VidMmUnpinAllocation(
      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
      *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
      *((struct VIDMM_MULTI_ALLOC **)a3 + 3));
  }
  return v8;
}

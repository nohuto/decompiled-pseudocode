/*
 * XREFs of ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1402B5D04
 * Callers:
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAVDXGHWQUEUE@@UtagRECT@@2IPEBU3@PEAVCOREDEVICEACCESS@@@Z @ 0x1401F37FC (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAVDXGHWQUEUE@@UtagRECT@@2IPEBU3@PEAVCOREDEVICEACCESS@@.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1402B3814 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 * Callees:
 *     ?VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x140060570 (-VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall MapGpuVaForAllocation(
        struct ADAPTER_RENDER *a1,
        struct DXGDEVICE *a2,
        unsigned int a3,
        struct DXGALLOCATION *a4)
{
  __int64 v4; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // ebx
  char v11; // [rsp+20h] [rbp-69h]
  __int64 v12; // [rsp+40h] [rbp-49h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v13; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v14[14]; // [rsp+50h] [rbp-39h] BYREF

  v4 = *((_QWORD *)a1 + 95);
  v12 = 0LL;
  v13 = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, struct _VIDSCH_SYNC_OBJECT **))(*(_QWORD *)(v4 + 8) + 936LL))(
    *((_QWORD *)a2 + 99),
    a3,
    &v12,
    &v13);
  memset(v14, 0, 0x68uLL);
  v7 = *((_QWORD *)a1 + 2);
  v8 = *((_QWORD *)a4 + 3);
  v14[7] = 1LL;
  v14[2] = *(_QWORD *)(v7 + 2992);
  v14[3] = *(_QWORD *)(v7 + 3000);
  v11 = 1;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD *, char, int))(*(_QWORD *)(*((_QWORD *)a1 + 95) + 8LL)
                                                                                + 752LL))(
         *((_QWORD *)a1 + 96),
         v12,
         v8,
         v14,
         v11,
         -2);
  if ( v9 >= 0 )
  {
    if ( v9 == 259 )
    {
      v9 = 0;
      VIDMM_EXPORT::VidMmWaitForFences(*((VIDMM_EXPORT **)a1 + 95), *((struct VIDMM_GLOBAL **)a1 + 96), &v13, &v14[12]);
    }
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 7424;
  }
  return (unsigned int)v9;
}

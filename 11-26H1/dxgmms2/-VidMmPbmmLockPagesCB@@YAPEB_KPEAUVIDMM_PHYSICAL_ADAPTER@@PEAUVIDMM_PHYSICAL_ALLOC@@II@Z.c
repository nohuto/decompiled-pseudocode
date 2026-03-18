/*
 * XREFs of ?VidMmPbmmLockPagesCB@@YAPEB_KPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@II@Z @ 0x1400B09F8
 * Callers:
 *     ?PbmmMakePageResident@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@@Z @ 0x140052FE4 (-PbmmMakePageResident@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

const unsigned __int64 *__fastcall VidMmPbmmLockPagesCB(
        struct VIDMM_PHYSICAL_ADAPTER *a1,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  const unsigned __int64 *result; // rax

  v4 = *(_QWORD *)(*(_QWORD *)a2 + 216LL);
  v5 = *(_QWORD *)(*(_QWORD *)a2 + 224LL);
  v6 = (unsigned __int64)a3 << 12;
  v7 = (unsigned __int64)a4 << 12;
  if ( (*(int (__fastcall **)(__int64, __int64, _QWORD, unsigned __int64, unsigned __int64, int, _QWORD, _BYTE))(*(_QWORD *)v4 + 16LL))(
         v4,
         v5,
         *(_QWORD *)a2,
         v6,
         v7,
         2,
         *((_QWORD *)a1 + 7),
         0) >= 0 )
    return (const unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v4 + 72LL))(
                                       v4,
                                       v5,
                                       v6,
                                       v7);
  WdLogSingleEntry0(3LL);
  result = 0LL;
  WdLogGlobalForLineNumber = 3545;
  return result;
}

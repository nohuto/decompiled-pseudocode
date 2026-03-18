/*
 * XREFs of ?FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x140123D10
 * Callers:
 *     VidMmFreeDeferredMapping @ 0x140046D50 (VidMmFreeDeferredMapping.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ??_GVIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1400399A8 (--_GVIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::FreeDeferredMapping(struct VIDMM_LOCAL_ALLOC *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx

  v5 = *(_QWORD *)a1;
  if ( *((_DWORD *)a1 + 7) || *(_DWORD *)(v5 + 128) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 7LL, a1, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
    JUMPOUT(0x140123E4DLL);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 16, 0xFFFFFFFF) == 1 )
  {
    v6 = *(_QWORD *)(v5 + 224);
    if ( v6 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(v5 + 216) + 152LL))(
        *(_QWORD *)(v5 + 216),
        v6,
        *((_QWORD *)a1 + 9),
        *((_QWORD *)a1 + 2));
      *((_QWORD *)a1 + 9) = 0LL;
      *((_QWORD *)a1 + 2) = 0LL;
    }
    *((_BYTE *)a1 + 24) |= 2u;
    operator delete(a1);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 232), 0xFFFFFFFF) == 1
    && (*(_DWORD *)(v5 + 24) & 0x40000) != 0 )
  {
    v7 = *(_QWORD *)(v5 + 224);
    if ( v7 )
    {
      LOBYTE(a4) = 1;
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(v5 + 216) + 136LL))(
        *(_QWORD *)(v5 + 216),
        v7,
        *(_QWORD *)(v5 + 208),
        a4);
      *(_QWORD *)(v5 + 224) = 0LL;
      *(_QWORD *)(v5 + 208) = 0LL;
    }
    operator delete(*(void **)(v5 + 368));
    *(_DWORD *)(v5 + 24) |= 0x20000u;
    VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'((VIDMM_GLOBAL_ALLOC *)v5);
  }
}

/*
 * XREFs of ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1400B76D8
 * Callers:
 *     ?SuspendMemorySegmentAccess@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAJXZ @ 0x1400B2840 (-SuspendMemorySegmentAccess@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140101480 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidMmRotateLegacyAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PHYSICAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@P6AJ33PEAX@Z4TVIDMM_ROTATE_FLAGS@@@Z @ 0x140122398 (-VidMmRotateLegacyAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PHYSICAL_ALLOC@@W4_MM_ROTATE_DIRECT.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_SEGMENT::SuspendCpuAccess(VIDMM_SEGMENT *this)
{
  char *v1; // r13
  __int64 v2; // r8
  char *v4; // rsi
  int v5; // edi
  char *v6; // r12
  _QWORD **v7; // r12
  _QWORD *v8; // rbx
  _QWORD *v9; // r15
  _QWORD **v10; // r15
  _QWORD *v11; // r14
  struct VIDMM_ALLOC *v12; // rdx
  VIDMM_SEGMENT *v14; // r14
  char *v15; // rsi
  int v16; // eax
  VIDMM_SEGMENT *v17; // r14
  _QWORD *v18; // rsi
  int v19; // eax
  __int64 v20; // [rsp+20h] [rbp-88h]
  int v21; // [rsp+30h] [rbp-78h]
  __int64 v22; // [rsp+40h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-60h] BYREF

  v1 = (char *)this + 112;
  v2 = *((unsigned __int16 *)this + 34);
  v4 = (char *)*((_QWORD *)this + 14);
  v5 = 0;
  v22 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40320LL) + 8 * v2);
  while ( 1 )
  {
    v6 = v4;
    if ( v4 == v1 )
      break;
    v4 = *(char **)v4;
    v7 = (_QWORD **)(v6 + 16);
    v8 = *v7;
    while ( 1 )
    {
      v9 = v8;
      if ( v8 == v7 )
        break;
      v8 = (_QWORD *)*v8;
      v10 = (_QWORD **)(v9 + 2);
      v11 = *v10;
      while ( v11 != v10 )
      {
        v12 = (struct VIDMM_ALLOC *)(v11 - 7);
        v11 = (_QWORD *)*v11;
        v2 = **(_QWORD **)v12;
        if ( (*(_DWORD *)(*(_QWORD *)(v2 + 368) + 16LL) || (**(_DWORD **)(v2 + 368) & 0x20000) != 0)
          && *(_DWORD *)(v2 + 184) )
        {
          return (unsigned int)-1071775486;
        }
        if ( *(_DWORD *)(v2 + 184) )
          VIDMM_GLOBAL::FaultOneAllocation(*((VIDMM_GLOBAL **)this + 1), v12);
      }
    }
  }
  v14 = (VIDMM_SEGMENT *)*((_QWORD *)this + 17);
  while ( v14 != (VIDMM_SEGMENT *)((char *)this + 136) )
  {
    v15 = (char *)v14 - 240;
    v14 = *(VIDMM_SEGMENT **)v14;
    if ( (v15[36] & 1) != 0 )
    {
      memset(&ApcState, 0, sizeof(ApcState));
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v15 + 136));
      KeStackAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(*((_QWORD *)v15 + 6) + 8LL) + 16LL), &ApcState);
      v21 = 1;
      v20 = 0LL;
      v16 = VidMmRotateLegacyAllocation(*((_QWORD *)this + 1), *(_QWORD *)v15, 3LL);
      v5 = v16;
      if ( (int)(v16 + 0x80000000) >= 0 && v16 != -1073741558 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 4LL, 3LL, v16, 0LL);
        WdLogGlobalForLineNumber = 213;
        break;
      }
      if ( v16 == -1073741558 )
      {
        *((_DWORD *)v15 + 6) |= 0x10000u;
        v5 = 0;
      }
      v15[36] &= ~1u;
      KeUnstackDetachProcess(&ApcState);
      DXGFASTMUTEX::Release((struct _KTHREAD **)v15 + 17);
    }
  }
  if ( v5 >= 0 )
  {
    v17 = (VIDMM_SEGMENT *)*((_QWORD *)this + 33);
    while ( v17 != (VIDMM_SEGMENT *)((char *)this + 264) )
    {
      v18 = (_QWORD *)((char *)v17 - 240);
      v17 = *(VIDMM_SEGMENT **)v17;
      if ( *((_DWORD *)v18 + 46) )
      {
        LOBYTE(v2) = 1;
        LOBYTE(v20) = 0;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, _QWORD, int))(*(_QWORD *)v22 + 240LL))(
          v22,
          *v18,
          v2,
          0LL,
          v20,
          0LL,
          v21);
      }
      else if ( (*((_BYTE *)v18 + 36) & 1) != 0 )
      {
        memset(&ApcState, 0, sizeof(ApcState));
        DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v18 + 17));
        KeStackAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(v18[6] + 8LL) + 16LL), &ApcState);
        v21 = 1;
        v20 = 0LL;
        v19 = VidMmRotateLegacyAllocation(*((_QWORD *)this + 1), *v18, 3LL);
        v5 = v19;
        if ( (int)(v19 + 0x80000000) >= 0 && v19 != -1073741558 )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 4LL, 3LL, v19, 0LL);
          WdLogGlobalForLineNumber = 213;
          JUMPOUT(0x1400B7A22LL);
        }
        if ( v19 == -1073741558 )
        {
          *((_DWORD *)v18 + 6) |= 0x10000u;
          v5 = 0;
        }
        *((_BYTE *)v18 + 36) &= ~1u;
        KeUnstackDetachProcess(&ApcState);
        DXGFASTMUTEX::Release((struct _KTHREAD **)v18 + 17);
      }
    }
  }
  return (unsigned int)v5;
}

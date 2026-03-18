/*
 * XREFs of ?ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400F5444
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400F4754 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_GLO.c)
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x1400F5080 (-ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400F57D0 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400F57F0 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?AccessZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400F5868 (-AccessZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400F58E8 (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::ZeroIfNeeded(VIDMM_RECYCLE_MULTIRANGE *this)
{
  __int64 v2; // rdx
  VIDMM_PROCESS *v3; // rcx
  int v4; // edx
  __int64 v5; // r8
  char v6; // r9
  VIDMM_RECYCLE_RANGE *v7; // rbx
  VIDMM_PROCESS *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // [rsp+20h] [rbp-58h]
  struct _KAPC_STATE v14; // [rsp+28h] [rbp-50h] BYREF
  VIDMM_PROCESS *v15; // [rsp+58h] [rbp-20h]

  if ( dword_14008A520 )
  {
    v2 = *((_QWORD *)this + 10);
    v3 = *(VIDMM_PROCESS **)(*(_QWORD *)(*(_QWORD *)(v2 + 32) + 8LL) + 8LL);
    v15 = v3;
    v13 = 0;
    v4 = **(_DWORD **)(v2 + 32);
    if ( v4 == 9 || v4 == 10 )
    {
      VIDMM_PROCESS::SafeAttach(v3, &v14);
      v13 = 1;
    }
    v5 = *((_QWORD *)this + 8);
    v6 = 0;
    while ( !v6 )
    {
      if ( *(_DWORD *)(v5 + 80) == 3 )
      {
        VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(this);
        break;
      }
      if ( v5 == *((_QWORD *)this + 9) )
      {
        v6 = 1;
      }
      else
      {
        v11 = *(_QWORD *)(v5 + 120);
        v12 = *(_QWORD *)(v5 + 72);
        v5 = 0LL;
        if ( v11 != v12 + 72 )
          v5 = v11 - 120;
      }
    }
    v7 = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
    while ( 1 )
    {
      VIDMM_RECYCLE_RANGE::AccessZeroTransition(v7);
      if ( v7 == *((VIDMM_RECYCLE_RANGE **)this + 9) )
        break;
      v9 = *((_QWORD *)v7 + 15);
      v10 = *((_QWORD *)v7 + 9);
      v7 = 0LL;
      if ( v9 != v10 + 72 )
        v7 = (VIDMM_RECYCLE_RANGE *)(v9 - 120);
    }
    if ( v13 )
      VIDMM_PROCESS::SafeDetach(v8, &v14);
  }
}

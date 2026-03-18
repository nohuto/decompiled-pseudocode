/*
 * XREFs of ?LockHeapAllocation@VIDMM_PARAVIRTUALIZATION_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@_N@Z @ 0x1400B5310
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     LockChildPages @ 0x14004D084 (LockChildPages.c)
 *     MapGpadl @ 0x14004D10C (MapGpadl.c)
 *     UnmapGpadl @ 0x14004D158 (UnmapGpadl.c)
 */

__int64 __fastcall VIDMM_PARAVIRTUALIZATION_HEAP::LockHeapAllocation(
        VIDMM_PARAVIRTUALIZATION_HEAP *this,
        struct VIDMM_HEAP_ALLOC *a2,
        struct VIDMM_GLOBAL_ALLOC *a3)
{
  int v3; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  int v12; // edi
  __int64 v13; // rcx
  struct _MDL *v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  struct _MDL *Mdl; // [rsp+78h] [rbp+10h]

  v3 = *((_DWORD *)a2 + 8);
  if ( (v3 & 1) != 0 )
    return 0LL;
  if ( (v3 & 2) != 0 )
  {
    v7 = *((unsigned int *)a2 + 6);
    if ( (_DWORD)v7 )
    {
      if ( v7 != *((_QWORD *)a2 + 1) >> 12 )
      {
        WdLogSingleEntry0(1LL);
        v9 = 180;
LABEL_7:
        WdLogGlobalForLineNumber = v9;
        DxgkLogInternalTriageEvent(v8, 0x40000LL);
        return 3221225485LL;
      }
      Mdl = IoAllocateMdl(0LL, *((_DWORD *)a2 + 2), 0, 0, 0LL);
      if ( !Mdl )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 188;
        DxgkLogInternalTriageEvent(v10, 0x40000LL);
        return 3221225495LL;
      }
      v11 = LockChildPages(*(_QWORD *)(*((_QWORD *)this + 1) + 72LL));
      v12 = v11;
      if ( v11 < 0 )
      {
        WdLogSingleEntry1(1LL, v11);
        WdLogGlobalForLineNumber = 200;
        DxgkLogInternalTriageEvent(v13, 0x40000LL);
        IoFreeMdl(Mdl);
        return (unsigned int)v12;
      }
      v14 = Mdl;
    }
    else
    {
      if ( !*((_DWORD *)a2 + 4) )
      {
        WdLogSingleEntry0(1LL);
        v9 = 209;
        goto LABEL_7;
      }
      v12 = MapGpadl();
      if ( v12 < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 223;
        DxgkLogInternalTriageEvent(v15, 0x40000LL);
        return (unsigned int)v12;
      }
      v14 = 0LL;
      v16 = *((_QWORD *)a2 + 1);
      if ( MEMORY[0x28] < v16 )
      {
        WdLogSingleEntry2(1LL, MEMORY[0x28], v16);
        WdLogGlobalForLineNumber = 231;
        DxgkLogInternalTriageEvent(MEMORY[0x28], 0x40000LL);
        UnmapGpadl();
        return 3221225485LL;
      }
    }
    *(_QWORD *)a2 = v14;
    return 0LL;
  }
  return 3221225659LL;
}

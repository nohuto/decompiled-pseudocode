/*
 * XREFs of ?ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1400F9568
 * Callers:
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400F964C (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

void __fastcall VIDMM_LINEAR_POOL::ReclaimBlock(VIDMM_LINEAR_POOL *this, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  char *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx

  if ( !*((_DWORD *)this + 4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2329;
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
  }
  --*((_DWORD *)this + 4);
  v4 = a2 + 3;
  v5 = a2[3];
  if ( *(_QWORD **)(v5 + 8) != a2 + 3
    || (v6 = (_QWORD *)a2[4], (_QWORD *)*v6 != v4)
    || (*v6 = v5,
        v7 = (char *)this + 64,
        *(_QWORD *)(v5 + 8) = v6,
        v8 = *(_QWORD *)v7,
        *(char **)(*(_QWORD *)v7 + 8LL) != v7) )
  {
    __fastfail(3u);
  }
  a2[4] = v7;
  *v4 = v8;
  *(_QWORD *)(v8 + 8) = v4;
  *(_QWORD *)v7 = v4;
  *((_BYTE *)a2 + 56) = 3;
}

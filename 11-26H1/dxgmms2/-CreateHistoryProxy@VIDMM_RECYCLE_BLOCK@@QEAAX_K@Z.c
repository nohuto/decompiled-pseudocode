/*
 * XREFs of ?CreateHistoryProxy@VIDMM_RECYCLE_BLOCK@@QEAAX_K@Z @ 0x14004F464
 * Callers:
 *     ??0VIDMM_RECYCLE_BLOCK@@QEAA@PEAVVIDMM_RECYCLE_HEAP@@@Z @ 0x140117F38 (--0VIDMM_RECYCLE_BLOCK@@QEAA@PEAVVIDMM_RECYCLE_HEAP@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::CreateHistoryProxy(VIDMM_RECYCLE_BLOCK *this, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rax
  _QWORD *v8; // rax

  v4 = operator new(56LL, 0x31316956u, 256LL);
  if ( v4 )
  {
    *(_QWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_BYTE *)(v4 + 16) = 0;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_BYTE *)(v4 + 40) = 0;
    *(_QWORD *)(v4 + 48) = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  *((_QWORD *)this + 19) = v4;
  if ( !v4 )
  {
    _InterlockedIncrement(&dword_14008A754);
    WdLogSingleEntry0(6LL);
    v6 = 1041;
LABEL_6:
    WdLogGlobalForLineNumber = v6;
    DxgkLogInternalTriageEvent(v5, 262145LL);
    return;
  }
  v7 = 288 * a2;
  if ( !is_mul_ok(2 * a2, 0x90uLL) )
    v7 = -1LL;
  **((_QWORD **)this + 19) = operator new[](v7, 0x31316956u, 256LL);
  v8 = (_QWORD *)*((_QWORD *)this + 19);
  if ( !*v8 )
  {
    operator delete(*((void **)this + 19));
    *((_QWORD *)this + 19) = 0LL;
    _InterlockedIncrement(&dword_14008A754);
    WdLogSingleEntry0(6LL);
    v6 = 1057;
    goto LABEL_6;
  }
  v8[6] = a2;
  *(_QWORD *)(*((_QWORD *)this + 19) + 24LL) = **((_QWORD **)this + 19) + 144 * a2;
}

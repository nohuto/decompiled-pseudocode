/*
 * XREFs of ?UpdateMoveSizeDataForCancelation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A8740
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x140251998 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?SHData_ResetRuntimeState@MOVESIZEDATA@@QEAAXXZ @ 0x1402288C0 (-SHData_ResetRuntimeState@MOVESIZEDATA@@QEAAXXZ.c)
 */

void __fastcall UpdateMoveSizeDataForCancelation(struct MOVESIZEDATA *this)
{
  __int128 v1; // xmm0
  __int64 v2; // r10
  unsigned int v4; // ecx
  _DWORD *v5; // r8
  _DWORD *v6; // r9
  __int64 v7; // rdx
  int v8; // eax

  v1 = *(_OWORD *)((char *)this + 136);
  v2 = *((_QWORD *)this + 28);
  *((_QWORD *)this + 27) = v2;
  *(_OWORD *)((char *)this + 24) = v1;
  v4 = *((_DWORD *)this + 50);
  v7 = v4 >> 29;
  v5 = (_DWORD *)((char *)this + 232);
  v6 = (_DWORD *)((char *)this + 248);
  LOBYTE(v7) = (v4 >> 28) ^ v7;
  if ( (v7 & 1) != 0 || *v6 != *v5 )
    v8 = 0x4000;
  else
    v8 = 0;
  *((_QWORD *)this + 30) = v2;
  *v6 = *v5;
  *((_DWORD *)this + 50) = (v8 | v4 & 0xFFFFBFFF | 0x400) ^ ((v8 | v4 & 0xFFFFBFFF | 0x400) ^ ((v8 | v4 & 0xFFFFBFFF | 0x400) >> 1)) & 0x10000000;
  MOVESIZEDATA::SHData_ResetRuntimeState(this, v7);
  *((_DWORD *)this + 50) &= ~0x8000u;
}

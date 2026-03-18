/*
 * XREFs of ?UpdateMoveSizeDataForCancelation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x14028A9FC
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14005DE80 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?SHData_ResetRuntimeState@MOVESIZEDATA@@QEAAXXZ @ 0x14019DA2C (-SHData_ResetRuntimeState@MOVESIZEDATA@@QEAAXXZ.c)
 */

void __fastcall UpdateMoveSizeDataForCancelation(struct MOVESIZEDATA *this)
{
  unsigned int v1; // r8d
  __int128 v2; // xmm0
  __int64 v3; // r10
  _DWORD *v5; // rcx
  _DWORD *v6; // rdx
  int v7; // r9d

  v1 = *((_DWORD *)this + 50);
  v2 = *(_OWORD *)((char *)this + 136);
  v3 = *((_QWORD *)this + 28);
  *((_QWORD *)this + 27) = v3;
  *(_OWORD *)((char *)this + 24) = v2;
  if ( ((v1 ^ (v1 >> 1)) & 0x10000000) != 0 )
  {
    v5 = (_DWORD *)((char *)this + 232);
    v6 = (_DWORD *)((char *)this + 248);
  }
  else
  {
    v6 = (_DWORD *)((char *)this + 248);
    v5 = (_DWORD *)((char *)this + 232);
    if ( *v6 == *v5 )
    {
      v7 = 0;
      goto LABEL_4;
    }
  }
  v7 = 0x4000;
LABEL_4:
  *v6 = *v5;
  *((_QWORD *)this + 30) = v3;
  *((_DWORD *)this + 50) = (v7 | v1 & 0xFFFFBFFF | 0x400) ^ ((v7 | v1 & 0xFFFFBFFF | 0x400) ^ ((v7 | v1 & 0xFFFFBFFF | 0x400) >> 1)) & 0x10000000;
  MOVESIZEDATA::SHData_ResetRuntimeState(this, (__int64)v6);
  *((_DWORD *)this + 50) &= ~0x8000u;
}

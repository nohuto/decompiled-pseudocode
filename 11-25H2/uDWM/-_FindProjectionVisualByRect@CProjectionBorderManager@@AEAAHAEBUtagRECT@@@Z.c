/*
 * XREFs of ?_FindProjectionVisualByRect@CProjectionBorderManager@@AEAAHAEBUtagRECT@@@Z @ 0x1800C3C1C
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800C2880 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall CProjectionBorderManager::_FindProjectionVisualByRect(
        CProjectionBorderManager *this,
        const struct tagRECT *a2)
{
  unsigned int v2; // edi
  unsigned int i; // ebx
  struct tagRECT rcDst; // [rsp+20h] [rbp-38h] BYREF

  v2 = -1;
  for ( i = 0; i < *((_DWORD *)this + 106); ++i )
  {
    rcDst = 0LL;
    if ( IntersectRect(&rcDst, a2, (const RECT *)(*((_QWORD *)this + 50) + 56LL * i + 8)) )
      return i;
  }
  return v2;
}

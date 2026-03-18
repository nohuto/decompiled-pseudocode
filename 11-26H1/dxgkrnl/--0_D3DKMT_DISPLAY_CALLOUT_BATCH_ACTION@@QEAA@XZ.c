/*
 * XREFs of ??0_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@QEAA@XZ @ 0x14007376C
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x140410AB0 (DxgkPollDisplayChildrenInternal.c)
 * Callees:
 *     <none>
 */

_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *__fastcall _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION::_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION(
        _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *this)
{
  _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *result; // rax

  *(_WORD *)this = 0;
  *(_QWORD *)((char *)this + 4) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_BYTE *)this + 24) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  result = this;
  *((_QWORD *)this + 10) = 0LL;
  return result;
}

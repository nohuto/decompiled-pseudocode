/*
 * XREFs of ??0DXGHWQUEUE@@IEAA@PEAVDXGCONTEXT@@@Z @ 0x14034F484
 * Callers:
 *     ?CreateHwQueueForUserModeSubmission@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1401E147C (-CreateHwQueueForUserModeSubmission@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISS.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x14034F208 (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 */

DXGHWQUEUE *__fastcall DXGHWQUEUE::DXGHWQUEUE(DXGHWQUEUE *this, struct DXGCONTEXT *a2)
{
  DXGHWQUEUE *result; // rax

  *((_QWORD *)this + 2) = a2;
  *(_OWORD *)this = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 1LL;
  *((_BYTE *)this + 120) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *((_WORD *)this + 74) = 0;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  memset((char *)this + 168, 0, 0x40uLL);
  result = this;
  *((_BYTE *)this + 232) = 0;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  return result;
}

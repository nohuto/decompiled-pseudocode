/*
 * XREFs of ??0DISPLAY_SOURCE@@QEAA@XZ @ 0x1401A0B94
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x14038FCD0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 */

DISPLAY_SOURCE *__fastcall DISPLAY_SOURCE::DISPLAY_SOURCE(DISPLAY_SOURCE *this)
{
  __int64 v2; // rcx
  _DWORD *v3; // rax

  *((_BYTE *)this + 944) = 1;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 4) = -1;
  *((_DWORD *)this + 268) = -1;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_DWORD *)this + 156) = 0;
  *((_BYTE *)this + 704) = 0;
  *(_QWORD *)((char *)this + 708) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_DWORD *)this + 184) = 0;
  *((_QWORD *)this + 93) = 0LL;
  *((_QWORD *)this + 95) = 0LL;
  *((_DWORD *)this + 204) = 0;
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 114) = 0LL;
  *((_QWORD *)this + 115) = 0LL;
  *((_BYTE *)this + 928) = 0;
  *(_QWORD *)((char *)this + 1076) = 0LL;
  *((_QWORD *)this + 136) = 0LL;
  *((_DWORD *)this + 274) = 0;
  *((_BYTE *)this + 1100) = 0;
  *((_DWORD *)this + 276) = -1;
  *((_DWORD *)this + 279) = -1;
  *((_DWORD *)this + 280) = -1;
  *((_QWORD *)this + 141) = 0LL;
  *((_QWORD *)this + 142) = 0LL;
  *((_DWORD *)this + 286) = 0;
  *((_DWORD *)this + 287) = 43;
  *((_DWORD *)this + 288) = 88;
  *((_WORD *)this + 580) = 0;
  *((_BYTE *)this + 3744) = 0;
  *((_QWORD *)this + 473) = 0LL;
  *((_BYTE *)this + 3792) = 0;
  *((_DWORD *)this + 949) = -1;
  *((_DWORD *)this + 950) = -1;
  *((_DWORD *)this + 951) = 0;
  *((_QWORD *)this + 477) = 0LL;
  *((_QWORD *)this + 478) = 0LL;
  *((_QWORD *)this + 479) = 0LL;
  *((_DWORD *)this + 960) = 0;
  *((_DWORD *)this + 961) = -1;
  *((_DWORD *)this + 962) = 1;
  *((_DWORD *)this + 1004) = 0;
  *(_OWORD *)((char *)this + 628) = 0LL;
  *(_OWORD *)((char *)this + 644) = 0LL;
  *(_OWORD *)((char *)this + 660) = 0LL;
  *(_QWORD *)((char *)this + 676) = 0LL;
  *((_DWORD *)this + 171) = 0;
  *((_OWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *(_QWORD *)((char *)this + 716) = 0LL;
  *(_OWORD *)((char *)this + 948) = 0LL;
  *(_OWORD *)((char *)this + 964) = 0LL;
  *(_QWORD *)((char *)this + 980) = 0LL;
  *((_DWORD *)this + 247) = 0;
  memset((char *)this + 992, 0, 0x50uLL);
  *(_QWORD *)((char *)this + 1108) = 0LL;
  memset((char *)this + 88, 0, 0x200uLL);
  *(_OWORD *)((char *)this + 776) = 0LL;
  *(_OWORD *)((char *)this + 792) = 0LL;
  *((_QWORD *)this + 101) = 0LL;
  *(_OWORD *)((char *)this + 824) = 0LL;
  *(_OWORD *)((char *)this + 840) = 0LL;
  *((_QWORD *)this + 107) = 0LL;
  *((_OWORD *)this + 54) = 0LL;
  *((_OWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 112) = 0LL;
  memset((char *)this + 1168, 0, 0x690uLL);
  memset((char *)this + 2848, 0, 0x50uLL);
  *((_QWORD *)this + 366) = 0LL;
  *((_WORD *)this + 1468) = 0;
  memset((char *)this + 2944, 0, 0x320uLL);
  v2 = 10LL;
  *(_OWORD *)((char *)this + 3748) = 0LL;
  *(_OWORD *)((char *)this + 3764) = 0LL;
  *((_DWORD *)this + 945) = 0;
  v3 = (_DWORD *)((char *)this + 1172);
  do
  {
    *(v3 - 1) = -1;
    *v3 = -1;
    v3 += 42;
    --v2;
  }
  while ( v2 );
  *((_DWORD *)this + 712) = -1;
  *((_DWORD *)this + 713) = -1;
  *((_DWORD *)this + 185) = 0;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 117);
  memset((char *)this + 3856, 0, 0xA0uLL);
  return this;
}

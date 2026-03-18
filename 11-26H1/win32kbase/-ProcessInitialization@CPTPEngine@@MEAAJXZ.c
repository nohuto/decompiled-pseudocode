/*
 * XREFs of ?ProcessInitialization@CPTPEngine@@MEAAJXZ @ 0x1402270D0
 * Callers:
 *     <none>
 * Callees:
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1401058D4 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ??0TPTHRESHOLDS@@QEAA@XZ @ 0x140173990 (--0TPTHRESHOLDS@@QEAA@XZ.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall CPTPEngine::ProcessInitialization(CPTPEngine *this)
{
  TPTHRESHOLDS *v2; // rax
  __int128 v3; // xmm0
  __int64 result; // rax
  _BYTE v5[216]; // [rsp+20h] [rbp-D8h] BYREF

  *((_DWORD *)this + 768) |= 0x2000000u;
  *((_DWORD *)this + 706) = 1;
  CPTPEngine::TPAAPSetCurtainState(this, 0);
  memset(v5, 0, 0xD0uLL);
  v2 = TPTHRESHOLDS::TPTHRESHOLDS((TPTHRESHOLDS *)v5);
  *(_OWORD *)((char *)this + 3080) = *(_OWORD *)v2;
  *(_OWORD *)((char *)this + 3096) = *((_OWORD *)v2 + 1);
  *(_OWORD *)((char *)this + 3112) = *((_OWORD *)v2 + 2);
  *(_OWORD *)((char *)this + 3128) = *((_OWORD *)v2 + 3);
  *(_OWORD *)((char *)this + 3144) = *((_OWORD *)v2 + 4);
  *(_OWORD *)((char *)this + 3160) = *((_OWORD *)v2 + 5);
  *(_OWORD *)((char *)this + 3176) = *((_OWORD *)v2 + 6);
  v3 = *((_OWORD *)v2 + 7);
  v2 = (TPTHRESHOLDS *)((char *)v2 + 128);
  *(_OWORD *)((char *)this + 3192) = v3;
  *(_OWORD *)((char *)this + 3208) = *(_OWORD *)v2;
  *(_OWORD *)((char *)this + 3224) = *((_OWORD *)v2 + 1);
  *(_OWORD *)((char *)this + 3240) = *((_OWORD *)v2 + 2);
  *(_OWORD *)((char *)this + 3256) = *((_OWORD *)v2 + 3);
  *(_OWORD *)((char *)this + 3272) = *((_OWORD *)v2 + 4);
  *((_DWORD *)this + 800) *= 10000 * *((_DWORD *)this + 800);
  *((_DWORD *)this + 801) *= 10000 * *((_DWORD *)this + 801);
  *((_DWORD *)this + 822) = 0;
  *((_DWORD *)this + 823) = 500;
  *((_DWORD *)this + 824) = 750;
  *((_DWORD *)this + 825) = 1250;
  *((_QWORD *)this + 413) = 1250LL;
  *((_DWORD *)this + 828) = 250;
  *((_DWORD *)this + 829) = 500;
  *((_DWORD *)this + 830) = 750;
  *(_QWORD *)((char *)this + 3324) = 750LL;
  *((_DWORD *)this + 833) = 150;
  *((_DWORD *)this + 834) = 300;
  *((_DWORD *)this + 835) = 500;
  *((_QWORD *)this + 418) = 750LL;
  *((_DWORD *)this + 838) = 4000;
  *((_DWORD *)this + 839) = 2000;
  *((_DWORD *)this + 840) = 1000;
  *((_DWORD *)this + 841) = 1000;
  *((_DWORD *)this + 842) = 2000;
  *((_DWORD *)this + 843) = 1000;
  result = 0LL;
  *((_DWORD *)this + 844) = 500;
  *((_DWORD *)this + 845) = 50;
  return result;
}

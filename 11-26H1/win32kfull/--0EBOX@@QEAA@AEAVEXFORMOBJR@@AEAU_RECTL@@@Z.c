/*
 * XREFs of ??0EBOX@@QEAA@AEAVEXFORMOBJR@@AEAU_RECTL@@@Z @ 0x140112740
 * Callers:
 *     ?GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z @ 0x140111F1C (-GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z.c)
 * Callees:
 *     <none>
 */

EBOX *__fastcall EBOX::EBOX(EBOX *this, struct EXFORMOBJR *a2, struct _RECTL *a3)
{
  __int128 v3; // xmm0
  _QWORD *v4; // rbx

  v3 = (__int128)*a3;
  *(_QWORD *)this = 0LL;
  v4 = (_QWORD *)((char *)this + 8);
  *((_OWORD *)this + 4) = v3;
  *((_DWORD *)this + 2) = a3->right;
  *((_DWORD *)this + 3) = a3->top;
  *((_DWORD *)this + 4) = a3->left;
  *((_DWORD *)this + 5) = a3->top;
  *((_DWORD *)this + 6) = a3->left;
  *((_DWORD *)this + 7) = a3->bottom;
  EXFORMOBJR::bXformRound(a2, (const struct _POINTL *)this + 1, (struct _POINTFIX *)this + 1, 3uLL);
  *((_QWORD *)this + 6) = *v4;
  *((_DWORD *)this + 12) -= *((_DWORD *)this + 4);
  *((_DWORD *)this + 13) -= *((_DWORD *)this + 5);
  *((_QWORD *)this + 7) = *((_QWORD *)this + 2);
  *((_DWORD *)this + 14) -= *((_DWORD *)this + 6);
  *((_DWORD *)this + 15) -= *((_DWORD *)this + 7);
  *((_QWORD *)this + 4) = *((_QWORD *)this + 3);
  *((_DWORD *)this + 8) += *((_DWORD *)this + 12);
  *((_DWORD *)this + 9) += *((_DWORD *)this + 13);
  *((_DWORD *)this + 12) = (*((_DWORD *)this + 12) + 1) >> 1;
  *((_DWORD *)this + 13) = (*((_DWORD *)this + 13) + 1) >> 1;
  *((_DWORD *)this + 14) = (*((_DWORD *)this + 14) + 1) >> 1;
  *((_DWORD *)this + 15) = (*((_DWORD *)this + 15) + 1) >> 1;
  *((_QWORD *)this + 5) = *((_QWORD *)this + 3);
  *((_DWORD *)this + 10) += *((_DWORD *)this + 12);
  *((_DWORD *)this + 11) += *((_DWORD *)this + 13);
  *((_DWORD *)this + 10) += *((_DWORD *)this + 14);
  *((_DWORD *)this + 11) += *((_DWORD *)this + 15);
  return this;
}

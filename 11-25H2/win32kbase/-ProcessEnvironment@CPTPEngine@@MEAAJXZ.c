/*
 * XREFs of ?ProcessEnvironment@CPTPEngine@@MEAAJXZ @ 0x140129210
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400637C8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?UpdatePTPRightClickZone@CPTPEngine@@AEAAXXZ @ 0x1401293DC (-UpdatePTPRightClickZone@CPTPEngine@@AEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CPTPEngine::ProcessEnvironment(CPTPEngine *this)
{
  __int64 v2; // r8
  __int128 v3; // xmm1
  double v4; // xmm0_8
  unsigned __int64 v5; // rcx
  double v6; // xmm0_8
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  int v9; // r8d
  int v10; // edx
  int v11; // edx
  __int64 v12; // rcx

  if ( !*((_BYTE *)this + 808) )
  {
    (*(void (__fastcall **)(CPTPEngine *))(*(_QWORD *)this + 56LL))(this);
    *((_BYTE *)this + 808) = 1;
  }
  CPTPEngine::UpdatePTPRightClickZone(this);
  v2 = *((_QWORD *)this + 12);
  v3 = *((_OWORD *)this + 4);
  v4 = (double)*((int *)this + 810);
  *((_QWORD *)this + 363) = v2 * (unsigned __int64)*((unsigned int *)this + 772) / 0x3E8;
  v5 = v2 * *((unsigned int *)this + 783);
  *((double *)this + 368) = v4 / 1000.0;
  v6 = (double)*((int *)this + 809) / 1000.0;
  *((_QWORD *)this + 364) = v5 / 0x3E8;
  v7 = v2 * *((unsigned int *)this + 796);
  *((double *)this + 369) = v6;
  *(_OWORD *)((char *)this + 3032) = v3;
  *((_QWORD *)this + 365) = v7 / 0x3E8;
  *((_QWORD *)this + 366) = v2 * (unsigned __int64)*((unsigned int *)this + 820) / 0x3E8;
  v8 = v2 * *((unsigned int *)this + 791);
  *((_DWORD *)this + 770) &= 0xE7FFFFFF;
  *((_QWORD *)this + 367) = v8 / 0x3E8;
  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)this + 108)) )
  {
    v9 |= 0x8000000u;
    *((_DWORD *)this + 770) = v9;
  }
  v10 = v9;
  if ( *((_DWORD *)this + 42) && !IsRectEmptyInl((const struct tagRECT *)((char *)this + 124)) )
    v10 |= 0x10000000u;
  v11 = v10 | 0x20000000;
  *((_DWORD *)this + 770) = v11;
  v12 = *(_QWORD *)((char *)this + 140) - *((_QWORD *)this + 4);
  if ( !v12 )
    v12 = *(_QWORD *)((char *)this + 148) - *((_QWORD *)this + 5);
  if ( v12 )
    *((_DWORD *)this + 770) = v11 & 0xDFFFFFFF;
  return 0LL;
}

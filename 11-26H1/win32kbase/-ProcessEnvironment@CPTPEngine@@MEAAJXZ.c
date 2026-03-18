/*
 * XREFs of ?ProcessEnvironment@CPTPEngine@@MEAAJXZ @ 0x1401B1A90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400828BC (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CPTPEngine::ProcessEnvironment(CPTPEngine *this)
{
  int v2; // r9d
  __int64 v3; // r8
  unsigned __int64 v4; // rcx
  double v5; // xmm0_8
  unsigned __int64 v6; // rcx
  double v7; // xmm0_8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  int v10; // r8d
  int v11; // edx
  int v12; // edx
  __int128 v14; // [rsp+20h] [rbp-18h]

  if ( !*((_BYTE *)this + 808) )
  {
    (*(void (__fastcall **)(CPTPEngine *))(*(_QWORD *)this + 56LL))(this);
    *((_BYTE *)this + 808) = 1;
  }
  v2 = *((_DWORD *)this + 7);
  v14 = *((_OWORD *)this + 5);
  *((_OWORD *)this + 188) = v14;
  if ( v2 )
  {
    *((_DWORD *)this + 754) = DWORD2(v14) - v14;
    *((_DWORD *)this + 752) = 0;
  }
  v3 = *((_QWORD *)this + 12);
  v4 = v3 * *((unsigned int *)this + 770);
  *((_OWORD *)this + 189) = *((_OWORD *)this + 4);
  v5 = (double)*((int *)this + 807);
  *((_QWORD *)this + 363) = v4 / 0x3E8;
  v6 = v3 * *((unsigned int *)this + 781);
  *((double *)this + 367) = v5 / 1000.0;
  v7 = (double)*((int *)this + 806) / 1000.0;
  *((_QWORD *)this + 364) = v6 / 0x3E8;
  v8 = v3 * *((unsigned int *)this + 793);
  *((double *)this + 368) = v7;
  *((_QWORD *)this + 365) = v8 / 0x3E8;
  v9 = v3 * *((unsigned int *)this + 817);
  *((_DWORD *)this + 768) = (v2 << 16) & 0xE7FFFFFF ^ (*((_DWORD *)this + 768) ^ (v2 << 16)) & 0xE7FEFFFF;
  *((_QWORD *)this + 366) = v9 / 0x3E8;
  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)this + 108)) )
  {
    v10 |= 0x8000000u;
    *((_DWORD *)this + 768) = v10;
  }
  v11 = v10;
  if ( *((_DWORD *)this + 42) && !IsRectEmptyInl((const struct tagRECT *)((char *)this + 124)) )
    v11 |= 0x10000000u;
  v12 = v11 | 0x20000000;
  *((_DWORD *)this + 768) = v12;
  if ( *(_QWORD *)((char *)this + 140) != *((_QWORD *)this + 4)
    || *(_QWORD *)((char *)this + 148) != *((_QWORD *)this + 5) )
  {
    *((_DWORD *)this + 768) = v12 & 0xDFFFFFFF;
  }
  return 0LL;
}

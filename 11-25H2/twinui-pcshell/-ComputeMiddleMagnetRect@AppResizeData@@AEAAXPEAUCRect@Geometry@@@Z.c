/*
 * XREFs of ?ComputeMiddleMagnetRect@AppResizeData@@AEAAXPEAUCRect@Geometry@@@Z @ 0x180512568
 * Callers:
 *     ?ComputeDropTargets@AppResizeData@@AEAAJXZ @ 0x1805120F8 (-ComputeDropTargets@AppResizeData@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall AppResizeData::ComputeMiddleMagnetRect(AppResizeData *this, struct Geometry::CRect *a2)
{
  __int64 v2; // rcx
  int v4; // r8d
  int v5; // ecx
  int v6; // edx
  float v7; // xmm0_4
  unsigned int v8; // edx
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+40h] [rbp-18h]

  v2 = *((_QWORD *)this + 5);
  v11 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v2 + 24LL))(v2, &v9);
  v4 = v9;
  v5 = HIDWORD(v9);
  v6 = DWORD2(v9) - v9;
  *((_DWORD *)a2 + 1) = DWORD1(v9);
  *((_DWORD *)a2 + 3) = v5;
  v7 = (float)(100 * v10) / 100.0;
  v8 = (unsigned int)(v6 - (int)v7) >> 1;
  *(_DWORD *)a2 = v8 + v4;
  *((_DWORD *)a2 + 2) = (int)v7 + v8 + v4;
}

/*
 * XREFs of ?ComputeMiddleMagnetRect@AppResizeData@@AEAAXPEAUCRect@Geometry@@@Z @ 0x180534CAC
 * Callers:
 *     ?ComputeDropTargets@AppResizeData@@AEAAJXZ @ 0x18053483C (-ComputeDropTargets@AppResizeData@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall AppResizeData::ComputeMiddleMagnetRect(AppResizeData *this, struct Geometry::CRect *a2)
{
  __int64 v2; // rcx
  int v4; // r8d
  __int64 v5; // kr00_8
  float v6; // xmm0_4
  unsigned int v7; // edx
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+40h] [rbp-18h]

  v2 = *((_QWORD *)this + 5);
  v10 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v2 + 24LL))(v2, &v8);
  v4 = v8;
  v5 = *((_QWORD *)&v8 + 1);
  *((_DWORD *)a2 + 1) = DWORD1(v8);
  *((_DWORD *)a2 + 3) = HIDWORD(v5);
  v6 = (float)(100 * v9) / 100.0;
  v7 = (unsigned int)(v5 - (int)v6 - v4) >> 1;
  *(_DWORD *)a2 = v7 + v4;
  *((_DWORD *)a2 + 2) = (int)v6 + v7 + v4;
}

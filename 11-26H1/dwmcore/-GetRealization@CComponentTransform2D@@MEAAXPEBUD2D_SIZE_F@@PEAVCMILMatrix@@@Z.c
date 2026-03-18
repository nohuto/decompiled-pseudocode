/*
 * XREFs of ?GetRealization@CComponentTransform2D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18026A5F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComponentTransform2D::GetRealization(
        CComponentTransform2D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  FLOAT height; // xmm1_4
  __int64 v5; // rax
  int v6; // xmm0_4
  int v7; // xmm1_4
  int v8; // xmm0_4
  int v9; // xmm1_4
  int v10; // xmm0_4
  int v11; // xmm1_4
  __int64 v12; // [rsp+20h] [rbp-30h] BYREF
  __int128 v13; // [rsp+28h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h]

  v12 = 0LL;
  if ( a2 )
  {
    height = a2->height;
    *(FLOAT *)&v12 = a2->width;
    *((FLOAT *)&v12 + 1) = height;
  }
  v14 = 0LL;
  v5 = *(_QWORD *)this;
  v13 = 0LL;
  (*(void (__fastcall **)(CComponentTransform2D *, __int64 *, __int128 *))(v5 + 216))(this, &v12, &v13);
  v6 = v13;
  v7 = DWORD1(v13);
  *(_QWORD *)((char *)a3 + 60) = 1065353216LL;
  *((_BYTE *)a3 + 65) &= 0xEBu;
  *((_BYTE *)a3 + 65) |= 0x28u;
  *(_DWORD *)a3 = v6;
  v8 = DWORD2(v13);
  *((_DWORD *)a3 + 1) = v7;
  v9 = HIDWORD(v13);
  *((_DWORD *)a3 + 4) = v8;
  v10 = v14;
  *((_DWORD *)a3 + 5) = v9;
  v11 = HIDWORD(v14);
  *((_DWORD *)a3 + 12) = v10;
  *((_DWORD *)a3 + 13) = v11;
  *((_QWORD *)a3 + 1) = 0LL;
  *((_QWORD *)a3 + 3) = 0LL;
  *((_QWORD *)a3 + 4) = 0LL;
  *((_QWORD *)a3 + 5) = 1065353216LL;
  *((_DWORD *)a3 + 14) = 0;
  *((_BYTE *)a3 + 64) = 8;
}

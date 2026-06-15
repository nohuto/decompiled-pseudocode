/*
 * XREFs of sub_140069748 @ 0x140069748
 * Callers:
 *     sub_14006D4A0 @ 0x14006D4A0 (sub_14006D4A0.c)
 * Callees:
 *     sub_140004C9C @ 0x140004C9C (sub_140004C9C.c)
 *     sub_14000DE78 @ 0x14000DE78 (sub_14000DE78.c)
 *     sub_14000FFE4 @ 0x14000FFE4 (sub_14000FFE4.c)
 *     sub_140011068 @ 0x140011068 (sub_140011068.c)
 *     sub_140011180 @ 0x140011180 (sub_140011180.c)
 *     sub_14001137C @ 0x14001137C (sub_14001137C.c)
 *     sub_1400115FC @ 0x1400115FC (sub_1400115FC.c)
 *     sub_140011760 @ 0x140011760 (sub_140011760.c)
 *     sub_1400126E8 @ 0x1400126E8 (sub_1400126E8.c)
 *     sub_140040B58 @ 0x140040B58 (sub_140040B58.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     _CxxThrowException @ 0x14004A6E8 (_CxxThrowException.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 */

// Hidden C++ exception states: #wind=4
__int64 sub_140069748(__int64 a1, __int64 a2, __int64 a3, ...)
{
  BOOL v4; // r15d
  float v5; // xmm6_4
  __int64 *v6; // r12
  __int64 v7; // r13
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  int v15; // eax
  unsigned int v16; // esi
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  int v20; // eax
  _BYTE *v21; // rdx
  _BYTE v23[32]; // [rsp+0h] [rbp-C8h] BYREF
  int pExceptionObject; // [rsp+20h] [rbp-A8h] BYREF
  int v25; // [rsp+24h] [rbp-A4h] BYREF
  int v26; // [rsp+28h] [rbp-A0h] BYREF
  int v27; // [rsp+2Ch] [rbp-9Ch] BYREF
  int v28; // [rsp+30h] [rbp-98h] BYREF
  __int128 v29; // [rsp+38h] [rbp-90h] BYREF
  __int64 v30; // [rsp+48h] [rbp-80h]
  __int128 v31; // [rsp+50h] [rbp-78h]
  int v32; // [rsp+60h] [rbp-68h]
  long *v33; // [rsp+68h] [rbp-60h] BYREF
  ATL::CAtlException *v34; // [rsp+70h] [rbp-58h] BYREF
  _QWORD *v36; // [rsp+D8h] [rbp+10h] BYREF
  __int64 *v37; // [rsp+E8h] [rbp+20h] BYREF
  va_list va; // [rsp+E8h] [rbp+20h]
  __int64 v39; // [rsp+F0h] [rbp+28h]
  __int64 v40; // [rsp+F8h] [rbp+30h]
  __int64 *v41; // [rsp+100h] [rbp+38h] BYREF
  va_list va1; // [rsp+100h] [rbp+38h]
  va_list va2; // [rsp+108h] [rbp+40h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v37 = va_arg(va1, __int64 *);
  v39 = va_arg(va1, _QWORD);
  v40 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v41 = va_arg(va2, __int64 *);
  v4 = *(_DWORD *)a2 != 0;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 10;
  if ( *(_DWORD *)(a2 + 8) == 1 )
    v5 = 1.0;
  else
    v5 = 1.1;
  try
  {
    v6 = v41;
    *v41 = 0LL;
    v41 = 0LL;
    v7 = v39;
    v8 = sub_140040B58(a2, a3, v39, (__int64 *)va1);
    if ( v8 < 0 )
    {
      pExceptionObject = v8;
      throw (long *)&pExceptionObject;
    }
    v37 = v41;
    sub_140011180((__int64)&v29, (__int64 **)va);
    v41 = 0LL;
    v37 = 0LL;
    v9 = sub_14001137C(v4, v7, (__int64 *)va);
    if ( v9 < 0 )
    {
      v25 = v9;
      throw (long *)&v25;
    }
    v36 = v37;
    sub_140011180((__int64)&v29, &v36);
    v37 = 0LL;
    v10 = sub_14001137C(v4, v7, (__int64 *)va);
    if ( v10 < 0 )
    {
      v26 = v10;
      throw (long *)&v26;
    }
    v36 = v37;
    sub_140011180((__int64)&v29, &v36);
    v37 = 0LL;
    v11 = sub_140049338(344LL, (__int64)&unk_1400C75FC);
    v36 = (_QWORD *)v11;
    if ( v11 )
      v14 = sub_1400126E8(v11, 5);
    else
      v14 = 0LL;
    v36 = (_QWORD *)v14;
    if ( !v14 )
    {
      v27 = -2147024882;
      throw (long *)&v27;
    }
    v15 = sub_140011760(v13, v12, *(_QWORD *)(a2 + 56), (_QWORD *)(v14 + 192));
    v16 = v15;
    if ( v15 < 0 )
    {
      v28 = v15;
      throw (long *)&v28;
    }
    if ( *(_DWORD *)a2 == 2 || (v17 = 0, *(_DWORD *)a2 == 3) )
      v17 = 1;
    *(_DWORD *)(v14 + 120) = v17;
    *(_DWORD *)(v14 + 132) = *(_DWORD *)a2;
    *(_DWORD *)(v14 + 12) = v4;
    *(_DWORD *)(v14 + 136) = 0;
    *(_DWORD *)(v14 + 124) = 0;
    if ( *(_QWORD *)(v14 + 152) )
      sub_1400115FC((_QWORD *)(v14 + 152), 0LL);
    sub_140004C9C((_QWORD *)(v14 + 240), a1);
    *(_QWORD *)v14 = 0LL;
    *(_DWORD *)(v14 + 8) = 1;
    sub_140011068(v14 + 16, (__int64)&v29);
    sub_14000DE78((__int64)&v29, v18);
    if ( *(_DWORD *)(a2 + 64) )
      v19 = *(_DWORD *)(a2 + 64);
    else
      v19 = (int)(float)((float)(int)((double)(int)(*(_DWORD *)(v7 + 8) / (unsigned int)*(unsigned __int16 *)(v7 + 12))
                                    * (double)(int)*(_QWORD *)(a2 + 48)
                                    / 10000000.0
                                    + 0.5)
                       * v5);
    *(_DWORD *)(v14 + 148) = v19;
    v20 = 1;
    if ( *(_DWORD *)(a2 + 4) )
      v20 = 7;
    *(_DWORD *)(v14 + 140) = v20;
    *(_QWORD *)(v14 + 208) = 1LL;
    v36 = 0LL;
    *v6 = v14;
    sub_14000FFE4(&v36);
  }
  catch ( long *v33 )
  {
    v21 = v23;
    LODWORD(v37) = *(_DWORD *)v33;
    goto LABEL_28;
  }
  catch ( ATL::CAtlException *v34 )
  {
    v21 = v23;
    LODWORD(v37) = *(_DWORD *)v34;
LABEL_28:
    v16 = (unsigned int)v37;
    if ( (int)v37 < 0 )
      sub_14005A470("CPipeInstance::CreateBridgeStreamPipeInstanceToTargetApo", 1035, (int)v37);
  }
  sub_14000DE78((__int64)&v29, (__int64)v21);
  return v16;
}

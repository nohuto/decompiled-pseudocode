/*
 * XREFs of HUBMUX_CreateChildPSMs @ 0x140010A1C
 * Callers:
 *     HUBHSM_CreatingChildPSMs @ 0x140008E30 (HUBHSM_CreatingChildPSMs.c)
 * Callees:
 *     HUBMUX_CreatePSM @ 0x140010F5C (HUBMUX_CreatePSM.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBMUX_CreateChildPSMs(__int64 a1)
{
  _BYTE *v1; // rsi
  unsigned int v3; // edi
  __int16 *v4; // rdx
  unsigned __int16 v5; // r8
  unsigned __int8 v6; // al
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  unsigned __int16 v11; // di
  __int64 v12; // rdx
  unsigned __int8 v13; // al
  unsigned __int16 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // cx
  unsigned __int64 v21; // rax
  unsigned __int16 v22; // ax
  __int64 v23; // r8
  unsigned int v24; // edi
  _QWORD **v25; // rsi
  _QWORD *v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int128 v30; // [rsp+40h] [rbp-29h] BYREF
  __int128 v31; // [rsp+50h] [rbp-19h]
  __int64 v32; // [rsp+60h] [rbp-9h]
  __int128 v33; // [rsp+68h] [rbp-1h] BYREF
  __int128 v34; // [rsp+78h] [rbp+Fh]
  __int128 v35; // [rsp+88h] [rbp+1Fh]
  __int64 v36; // [rsp+98h] [rbp+2Fh]
  __int64 v37; // [rsp+D0h] [rbp+67h] BYREF

  *(_DWORD *)(a1 + 146) = 0xFFFF;
  v1 = (_BYTE *)(a1 + 240);
  v32 = 0LL;
  LODWORD(v36) = 0;
  LOWORD(v3) = 0;
  v37 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( *(_WORD *)(a1 + 144) )
  {
    while ( 1 )
    {
      v30 = 0LL;
      v32 = 0LL;
      v31 = 0LL;
      _InterlockedOr((volatile signed __int32 *)&v30 + 1, 1u);
      if ( *v1 )
      {
        v3 = (unsigned __int16)(v3 + 1);
        LOWORD(v30) = v3;
        v5 = v3;
        if ( ((unsigned __int8)(1 << (v3 & 7)) & *(_BYTE *)(((unsigned __int64)v3 >> 3) + a1 + 1203)) != 0 )
        {
          _InterlockedAnd((volatile signed __int32 *)&v30 + 1, 0xFFFFFFFE);
          v5 = v30;
        }
        BYTE2(v30) = *(_BYTE *)(a1 + 2506);
      }
      else
      {
        v4 = *(__int16 **)(*(_QWORD *)(a1 + 128) + 8LL * (unsigned __int16)v3);
        v5 = *v4;
        LOWORD(v30) = *v4;
        if ( *((_DWORD *)v4 + 1) == 102 )
        {
          _InterlockedAnd((volatile signed __int32 *)&v30 + 1, 0xFFFFFFFE);
          v5 = v30;
        }
        if ( *((_DWORD *)v4 + 2) == 116 )
        {
          _InterlockedOr((volatile signed __int32 *)&v30 + 1, 0x10u);
          v5 = v30;
        }
        DWORD1(v30) = DWORD1(v30) & 0xFFFFFFBF | ((v4[8] & 1) << 6);
        DWORD1(v30) ^= (BYTE4(v30) ^ (unsigned __int8)(*((_BYTE *)v4 + 16) << 6)) & 0x80;
        v6 = *((_BYTE *)v4 + 3);
        BYTE2(v30) = v6;
        if ( !v6 || v6 > 5u )
          BYTE2(v30) = 5;
        LOWORD(v3) = v3 + 1;
      }
      if ( v5 > *(_WORD *)(a1 + 148) )
        *(_WORD *)(a1 + 148) = v5;
      if ( v5 < *(_WORD *)(a1 + 146) )
        *(_WORD *)(a1 + 146) = v5;
      DWORD2(v30) = 512;
      v7 = HUBMUX_CreatePSM(a1, &v30);
      if ( !v7 )
        break;
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             v7,
             off_14006D158);
      *(_QWORD *)(v8 + 1248) = &PSM20StateTable;
      *(_DWORD *)(v8 + 1124) = 3000;
      *(_DWORD *)(v8 + 1256) = 3000;
      v9 = (_QWORD *)(v8 + 248);
      v10 = *(_QWORD **)(a1 + 2384);
      if ( *v10 != a1 + 2376 )
LABEL_57:
        __fastfail(3u);
      *v9 = a1 + 2376;
      v9[1] = v10;
      *v10 = v9;
      *(_QWORD *)(a1 + 2384) = v9;
      ++*(_DWORD *)(a1 + 2372);
      if ( (unsigned __int16)v3 >= *(_WORD *)(a1 + 144) )
        goto LABEL_21;
    }
  }
  else
  {
LABEL_21:
    v11 = 0;
    *(_DWORD *)(a1 + 152) = 0xFFFF;
    if ( *(_WORD *)(a1 + 150) )
    {
      while ( 1 )
      {
        v30 = 0LL;
        v32 = 0LL;
        v31 = 0LL;
        _InterlockedOr((volatile signed __int32 *)&v30 + 1, 1u);
        if ( *v1 )
        {
          v14 = v11 + 1;
          LOWORD(v30) = v11 + 1;
          if ( ((unsigned __int8)(1 << ((v11 + 1) & 7)) & *(_BYTE *)(((unsigned __int64)(unsigned __int16)(v11 + 1) >> 3)
                                                                   + a1
                                                                   + 1206)) != 0 )
          {
            _InterlockedAnd((volatile signed __int32 *)&v30 + 1, 0xFFFFFFFE);
            v14 = v30;
          }
          if ( *(_BYTE *)(a1 + 261) )
          {
            _InterlockedOr((volatile signed __int32 *)&v30 + 1, 0x100u);
            v14 = v30;
            DWORD1(v31) = *(_DWORD *)(a1 + 156);
          }
          *((_QWORD *)&v31 + 1) = *(_QWORD *)(a1 + 2520);
          LODWORD(v32) = *(_DWORD *)(a1 + 2528);
          BYTE2(v30) = *(_BYTE *)(a1 + 2506);
        }
        else
        {
          v12 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * v11);
          LOWORD(v30) = *(_WORD *)v12;
          if ( *(_DWORD *)(v12 + 4) == 102 )
            _InterlockedAnd((volatile signed __int32 *)&v30 + 1, 0xFFFFFFFE);
          if ( *(_DWORD *)(v12 + 8) == 116 )
            _InterlockedOr((volatile signed __int32 *)&v30 + 1, 8u);
          _InterlockedOr((volatile signed __int32 *)&v30 + 1, 0x100u);
          if ( *(_BYTE *)(v12 + 2) )
            DWORD1(v31) = *(_DWORD *)(a1 + 156);
          *((_QWORD *)&v31 + 1) = *(_QWORD *)(v12 + 16);
          LODWORD(v32) = *(unsigned __int16 *)(v12 + 14);
          v13 = *(_BYTE *)(v12 + 3);
          BYTE2(v30) = v13;
          if ( !v13 || v13 > 5u )
            BYTE2(v30) = 5;
          v14 = v30;
        }
        if ( v14 > *(_WORD *)(a1 + 154) )
          *(_WORD *)(a1 + 154) = v14;
        if ( v14 < *(_WORD *)(a1 + 152) )
          *(_WORD *)(a1 + 152) = v14;
        DWORD2(v30) = 768;
        v15 = HUBMUX_CreatePSM(a1, &v30);
        if ( !v15 )
          break;
        v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                v15,
                off_14006D158);
        *(_QWORD *)(v16 + 1248) = &PSM30StateTable;
        *(_DWORD *)(v16 + 1124) = 5000;
        *(_DWORD *)(v16 + 1256) = 5000;
        v17 = (_QWORD *)(v16 + 248);
        v18 = *(_QWORD **)(a1 + 2384);
        if ( *v18 != a1 + 2376 )
          goto LABEL_57;
        *v17 = a1 + 2376;
        ++v11;
        v17[1] = v18;
        *v18 = v17;
        *(_QWORD *)(a1 + 2384) = v17;
        ++*(_DWORD *)(a1 + 2372);
        if ( v11 >= *(_WORD *)(a1 + 150) )
          goto LABEL_45;
      }
    }
    else
    {
LABEL_45:
      v19 = *(_WORD *)(a1 + 148);
      if ( v19 <= *(_WORD *)(a1 + 154) )
        v19 = *(_WORD *)(a1 + 154);
      v20 = 2;
      *(_WORD *)(a1 + 48) = v19;
      v21 = ((unsigned __int64)v19 >> 3) + 1;
      if ( v21 >= 2 )
        v20 = v21;
      v22 = *(_WORD *)(a1 + 88);
      v23 = (unsigned int)ExDefaultNonPagedPoolType;
      v34 = 0LL;
      if ( v20 <= v22 )
        v20 = v22;
      DWORD2(v34) = 1;
      *(_WORD *)(a1 + 1144) = v20;
      v36 = 0LL;
      v35 = *(unsigned __int64 *)(a1 + 16);
      v33 = 0LL;
      LODWORD(v33) = 56;
      HIDWORD(v34) = 1;
      if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64, unsigned __int64, __int64 *, __int64))(WdfFunctions_01015 + 1536))(
             WdfDriverGlobals,
             &v33,
             v23,
             1748191317LL,
             (v20 + 3LL) & 0xFFFFFFFFFFFFFFFCuLL,
             &v37,
             a1 + 1136) >= 0 )
      {
        v24 = 2053;
        _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40u);
        return v24;
      }
    }
  }
  v24 = 2045;
  v25 = (_QWORD **)(a1 + 2376);
  while ( 1 )
  {
    v26 = *v25;
    if ( *v25 == v25 )
      return v24;
    if ( (_QWORD **)v26[1] != v25 )
      goto LABEL_57;
    v27 = (_QWORD *)*v26;
    if ( *(_QWORD **)(*v26 + 8LL) != v26 )
      goto LABEL_57;
    *v25 = v27;
    v27[1] = v25;
    --*(_DWORD *)(a1 + 2372);
    v28 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(
            WdfDriverGlobals,
            v26 - 31);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v28);
  }
}

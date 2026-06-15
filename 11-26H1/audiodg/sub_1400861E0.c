/*
 * XREFs of sub_1400861E0 @ 0x1400861E0
 * Callers:
 *     sub_14002B664 @ 0x14002B664 (sub_14002B664.c)
 * Callees:
 *     sub_14000259C @ 0x14000259C (sub_14000259C.c)
 *     sub_140006C48 @ 0x140006C48 (sub_140006C48.c)
 *     sub_14000C3C4 @ 0x14000C3C4 (sub_14000C3C4.c)
 *     sub_14000D810 @ 0x14000D810 (sub_14000D810.c)
 *     sub_14000D8D0 @ 0x14000D8D0 (sub_14000D8D0.c)
 *     sub_14000D938 @ 0x14000D938 (sub_14000D938.c)
 *     sub_14000DD04 @ 0x14000DD04 (sub_14000DD04.c)
 *     sub_14000E590 @ 0x14000E590 (sub_14000E590.c)
 *     sub_14000E63C @ 0x14000E63C (sub_14000E63C.c)
 *     sub_1400265D8 @ 0x1400265D8 (sub_1400265D8.c)
 *     sub_14002C694 @ 0x14002C694 (sub_14002C694.c)
 *     sub_140066264 @ 0x140066264 (sub_140066264.c)
 *     sub_140066280 @ 0x140066280 (sub_140066280.c)
 *     sub_140081F78 @ 0x140081F78 (sub_140081F78.c)
 *     sub_1400841E0 @ 0x1400841E0 (sub_1400841E0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400861E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  int v6; // edi
  __int64 *v7; // r15
  __int64 v8; // r12
  __int64 ***v9; // r12
  LPCRITICAL_SECTION v10; // r13
  _BYTE *v11; // r14
  __int64 *v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // r13
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r14
  _QWORD *v19; // r13
  _QWORD **v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  _QWORD *v23; // r14
  _QWORD *v24; // rcx
  __int64 v25; // rcx
  _DWORD *v26; // rcx
  ATL::CAtlException *v28; // rbx
  ATL::CAtlException *v29; // rbx
  __int64 v30; // [rsp+0h] [rbp-C8h] BYREF
  _QWORD *v31; // [rsp+30h] [rbp-98h]
  __int64 ***v32; // [rsp+38h] [rbp-90h]
  __int64 *v33; // [rsp+40h] [rbp-88h]
  _QWORD *v34; // [rsp+48h] [rbp-80h] BYREF
  _BYTE *v35; // [rsp+50h] [rbp-78h]
  __int64 v36; // [rsp+58h] [rbp-70h]
  _QWORD *v37; // [rsp+60h] [rbp-68h]
  _BYTE *v38; // [rsp+70h] [rbp-58h]
  LPCRITICAL_SECTION v39; // [rsp+78h] [rbp-50h]
  ATL::CAtlException *v40; // [rsp+80h] [rbp-48h] BYREF
  ATL::CAtlException *v41; // [rsp+88h] [rbp-40h] BYREF
  __int64 v42; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v43; // [rsp+D8h] [rbp+10h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+E0h] [rbp+18h]
  _QWORD *v45; // [rsp+E8h] [rbp+20h] BYREF

  v42 = a1;
  v5 = a1;
  v36 = a1;
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v6 = -2147024890;
  }
  else if ( *(_BYTE *)(a1 + 776) )
  {
    v39 = (LPCRITICAL_SECTION)(a1 + 88);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 88));
    if ( *(_BYTE *)(v5 + 778) )
    {
      v6 = -2005139406;
    }
    else
    {
      v7 = (__int64 *)(v5 + 768);
      v33 = (__int64 *)(v5 + 768);
      v8 = *(_QWORD *)(v5 + 768);
      if ( v8 && a2 == *(_QWORD *)(v8 + 16) )
      {
        v9 = *(__int64 ****)v8;
        v32 = v9;
        do
        {
          try
          {
            v6 = 0;
            v10 = (LPCRITICAL_SECTION)(v5 + 176);
            lpCriticalSection = (LPCRITICAL_SECTION)(v5 + 176);
            sub_140081F78(v9, v5 + 176);
          }
          catch ( ATL::CAtlException *v40 )
          {
            v12 = &v30;
            v28 = v40;
            if ( *(_DWORD *)v40 == -1073741571 )
              o__resetstkoflw();
            LODWORD(v43) = *(_DWORD *)v28;
            v5 = v42;
            v6 = v43;
            v9 = v32;
            v10 = lpCriticalSection;
            v7 = v33;
          }
          v11 = (_BYTE *)(v5 + 779);
          v35 = (_BYTE *)(v5 + 779);
          if ( !*(_BYTE *)(v5 + 779) )
            break;
          if ( v6 < 0 )
            Sleep(1u);
        }
        while ( *v11 && v6 < 0 );
        if ( v6 >= 0 )
        {
          v38 = (_BYTE *)(v5 + 777);
          *(_BYTE *)(v5 + 777) = 1;
          sub_14000D938((__int64)v10, (__int64)v12);
          v31 = 0LL;
          sub_1400B6010(*(_QWORD *)(v5 + 792));
          v37 = (_QWORD *)(v5 + 128);
          v14 = *(_QWORD **)(v5 + 128);
          v34 = v14;
          while ( v14 )
          {
            v15 = (_QWORD *)*sub_1400265D8(v13, &v34);
            v45 = v15;
            do
            {
              try
              {
                v6 = 0;
                sub_14000DD04(v31, &v45);
              }
              catch ( ATL::CAtlException *v41 )
              {
                v29 = v41;
                if ( *(_DWORD *)v41 == -1073741571 )
                  o__resetstkoflw();
                LODWORD(v43) = *(_DWORD *)v29;
                v5 = v42;
                v6 = v43;
                v9 = v32;
                v15 = v45;
                v11 = v35;
                v7 = v33;
              }
              if ( !*v11 )
                break;
              if ( v6 < 0 )
                Sleep(1u);
            }
            while ( *v11 && v6 < 0 );
            if ( v6 < 0 )
              goto LABEL_25;
            v16 = (__int64 *)sub_14002C694(v9, &v45);
            if ( !v16 )
            {
              v6 = -2147418113;
LABEL_25:
              if ( lpCriticalSection )
                LeaveCriticalSection(lpCriticalSection);
              goto LABEL_43;
            }
            sub_14000C3C4((__int64 **)v9, v16);
            sub_140006C48((__int64)v15);
            v14 = v34;
          }
          if ( *v7 )
            sub_14000E63C(*v7);
          *v7 = 0LL;
          sub_1400841E0(v5 + 384);
          v18 = v36;
          v19 = v37;
          while ( *(_QWORD *)(v18 + 144) )
          {
            v20 = (_QWORD **)sub_14000E590(v19, v17);
            v6 = sub_140066280(*v20, v21, v22);
            if ( v6 < 0 )
              goto LABEL_25;
            sub_14000D8D0((__int64)v19);
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 344));
          v23 = *(_QWORD **)(v5 + 48 * (*(unsigned __int16 *)(v5 + 336) ^ 1LL) + 224);
          v24 = v23;
          while ( v23 )
          {
            v23 = (_QWORD *)*v24;
            sub_140066264(v24[2]);
            v6 = sub_14000D810(v5, v25);
            v24 = v23;
            if ( v6 < 0 )
              goto LABEL_25;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 344));
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          *v38 = 0;
        }
      }
      else
      {
        v6 = -2147024890;
      }
    }
LABEL_43:
    LeaveCriticalSection(v39);
  }
  else
  {
    v6 = -2005139437;
  }
  v26 = *(_DWORD **)(v5 + 824);
  if ( *v26 > 5u )
  {
    v43 = v5;
    LODWORD(v42) = v6;
    sub_14000259C((__int64)v26, (__int64)&unk_1400D2923, a3, a4, (__int64)&v42, (__int64)&v43);
  }
  return (unsigned int)v6;
}

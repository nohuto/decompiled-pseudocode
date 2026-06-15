/*
 * XREFs of sub_140082A00 @ 0x140082A00
 * Callers:
 *     sub_140080AC4 @ 0x140080AC4 (sub_140080AC4.c)
 * Callees:
 *     sub_14000259C @ 0x14000259C (sub_14000259C.c)
 *     sub_140006C48 @ 0x140006C48 (sub_140006C48.c)
 *     sub_14000C3C4 @ 0x14000C3C4 (sub_14000C3C4.c)
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
 *     sub_140083CA0 @ 0x140083CA0 (sub_140083CA0.c)
 *     sub_1400841E0 @ 0x1400841E0 (sub_1400841E0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140082A00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  _QWORD *v18; // r13
  _QWORD **v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  _QWORD *v22; // rcx
  _QWORD *v23; // r14
  __int64 v24; // rcx
  _DWORD *v25; // rcx
  ATL::CAtlException *v27; // rbx
  ATL::CAtlException *v28; // rbx
  __int64 v29; // [rsp+0h] [rbp-B8h] BYREF
  _QWORD *v30; // [rsp+30h] [rbp-88h]
  __int64 ***v31; // [rsp+38h] [rbp-80h]
  __int64 *v32; // [rsp+40h] [rbp-78h]
  _QWORD *v33; // [rsp+48h] [rbp-70h] BYREF
  _BYTE *v34; // [rsp+50h] [rbp-68h]
  _QWORD *v35; // [rsp+58h] [rbp-60h]
  _BYTE *v36; // [rsp+60h] [rbp-58h]
  LPCRITICAL_SECTION v37; // [rsp+68h] [rbp-50h]
  ATL::CAtlException *v38; // [rsp+70h] [rbp-48h] BYREF
  ATL::CAtlException *v39; // [rsp+78h] [rbp-40h] BYREF
  __int64 v40; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v41; // [rsp+C8h] [rbp+10h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+D0h] [rbp+18h]
  _QWORD *v43; // [rsp+D8h] [rbp+20h] BYREF

  v40 = a1;
  v5 = a1;
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v6 = -2147024890;
  }
  else if ( *(_BYTE *)(a1 + 784) )
  {
    v37 = (LPCRITICAL_SECTION)(a1 + 96);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
    if ( *(_BYTE *)(v5 + 786) )
    {
      v6 = -2005139406;
    }
    else
    {
      v7 = (__int64 *)(v5 + 776);
      v32 = (__int64 *)(v5 + 776);
      v8 = *(_QWORD *)(v5 + 776);
      if ( v8 && a2 == *(_QWORD *)(v8 + 16) )
      {
        v9 = *(__int64 ****)v8;
        v31 = v9;
        do
        {
          try
          {
            v6 = 0;
            v10 = (LPCRITICAL_SECTION)(v5 + 184);
            lpCriticalSection = (LPCRITICAL_SECTION)(v5 + 184);
            sub_140081F78(v9, v5 + 184);
          }
          catch ( ATL::CAtlException *v38 )
          {
            v12 = &v29;
            v27 = v38;
            if ( *(_DWORD *)v38 == -1073741571 )
              o__resetstkoflw();
            LODWORD(v41) = *(_DWORD *)v27;
            v5 = v40;
            v6 = v41;
            v9 = v31;
            v10 = lpCriticalSection;
            v7 = v32;
          }
          v11 = (_BYTE *)(v5 + 787);
          v34 = (_BYTE *)(v5 + 787);
          if ( !*(_BYTE *)(v5 + 787) )
            break;
          if ( v6 < 0 )
            Sleep(1u);
        }
        while ( *v11 && v6 < 0 );
        if ( v6 >= 0 )
        {
          v36 = (_BYTE *)(v5 + 785);
          *(_BYTE *)(v5 + 785) = 1;
          sub_14000D938((__int64)v10, (__int64)v12);
          v30 = 0LL;
          sub_1400B6010(*(_QWORD *)(v5 + 800));
          v35 = (_QWORD *)(v5 + 136);
          v14 = *(_QWORD **)(v5 + 136);
          v33 = v14;
          while ( v14 )
          {
            v15 = (_QWORD *)*sub_1400265D8(v13, &v33);
            v43 = v15;
            do
            {
              try
              {
                v6 = 0;
                sub_14000DD04(v30, &v43);
              }
              catch ( ATL::CAtlException *v39 )
              {
                v28 = v39;
                if ( *(_DWORD *)v39 == -1073741571 )
                  o__resetstkoflw();
                LODWORD(v41) = *(_DWORD *)v28;
                v5 = v40;
                v6 = v41;
                v9 = v31;
                v15 = v43;
                v7 = v32;
                v11 = v34;
              }
              if ( !*v11 )
                break;
              if ( v6 < 0 )
                Sleep(1u);
            }
            while ( *v11 && v6 < 0 );
            if ( v6 < 0 )
              goto LABEL_25;
            v16 = (__int64 *)sub_14002C694(v9, &v43);
            if ( !v16 )
            {
              v6 = -2147418113;
LABEL_25:
              if ( lpCriticalSection )
                LeaveCriticalSection(lpCriticalSection);
              goto LABEL_42;
            }
            sub_14000C3C4((__int64 **)v9, v16);
            sub_140006C48((__int64)v15);
            v14 = v33;
          }
          if ( *v7 )
            sub_14000E63C(*v7);
          *v7 = 0LL;
          sub_1400841E0(v5 + 392);
          if ( *(_QWORD *)(v5 + 152) )
          {
            v18 = v35;
            do
            {
              v19 = (_QWORD **)sub_14000E590(v18, v17);
              v6 = sub_140066280(*v19, v20, v21);
              if ( v6 < 0 )
                goto LABEL_25;
              sub_14000D8D0((__int64)v18);
            }
            while ( *(_QWORD *)(v5 + 152) );
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 352));
          v22 = *(_QWORD **)(v5 + 48 * (*(unsigned __int16 *)(v5 + 344) ^ 1LL) + 232);
          if ( v22 )
          {
            do
            {
              v23 = (_QWORD *)*v22;
              sub_140066264(v22[2]);
              v6 = sub_140083CA0(v5, v24);
              if ( v6 < 0 )
                goto LABEL_25;
              v22 = v23;
            }
            while ( v23 );
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 352));
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          *v36 = 0;
        }
      }
      else
      {
        v6 = -2147024890;
      }
    }
LABEL_42:
    LeaveCriticalSection(v37);
  }
  else
  {
    v6 = -2005139437;
  }
  v25 = *(_DWORD **)(v5 + 1080);
  if ( *v25 > 5u )
  {
    v41 = v5;
    LODWORD(v40) = v6;
    sub_14000259C((__int64)v25, (__int64)&unk_1400D2875, a3, a4, (__int64)&v40, (__int64)&v41);
  }
  return (unsigned int)v6;
}

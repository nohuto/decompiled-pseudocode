/*
 * XREFs of ?GrepGetStringBitmapW@@YAIAEAVDCOBJ@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x14028A034
 * Callers:
 *     NtGdiGetStringBitmapW @ 0x14027DD90 (NtGdiGetStringBitmapW.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@HK@Z @ 0x1400C3E98 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@HK@Z.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1400D4410 (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1401A6358 (--1ESTROBJ@@QEAA@XZ.c)
 *     vStringBitmapTextOut @ 0x1403251AC (vStringBitmapTextOut.c)
 *     ?vInitSimple@ESTROBJ@@QEAAXPEBGJAEAVDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z @ 0x1403356D8 (-vInitSimple@ESTROBJ@@QEAAXPEBGJAEAVDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall GrepGetStringBitmapW(
        struct DCOBJ *a1,
        unsigned __int16 *a2,
        __int64 a3,
        struct STRINGBITMAP *a4,
        unsigned int a5)
{
  unsigned int v8; // ebx
  int v9; // r8d
  int v10; // edi
  __int64 v11; // rcx
  int v12; // esi
  unsigned int v13; // r12d
  unsigned int v14; // eax
  unsigned int v15; // r15d
  bool v16; // zf
  _DWORD *v17; // rdi
  int v18; // esi
  int v19; // r8d
  int v20; // ecx
  int v22; // [rsp+28h] [rbp-D8h]
  int v23; // [rsp+30h] [rbp-D0h]
  void *v24; // [rsp+38h] [rbp-C8h]
  __int64 v25; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD *v26; // [rsp+48h] [rbp-B8h] BYREF
  struct _POINTL v27; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v30[4]; // [rsp+70h] [rbp-90h] BYREF
  int v31; // [rsp+80h] [rbp-80h]
  int v32; // [rsp+84h] [rbp-7Ch]
  int v33; // [rsp+88h] [rbp-78h]
  __int64 v34; // [rsp+90h] [rbp-70h]
  int v35; // [rsp+A0h] [rbp-60h]
  _QWORD *v36; // [rsp+A8h] [rbp-58h]
  __int64 v37; // [rsp+B0h] [rbp-50h]
  int *v38; // [rsp+140h] [rbp+40h]
  int v39; // [rsp+158h] [rbp+58h]
  int v40; // [rsp+15Ch] [rbp+5Ch]

  DC::QuickInitXform(*(_QWORD *)a1, &v28, 516LL);
  if ( (*(_BYTE *)(v28 + 32) & 0x43) == 0x43 )
  {
    v8 = 0;
    v25 = 0LL;
    RFONTOBJ::vInit((RFONTOBJ *)&v25, a1, 0, 2u);
    if ( v25 )
    {
      if ( (*(_DWORD *)(v25 + 88) & 2) == 0 )
      {
        v9 = *(_DWORD *)(v25 + 388);
        if ( !(v9 | *(_DWORD *)(*(_QWORD *)a1 + 1756LL)) )
        {
          v39 = 0;
          ESTROBJ::vInitSimple((ESTROBJ *)v30, a2, v9, a1, (struct RFONTOBJ *)&v25, v22, v23, v24);
          if ( (v39 & 4) != 0 )
          {
            v10 = v33 - v31;
            v11 = *(_QWORD *)(v37 + 24LL * (unsigned int)(v30[0] - 1) + 8);
            v12 = v32
                + (*(int *)(*(_QWORD *)(v37 + 8) + 16LL) >> 4)
                + ((*(_DWORD *)(v11 + 12) - *(_DWORD *)(v11 + 20)) >> 4)
                - v30[3];
            v13 = (unsigned int)(v12 + 7) >> 3;
            v14 = (v33 - v31) * v13;
            v15 = v14 + 8;
            if ( a5 >= v14 + 8 )
            {
              memset_0((char *)a4 + 8, 0, v14);
              v16 = (v39 & 0x1400) == 0;
              *((_DWORD *)a4 + 1) = v10;
              v17 = 0LL;
              *(_DWORD *)a4 = v12;
              v18 = 0;
              v27 = 0LL;
              if ( !v16 )
              {
                v18 = *v38;
                if ( *v38 )
                {
                  if ( v18 == 1 )
                  {
                    v17 = *(_DWORD **)(v25 + 728);
                  }
                  else if ( v18 == 2 )
                  {
                    v17 = *(_DWORD **)(v25 + 736);
                  }
                  else
                  {
                    v17 = v18 == 3
                        ? *(_DWORD **)(v25 + 744)
                        : *(_DWORD **)(*(_QWORD *)(v25 + 752) + 8LL * (unsigned int)(v18 - 4));
                  }
                  if ( v17 )
                  {
                    v19 = *(_DWORD *)(v25 + 308);
                    v20 = v17[78];
                    if ( v19 < v17[77] - v20 )
                      v20 = v17[77] - v19;
                    v27.y = v20 >> 4;
                    if ( v20 >> 4 )
                      v34 = 0LL;
                    v29 = 0LL;
                    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v29);
                  }
                }
              }
              v40 = v18;
              v35 = 0;
              v26 = v17;
              if ( v17 )
              {
                if ( (v17[22] & 2) != 0 )
                {
                  v26 = 0LL;
                  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v26);
                  goto LABEL_27;
                }
                v36 = &v26;
              }
              ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)v30, &v27);
              vStringBitmapTextOut(v30, a4, v13);
              v26 = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v26);
            }
            v8 = v15;
          }
LABEL_27:
          ESTROBJ::~ESTROBJ((ESTROBJ *)v30);
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v25);
          return v8;
        }
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v25);
  }
  return 0LL;
}

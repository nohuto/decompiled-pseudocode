/*
 * XREFs of ?GrepGetStringBitmapW@@YAIAEAVUDCOBJ@@PEAGIPEAUSTRINGBITMAP@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x14026FC74
 * Callers:
 *     NtGdiGetStringBitmapW @ 0x1402093C0 (NtGdiGetStringBitmapW.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x140017F90 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x14017EF58 (--1ESTROBJ@@QEAA@XZ.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1401D8624 (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?vInitSimple@ESTROBJ@@QEAAXPEBGJAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z @ 0x140216C14 (-vInitSimple@ESTROBJ@@QEAAXPEBGJAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z.c)
 *     vStringBitmapTextOut @ 0x14030DFF8 (vStringBitmapTextOut.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall GrepGetStringBitmapW(
        struct UDCOBJ *a1,
        unsigned __int16 *a2,
        __int64 a3,
        _DWORD *a4,
        unsigned int a5)
{
  __int64 v8; // rax
  unsigned int v9; // ebx
  int v10; // r8d
  int v11; // esi
  __int64 v12; // rcx
  int v13; // edi
  unsigned int v14; // r12d
  unsigned int v15; // eax
  unsigned int v16; // r15d
  bool v17; // zf
  int v18; // esi
  _DWORD *v19; // rdi
  int v20; // r8d
  int v21; // ecx
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  struct _POINTL v24; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v28[4]; // [rsp+70h] [rbp-90h] BYREF
  int v29; // [rsp+80h] [rbp-80h]
  int v30; // [rsp+84h] [rbp-7Ch]
  int v31; // [rsp+88h] [rbp-78h]
  __int64 v32; // [rsp+90h] [rbp-70h]
  int v33; // [rsp+A0h] [rbp-60h]
  _QWORD *v34; // [rsp+A8h] [rbp-58h]
  __int64 v35; // [rsp+B0h] [rbp-50h]
  int *v36; // [rsp+140h] [rbp+40h]
  int v37; // [rsp+158h] [rbp+58h]
  int v38; // [rsp+15Ch] [rbp+5Ch]

  DC::QuickInitXform(*(_QWORD *)a1, &v26, 516LL);
  if ( (*(_BYTE *)(v26 + 32) & 0x43) == 0x43 )
  {
    v8 = *(_QWORD *)a1;
    v9 = 0;
    v24.x = 27;
    v24.y = *(unsigned __int16 *)(v8 + 12);
    v23 = 0LL;
    RFONTOBJ::vInit((RFONTOBJ *)&v23, a1, 0, 2u, (const struct RFONTOBJ::Tag *)&v24);
    if ( v23 )
    {
      if ( (*(_DWORD *)(v23 + 88) & 2) == 0 )
      {
        v10 = *(_DWORD *)(v23 + 388);
        if ( !(v10 | *(_DWORD *)(*(_QWORD *)a1 + 1756LL)) )
        {
          v37 = 0;
          ESTROBJ::vInitSimple((ESTROBJ *)v28, a2, v10, a1, (struct RFONTOBJ *)&v23);
          if ( (v37 & 4) != 0 )
          {
            v11 = v31 - v29;
            v12 = *(_QWORD *)(v35 + 24LL * (unsigned int)(v28[0] - 1) + 8);
            v13 = v30
                + (*(int *)(*(_QWORD *)(v35 + 8) + 16LL) >> 4)
                + ((*(_DWORD *)(v12 + 12) - *(_DWORD *)(v12 + 20)) >> 4)
                - v28[3];
            v14 = (unsigned int)(v13 + 7) >> 3;
            v15 = (v31 - v29) * v14;
            v16 = v15 + 8;
            if ( a5 >= v15 + 8 )
            {
              memset_0(a4 + 2, 0, v15);
              v17 = (v37 & 0x1400) == 0;
              a4[1] = v11;
              v18 = 0;
              *a4 = v13;
              v19 = 0LL;
              v24 = 0LL;
              if ( !v17 )
              {
                v18 = *v36;
                if ( *v36 )
                {
                  if ( v18 == 1 )
                  {
                    v19 = *(_DWORD **)(v23 + 728);
                  }
                  else if ( v18 == 2 )
                  {
                    v19 = *(_DWORD **)(v23 + 736);
                  }
                  else
                  {
                    v19 = v18 == 3
                        ? *(_DWORD **)(v23 + 744)
                        : *(_DWORD **)(*(_QWORD *)(v23 + 752) + 8LL * (unsigned int)(v18 - 4));
                  }
                  if ( v19 )
                  {
                    v20 = *(_DWORD *)(v23 + 308);
                    v21 = v19[78];
                    if ( v20 < v19[77] - v21 )
                      v21 = v19[77] - v20;
                    v24.y = v21 >> 4;
                    if ( v21 >> 4 )
                      v32 = 0LL;
                    v27 = 0LL;
                    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v27);
                  }
                }
              }
              v38 = v18;
              v33 = 0;
              v25 = v19;
              if ( v19 )
              {
                if ( (v19[22] & 2) != 0 )
                {
                  v25 = 0LL;
                  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v25);
                  goto LABEL_27;
                }
                v34 = &v25;
              }
              ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)v28, &v24);
              vStringBitmapTextOut(v28, a4, v14);
              v25 = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v25);
            }
            v9 = v16;
          }
LABEL_27:
          ESTROBJ::~ESTROBJ((ESTROBJ *)v28);
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v23);
          return v9;
        }
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v23);
  }
  return 0LL;
}

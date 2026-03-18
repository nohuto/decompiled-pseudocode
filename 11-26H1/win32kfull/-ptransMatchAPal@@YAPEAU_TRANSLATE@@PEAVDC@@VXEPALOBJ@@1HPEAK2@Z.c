/*
 * XREFs of ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x140334AF8
 * Callers:
 *     GreRealizePalette @ 0x1401FD0C8 (GreRealizePalette.c)
 * Callees:
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1401575D0 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     ?ColorMatch@@YAKVXEPALOBJ@@T_PAL_ULONG@@PEAK@Z @ 0x1403349FC (-ColorMatch@@YAKVXEPALOBJ@@T_PAL_ULONG@@PEAK@Z.c)
 */

__int64 __fastcall ptransMatchAPal(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, _DWORD *a6)
{
  int v6; // eax
  unsigned int v8; // edi
  unsigned int v9; // ecx
  unsigned int v10; // esi
  unsigned int v11; // r13d
  __int64 result; // rax
  _DWORD *v13; // r12
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // r8d
  unsigned int v17; // r9d
  __int64 v18; // rdx
  __int64 v19; // r15
  char v20; // r14
  __int64 v21; // rbx
  unsigned int v22; // eax
  char v23; // r9
  __int64 v24; // rcx
  unsigned int v25; // edx
  __int64 v26; // rax
  unsigned int v27; // r8d
  unsigned int v28; // r11d
  __int64 v29; // rcx
  __int64 v30; // r9
  int v31; // eax
  _DWORD *v32; // rcx
  int v33; // [rsp+20h] [rbp-10h]
  int v34; // [rsp+20h] [rbp-10h]
  int v35; // [rsp+20h] [rbp-10h]
  char v36; // [rsp+24h] [rbp-Ch]
  int v37; // [rsp+28h] [rbp-8h]
  int v38; // [rsp+2Ch] [rbp-4h]
  __int64 v39; // [rsp+70h] [rbp+40h] BYREF
  __int64 v40; // [rsp+78h] [rbp+48h] BYREF
  __int64 v41; // [rsp+80h] [rbp+50h] BYREF

  v41 = a3;
  v40 = a2;
  v39 = a1;
  v6 = *(_DWORD *)(a2 + 24);
  if ( (v6 & 0x1000) != 0 )
  {
    v8 = 1;
  }
  else if ( (v6 & 0x10000) != 0 )
  {
    v8 = 0;
  }
  else
  {
    v8 = *(_DWORD *)(a2 + 60) >> 1;
  }
  v9 = *(_DWORD *)(a3 + 28) + 7;
  LODWORD(v39) = 0;
  v37 = 0;
  v10 = v8;
  v11 = 256 - v8;
  result = PALLOCNOZ(v9, 1818316871LL, a3);
  v13 = (_DWORD *)result;
  if ( result )
  {
    v14 = v41;
    v38 = *(_DWORD *)(v41 + 28);
    if ( a4 )
    {
      XEPALOBJ::vUpdateTime((XEPALOBJ *)&v40);
      LODWORD(v39) = v8;
      if ( v8 < v11 )
      {
        v15 = v8;
        v16 = v8;
        v17 = v8;
        do
        {
          v18 = *(_QWORD *)(v40 + 112);
          v33 = *(_DWORD *)(v18 + 4LL * v15);
          HIBYTE(v33) &= 0xCEu;
          *(_DWORD *)(v18 + 4LL * v17) = v33;
          v15 = v16 + 1;
          v16 = v15;
          v17 = v15;
        }
        while ( v15 < v11 );
        LODWORD(v39) = v15;
      }
      v14 = v41;
    }
    v19 = 0LL;
    v20 = 48;
    if ( *(_DWORD *)(v14 + 28) )
    {
      do
      {
        v21 = v40;
        v34 = *(_DWORD *)(*(_QWORD *)(v14 + 112) + 4 * v19);
        v22 = ColorMatch(v40, v34, (unsigned int *)&v39);
        v23 = v22;
        v36 = v22;
        if ( (_DWORD)v39 )
        {
          if ( v10 || (*(_DWORD *)(v21 + 24) & 0x10000) != 0 )
          {
            while ( 2 )
            {
              LODWORD(v39) = v10;
              v25 = v10 + 1;
              v26 = v10;
              v27 = v10;
              v28 = v10;
              while ( 1 )
              {
                v29 = v28;
                v28 = v25;
                if ( v10 >= v11 )
                  break;
                v30 = *(_QWORD *)(v21 + 112);
                if ( ((unsigned __int8)v20 & *(_BYTE *)(v30 + 4 * v26 + 3)) == 0 )
                {
                  HIBYTE(v34) |= 0x30u;
                  v10 = v27;
                  ++v37;
                  *(_DWORD *)(v30 + 4 * v29) = v34;
                  v36 = v27;
                  goto LABEL_27;
                }
                v26 = v25;
                v10 = v25;
                LODWORD(v39) = v25;
                v27 = v25++;
              }
              if ( (v20 & 0x10) != 0 )
              {
                v20 &= ~0x10u;
                v10 = v8;
                continue;
              }
              break;
            }
            v10 = 0;
LABEL_27:
            v23 = v36;
          }
        }
        else if ( (v34 & 0x2000000) == 0 )
        {
          v24 = *(_QWORD *)(v21 + 112);
          v35 = *(_DWORD *)(v24 + 4LL * v22);
          HIBYTE(v35) |= 0x30u;
          *(_DWORD *)(v24 + 4LL * v22) = v35;
        }
        *((_BYTE *)v13 + v19 + 4) = v23;
        v19 = (unsigned int)(v19 + 1);
        v14 = v41;
      }
      while ( (unsigned int)v19 < *(_DWORD *)(v41 + 28) );
    }
    XEPALOBJ::vUpdateTime((XEPALOBJ *)&v41);
    v31 = XEPALOBJ::ulTime((XEPALOBJ *)&v40);
    v32 = a5;
    *v13 = v31;
    *v32 = v37;
    *a6 = v38;
    return (__int64)v13;
  }
  return result;
}

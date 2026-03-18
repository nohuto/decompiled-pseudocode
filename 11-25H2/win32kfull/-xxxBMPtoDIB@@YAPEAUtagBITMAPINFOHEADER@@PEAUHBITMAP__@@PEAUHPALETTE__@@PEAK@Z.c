/*
 * XREFs of ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x14022553C
 * Callers:
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B4028 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B41CC (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreGetDIBitsInternal @ 0x14007C00C (GreGetDIBitsInternal.c)
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     _SelectPalette @ 0x14018BD50 (_SelectPalette.c)
 *     xxxRealizePalette @ 0x1401E0060 (xxxRealizePalette.c)
 */

struct tagBITMAPINFOHEADER *__fastcall xxxBMPtoDIB(Gre::Base *a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  unsigned int v6; // edi
  unsigned __int16 v7; // bx
  unsigned __int16 v8; // cx
  unsigned int v9; // r12d
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r14
  unsigned int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _DWORD *v16; // rbx
  __int128 v17; // xmm1
  __int64 v18; // xmm0_8
  __int64 UserSessionState; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  HDC CompatibleDC; // rsi
  __int64 v23; // r15
  struct tagTHREADINFO *v24; // rax
  int DIBitsInternal; // edi
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct tagTHREADINFO *v28; // rax
  int v30; // [rsp+38h] [rbp-39h]
  _QWORD v31[5]; // [rsp+58h] [rbp-19h] BYREF
  __int128 v32; // [rsp+80h] [rbp+Fh] BYREF
  __int128 v33; // [rsp+90h] [rbp+1Fh]

  v32 = 0LL;
  v33 = 0LL;
  v6 = 0;
  if ( (unsigned int)GreExtGetObjectW(a1, 32LL, &v32, a4) )
  {
    v7 = v33 * WORD1(v33);
    if ( (unsigned __int16)(v33 * WORD1(v33)) > 1u )
    {
      v8 = 4;
      if ( v7 > 4u )
      {
        if ( v7 > 8u )
        {
          if ( *((_WORD *)PtiCurrent(4LL, 8LL) + 336) < 0x400u )
          {
            v8 = 24;
          }
          else if ( v7 > 0x10u )
          {
            v8 = 24;
            if ( v7 > 0x18u )
              v8 = 32;
          }
          else
          {
            v8 = 16;
          }
        }
        else
        {
          v8 = 8;
        }
      }
    }
    else
    {
      v8 = 1;
    }
    v9 = DWORD2(v32);
    *(_QWORD *)((char *)v31 + 4) = *(_QWORD *)((char *)&v32 + 4);
    v10 = v8 * (unsigned __int64)DWORD1(v32);
    LODWORD(v31[0]) = 40;
    WORD2(v31[1]) = 1;
    HIWORD(v31[1]) = v8;
    memset(&v31[2], 0, 24);
    if ( v10 <= 0xFFFFFFFF )
    {
      v11 = DWORD2(v32) * (unsigned __int64)(((unsigned int)(v10 + 31) >> 3) & 0x1FFFFFFC);
      if ( v11 <= 0xFFFFFFFF )
      {
        if ( v8 > 8u )
        {
          if ( ((v8 - 16) & 0xFFEF) == 0 )
          {
            v6 = 12;
            LODWORD(v31[2]) = 3;
          }
        }
        else
        {
          v6 = 4 * (1 << v8);
        }
        v12 = v6 + 40 + v11;
        if ( v12 >= v6 + 40 )
        {
          v13 = Win32AllocPoolZInit(v12, 1650684757LL);
          v16 = (_DWORD *)v13;
          if ( v13 )
          {
            if ( a3 )
              *a3 = v12;
            v17 = *(_OWORD *)&v31[2];
            *(_OWORD *)v13 = *(_OWORD *)v31;
            v18 = v31[4];
            *(_OWORD *)(v13 + 16) = v17;
            *(_QWORD *)(v13 + 32) = v18;
            UserSessionState = W32GetUserSessionState(v15, v14);
            CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 64LL));
            if ( CompatibleDC )
            {
              v23 = 0LL;
              v24 = PtiCurrent(v21, v20);
              v31[0] = *((_QWORD *)v24 + 48);
              *((_QWORD *)v24 + 48) = v31;
              v31[2] = Win32FreePool;
              v31[1] = v16;
              if ( a2 )
              {
                v23 = SelectPalette((__int64)CompatibleDC, a2, 0);
                xxxRealizePalette(CompatibleDC);
              }
              DIBitsInternal = GreGetDIBitsInternal(
                                 CompatibleDC,
                                 (HSURF)a1,
                                 (__int64)v16 + *v16 + v6,
                                 v9,
                                 (__int64)v16 + *v16 + v6,
                                 v16,
                                 v30,
                                 v11,
                                 *v16 + v6);
              if ( v23 )
              {
                SelectPalette((__int64)CompatibleDC, v23, 0);
                xxxRealizePalette(CompatibleDC);
              }
              GreDeleteDC(CompatibleDC);
              v28 = PtiCurrent(v27, v26);
              *((_QWORD *)v28 + 48) = v31[0];
              if ( DIBitsInternal )
                return (struct tagBITMAPINFOHEADER *)v16;
            }
            Win32FreePool(v16);
          }
        }
      }
    }
  }
  return 0LL;
}

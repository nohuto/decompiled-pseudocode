/*
 * XREFs of ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1400833C0
 * Callers:
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1400831B0 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     GreCreateReferencedDIBitmap @ 0x1400181E0 (GreCreateReferencedDIBitmap.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1400836B8 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 *     ?DrawRegionalShadow@@YAXPEAXJJ@Z @ 0x1400839F0 (-DrawRegionalShadow@@YAXPEAXJJ@Z.c)
 *     FillRect @ 0x140126BCC (FillRect.c)
 *     ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x140207B60 (-DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x14028DF44 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

HBITMAP __fastcall GenerateWindowShadow(struct tagWND *a1, HDC a2)
{
  __int64 v2; // rax
  int v4; // r12d
  int v6; // r13d
  __int128 v7; // xmm0
  signed int v8; // r14d
  int v9; // esi
  LONG v10; // esi
  LONG v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  HBRUSH StockObject; // rax
  __int64 v20; // rdx
  HBITMAP ScaledWindowShadowFromDIB; // rax
  HBITMAP v23; // rdi
  __int64 v24; // rcx
  unsigned __int16 ScaledLogPixels; // ax
  int v26; // [rsp+20h] [rbp-99h]
  int v27; // [rsp+28h] [rbp-91h]
  int v28; // [rsp+30h] [rbp-89h]
  int v29; // [rsp+38h] [rbp-81h]
  int v30; // [rsp+40h] [rbp-79h]
  int v31; // [rsp+48h] [rbp-71h]
  int v32; // [rsp+50h] [rbp-69h]
  int v33; // [rsp+58h] [rbp-61h]
  RECT v34; // [rsp+70h] [rbp-49h] BYREF
  int v35; // [rsp+80h] [rbp-39h] BYREF
  int v36; // [rsp+84h] [rbp-35h]
  void *v37; // [rsp+88h] [rbp-31h] BYREF
  struct tagWND *v38; // [rsp+90h] [rbp-29h]
  __int64 v39; // [rsp+98h] [rbp-21h]
  unsigned int v40[3]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v41; // [rsp+ACh] [rbp-Dh]
  __int128 v42; // [rsp+B4h] [rbp-5h]
  __int64 v43; // [rsp+C4h] [rbp+Bh]

  v2 = *((_QWORD *)a1 + 5);
  v38 = a1;
  v4 = 0;
  v37 = 0LL;
  v35 = 0;
  v6 = 0;
  v7 = *(_OWORD *)(v2 + 88);
  v8 = 1;
  v36 = *(_BYTE *)(v2 + 26) & 0x40;
  v9 = DWORD2(v7) - v7;
  v34.left = 0;
  v34.right = DWORD2(v7) - v7;
  v34.bottom = HIDWORD(v7) - DWORD1(v7);
  v34.top = 0;
  if ( HIDWORD(v7) - DWORD1(v7) > 0 && v9 > 0 )
  {
    v10 = v9 + 5;
    v11 = HIDWORD(v7) - DWORD1(v7) + 5;
    v34.right = v10;
    v34.bottom = v11;
    if ( PtiCurrent(0LL) )
    {
      if ( *((_QWORD *)PtiCurrent(v13) + 61) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v15) + 61) + 8LL) + 64LL) & 1) != 0 )
        {
          v16 = *((_QWORD *)a1 + 5);
          if ( (*(_DWORD *)(v16 + 288) & 0x4000000F) == 0x40000000 )
          {
            v24 = *(unsigned __int16 *)(v16 + 284);
            if ( (_WORD)v24 != 96 )
            {
              ScaledLogPixels = GreGetScaledLogPixels(v24);
              LODWORD(v12) = (2863311531u * (unsigned __int64)ScaledLogPixels) >> 32;
              v8 = ScaledLogPixels / 0x60u;
              v10 *= v8;
              v34.right = v10;
              v11 *= v8;
              v34.bottom = v11;
            }
          }
        }
      }
    }
    v43 = 0LL;
    v40[0] = 40;
    v40[1] = v10;
    v42 = 0LL;
    v40[2] = v11;
    v41 = 2097153LL;
    v17 = GreCreateReferencedDIBitmap(a2, v12, v14, v40, v26, v27, v28, v29, v30, v31, v32, v33, &v37);
    v18 = v17;
    if ( v17 )
    {
      v39 = GreSelectBitmap(a2, v17);
      StockObject = (HBRUSH)GreGetStockObject(4LL);
      FillRect(a2, &v34, StockObject);
      if ( v10 < 15 || v11 < 15 )
        v6 = 1;
      if ( (unsigned int)DrawWindowShadow(v38, a2, v36, v6, &v35) )
      {
        if ( !v35 || v6 )
          DrawRegionalShadow(v37, v10, v11);
        else
          DrawRoundedRectangularShadow(v37, v10, v11, v36, v8);
        v4 = 1;
      }
      LOBYTE(v20) = 5;
      GreDecrementObjectReferenceCount(v18, v20);
      if ( v4 )
      {
        if ( v8 <= 1 )
          return (HBITMAP)v18;
        ScaledWindowShadowFromDIB = CreateScaledWindowShadowFromDIB(v38, a2, v8);
        v23 = ScaledWindowShadowFromDIB;
        if ( ScaledWindowShadowFromDIB )
        {
          GreSelectBitmap(a2, ScaledWindowShadowFromDIB);
          GreDeleteObject(v18);
          return v23;
        }
      }
      GreSelectBitmap(a2, v39);
      GreDeleteObject(v18);
      return 0LL;
    }
  }
  return 0LL;
}

/*
 * XREFs of NtGdiPolyPolyDraw @ 0x140010C70
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     AllocFreeTmpBuffer @ 0x1400110D0 (AllocFreeTmpBuffer.c)
 *     FreeTmpBuffer @ 0x1400113B0 (FreeTmpBuffer.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ?GreProbeAndReadFromUntrustedVa@@YAXPEAX_KPEBX11@Z @ 0x140040790 (-GreProbeAndReadFromUntrustedVa@@YAXPEAX_KPEBX11@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1400C0C00 (GreCreatePolyPolygonRgnInternal.c)
 *     GrePolyPolyline @ 0x140155E58 (GrePolyPolyline.c)
 *     GrePolyPolygon @ 0x140156254 (GrePolyPolygon.c)
 *     GrePolylineTo @ 0x140174F78 (GrePolylineTo.c)
 *     GrePolyBezier @ 0x1401C0734 (GrePolyBezier.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiPolyPolyDraw(__int64 a1, void *a2, const void *a3, unsigned int a4, int a5)
{
  __int64 v5; // r13
  __int64 PolyPolygonRgnInternal; // rbx
  int v10; // r14d
  unsigned int *p_Buffer; // r15
  struct _POINTL *v12; // rsi
  unsigned int v13; // r12d
  __int64 i; // rcx
  __int64 v15; // rcx
  __int64 (*v16)(void); // rax
  unsigned int v17; // ebx
  __int64 (__fastcall *v18)(__int64, struct _POINTL *, _QWORD); // rax
  __int64 (*v20)(void); // rax
  int v21; // eax
  __int64 (__fastcall *v22)(__int64, void *, const void *, _QWORD); // rax
  __int64 (*v23)(void); // rax
  __int64 (*v24)(void); // rax
  __int64 (*v25)(void); // rax
  __int64 (*v26)(void); // rax
  unsigned int Buffer; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-E4h]
  __int64 v29; // [rsp+38h] [rbp-E0h]
  int v30; // [rsp+40h] [rbp-D8h]
  unsigned int v31; // [rsp+48h] [rbp-D0h]
  unsigned int *v32; // [rsp+50h] [rbp-C8h]
  __int64 v33; // [rsp+58h] [rbp-C0h]
  struct _POINTL *v34; // [rsp+60h] [rbp-B8h]
  void *v35; // [rsp+68h] [rbp-B0h]
  __int64 v36; // [rsp+70h] [rbp-A8h]
  struct _POINTL v37; // [rsp+80h] [rbp-98h] BYREF

  v5 = a4;
  v35 = a2;
  v29 = a1;
  v36 = a1;
  v31 = a4;
  v28 = 0;
  PolyPolygonRgnInternal = 1LL;
  Buffer = 0;
  if ( !a4 )
    return 0LL;
  if ( a5 == 2 )
  {
    v20 = *(__int64 (**)(void))(*(_QWORD *)(((__int64 (*)(void))W32GetWin32kBaseApiSetTable)() + 24) + 2176LL);
    if ( v20 )
    {
      v21 = v20();
      v10 = -1073741637;
    }
    else
    {
      v10 = -1073741637;
      v21 = -1073741637;
    }
    if ( v21 < 0 )
      return PolyPolygonRgnInternal;
    v22 = *(__int64 (__fastcall **)(__int64, void *, const void *, _QWORD))(*(_QWORD *)(((__int64 (*)(void))W32GetWin32kBaseApiSetTable)()
                                                                                      + 24)
                                                                          + 2184LL);
    if ( v22 )
      LODWORD(v22) = v22(a1, a2, a3, (unsigned int)v5);
    if ( (_DWORD)v22 )
      return PolyPolygonRgnInternal;
  }
  else
  {
    v10 = -1073741637;
  }
  if ( (unsigned int)v5 <= 1 )
  {
    p_Buffer = &Buffer;
    goto LABEL_6;
  }
  if ( (unsigned int)(a5 - 3) > 2 )
  {
    if ( (unsigned int)v5 > 0x9C4000 )
    {
      EngSetLastError(0x57u);
      p_Buffer = 0LL;
    }
    else
    {
      p_Buffer = (unsigned int *)PALLOCNOZ(4 * (int)v5, 0x706D7447u);
    }
LABEL_6:
    v32 = p_Buffer;
    if ( p_Buffer )
    {
      v12 = &v37;
      v34 = &v37;
      v30 = 0;
      GreProbeAndReadFromUntrustedVa(p_Buffer, 4 * v5, a3, 4 * v5, 1uLL);
      v13 = 0;
      v28 = 0;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v30 = i;
        if ( (unsigned int)i >= (unsigned int)v5 )
          break;
        v13 += p_Buffer[i];
        v28 = v13;
      }
      if ( v13 > 0x4E2000 )
        goto LABEL_15;
      if ( v13 > 0xA )
      {
        v12 = (struct _POINTL *)AllocFreeTmpBuffer(8 * v13);
        v34 = v12;
      }
      if ( v12 )
      {
        GreProbeAndReadFromUntrustedVa(v12, 8LL * v13, v35, 8LL * v13, 1uLL);
      }
      else
      {
LABEL_15:
        PolyPolygonRgnInternal = 0LL;
        v33 = 0LL;
      }
      if ( !PolyPolygonRgnInternal )
        goto LABEL_28;
      switch ( a5 )
      {
        case 1:
          v23 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v29) + 24) + 2160LL);
          if ( v23 )
            v10 = v23();
          if ( v10 < 0 )
            goto LABEL_52;
          LODWORD(v18) = GrePolyPolygon(v29, (_DWORD)v12, (_DWORD)p_Buffer, v5, v13);
          break;
        case 2:
          v24 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v29) + 24) + 2208LL);
          if ( v24 )
            v10 = v24();
          if ( v10 < 0 )
            goto LABEL_52;
          LODWORD(v18) = GrePolyPolyline(v29, (_DWORD)v12, (_DWORD)p_Buffer, v5, v13);
          break;
        case 3:
          v26 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v29) + 24) + 2192LL);
          if ( v26 )
            v10 = v26();
          if ( v10 < 0 )
            goto LABEL_52;
          LODWORD(v18) = GrePolyBezier(v29, v12, Buffer);
          break;
        case 4:
          v25 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v29) + 24) + 2240LL);
          if ( v25 )
            v10 = v25();
          if ( v10 < 0 )
            goto LABEL_52;
          LODWORD(v18) = GrePolylineTo(v29, v12, Buffer);
          break;
        case 5:
          v15 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v29) + 24);
          v16 = *(__int64 (**)(void))(v15 + 2224);
          if ( v16 )
            v10 = v16();
          if ( v10 >= 0 )
          {
            v17 = Buffer;
            v18 = *(__int64 (__fastcall **)(__int64, struct _POINTL *, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v15)
                                                                                          + 24)
                                                                              + 2232LL);
            if ( v18 )
              LODWORD(v18) = v18(v29, v12, v17);
            break;
          }
          break;
        case 6:
          PolyPolygonRgnInternal = GreCreatePolyPolygonRgnInternal(v12, v13);
          goto LABEL_28;
        default:
LABEL_52:
          PolyPolygonRgnInternal = 0LL;
LABEL_28:
          if ( v12 && v12 != &v37 )
            FreeTmpBuffer(v12);
          if ( p_Buffer != &Buffer )
            GreDeleteFastMutex(p_Buffer);
          return PolyPolygonRgnInternal;
      }
      PolyPolygonRgnInternal = (int)v18;
      goto LABEL_28;
    }
    return 0LL;
  }
  return 0LL;
}

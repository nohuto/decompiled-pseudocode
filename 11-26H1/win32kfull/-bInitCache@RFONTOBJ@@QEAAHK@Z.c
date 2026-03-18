/*
 * XREFs of ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1400FB968
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14010651C (-bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 * Callees:
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1400C2758 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     EngUnmapFontFileFD @ 0x1400C2BE0 (EngUnmapFontFileFD.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400FBC50 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?ValidateGlyphDataAndBitmap@@YA_NJKPEAX@Z @ 0x1400FC27C (-ValidateGlyphDataAndBitmap@@YA_NJKPEAX@Z.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1400FC44C (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall RFONTOBJ::bInitCache(RFONTOBJ *this, int a2)
{
  __int64 v2; // r8
  int v5; // edx
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rsi
  BOOL v9; // r14d
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64, _QWORD, _QWORD, _BYTE *, _QWORD, _DWORD); // rbx
  unsigned int v12; // r12d
  int v13; // ebx
  ULONG_PTR *v15; // rbx
  __int64 v16; // rdi
  unsigned __int16 v17; // [rsp+48h] [rbp-49h] BYREF
  unsigned int v18; // [rsp+50h] [rbp-41h] BYREF
  ULONG_PTR *v19; // [rsp+58h] [rbp-39h] BYREF
  unsigned int v20; // [rsp+60h] [rbp-31h]
  __int64 v21; // [rsp+68h] [rbp-29h] BYREF
  _BYTE v22[12]; // [rsp+78h] [rbp-19h] BYREF
  int v23; // [rsp+84h] [rbp-Dh]

  v2 = *(_QWORD *)this;
  *(_QWORD *)(v2 + 536) = 0LL;
  *(_QWORD *)(v2 + 544) = 0LL;
  *(_QWORD *)(v2 + 556) = 0LL;
  *(_DWORD *)(v2 + 552) = 0;
  *(_QWORD *)(v2 + 576) = 0LL;
  *(_QWORD *)(v2 + 568) = 0LL;
  *(_QWORD *)(v2 + 592) = 0LL;
  *(_QWORD *)(v2 + 584) = 0LL;
  *(_DWORD *)(v2 + 564) = 0;
  *(_DWORD *)(v2 + 600) = 0;
  *(_QWORD *)(v2 + 616) = 0LL;
  *(_QWORD *)(v2 + 624) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 480LL) = 0LL;
  v5 = *(_DWORD *)(*(_QWORD *)this + 88LL);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      *(_QWORD *)(v2 + 640) = 0LL;
      if ( v6 == 1 )
        *(_QWORD *)(v2 + 632) = 294912LL;
      else
        *(_QWORD *)(v2 + 632) = 0LL;
    }
    else if ( *(_QWORD *)(v2 + 632) > 0x48000uLL )
    {
      a2 |= 1u;
    }
  }
  v7 = *(_QWORD *)this;
  v18 = 0;
  *(_DWORD *)(v7 + 84) = a2;
  v17 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 118LL);
  RFONTOBJ::vXlatGlyphArray(this, &v17, 1u, &v18, 2u, 0);
  *(_DWORD *)(*(_QWORD *)this + 720LL) &= ~0x40u;
  v8 = *(_QWORD *)this;
  v9 = *(_DWORD *)(*(_QWORD *)this + 88LL) == 2;
  memset_0(v22, 0, 0x40uLL);
  v10 = *(_QWORD *)(v8 + 112);
  v21 = *(_QWORD *)(v8 + 128);
  v11 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _BYTE *, _QWORD, _DWORD))(*(_QWORD *)(v21 + 96)
                                                                                            + 2904LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v19, (struct PFFOBJ *)&v21);
  v12 = v18;
  v13 = v11(v10, v8, (unsigned int)(v9 + 1), v18, v22, 0LL, 0);
  if ( !ValidateGlyphDataAndBitmap(v13, v9 + 1, 0LL) )
  {
    if ( v20 )
    {
      v15 = v19;
      v16 = v20;
      do
      {
        EngUnmapFontFileFD(*v15++);
        --v16;
      }
      while ( v16 );
    }
    return 0LL;
  }
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)&v19);
  if ( v13 != -1 )
  {
    *(_DWORD *)(*(_QWORD *)this + 464LL) = v23;
    *(_DWORD *)(*(_QWORD *)this + 460LL) = v12;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 12LL) & 8) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)this + 856LL) = 0LL;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)this + 856LL) = GreCreateSemaphore();
      if ( !*(_QWORD *)(*(_QWORD *)this + 856LL) )
        return 0LL;
    }
    *(_QWORD *)(*(_QWORD *)this + 504LL) = GreCreateSemaphore();
    if ( *(_QWORD *)(*(_QWORD *)this + 504LL) )
      return 1LL;
    if ( *(_QWORD *)(*(_QWORD *)this + 856LL) )
    {
      GreDeleteSemaphore();
      *(_QWORD *)(*(_QWORD *)this + 856LL) = 0LL;
    }
  }
  return 0LL;
}

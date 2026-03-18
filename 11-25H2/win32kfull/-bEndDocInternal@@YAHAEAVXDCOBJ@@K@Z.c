/*
 * XREFs of ?bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z @ 0x14026A7D8
 * Callers:
 *     NtGdiStartPage @ 0x140214680 (NtGdiStartPage.c)
 *     NtGdiAbortDoc @ 0x140328B00 (NtGdiAbortDoc.c)
 *     NtGdiEndDoc @ 0x140328EF0 (NtGdiEndDoc.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x140082B20 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1400A1DA4 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?UmpdSecurityGateNoUmpdObj@@YA_NXZ @ 0x1400D3200 (-UmpdSecurityGateNoUmpdObj@@YA_NXZ.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1400D7A58 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x140144234 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x14026EA58 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x14026F324 (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 *     ?vInit@RESTORESAVEDCATTRS@@QEAAXPEAVXDCOBJ@@@Z @ 0x140270270 (-vInit@RESTORESAVEDCATTRS@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x140326D50 (--0DCOBJ@@QEAA@XZ.c)
 *     ?UMPDServer@@YAHPEAVSURFACE@@@Z @ 0x140337924 (-UMPDServer@@YAHPEAVSURFACE@@@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bEndDocInternal(struct XDCOBJ *a1, unsigned int a2)
{
  _DWORD *v4; // r8
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  struct SURFACE *v11; // rsi
  int v12; // r14d
  char *v13; // rcx
  int v14; // r12d
  int v15; // esi
  __int64 v16; // r15
  __int64 v17; // r8
  DC *v18; // rax
  SURFACE *v19; // rcx
  int v20; // eax
  DC *v22[10]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+40h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x200800) != 0 )
    goto LABEL_32;
  if ( !(unsigned int)XDCOBJ::bValidSurf(a1) )
    goto LABEL_32;
  v5 = *v4 & 0x7F0000;
  if ( v5 == 0x10000 || v5 == 6684672 )
    goto LABEL_32;
  v6 = (unsigned int)v4[27];
  if ( v4[26] > (int)v6 )
    GrepRestoreDCOBJ(a1, v6);
  v7 = 1;
  *(_DWORD *)(*(_QWORD *)a1 + 36LL) |= 0x200000u;
  v8 = *(_QWORD *)a1;
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v23 = v9;
  v10 = *(unsigned int *)(v9 + 40);
  if ( (v10 & 1) != 0 || !*(_QWORD *)(v9 + 2552) )
  {
LABEL_32:
    EngSetLastError(0x3EBu);
    return 0LL;
  }
  else
  {
    v24 = 0LL;
    v11 = *(struct SURFACE **)(v8 + 496);
    if ( (v10 & 0x8000) != 0 )
      RESTORESAVEDCATTRS::vInit((RESTORESAVEDCATTRS *)&v24, a1);
    if ( !UmpdSecurityGateNoUmpdObj(v10, v6, (__int64)v4) || *(_QWORD *)(v23 + 2952) )
    {
      if ( v11 )
        v13 = (char *)v11 + 24;
      else
        v13 = 0LL;
      v12 = (*(__int64 (__fastcall **)(char *, _QWORD))(v23 + 2952))(v13, a2);
    }
    else
    {
      v12 = 0;
    }
    RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v24);
    v14 = *(_DWORD *)(v23 + 40) & 0x8000;
    *(_WORD *)(*(_QWORD *)a1 + 2088LL) = -1;
    UMPDServer(v11);
    DC::pSurface(*(DC **)a1, 0LL);
    *(_DWORD *)(*(_QWORD *)a1 + 316LL) |= 0xFu;
    v15 = 0;
    v16 = *(_QWORD *)(*(_QWORD *)a1 + 112LL);
    while ( v15 < *(_DWORD *)(*(_QWORD *)a1 + 104LL) - 1 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v22);
      LOBYTE(v17) = 1;
      v18 = (DC *)HmgLockEx2(v22[2], v16, v17, 1LL);
      v22[0] = v18;
      if ( !v18 || (v19 = (SURFACE *)*((_QWORD *)v18 + 62)) == 0LL )
      {
        DCOBJ::~DCOBJ((DCOBJ *)v22);
        break;
      }
      v20 = *((_DWORD *)v19 + 28);
      if ( (v20 & 0x800) != 0 )
      {
        DEC_SHARE_REF_CNT(v19);
      }
      else if ( v20 >= 0 )
      {
        SURFACE::vDec_cRef(v19);
      }
      DC::pSurface(v22[0], 0LL);
      *((_DWORD *)v22[0] + 79) |= 0xFu;
      v16 = *((_QWORD *)v22[0] + 14);
      DCOBJ::~DCOBJ((DCOBJ *)v22);
      ++v15;
    }
    PDEVOBJ::vDisableSurface((PDEVOBJ *)&v23, 1u);
    *(_DWORD *)(*(_QWORD *)a1 + 36LL) &= ~0x200000u;
    if ( !v14 || !v12 )
      v7 = 0;
    RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS((RESTORESAVEDCATTRS *)&v24);
    return v7;
  }
}

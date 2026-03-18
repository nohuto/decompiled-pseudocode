/*
 * XREFs of NtGdiDdDDICreateDCFromMemory @ 0x1401B0310
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x14009344C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x14009A8F4 (--0SURFREF@@QEAA@XZ.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x14016EDB0 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@W4HandleLockOptions@@@Z @ 0x140175244 (--0MDCOBJA@@QEAA@PEAUHDC__@@W4HandleLockOptions@@@Z.c)
 *     ?DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z @ 0x1401B4B5C (-DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z.c)
 *     ?DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z @ 0x1401B4BA0 (-DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x14032575C (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiDdDDICreateDCFromMemory(ULONG64 a1)
{
  const void *v2; // rdx
  unsigned int v3; // edx
  ULONG *v4; // r12
  ULONG v5; // r15d
  _OWORD *v6; // rcx
  ULONG *v7; // rax
  __int64 v8; // rdx
  int v9; // esi
  FLONG flGreen; // r14d
  FLONG flBlue; // edi
  unsigned __int64 v12; // rcx
  int v13; // eax
  HANDLE v14; // r13
  FLONG v15; // r9d
  ULONG v16; // esi
  HPALETTE Palette; // rax
  HPALETTE v18; // rdi
  SIZE_T v19; // r14
  unsigned int v20; // edx
  unsigned __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  char v24; // si
  HDC DisplayDC; // rax
  __int64 v26; // r9
  unsigned int v27; // esi
  ULONG64 v28; // r14
  void *v29; // rcx
  void *v30; // rcx
  HSURF hsurf; // [rsp+30h] [rbp-5D8h] BYREF
  SIZE_T Length; // [rsp+38h] [rbp-5D0h]
  ULONG cColors[2]; // [rsp+40h] [rbp-5C8h]
  HDC Src; // [rsp+48h] [rbp-5C0h] BYREF
  SIZEL sizl; // [rsp+50h] [rbp-5B8h] BYREF
  unsigned int v37; // [rsp+58h] [rbp-5B0h]
  __int64 v38; // [rsp+60h] [rbp-5A8h] BYREF
  volatile void *Address[2]; // [rsp+68h] [rbp-5A0h] BYREF
  LONG lWidth[4]; // [rsp+78h] [rbp-590h]
  __int128 v41; // [rsp+88h] [rbp-580h]
  __int64 v42; // [rsp+98h] [rbp-570h]
  ULONG64 v43; // [rsp+A0h] [rbp-568h]
  _BYTE v44[32]; // [rsp+A8h] [rbp-560h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-540h]
  HANDLE v46; // [rsp+D0h] [rbp-538h]
  __int64 *v47[5]; // [rsp+D8h] [rbp-530h] BYREF
  char v48[16]; // [rsp+100h] [rbp-508h] BYREF
  _BYTE v49[112]; // [rsp+110h] [rbp-4F8h] BYREF
  _BYTE v50[96]; // [rsp+180h] [rbp-488h] BYREF
  ULONG pulColors[256]; // [rsp+1E0h] [rbp-428h] BYREF

  v43 = a1;
  ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v50);
  Src = 0LL;
  hsurf = 0LL;
  Length = 0LL;
  *(_OWORD *)Address = 0LL;
  *(_OWORD *)lWidth = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v2 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Address, v2, 0x38uLL);
  sizl = (SIZEL)__PAIR64__(lWidth[0], HIDWORD(Address[1]));
  v3 = lWidth[0];
  if ( SHIDWORD(Address[1]) <= 0 || lWidth[0] <= 0 )
    goto LABEL_56;
  cColors[0] = 0;
  v4 = 0LL;
  switch ( LODWORD(Address[1]) )
  {
    case 0x14:
      v5 = 5;
      goto LABEL_25;
    case 0x15:
    case 0x16:
      v5 = 6;
LABEL_25:
      flGreen = 65280;
      flBlue = 255;
      v9 = 16711680;
      break;
    case 0x17:
      v9 = 63488;
      flBlue = 31;
      v5 = 4;
      flGreen = 2016;
      break;
    case 0x18:
    case 0x19:
      v9 = 31744;
      flBlue = 31;
      v5 = 4;
      flGreen = 992;
      break;
    case 0x29:
      v5 = 3;
      v6 = (_OWORD *)v41;
      if ( (_QWORD)v41 )
      {
        if ( (__int64)v41 + 1024 < (unsigned __int64)v41 || (__int64)v41 + 1024 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v7 = pulColors;
        v8 = 8LL;
        do
        {
          *(_OWORD *)v7 = *v6;
          *((_OWORD *)v7 + 1) = v6[1];
          *((_OWORD *)v7 + 2) = v6[2];
          *((_OWORD *)v7 + 3) = v6[3];
          *((_OWORD *)v7 + 4) = v6[4];
          *((_OWORD *)v7 + 5) = v6[5];
          *((_OWORD *)v7 + 6) = v6[6];
          v7 += 32;
          *((_OWORD *)v7 - 1) = v6[7];
          v6 += 8;
          --v8;
        }
        while ( v8 );
        v4 = pulColors;
        v3 = lWidth[0];
      }
      else
      {
        v4 = (ULONG *)&unk_140364D20;
      }
      cColors[0] = 256;
      v9 = 0;
      flGreen = 0;
      flBlue = 0;
      break;
    default:
LABEL_56:
      ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v50);
      return 3221225485LL;
  }
  v12 = v3 * (unsigned __int64)(unsigned int)lWidth[1];
  v13 = -1;
  if ( v12 <= 0xFFFFFFFF )
    v13 = v3 * lWidth[1];
  LODWORD(Length) = v13;
  v37 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v12 > 0xFFFFFFFF )
    goto LABEL_56;
  ProbeForWrite(Address[0], Length, 4u);
  v14 = MmSecureVirtualMemory((PVOID)Address[0], Length, 4u);
  v46 = v14;
  if ( !v14 )
    goto LABEL_56;
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v38);
  MDCOBJA::MDCOBJA((__int64)v47, *(__int64 *)&lWidth[2]);
  if ( !v47[0] )
  {
    MmUnsecureVirtualMemory(v14);
    XDCOBJ::vAltUnlockNoNullSet(v47);
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v38);
    goto LABEL_56;
  }
  Length = v47[0][6];
  v15 = v9;
  v16 = cColors[0];
  Palette = EngCreatePalette((unsigned int)(v5 > 3) + 1, cColors[0], v4, v15, flGreen, flBlue);
  v18 = Palette;
  *(_QWORD *)cColors = Palette;
  if ( Palette )
  {
    v19 = Length;
    if ( v16 == 256 && !v4 )
      DxEngSyncPaletteTableWithDevice(Palette, (HDEV)Length);
    hsurf = (HSURF)EngCreateBitmap(sizl, lWidth[1], v5, 1u, (PVOID)Address[0]);
    DxEngSetPaletteState(v18, v20, v21);
    if ( hsurf )
    {
      SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&sizl);
      SURFREF::SURFREF((SURFREF *)v44);
      LOBYTE(v22) = 5;
      v23 = HmgShareLockCheckIgnoreStockBit(hsurf, v22);
      v45 = v23;
      if ( v23 )
      {
        v24 = 1;
        DxEngSelectPaletteToSurface((struct _SURFOBJ *)(v23 + 24), v18);
        *(_QWORD *)(v45 + 224) = v14;
        *(_DWORD *)(v45 + 112) |= 0x100000u;
        *(_DWORD *)(v45 + 112) |= 0x4000u;
        *(_DWORD *)(v45 + 112) |= 0x200u;
      }
      else
      {
        v24 = 0;
      }
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v44);
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        *(_QWORD *)&sizl);
      if ( v24 )
      {
        DisplayDC = (HDC)GreCreateDisplayDC(v19, 1LL, 0LL);
        Src = DisplayDC;
        if ( DisplayDC )
        {
          APIDCOBJ::APIDCOBJ((APIDCOBJ *)v49, DisplayDC);
          LOBYTE(v26) = 7;
          GrepSelectBitmap(v48, v49, hsurf, v26);
          GreSetBitmapOwner(hsurf, 2147483650LL);
          APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v49);
        }
      }
    }
  }
  if ( Src )
  {
    v27 = v37;
  }
  else
  {
    if ( hsurf )
    {
      EngDeleteSurface(hsurf);
      hsurf = 0LL;
    }
    else
    {
      MmUnsecureVirtualMemory(v14);
    }
    v27 = -1073741801;
  }
  v28 = v43;
  v29 = (void *)(v43 + 40);
  if ( v43 + 40 >= MmUserProbeAddress )
    v29 = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v29, &Src, 8uLL);
  v30 = (void *)(v28 + 48);
  if ( v28 + 48 >= MmUserProbeAddress )
    v30 = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v30, &hsurf, 8uLL);
  if ( v18 )
    EngDeletePalette(v18);
  XDCOBJ::vAltUnlockNoNullSet(v47);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v38);
  ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v50);
  return v27;
}

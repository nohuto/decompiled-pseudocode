/*
 * XREFs of ?Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z @ 0x1401CB12C
 * Callers:
 *     ?AddVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1401C92B0 (-AddVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14000D850 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x14004FA84 (-GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1400580CC (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?RtlStringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x14005A034 (-RtlStringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x14005B4F8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x140064C20 (-IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetPresentDiagHistory@DISPLAY_SOURCE@@QEAAXPEAUPRESENTHISTORYDIAGNOSTICINFO@@I@Z @ 0x1400762A8 (-GetPresentDiagHistory@DISPLAY_SOURCE@@QEAAXPEAUPRESENTHISTORYDIAGNOSTICINFO@@I@Z.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x14032ECB0 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z @ 0x1403B958C (-DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z.c)
 */

__int64 __fastcall VIDPNSOURCEINFO::Initialize(VIDPNSOURCEINFO *this, struct DXGADAPTER *a2, unsigned int a3)
{
  __int64 v3; // rbp
  _QWORD *v7; // r14
  struct DXGDEVICE *VidPnSourceOwner; // rax
  struct DXGDEVICE *v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v12; // r15
  int v13; // ecx
  int v14; // edx
  __int64 v15; // rax
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rax
  unsigned int i; // esi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  __int64 v23; // rcx
  const char *ProcessImageFileName; // rax
  int v25; // ecx
  _BYTE v26[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a3;
  if ( !a2 )
    return 3221225485LL;
  v7 = (_QWORD *)*((_QWORD *)a2 + 395);
  *((_DWORD *)this + 2) = -1;
  *((_DWORD *)this + 12) = 0;
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)v7, a3);
  v9 = VidPnSourceOwner;
  if ( VidPnSourceOwner )
  {
    _m_prefetchw((char *)VidPnSourceOwner + 64);
    v10 = *((_QWORD *)VidPnSourceOwner + 8);
    while ( v10 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 8, v10 + 1, v10);
      if ( v11 == v10 )
      {
        *(_QWORD *)this = v9;
        break;
      }
    }
  }
  *((_DWORD *)this + 2) = v3;
  *((_QWORD *)this + 2) = *(_QWORD *)((char *)a2 + 412);
  *((_DWORD *)this + 6) = v3;
  *((_DWORD *)this + 7) = 25;
  *((_DWORD *)this + 7) ^= ((unsigned __int8)*((_DWORD *)this + 7) ^ (unsigned __int8)(2
                                                                                     * ADAPTER_DISPLAY::IsVidPnSourceActive(
                                                                                         (ADAPTER_DISPLAY *)v7,
                                                                                         v3))) & 2;
  *((_DWORD *)this + 7) ^= ((unsigned __int8)*((_DWORD *)this + 7) ^ (unsigned __int8)(4
                                                                                     * ADAPTER_DISPLAY::IsVidPnSourceVisible(
                                                                                         (ADAPTER_DISPLAY *)v7,
                                                                                         v3))) & 4;
  v12 = 4024 * v3;
  v13 = *((_DWORD *)this + 7) ^ ((unsigned __int8)*((_DWORD *)this + 7) ^ (unsigned __int8)(32
                                                                                          * ADAPTER_DISPLAY::IsPointerVisible(
                                                                                              (ADAPTER_DISPLAY *)v7,
                                                                                              v3))) & 0x20;
  *((_DWORD *)this + 7) = v13;
  v14 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(*(_BYTE *)(v7[16] + 4024 * v3 + 1160) << 7)) & 0x80;
  *((_DWORD *)this + 7) = v14;
  v15 = *(_QWORD *)(4024 * v3 + v7[16] + 752);
  if ( v15 )
    LODWORD(v15) = (unsigned __int8)(*(_DWORD *)(v15 + 408) >> 2);
  v16 = v14 ^ (v14 ^ ((_DWORD)v15 << 8)) & 0x100;
  *((_DWORD *)this + 7) = v16;
  if ( *((_QWORD *)a2 + 396) )
    v17 = *((_DWORD *)a2 + 74) > 1u ? 0x400 : 0;
  else
    v17 = 0;
  v18 = v17 | v16 & 0xFFFFFBFF;
  *((_DWORD *)this + 7) = v18;
  v19 = v18 & 0xFFFFFDFF | (2 * (*((_DWORD *)a2 + 111) & 0x100));
  v20 = *(_QWORD *)this;
  *((_DWORD *)this + 7) = v19;
  if ( v20 )
    LOWORD(v20) = *(unsigned __int8 *)(v20 + 1954);
  *((_DWORD *)this + 7) = v19 ^ ((unsigned __int16)v19 ^ (unsigned __int16)((_WORD)v20 << 14)) & 0x4000;
  *((_DWORD *)this + 7) = *((_DWORD *)this + 7) & 0xFFFF7FFF | (ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(
                                                                  *((ADAPTER_DISPLAY **)a2 + 395),
                                                                  v3) != 0LL
                                                              ? 0x8000
                                                              : 0);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (struct DXGFASTMUTEX *const)(v7 + 78), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  for ( i = 0; i < 0xA; ++i )
  {
    LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal((DISPLAY_SOURCE *)(v12 + v7[16]), i);
    if ( LatestPlaneConfigInternal )
    {
      if ( (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 && i )
        *((_DWORD *)this + 7) |= 0x800u;
      if ( (*((_DWORD *)LatestPlaneConfigInternal + 2) & 8) != 0 )
        *((_DWORD *)this + 7) |= 0x1000u;
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v26);
  if ( ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(*((ADAPTER_DISPLAY **)a2 + 395), v3) )
  {
    v23 = *((_QWORD *)ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(*((ADAPTER_DISPLAY **)a2 + 395), v3) + 5);
  }
  else
  {
    if ( !*(_QWORD *)this )
      goto LABEL_28;
    v23 = *(_QWORD *)(*(_QWORD *)this + 40LL);
  }
  ProcessImageFileName = (const char *)PsGetProcessImageFileName(*(_QWORD *)(v23 + 56));
  RtlStringCchCopyA((char *)this + 32, 15LL, ProcessImageFileName);
LABEL_28:
  if ( (*((_DWORD *)this + 7) & 0x486) != 6 || !*(_QWORD *)this )
    *((_DWORD *)this + 12) = 1;
  DISPLAY_SOURCE::GetPresentDiagHistory((DISPLAY_SOURCE *)(v12 + v7[16]), (VIDPNSOURCEINFO *)((char *)this + 64));
  v25 = *(_DWORD *)(v12 + v7[16] + 1072);
  *((_DWORD *)this + 3) = v25;
  if ( v25 == -1 )
    DmmGetMostImportantClientVidPnPathTargetsFromSource(a2, v3, (unsigned int *const)this + 3);
  return 0LL;
}

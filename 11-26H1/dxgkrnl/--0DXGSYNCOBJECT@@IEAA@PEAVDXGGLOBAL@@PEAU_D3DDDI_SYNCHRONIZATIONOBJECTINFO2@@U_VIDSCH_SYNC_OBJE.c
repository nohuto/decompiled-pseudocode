/*
 * XREFs of ??0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAU_D3DDDI_NATIVEFENCEINFO@@@Z @ 0x1403525C8
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x1403511A0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DXGSYNCOBJECT::DXGSYNCOBJECT(__int64 a1, __int64 a2, _OWORD *a3, int a4, __int64 a5)
{
  int v7; // eax
  __int128 v9; // xmm0

  *(_QWORD *)(a1 + 16) = a2;
  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 33;
  *(_DWORD *)(a1 + 72) = 76;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_DWORD *)(a1 + 416) = a4;
  *(_DWORD *)(a1 + 428) = 0;
  *(_QWORD *)(a1 + 432) = 0LL;
  memset((void *)(a1 + 128), 0, 0x40uLL);
  *(_QWORD *)(a1 + 112) = a1 + 104;
  *(_QWORD *)(a1 + 104) = a1 + 104;
  if ( !a5 )
  {
    *(_OWORD *)(a1 + 224) = *a3;
    *(_OWORD *)(a1 + 240) = a3[1];
    *(_OWORD *)(a1 + 256) = a3[2];
    *(_OWORD *)(a1 + 272) = a3[3];
    *(_OWORD *)(a1 + 288) = a3[4];
    v7 = *(_DWORD *)a3;
    *(_BYTE *)(a1 + 168) &= ~1u;
    *(_DWORD *)(a1 + 420) = v7;
    *(_DWORD *)(a1 + 424) = *(_DWORD *)(a1 + 228);
    *(_DWORD *)(a1 + 172) = 0;
LABEL_3:
    *(_DWORD *)(a1 + 180) |= 1u;
    return a1;
  }
  *(_OWORD *)(a1 + 304) = *(_OWORD *)a5;
  *(_OWORD *)(a1 + 320) = *(_OWORD *)(a5 + 16);
  *(_OWORD *)(a1 + 336) = *(_OWORD *)(a5 + 32);
  *(_OWORD *)(a1 + 352) = *(_OWORD *)(a5 + 48);
  *(_OWORD *)(a1 + 368) = *(_OWORD *)(a5 + 64);
  *(_OWORD *)(a1 + 384) = *(_OWORD *)(a5 + 80);
  v9 = *(_OWORD *)(a5 + 96);
  *(_BYTE *)(a1 + 168) |= 1u;
  *(_DWORD *)(a1 + 420) = 7;
  *(_OWORD *)(a1 + 400) = v9;
  *(_DWORD *)(a1 + 424) = *(_DWORD *)(a1 + 320);
  *(_DWORD *)(a1 + 172) = 1;
  *(_DWORD *)(a1 + 176) = *(_DWORD *)(a5 + 12);
  if ( !*(_DWORD *)(a5 + 12) )
    goto LABEL_3;
  if ( g_Feature_FenceStorageUsingVidMmAlloc )
  {
    *(_DWORD *)(a1 + 180) |= 8u;
    *(_BYTE *)(a1 + 168) |= 4u;
  }
  return a1;
}

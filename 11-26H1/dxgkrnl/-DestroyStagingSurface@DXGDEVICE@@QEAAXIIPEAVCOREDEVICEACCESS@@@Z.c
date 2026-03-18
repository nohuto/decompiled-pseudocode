/*
 * XREFs of ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x140395C40
 * Callers:
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1401C9700 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x140396030 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1403971F0 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402E9A60 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyStagingSurface(
        ADAPTER_RENDER **this,
        unsigned int a2,
        unsigned int a3,
        PERESOURCE **a4)
{
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rsi
  struct DXGRESOURCE *v8; // r12
  unsigned int v9; // ecx
  unsigned int v10; // edi
  unsigned int v11; // ebp
  unsigned int v12; // edx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // ecx
  unsigned int v17; // ebp
  unsigned int v18; // ebx
  unsigned int v19; // edi
  unsigned int v20; // ebp
  __int64 v21; // rdx
  unsigned int v22; // ecx
  struct DXGALLOCATION *v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // ecx
  struct DXGALLOCATION **v26; // r8
  struct DXGRESOURCE *v27; // r9
  unsigned int v28; // edx
  struct DXGALLOCATION *v29; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v30[80]; // [rsp+58h] [rbp-50h] BYREF

  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9288;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      9288LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent(v6);
  if ( !Current )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9296;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 9296LL, 0LL, 0LL, 0LL, 0LL);
  }
  v29 = 0LL;
  v8 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v30, Current);
  v9 = *((_DWORD *)Current + 74);
  if ( a3 )
  {
    v10 = a3 >> 30;
    v11 = (a3 >> 6) & 0xFFFFFF;
    if ( v11 < v9
      && (v12 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v11 + 8), v10 == ((v12 >> 5) & 3))
      && (v12 & 0x2000) == 0
      && (v12 & 0x1F) != 0 )
    {
      v14 = *((_QWORD *)Current + 35);
      v13 = 16LL * v11;
      if ( (*(_BYTE *)(v13 + v14 + 8) & 0x1F) == 4 )
      {
        v8 = *(struct DXGRESOURCE **)(v13 + v14);
        if ( v8 )
        {
LABEL_15:
          if ( v11 < *((_DWORD *)Current + 74) )
          {
            v15 = *((_QWORD *)Current + 35);
            v16 = *(_DWORD *)(v15 + v13 + 8);
            if ( v10 == ((v16 >> 5) & 3) && (v16 & 0x2000) == 0 && (v16 & 0x1F) != 0 )
              *(_DWORD *)(16 * (((unsigned __int64)a3 >> 6) & 0xFFFFFF) + v15 + 8) |= 0x2000u;
          }
          goto LABEL_35;
        }
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      v13 = 16LL * v11;
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9307;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pResource != NULL", 9307LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_15;
  }
  v17 = a2;
  v18 = a2 >> 30;
  v19 = v17 >> 6;
  v20 = (v17 >> 6) & 0xFFFFFF;
  if ( v20 < v9 )
  {
    v21 = *((_QWORD *)Current + 35);
    v22 = *(_DWORD *)(v21 + 16LL * v20 + 8);
    if ( v18 == ((v22 >> 5) & 3) && (v22 & 0x2000) == 0 && (v22 & 0x1F) != 0 )
    {
      if ( (*(_BYTE *)(v21 + 16 * (*(_QWORD *)&v19 & 0xFFFFFFLL) + 8) & 0x1F) == 5 )
      {
        v23 = *(struct DXGALLOCATION **)(v21 + 16 * (*(_QWORD *)&v19 & 0xFFFFFFLL));
        goto LABEL_28;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v23 = 0LL;
LABEL_28:
  v29 = v23;
  if ( !v23 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9313;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAllocation != NULL", 9313LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v20 < *((_DWORD *)Current + 74) )
  {
    v24 = *((_QWORD *)Current + 35);
    v25 = *(_DWORD *)(v24 + 16LL * v20 + 8);
    if ( v18 == ((v25 >> 5) & 3) && (v25 & 0x2000) == 0 && (v25 & 0x1F) != 0 )
      *(_DWORD *)(16 * (*(_QWORD *)&v19 & 0xFFFFFFLL) + v24 + 8) |= 0x2000u;
  }
LABEL_35:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
  if ( a3 )
  {
    v26 = 0LL;
    v27 = v8;
    v28 = 0;
  }
  else
  {
    v27 = 0LL;
    v26 = &v29;
    v28 = 1;
  }
  DXGDEVICE::DestroyAllocationInternal((DXGDEVICE *)this, v28, v26, v27, a4, DXGDEVICE::DestroyFlagsDefault);
}

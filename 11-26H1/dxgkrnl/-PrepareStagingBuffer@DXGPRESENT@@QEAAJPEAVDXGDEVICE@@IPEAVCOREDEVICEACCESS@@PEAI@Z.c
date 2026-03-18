/*
 * XREFs of ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x140396030
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x140395C40 (-DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1403971F0 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 */

__int64 __fastcall DXGPRESENT::PrepareStagingBuffer(
        DXGPRESENT *this,
        ADAPTER_RENDER **a2,
        unsigned int a3,
        PERESOURCE **a4,
        unsigned int *a5)
{
  __int64 v7; // r15
  int v9; // eax
  int v10; // ebx
  ADAPTER_RENDER *v12; // rbx
  unsigned int v13; // eax
  int v14; // r8d
  __int64 v15; // rcx
  struct _EX_RUNDOWN_REF *v16; // rdx
  unsigned int v17; // r8d
  UINT Pitch; // eax
  struct _EX_RUNDOWN_REF *v19; // [rsp+50h] [rbp-68h] BYREF
  struct _D3DKMDT_STAGINGSURFACEDATA v20; // [rsp+58h] [rbp-60h] BYREF

  v7 = a3;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(a2[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 11596;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      11596LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = *((_DWORD *)this + 1);
  v10 = 0;
  if ( (v9 & 0x40) != 0 )
  {
    v17 = *((_DWORD *)this + 105);
    *((_DWORD *)this + 1) = v9 & 0xFFFFFFBF;
    if ( v17 )
    {
      DXGDEVICE::DestroyStagingSurface(a2, 0, v17, a4);
      *((_QWORD *)this + 52) = 0LL;
    }
  }
  if ( !*((_DWORD *)this + 105) )
  {
    v12 = a2[5];
    DXGPUSHLOCK::AcquireShared((ADAPTER_RENDER *)((char *)v12 + 248));
    v13 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
    if ( v13 < *((_DWORD *)v12 + 74) )
    {
      v14 = *(_DWORD *)(*((_QWORD *)v12 + 35) + 16LL * v13 + 8);
      if ( (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)v12 + 35) + 16LL * v13 + 8) & 0x60)
        && (v14 & 0x2000) == 0
        && (v14 & 0x1F) != 0 )
      {
        v15 = *((_QWORD *)v12 + 35);
        if ( (*(_BYTE *)(v15 + 16LL * v13 + 8) & 0x1F) == 5 )
        {
          v16 = *(struct _EX_RUNDOWN_REF **)(v15 + 16LL * v13);
LABEL_12:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v19, v16);
          _InterlockedDecrement((volatile signed __int32 *)v12 + 66);
          ExReleasePushLockSharedEx((char *)v12 + 248, 0LL);
          KeLeaveCriticalRegion();
          if ( v19 )
          {
            if ( *(_QWORD *)(*(_QWORD *)(v19[1].Count + 16) + 16LL) == *((_QWORD *)a2[2] + 2) )
            {
              v20.Width = *((_DWORD *)this + 19);
              v20.Height = *((_DWORD *)this + 20);
              v20.Pitch = 0;
              v10 = DXGDEVICE::CreateStagingSurface2(
                      (DXGDEVICE *)a2,
                      &v20,
                      (struct COREDEVICEACCESS *)a4,
                      (unsigned int *)this + 104,
                      (unsigned int *)this + 105);
              if ( v10 >= 0 )
              {
                if ( !*((_DWORD *)this + 104) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 11643;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"NULL != m_hStagingBufferAllocation",
                    11643LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                Pitch = v20.Pitch;
                if ( !v20.Pitch )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 11645;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"0 != StagingSurfaceData.Pitch",
                    11645LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  Pitch = v20.Pitch;
                }
                *((_DWORD *)this + 106) = Pitch;
              }
            }
            else
            {
              v10 = -1073741811;
              WdLogSingleEntry3(2LL, a2, v19, -1073741811LL);
              WdLogGlobalForLineNumber = 11625;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
                (__int64)a2,
                (__int64)v19,
                -1073741811LL,
                0LL,
                0LL);
            }
          }
          else
          {
            v10 = -1073741811;
            WdLogSingleEntry3(3LL, -1073741811LL, this, v7);
            WdLogGlobalForLineNumber = 11653;
          }
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v19);
          goto LABEL_5;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v16 = 0LL;
    goto LABEL_12;
  }
LABEL_5:
  *a5 = *((_DWORD *)this + 104);
  return (unsigned int)v10;
}

/*
 * XREFs of ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1401C9700
 * Callers:
 *     ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1401C9424 (-CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetPresentContext@DXGDEVICE@@QEAAPEAVDXGCONTEXT@@XZ @ 0x1401C2FE0 (-GetPresentContext@DXGDEVICE@@QEAAPEAVDXGCONTEXT@@XZ.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1402B3814 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402B4780 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1402B8570 (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 *     ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x140395C40 (-DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1403971F0 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 */

__int64 __fastcall VIDPNSOURCEINFO::CheckPrimaryContentWorker(VIDPNSOURCEINFO *this, struct DXGALLOCATION *a2)
{
  DXGDEVICE *v2; // r14
  struct DXGCONTEXT *PresentContext; // rax
  __int64 v7; // r9
  int v8; // ebx
  char *v9; // rcx
  struct DXGHWQUEUE *v10; // rcx
  __int64 v11; // rax
  int v12; // r13d
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // r15
  int v16; // ecx
  UINT Height; // eax
  int v18; // edx
  __int64 v19; // rbx
  signed int Width; // r10d
  signed int v21; // r11d
  UINT v22; // ecx
  UINT v23; // ecx
  unsigned int v24; // r13d
  unsigned int v25; // ebx
  LONG v26; // edx
  LONG v27; // r9d
  unsigned int v28; // r8d
  int v29; // r10d
  unsigned int v30; // edx
  __int64 v31; // rax
  int v32; // eax
  unsigned int v33; // ecx
  int v34; // edx
  unsigned int v35; // edx
  unsigned int v36; // r8d
  int v37; // ecx
  unsigned int v38; // ecx
  unsigned int *v39; // rbx
  char *v40; // rcx
  VIDPNSOURCEINFO *v41; // [rsp+20h] [rbp-E0h]
  unsigned int v42; // [rsp+50h] [rbp-B0h]
  unsigned int v43; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v44; // [rsp+58h] [rbp-A8h] BYREF
  UINT v45; // [rsp+5Ch] [rbp-A4h]
  struct DXGCONTEXT *v46; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v47[2]; // [rsp+68h] [rbp-98h] BYREF
  int v48; // [rsp+70h] [rbp-90h]
  struct DXGHWQUEUE *v49; // [rsp+78h] [rbp-88h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v50; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v51[24]; // [rsp+B0h] [rbp-50h] BYREF
  _D3DKMDT_STAGINGSURFACEDATA v52; // [rsp+C8h] [rbp-38h] BYREF
  struct tagRECT v53; // [rsp+D8h] [rbp-28h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v55[192]; // [rsp+120h] [rbp+20h] BYREF

  v2 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  PresentContext = DXGDEVICE::GetPresentContext(v2);
  v46 = PresentContext;
  if ( PresentContext )
  {
    DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)PresentContext + 440));
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v51,
      *(struct DXGADAPTER **)(*((_QWORD *)v2 + 2) + 16LL),
      1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v55, (__int64)v2, 1, v7, 0);
    v8 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v55, 0LL);
    if ( v8 >= 0 )
    {
      v49 = 0LL;
      if ( (*((_DWORD *)v46 + 98) & 0x10) != 0 )
      {
        v10 = 0LL;
        if ( *((struct DXGCONTEXT **)v46 + 50) != (struct DXGCONTEXT *)((char *)v46 + 400) )
          v10 = (struct DXGHWQUEUE *)*((_QWORD *)v46 + 50);
        v49 = v10;
      }
      v11 = *((_QWORD *)a2 + 6);
      *(_QWORD *)v47 = 0LL;
      memset(&v50, 0, sizeof(v50));
      v12 = 0;
      memset(&ApcState, 0, sizeof(ApcState));
      v50.hAllocation = *(HANDLE *)(v11 + 16);
      v13 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)v46 + 2) + 16LL), &v50);
      v14 = v13;
      v15 = 2LL;
      if ( v13 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 2038;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DdiDescribeAllocation() failed with status : 0x%I64x",
          v14,
          0LL,
          0LL,
          0LL,
          0LL);
        *((_DWORD *)this + 12) = 1;
        goto LABEL_54;
      }
      v16 = *((_DWORD *)this + 7);
      if ( (v16 & 0x20) != 0 )
      {
        v42 = 1;
      }
      else
      {
        Height = v50.Height;
        if ( v50.Width > v50.Height )
          Height = v50.Width;
        v42 = 2 * Height;
      }
      v18 = *((_DWORD *)this + 7);
      if ( v50.Format != D3DDDIFMT_A8R8G8B8
        && v50.Format != D3DDDIFMT_X8R8G8B8
        && v50.Format != D3DDDIFMT_A8B8G8R8
        && v50.Format != D3DDDIFMT_X8B8G8R8 )
      {
        v18 = v16 | 0x40;
        *((_DWORD *)this + 12) = 1;
        *((_DWORD *)this + 7) = v16 | 0x40;
      }
      if ( (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) & 0xC000) != 0 )
      {
        v18 |= 0x80u;
        *((_DWORD *)this + 12) = 1;
        *((_DWORD *)this + 7) = v18;
      }
      if ( !*((_DWORD *)this + 12) )
      {
        if ( (v18 & 0x1000) == 0 && (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) & 0x2000) != 0 )
          *((_DWORD *)this + 7) = v18 | 0x2000;
        KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)v2 + 5) + 56LL), &ApcState);
        v48 = 1;
        v52.Width = 512;
        v19 = 0LL;
        *(_QWORD *)&v52.Height = 512LL;
        do
        {
          LODWORD(v14) = DXGDEVICE::CreateStagingSurface2(v2, &v52, (struct COREDEVICEACCESS *)v55, &v47[v19], 0LL);
          if ( (int)v14 < 0 )
            break;
          v19 = (unsigned int)(v19 + 1);
        }
        while ( (unsigned int)v19 < 2 );
        Width = v50.Width;
        v21 = v50.Height;
        v44 = 0;
        v43 = 0;
        v22 = v50.Width + 511;
        *(_QWORD *)((char *)this + 52) = 0LL;
        v23 = v22 >> 9;
        v24 = v23 * ((unsigned int)(v21 + 511) >> 9);
        v25 = 0;
        v45 = v23;
        v53 = 0LL;
        while ( v25 < v24 + 1 )
        {
          if ( v25 < v24 )
          {
            v26 = (v25 % v23) << 9;
            v27 = (v25 / v23) << 9;
            v53.left = v26;
            v53.top = v27;
            if ( v26 + 512 < Width )
              Width = v26 + 512;
            v53.right = Width;
            if ( v27 + 512 < v21 )
              v21 = v27 + 512;
            v28 = v47[v25 & 1];
            v29 = Width - v26;
            v30 = *((_DWORD *)a2 + 4);
            v31 = 16LL * (v25 & 1);
            v53.bottom = v21;
            *(_DWORD *)&v55[v31 + 164] = 0;
            *(_DWORD *)&v55[v31 + 168] = v29;
            *(_DWORD *)&v55[v31 + 172] = v21 - v27;
            *(_DWORD *)&v55[v31 + 160] = 0;
            LODWORD(v14) = DXGCONTEXT::Blt(
                             v46,
                             v30,
                             v28,
                             0,
                             &v46,
                             &v53,
                             1u,
                             (const struct tagRECT *)&v55[v31 + 160],
                             (struct COREDEVICEACCESS *)v55,
                             &v49);
            if ( (int)v14 < 0 )
              goto LABEL_62;
            v21 = v50.Height;
            Width = v50.Width;
          }
          if ( v25 )
          {
            v41 = (VIDPNSOURCEINFO *)&v55[16 * (((_BYTE)v25 - 1) & 1) + 160];
            v32 = VIDPNSOURCEINFO::CheckPrimaryContentTile(
                    v41,
                    v2,
                    v47[((_BYTE)v25 - 1) & 1],
                    v52.Pitch,
                    (const struct tagRECT *)v41,
                    (struct COREDEVICEACCESS *)v55,
                    &v44,
                    &v43);
            v14 = v32;
            if ( v32 < 0 )
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 2171;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"CheckPrimaryContentTile() failed with status : 0x%I64x",
                v14,
                0LL,
                0LL,
                0LL,
                0LL);
LABEL_62:
              v37 = *((_DWORD *)this + 7);
              goto LABEL_64;
            }
            v33 = v43;
            if ( v43 == v44 )
            {
              *((_DWORD *)this + 7) &= 0xFFFFFFE7;
              v37 = *((_DWORD *)this + 7);
LABEL_48:
              v36 = v42;
              goto LABEL_49;
            }
            v34 = *((_DWORD *)this + 14);
            *((_DWORD *)this + 13) += v44;
            v35 = v33 + v34;
            *((_DWORD *)this + 14) = v35;
            if ( v25 >= 2 )
            {
              v36 = v42;
              if ( v35 >= v42 )
              {
                *((_DWORD *)this + 7) &= 0xFFFFFFE7;
                v37 = *((_DWORD *)this + 7);
LABEL_49:
                if ( (v37 & 0x18) != 0 && *((_DWORD *)this + 14) < v36 )
                {
                  v38 = v37 & 0xFFFFFFE7 | 8;
LABEL_52:
                  *((_DWORD *)this + 7) = v38;
                }
                v12 = v48;
                goto LABEL_54;
              }
            }
            v21 = v50.Height;
            Width = v50.Width;
          }
          v23 = v45;
          ++v25;
        }
        v37 = *((_DWORD *)this + 7);
        if ( (int)v14 >= 0 )
          goto LABEL_48;
LABEL_64:
        v38 = v37 & 0xFFFFFFE7 | 0x10;
        goto LABEL_52;
      }
LABEL_54:
      v39 = v47;
      do
      {
        if ( *v39 )
          DXGDEVICE::DestroyStagingSurface(v2, *v39, 0, (struct COREDEVICEACCESS *)v55);
        ++v39;
        --v15;
      }
      while ( v15 );
      if ( v12 )
        KeUnstackDetachProcess(&ApcState);
      v40 = (char *)v46 + 440;
      *((_QWORD *)v46 + 56) = 0LL;
      ExReleasePushLockExclusiveEx(v40, 0LL);
      KeLeaveCriticalRegion();
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v55);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
      return (unsigned int)v14;
    }
    else
    {
      v9 = (char *)v46 + 440;
      *((_QWORD *)v46 + 56) = 0LL;
      ExReleasePushLockExclusiveEx(v9, 0LL);
      KeLeaveCriticalRegion();
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v55);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
      return (unsigned int)v8;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1989;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The rendering device (0x%I64x) has not been used for Present",
      (__int64)v2,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225860LL;
  }
}

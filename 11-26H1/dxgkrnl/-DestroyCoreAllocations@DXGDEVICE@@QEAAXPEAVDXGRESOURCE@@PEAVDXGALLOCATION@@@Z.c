/*
 * XREFs of ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x14038B858
 * Callers:
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1401C3A8C (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x14038B7CC (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x140007D70 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x14004C094 (-VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_L.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x140050A38 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ?VidMmIsAllocationPinned@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1400515D4 (-VidMmIsAllocationPinned@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x14005C5E0 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x140193298 (-TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1401BA9AC (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1402A57A4 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1402A6174 (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x140317484 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x14032FF60 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z @ 0x14038BD00 (-DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1403CD3BC (-IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyCoreAllocations(
        ADAPTER_RENDER **this,
        struct DXGRESOURCE *a2,
        struct DXGALLOCATION *a3)
{
  struct DXGALLOCATION *v6; // r9
  void **v7; // r12
  struct DXGALLOCATION *v8; // rbx
  struct DXGALLOCATION *v9; // r13
  struct DXGALLOCATION *v10; // r14
  __int64 v11; // rdx
  unsigned int v12; // edx
  __int64 v13; // r14
  struct VIDMM_MULTI_ALLOC *v14; // r8
  void *v15; // rcx
  ADAPTER_RENDER *v16; // rdx
  ADAPTER_RENDER *v17; // rcx
  void *v18; // r13
  int v19; // ebx
  struct DXGALLOCATION *v20; // r14
  struct DXGADAPTERALLOCATION *v21; // rdx
  void *v22; // rcx
  unsigned int v23; // r14d
  unsigned int v24; // r14d
  __int64 v25; // r8
  struct COREDEVICEACCESS *v26; // r9
  __int64 v27; // rax
  __int64 v29; // rax
  unsigned int v30; // r8d
  struct DXGALLOCATION *v31; // [rsp+50h] [rbp-B0h] BYREF
  struct _DXGKARG_CLOSEALLOCATION v32; // [rsp+58h] [rbp-A8h] BYREF
  struct _DXGKARG_DESTROYALLOCATION v33; // [rsp+68h] [rbp-98h] BYREF
  struct VIDMM_MULTI_ALLOC *v34[2]; // [rsp+88h] [rbp-78h] BYREF
  DXGFASTMUTEX *v35; // [rsp+98h] [rbp-68h] BYREF
  char v36; // [rsp+A0h] [rbp-60h]
  void *v37[16]; // [rsp+B0h] [rbp-50h] BYREF

  v35 = 0LL;
  v36 = 0;
  v32 = 0LL;
  if ( a2 )
  {
    DXGAUTOMUTEX::Initialize(&v35, (struct DXGRESOURCE *)((char *)a2 + 80), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v35);
  }
  memset(v37, 0, sizeof(v37));
  if ( !a2 || (v7 = (void **)*((_QWORD *)a2 + 8)) == 0LL )
    v7 = v37;
  v8 = a3;
  v31 = a3;
  if ( a3 )
  {
    v9 = a3;
    v10 = a3;
    do
    {
      v11 = *((_QWORD *)v10 + 6);
      v9 = (struct DXGALLOCATION *)*((_QWORD *)v9 + 8);
      if ( v11 )
      {
        v12 = *(_DWORD *)(v11 + 4);
        if ( (v12 & 0x200B) != 0 )
          DXGDEVICE::TestAndSetDisplayedPrimary((DXGDEVICE *)this, (v12 >> 6) & 0xF, v8, v6);
      }
      v13 = *((_QWORD *)v10 + 6);
      if ( v13 )
      {
        v23 = *(_DWORD *)(v13 + 4);
        if ( (v23 & 0x2000) != 0 )
        {
          v34[0] = *((struct VIDMM_MULTI_ALLOC **)v8 + 3);
          if ( v34[0] )
          {
            v24 = (v23 >> 6) & 0xF;
            if ( DXGDEVICE::IsDirectFlipAllocationRequestedPinned((DXGDEVICE *)this, v8) )
            {
              if ( (unsigned __int8)VIDMM_EXPORT::VidMmIsAllocationPinned(
                                      *((VIDMM_EXPORT **)this[2] + 95),
                                      *((struct VIDMM_GLOBAL **)this[2] + 96),
                                      v34[0]) )
              {
                if ( *(int *)(*((_QWORD *)this[2] + 2) + 3044LL) >= 2200 )
                  DXGDEVICE::UnpinDirectFlipAllocation((DXGDEVICE *)this, v24, v25, &v31, 0LL);
                else
                  DXGDEVICE::UnpinAllDirectFlipAllocations((DXGDEVICE *)this, v24, v25, v26);
              }
            }
          }
        }
      }
      if ( (*((_DWORD *)v8 + 18) & 0x80000) != 0 )
        UnlockParavirtualizedAllocationOnGuest(v8, 0);
      v14 = (struct VIDMM_MULTI_ALLOC *)*((_QWORD *)v8 + 3);
      if ( v14 )
      {
        VIDMM_EXPORT::VidMmCloseAllocation(
          *((VIDMM_EXPORT **)this[2] + 95),
          *((struct VIDMM_GLOBAL **)this[2] + 96),
          v14,
          (struct VIDMM_LOCAL_ALLOC **)v8 + 10,
          0);
        *((_DWORD *)v8 + 18) |= 1u;
        *((_QWORD *)v8 + 3) = 0LL;
      }
      else
      {
        DXGDEVICE::TraceCloseParavirtualizedAllocation((DXGDEVICE *)this, v8);
      }
      v15 = (void *)*((_QWORD *)v8 + 4);
      if ( v15 )
      {
        v7[v32.NumAllocations++] = v15;
        *((_QWORD *)v8 + 4) = 0LL;
      }
      v8 = v9;
      v10 = v9;
      v31 = v9;
    }
    while ( v9 );
  }
  if ( v32.NumAllocations )
  {
    v16 = this[77];
    v17 = this[2];
    v32.pOpenHandleList = v7;
    ADAPTER_RENDER::DdiCloseAllocation(v17, v16, &v32);
  }
  v18 = 0LL;
  v19 = 1;
  if ( a2 )
  {
    if ( (*((_DWORD *)a2 + 1) & 1) != 0 )
    {
      v27 = *(_QWORD *)(*((_QWORD *)a2 + 7) + 152LL);
      if ( v27 )
      {
        if ( *(ADAPTER_RENDER ***)(v27 + 80) == this && (*(_DWORD *)(v27 + 72))-- == 1 )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX(
            (DXGAUTOMUTEX *)v34,
            (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 152LL) + 8LL),
            0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 152LL) + 80LL) = 0LL;
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v34);
        }
      }
      v29 = *((_QWORD *)a2 + 3);
      v30 = 0;
      while ( v29 )
      {
        v29 = *(_QWORD *)(v29 + 64);
        ++v30;
      }
      DXGSHAREDRESOURCE::ReleaseReference(*((DXGSHAREDRESOURCE **)a2 + 7), v7, v30);
      v19 = 0;
      *((_QWORD *)a2 + 7) = 0LL;
    }
    else
    {
      v18 = (void *)*((_QWORD *)a2 + 7);
    }
  }
  memset(&v33, 0, sizeof(v33));
  if ( a3 )
  {
    v20 = a3;
    do
    {
      v21 = (struct DXGADAPTERALLOCATION *)*((_QWORD *)v20 + 6);
      a3 = (struct DXGALLOCATION *)*((_QWORD *)a3 + 8);
      if ( v21 )
      {
        if ( !v19 )
          goto LABEL_57;
        DXGDEVICE::DestroyAdapterAllocation((DXGDEVICE *)this, v21);
        v22 = *(void **)(*((_QWORD *)v20 + 6) + 16LL);
        if ( v22 )
        {
          v7[v33.NumAllocations++] = v22;
          *(_QWORD *)(*((_QWORD *)v20 + 6) + 16LL) = 0LL;
        }
      }
      else if ( !v19 )
      {
LABEL_57:
        if ( !a2 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 745;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pResource", 745LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( (*((_DWORD *)a2 + 1) & 1) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 746;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pResource->m_SharedResource",
            746LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      v20 = a3;
    }
    while ( a3 );
  }
  if ( v19 )
  {
    v33.hResource = v18;
    v33.Flags.Value = a2 != 0LL;
    if ( v33.NumAllocations )
    {
      v33.pAllocationList = v7;
    }
    else
    {
      v33.pAllocationList = 0LL;
      if ( !v18 )
        goto LABEL_23;
    }
    ADAPTER_RENDER::DdiDestroyAllocation(this[2], &v33, 0);
  }
LABEL_23:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v35);
}

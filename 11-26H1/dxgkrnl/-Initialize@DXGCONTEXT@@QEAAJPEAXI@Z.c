/*
 * XREFs of ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1403A4680
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1403A4378 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@443AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x140002668 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U-$_tlgWrapperByVal@$00@@U-$.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x140014774 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x140038650 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003DA90 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140053148 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x140055128 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     ?NodeSupportsContextScheduling@ADAPTER_RENDER@@QEBA_NII@Z @ 0x140059D74 (-NodeSupportsContextScheduling@ADAPTER_RENDER@@QEBA_NII@Z.c)
 *     ?VidSchCreateContext@VIDSCH_EXPORT@@QEAAPEAU_VIDSCH_CONTEXT@@PEAVDXGCONTEXT@@PEAU_VIDSCH_CONTEXT_DATA@@@Z @ 0x14005A3D4 (-VidSchCreateContext@VIDSCH_EXPORT@@QEAAPEAU_VIDSCH_CONTEXT@@PEAVDXGCONTEXT@@PEAU_VIDSCH_CONTEXT.c)
 *     ?VidSchCreateHwQueue@VIDSCH_EXPORT@@QEAAJPEAVDXGHWQUEUE@@PEAUVIDSCH_HW_CONTEXT@@PEAU_D3DKMT_CREATEHWQUEUE@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION@@@Z @ 0x14005FC80 (-VidSchCreateHwQueue@VIDSCH_EXPORT@@QEAAJPEAVDXGHWQUEUE@@PEAUVIDSCH_HW_CONTEXT@@PEAU_D3DKMT_CREA.c)
 *     ?GetDefaultQos@DXGPROCESS@@QEBA?AW4_KHETERO_CPU_QOS@@XZ @ 0x140074A64 (-GetDefaultQos@DXGPROCESS@@QEBA-AW4_KHETERO_CPU_QOS@@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x140192CDC (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     RtlReadULong64FromUser @ 0x140196750 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 *     ?VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@IPEAX@Z @ 0x14022CDC8 (-VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402AF684 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1403B5F04 (-EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z.c)
 *     ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1403C18B8 (-DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Initialize(DXGCONTEXT *this, void *a2, unsigned int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  _QWORD *Pool2; // rax
  __int64 result; // rax
  struct DXGPROCESS *Current; // rax
  unsigned int v10; // r8d
  __int64 v11; // r10
  unsigned int v12; // edx
  unsigned int v13; // r8d
  unsigned int v15; // r9d
  enum _D3DKMT_CLIENTHINT v16; // r15d
  struct _D3DDDI_CREATECONTEXTFLAGS v17; // ebx
  UINT v18; // esi
  UINT v19; // r14d
  __int64 v20; // rcx
  UINT v21; // edi
  unsigned int HostProcess; // eax
  int ContextVirtual; // eax
  __int64 v24; // rax
  const wchar_t *v25; // r9
  __int64 v26; // rsi
  unsigned __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rbx
  unsigned int v31; // ecx
  __int64 v32; // rbx
  DXGCONTEXT *v33; // rax
  UINT v34; // r8d
  __int64 v35; // rdx
  UINT v36; // r10d
  int v37; // r11d
  ADAPTER_RENDER **v38; // rdi
  ADAPTER_RENDER *v39; // rcx
  __int64 v40; // r8
  int v41; // r10d
  unsigned int v42; // r11d
  __int64 v43; // rdx
  bool v44; // al
  int v45; // eax
  int v46; // eax
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  const CHAR *v52; // rax
  __m128i v53; // xmm1
  struct _LOOKASIDE_LIST_EX *v54; // rax
  NTSTATUS v55; // eax
  __int64 v56; // rbx
  char v57; // r8
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  char v61; // r9
  bool v62; // al
  unsigned int v63; // ecx
  int v64; // r11d
  ULONG v65; // r9d
  __int64 v66; // rcx
  int v67; // eax
  __int64 v68; // r8
  __int64 v69; // rcx
  struct VIDSCH_HW_CONTEXT *v70; // r8
  int v71; // eax
  __int64 v72; // r9
  unsigned int v73; // edx
  int v74; // edx
  unsigned int v75; // r8d
  __int64 v76; // r9
  struct _VIDSCH_CONTEXT *Context; // rcx
  __int64 v78; // r8
  int v79; // eax
  unsigned int v80; // r14d
  _QWORD *v81; // r14
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v83; // eax
  _QWORD *v84; // r14
  unsigned __int64 ULong64FromUser; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v86; // rax
  int v87; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // r8
  unsigned __int64 v92; // rax
  SIZE_T *v93; // r14
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v94; // rax
  int v95; // eax
  __int64 v96; // rax
  __int64 v97; // r8
  unsigned __int64 v98; // rax
  SIZE_T *v99; // r14
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v100; // rax
  int v101; // eax
  struct DXGGLOBAL *v102; // rax
  __int64 v103; // rax
  __int64 v104; // rsi
  unsigned __int64 v105; // rbx
  __int64 v106; // rax
  __int64 v107; // r8
  __int64 v108; // rbx
  ULONG Flags[2]; // [rsp+20h] [rbp-198h]
  ULONG Flagsa[2]; // [rsp+20h] [rbp-198h]
  SIZE_T Size; // [rsp+28h] [rbp-190h]
  SIZE_T Sizea; // [rsp+28h] [rbp-190h]
  ULONG Tag[2]; // [rsp+30h] [rbp-188h]
  ULONG Taga[2]; // [rsp+30h] [rbp-188h]
  USHORT Depth[4]; // [rsp+38h] [rbp-180h]
  USHORT Deptha[4]; // [rsp+38h] [rbp-180h]
  void *v117; // [rsp+40h] [rbp-178h]
  void *v118; // [rsp+40h] [rbp-178h]
  __int64 v119; // [rsp+48h] [rbp-170h]
  __int64 v120; // [rsp+50h] [rbp-168h]
  __int64 v121; // [rsp+58h] [rbp-160h]
  __int64 v122; // [rsp+80h] [rbp-138h] BYREF
  _BYTE v123[4]; // [rsp+88h] [rbp-130h] BYREF
  int v124; // [rsp+8Ch] [rbp-12Ch] BYREF
  unsigned int v125; // [rsp+90h] [rbp-128h]
  unsigned int v126; // [rsp+94h] [rbp-124h] BYREF
  __int64 v127; // [rsp+98h] [rbp-120h] BYREF
  __int64 v128; // [rsp+A0h] [rbp-118h] BYREF
  void *v129; // [rsp+A8h] [rbp-110h]
  DXGCONTEXT *v130; // [rsp+B0h] [rbp-108h]
  _BYTE *v131; // [rsp+B8h] [rbp-100h] BYREF
  const CHAR *v132; // [rsp+C0h] [rbp-F8h] BYREF
  __int64 v133; // [rsp+C8h] [rbp-F0h] BYREF
  _D3DKMT_CREATEHWQUEUE v134; // [rsp+D0h] [rbp-E8h] BYREF
  _DXGKARG_CREATECONTEXT v135; // [rsp+100h] [rbp-B8h] BYREF
  _BYTE v136[36]; // [rsp+150h] [rbp-68h] BYREF

  v125 = a3;
  v129 = a2;
  v130 = this;
  v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v128 = v5;
  DXGADAPTER::NotifyContextCreation((DXGADAPTER *)v5, this, 1, *((_DWORD *)this + 95));
  if ( *(int *)(v5 + 2776) >= 9472 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 16LL, 1265072196LL);
    *((_QWORD *)this + 59) = Pool2;
    if ( !Pool2 )
    {
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 897;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"DXGCONTEXT (0x%p) failed to allocate m_pDxgkrnlContextHandle",
        (__int64)this,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    *Pool2 = this;
  }
  if ( *((_BYTE *)this + 433) && !*((_BYTE *)this + 430) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 906;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The physical adapter requres GpuVaIoMmu but a non-virtual context is created",
      906LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  Current = DXGPROCESS::GetCurrent(v6);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v136, Current);
  v10 = HMGRTABLE::AllocHandle(
          (unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 280LL),
          (__int64)this,
          7,
          0,
          0);
  *((_DWORD *)this + 6) = v10;
  if ( !v10 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 926;
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v136);
    return 3221225495LL;
  }
  v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  v12 = (v10 >> 6) & 0xFFFFFF;
  v13 = v10 >> 30;
  if ( v12 < *(_DWORD *)(v11 + 296) )
  {
    v15 = *(_DWORD *)(*(_QWORD *)(v11 + 280) + 16LL * v12 + 8);
    if ( v13 == ((v15 >> 5) & 3) && (v15 & 0x2000) == 0 && (v15 & 0x1F) != 0 )
      *(_DWORD *)(16LL * v12 + *(_QWORD *)(v11 + 280) + 8) |= 0x2000u;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v136);
  if ( *(_BYTE *)(v5 + 209) )
  {
    *((_BYTE *)this + 434) = 1;
    v16 = *((_DWORD *)this + 36);
    v17.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)*((_DWORD *)this + 98);
    v18 = *((_DWORD *)this + 96);
    v19 = *((_DWORD *)this + 95);
    v20 = *((_QWORD *)this + 2);
    v21 = *(_DWORD *)(v20 + 472);
    HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v20 + 40));
    ContextVirtual = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateContextVirtual(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(v128 + 4712),
                       HostProcess,
                       v21,
                       v19,
                       v18,
                       v17,
                       v16,
                       v125,
                       v129);
    *((_DWORD *)this + 7) = ContextVirtual;
    if ( !ContextVirtual )
    {
      WdLogSingleEntry0(2LL);
      v24 = 950LL;
      v25 = L"Failed to create context on the host";
LABEL_21:
      WdLogGlobalForLineNumber = v24;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v25, v24, 0LL, 0LL, 0LL, 0LL);
      return 3221225473LL;
    }
    v26 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    v27 = *((unsigned int *)this + 6);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v26 + 248));
    v28 = ((unsigned int)v27 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v28 < *(_DWORD *)(v26 + 296) )
    {
      v29 = *(_QWORD *)(v26 + 280);
      if ( (((unsigned int)v27 >> 25) & 0x60) == (*(_BYTE *)(v29 + 16 * v28 + 8) & 0x60)
        && (*(_DWORD *)(v29 + 16 * v28 + 8) & 0x1F) != 0 )
      {
        v30 = 16 * ((v27 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v30 + v29 + 8) & 0x2000) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 224;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
            224LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_DWORD *)(v30 + *(_QWORD *)(v26 + 280) + 8) &= ~0x2000u;
      }
    }
    *(_QWORD *)(v26 + 256) = 0LL;
    ExReleasePushLockExclusiveEx(v26 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( bTracingEnabled )
    {
      v31 = *((_DWORD *)this + 6);
      *(_OWORD *)v136 = *(_OWORD *)((char *)this + 200);
      *(_OWORD *)&v136[16] = *(_OWORD *)((char *)this + 216);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
      {
        LODWORD(v118) = *(_DWORD *)&v136[8];
        *(_DWORD *)Deptha = *(_DWORD *)&v136[4];
        Taga[0] = *(_DWORD *)v136;
        LODWORD(Sizea) = *((_DWORD *)this + 96);
        Flagsa[0] = *((_DWORD *)this + 95);
        McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
          HIDWORD(*(_QWORD *)v136),
          &EventCreateContext,
          *(__int64 *)v136,
          *((_QWORD *)this + 2),
          *(_QWORD *)Flagsa,
          Sizea,
          *(_QWORD *)Taga,
          *(_QWORD *)Deptha,
          v118,
          *(_DWORD *)&v136[12],
          *(_DWORD *)&v136[16],
          0,
          this,
          v31,
          0LL);
      }
    }
    return 0LL;
  }
  LODWORD(v32) = 0;
  memset(&v135, 0, sizeof(v135));
  if ( *(int *)(v5 + 2776) < 9472 )
    v33 = this;
  else
    v33 = (DXGCONTEXT *)*((_QWORD *)this + 59);
  *((_QWORD *)this + 24) = v33;
  v135.hContext = v33;
  v34 = *((_DWORD *)this + 95);
  v135.NodeOrdinal = v34;
  v135.EngineAffinity = *((_DWORD *)this + 96);
  v135.pPrivateDriverData = a2;
  v135.PrivateDriverDataSize = v125;
  v35 = *((_QWORD *)this + 2);
  v122 = v35;
  if ( (*(_BYTE *)(v35 + 1917) & 8) != 0 || *((_DWORD *)this + 36) == 2 )
    v135.Flags.Value |= 2u;
  v124 = *((unsigned __int8 *)this + 430);
  v36 = v135.Flags.Value & 0xFFFFFFFB | (4 * (v124 & 1));
  v135.Flags.Value = v36;
  v37 = *((_DWORD *)this + 98);
  if ( (v37 & 0x40) != 0 )
    v135.Flags.Value = v36 | 0x20;
  v38 = (ADAPTER_RENDER **)(v35 + 16);
  if ( (v37 & 8) != 0 )
  {
    *((_DWORD *)this + 98) = v37 & 0xFFFFFFEF;
  }
  else
  {
    v39 = *v38;
    if ( (v37 & 0x10) != 0 )
    {
      if ( *(int *)(*((_QWORD *)v39 + 2) + 3044LL) < 2500 )
      {
        WdLogSingleEntry0(2LL);
        v24 = 1023LL;
        v25 = L"Context passes HwQueueSupported flag set, but the driver WDDM version is < 2.5";
        goto LABEL_21;
      }
      v126 = *((_DWORD *)this + 97);
      if ( !ADAPTER_RENDER::NodeSupportsContextScheduling(v39, v126, v34) )
      {
        WdLogSingleEntry0(2LL);
        v24 = 1029LL;
        v25 = L"Context passes HwQueueSupported flag set, but GPU node doesn't support context scheduling";
        goto LABEL_21;
      }
      if ( !(_BYTE)v124 )
      {
        WdLogSingleEntry0(2LL);
        v24 = 1035LL;
        v25 = L"Only virtual contexts can use HwQueueSupported flag";
        goto LABEL_21;
      }
      if ( v42 >= 0x80 )
      {
        WdLogSingleEntry0(2LL);
        v24 = 1041LL;
        v25 = L"Context is setting non-zero Reserved flags at the creation time.";
        goto LABEL_21;
      }
      v135.Flags.Value = v41 | 0x10;
      v43 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v38 + 2) + 3032LL) + 352LL * v126 + 32);
      if ( v43 )
        v44 = (*(_BYTE *)(74 * v40 + v43 + 68) & 2) != 0;
      else
        v44 = 0;
      *((_BYTE *)this + 296) = v44;
    }
    else if ( ADAPTER_RENDER::NodeSupportsContextScheduling(v39, *((_DWORD *)this + 97), v34) )
    {
      WdLogSingleEntry0(2LL);
      v24 = 1053LL;
      v25 = L"Context doesn't pass HwQueueSupported flag, but GPU node requires hardware scheduling";
      goto LABEL_21;
    }
    v35 = v122;
  }
  if ( (*(_DWORD *)(*((_QWORD *)*v38 + 2) + 2504LL) & 1) != 0 )
  {
    v45 = *((_DWORD *)this + 98);
    if ( (v45 & 0x20) != 0 )
    {
      result = CheckNoKmdAccessPrivateData(v125, v129, 0xFF000003);
      LODWORD(v32) = result;
      if ( (int)result < 0 )
        return result;
      v135.hContext = 0LL;
      v135.ContextInfo.DmaBufferPrivateDataSize = 264;
      v135.ContextInfo.AllocationListSize = 128;
      v135.ContextInfo.PatchLocationListSize = 128;
      v135.ContextInfo.DmaBufferSize = 1024;
    }
    else if ( (v45 & 8) != 0 )
    {
      v135.hContext = 0LL;
    }
    else
    {
      v46 = ADAPTER_RENDER::DdiCreateContext(*v38, *(void **)(v35 + 616), &v135);
      v32 = v46;
      if ( v46 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1088;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DdiCreateContext() failed with status 0x%I64x",
          v32,
          0LL,
          0LL,
          0LL,
          0LL);
        v122 = *(_QWORD *)(v128 + 412);
        if ( (unsigned int)dword_140166660 > 5 )
        {
          if ( tlgKeywordOn((__int64)&dword_140166660, 0x400000000000LL) )
          {
            LOWORD(v126) = 0;
            v49 = *((_QWORD *)this + 2);
            v50 = *(_QWORD *)(*(_QWORD *)(v49 + 40) + 64LL);
            *(_OWORD *)v136 = *(_OWORD *)(v50 + 144);
            v131 = v136;
            v51 = *(_QWORD *)(*(_QWORD *)(v49 + 40) + 64LL);
            if ( v51 )
              v52 = *(const CHAR **)(v51 + 96);
            else
              v52 = 0LL;
            v132 = v52;
            v123[0] = *((_BYTE *)this + 144);
            v133 = v122;
            LODWORD(v128) = *(_DWORD *)(v48 + 424);
            LODWORD(v122) = *(_DWORD *)(v48 + 420);
            v124 = v32;
            v127 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapSz<char>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>>(
              v50,
              (__int64)&unk_140141AE6,
              v47,
              v48,
              (__int64)&v127,
              (__int64)&v124,
              (__int64)&v122,
              (__int64)&v128,
              (__int64)&v133,
              (__int64)v123,
              &v132,
              (__int64 *)&v131,
              (__int64)&v126);
          }
        }
      }
    }
    *((_DWORD *)this + 10) |= 1u;
  }
  else
  {
    v135.hContext = *(HANDLE *)(v35 + 616);
    v53 = *(__m128i *)(v35 + 624);
    *(_QWORD *)&v136[16] = *(_QWORD *)(v35 + 640);
    v135.ContextInfo.DmaBufferSize = _mm_cvtsi128_si32(v53);
    *(_QWORD *)&v136[16] = *(_QWORD *)(v35 + 640);
    v135.ContextInfo.DmaBufferSegmentSet = HIDWORD(*(_QWORD *)(v35 + 624));
    *(_QWORD *)&v136[16] = *(_QWORD *)(v35 + 640);
    v135.ContextInfo.AllocationListSize = HIDWORD(*(_QWORD *)(v35 + 632));
    *(_OWORD *)v136 = *(_OWORD *)(v35 + 624);
    *(_QWORD *)&v136[16] = *(_QWORD *)(v35 + 640);
    v135.ContextInfo.PatchLocationListSize = *(_DWORD *)&v136[16];
    *(_QWORD *)&v136[16] = *(_QWORD *)(v35 + 640);
    v135.ContextInfo.DmaBufferPrivateDataSize = _mm_cvtsi128_si32(_mm_loadl_epi64((const __m128i *)(v35 + 632)));
    *((_DWORD *)this + 10) &= ~1u;
  }
  if ( (int)v32 < 0 )
    return (unsigned int)v32;
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 464LL) == 2 || *((_DWORD *)this + 36) == 2)
    && v135.ContextInfo.AllocationListSize != 256 )
  {
    WdLogSingleEntry2(3LL, 256LL, v135.ContextInfo.AllocationListSize);
    WdLogGlobalForLineNumber = 1140;
    v135.ContextInfo.AllocationListSize = 256;
  }
  *((_QWORD *)this + 23) = v135.hContext;
  *(DXGK_CONTEXTINFO *)((char *)this + 200) = v135.ContextInfo;
  if ( *((_DWORD *)this + 52) )
  {
    v54 = (struct _LOOKASIDE_LIST_EX *)operator new(0x60uLL, 0x64507844u, 64LL);
    *((_QWORD *)this + 61) = v54;
    if ( !v54 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1154;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to allocate lookaside list for private driver data",
        1154LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    v55 = ExInitializeLookasideListEx(
            v54,
            0LL,
            0LL,
            (POOL_TYPE)512,
            0,
            (unsigned int)(*((_DWORD *)this + 52) + 16),
            0x64507844u,
            0);
    LODWORD(v122) = v55;
    if ( v55 < 0 )
    {
      v56 = v55;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1170;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to initialize lookaside list for private driver data 0x%x",
        v56,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 61));
      *((_QWORD *)this + 61) = 0LL;
      return (unsigned int)v122;
    }
  }
  v57 = (char)v135.ContextInfo.Caps.0;
  if ( (*(_BYTE *)&v135.ContextInfo.Caps.0 & 2) != 0 )
  {
    v58 = *((_QWORD *)this + 2);
    *(_BYTE *)(v58 + 1919) = 1;
    *(_BYTE *)(*(_QWORD *)(v58 + 40) + 337LL) = 1;
    v57 = (char)v135.ContextInfo.Caps.0;
  }
  if ( *((_BYTE *)this + 430) )
  {
    v59 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3032LL)
                    + 352LL * *((unsigned int *)this + 97)
                    + 32);
    v60 = *((unsigned int *)this + 95);
    if ( v59 )
      v61 = *(_BYTE *)(74 * v60 + v59 + 73);
    else
      v61 = 0;
    if ( v59 )
      v62 = *(_BYTE *)(74 * v60 + v59 + 72) != 0;
    else
      v62 = 0;
    if ( *((_BYTE *)this + 433) )
    {
      if ( (v57 & 4) != 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1190;
        return 3221225473LL;
      }
    }
    else if ( (v57 & 4) != 0 || v61 && !v62 )
    {
      if ( !v61 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1199;
        return 3221225473LL;
      }
      *((_BYTE *)this + 431) = 1;
    }
    else
    {
      *((_BYTE *)this + 432) = 1;
    }
  }
  if ( !*((_BYTE *)this + 430) )
  {
    if ( !*((_DWORD *)this + 50) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1210;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_bUseGpuVa || m_ContextInfo.DmaBufferSize",
        1210LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !*((_BYTE *)this + 430) )
    {
      if ( !*((_DWORD *)this + 53) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1211;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_bUseGpuVa || m_ContextInfo.AllocationListSize",
          1211LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( !*((_BYTE *)this + 430) && !*((_DWORD *)this + 54) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1212;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_bUseGpuVa || m_ContextInfo.PatchLocationListSize",
          1212LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
  }
  if ( bTracingEnabled )
  {
    v63 = *((_DWORD *)this + 6);
    *(_OWORD *)v136 = *(_OWORD *)((char *)this + 200);
    *(_OWORD *)&v136[16] = *(_OWORD *)((char *)this + 216);
    v64 = *((_DWORD *)this + 96);
    v65 = *((_DWORD *)this + 95);
    v127 = *((_QWORD *)this + 2);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
    {
      LODWORD(v121) = 0;
      LODWORD(v120) = *(_DWORD *)&v136[16];
      LODWORD(v119) = *(_DWORD *)&v136[12];
      LODWORD(v117) = *(_DWORD *)&v136[8];
      *(_DWORD *)Depth = *(_DWORD *)&v136[4];
      Tag[0] = *(_DWORD *)v136;
      LODWORD(Size) = v64;
      Flags[0] = v65;
      McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
        HIDWORD(*(_QWORD *)v136),
        &EventCreateContext,
        *(__int64 *)v136,
        v127,
        *(_QWORD *)Flags,
        Size,
        *(_QWORD *)Tag,
        *(_QWORD *)Depth,
        v117,
        v119,
        v120,
        v121,
        this,
        v63,
        0LL);
    }
  }
  v66 = *((_QWORD *)this + 2);
  v67 = *((_DWORD *)this + 98);
  *(_DWORD *)v136 = 0;
  if ( (v67 & 0x10) != 0 )
  {
    *(_QWORD *)&v136[12] = 0LL;
    *(_DWORD *)&v136[28] = 0;
    *(_DWORD *)&v136[20] = *(_DWORD *)(*(_QWORD *)(v66 + 40) + 416LL);
    *(_DWORD *)&v136[24] = DXGPROCESS::GetDefaultQos(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL));
    *(_DWORD *)&v136[4] = *((_DWORD *)this + 95);
    *(_DWORD *)&v136[8] = *((_DWORD *)this + 97);
    *(_DWORD *)v136 = *(_DWORD *)v136 & 0xFFFFEBDD | (2
                                                    * (*((_DWORD *)this + 98) & 1 | (4
                                                                                   * (*((_DWORD *)this + 98) & 4 | (16 * (*((_DWORD *)this + 98) & 0x28 | 0x11))))));
    *(_DWORD *)&v136[32] = *((_DWORD *)this + 36);
    v70 = (struct VIDSCH_HW_CONTEXT *)(*(__int64 (__fastcall **)(DXGCONTEXT *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v68 + 16) + 736LL) + 8LL)
                                                                                       + 240LL))(
                                        this,
                                        v136);
    *((_QWORD *)this + 35) = v70;
    if ( !v70 )
    {
      WdLogSingleEntry2(3LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 1258;
      return 3221225495LL;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
    {
      McTemplateK0pppp_EtwWriteTransfer(
        v69,
        &EventAssociateContext,
        (__int64)v70,
        this,
        v70,
        *((_QWORD *)this + 23),
        *((_QWORD *)this + 24));
      v70 = (struct VIDSCH_HW_CONTEXT *)*((_QWORD *)this + 35);
    }
    memset(&v134, 0, sizeof(v134));
    v134.Flags.Value = (*((_DWORD *)this + 98) >> 2) & 8;
    v71 = VIDSCH_EXPORT::VidSchCreateHwQueue(
            *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
            0LL,
            v70,
            &v134,
            (struct VIDSCH_HW_QUEUE **)this + 36,
            0LL);
    LODWORD(v122) = v71;
    if ( v71 < 0 )
    {
      WdLogSingleEntry2(3LL, this, v71);
      WdLogGlobalForLineNumber = 1277;
      return (unsigned int)v122;
    }
  }
  else
  {
    memset(&v136[4], 0, 32);
    *(_DWORD *)&v136[12] = 0;
    *(_DWORD *)&v136[20] = *(_DWORD *)(*(_QWORD *)(v66 + 40) + 416LL);
    *(_DWORD *)&v136[24] = DXGPROCESS::GetDefaultQos(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL));
    *(_DWORD *)&v136[4] = *((_DWORD *)this + 95);
    *(_DWORD *)&v136[8] = *((_DWORD *)this + 97);
    v73 = *(_DWORD *)v136 & 0xFFFFEFFD | (2 * (*((_DWORD *)this + 98) & 1 | ((*((_DWORD *)this + 98) & 0x20) << 6)));
    *(_DWORD *)v136 = v73;
    *(_DWORD *)&v136[32] = *((_DWORD *)this + 36);
    if ( *((_BYTE *)this + 430) )
      *(_DWORD *)v136 = v73 | 0x80;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v72 + 16) + 16LL)) )
    {
      if ( v75 >= 0x80 )
      {
        WdLogSingleEntry0(2LL);
        v24 = 1308LL;
        v25 = L"Context is setting non-zero Reserved flags at the creation time.";
        goto LABEL_21;
      }
      *(_DWORD *)v136 = v74 & 0xFFFFFBDF | (8 * (v75 & 4 | (16 * (v75 & 8))));
    }
    Context = VIDSCH_EXPORT::VidSchCreateContext(
                *(VIDSCH_EXPORT **)(*(_QWORD *)(v76 + 16) + 736LL),
                this,
                (struct _VIDSCH_CONTEXT_DATA *)v136);
    *((_QWORD *)this + 32) = Context;
    if ( !Context )
    {
      WdLogSingleEntry2(3LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 1322;
      return 3221225495LL;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
      McTemplateK0pppp_EtwWriteTransfer(
        (__int64)Context,
        &EventAssociateContext,
        v78,
        this,
        Context,
        *((_QWORD *)this + 23),
        *((_QWORD *)this + 24));
  }
  if ( !*((_BYTE *)this + 430) || *(_DWORD *)(*((_QWORD *)this + 2) + 464LL) == 2 || *((_DWORD *)this + 36) == 2 )
  {
    v79 = DXGCONTEXT::EnsurePriviledgedDmaPool(this, *((_DWORD *)this + 53), *((_DWORD *)this + 54));
    v80 = v79;
    if ( v79 < 0 )
    {
      WdLogSingleEntry2(3LL, this, v79);
      WdLogGlobalForLineNumber = 1340;
      return v80;
    }
  }
  v81 = (_QWORD *)((char *)this + 48);
  *((_QWORD *)this + 6) = *((unsigned int *)this + 50);
  *((_DWORD *)this + 18) = *((_DWORD *)this + 53);
  *((_DWORD *)this + 26) = *((_DWORD *)this + 54);
  if ( *((_BYTE *)this + 430) )
  {
    if ( *((_QWORD *)this + 44) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1361;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_pCommandDmaBuffer", 1361LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 444LL) & 0x10) != 0
      && v129
      && v125 == 16 )
    {
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      v83 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))VirtualMemoryInterface)(
              -1LL,
              (char *)this + 56,
              0LL,
              (char *)this + 48,
              12288,
              4);
      v80 = v83;
      if ( v83 < 0 )
      {
        WdLogSingleEntry3(3LL, this, *((_QWORD *)this + 6), v83);
        WdLogGlobalForLineNumber = 1382;
        return v80;
      }
      v84 = (_QWORD *)*((_QWORD *)v129 + 1);
      v127 = *(_QWORD *)v129;
      ULong64FromUser = RtlReadULong64FromUser(v84);
      if ( !v84 || ULong64FromUser < 8 || !v127 )
      {
        WdLogSingleEntry2(3LL, this, -1073741811LL);
        WdLogGlobalForLineNumber = 1407;
        return 3221225485LL;
      }
      RtlWriteULong64ToUser((_QWORD *)v127, *((_QWORD *)this + 7));
      RtlWriteULong64ToUser(v84, *((_QWORD *)this + 6));
    }
  }
  else
  {
    v86 = DxgkGetVirtualMemoryInterface();
    v87 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))v86)(
            -1LL,
            (char *)this + 56,
            0LL,
            (char *)this + 48,
            12288,
            4);
    LODWORD(v122) = v87;
    if ( v87 < 0 )
    {
      WdLogSingleEntry3(3LL, this, *v81, v87);
      WdLogGlobalForLineNumber = 1436;
      return (unsigned int)v122;
    }
    Global = DXGGLOBAL::GetGlobal();
    if ( (unsigned __int8)DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                            (struct DXGGLOBAL *)((char *)Global + 1668),
                            *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
      v89 = ExAllocatePool2(256LL, *v81, 1265072196LL);
      *((_QWORD *)this + 8) = v89;
      if ( !v89 )
      {
        WdLogSingleEntry3(3LL, this, *v81, -1073741801LL);
        WdLogGlobalForLineNumber = 1450;
        return 3221225495LL;
      }
    }
  }
  v90 = *((unsigned int *)this + 18);
  if ( (_DWORD)v90 )
  {
    v91 = (unsigned int)v90;
    v92 = 8 * v90;
    if ( v92 > 0xFFFFFFFF )
    {
      WdLogSingleEntry2(3LL, this, v91);
      WdLogGlobalForLineNumber = 1468;
      return 3221225621LL;
    }
    v93 = (SIZE_T *)((char *)this + 80);
    *((_QWORD *)this + 10) = (unsigned int)v92;
    v94 = DxgkGetVirtualMemoryInterface();
    v95 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))v94)(
            -1LL,
            (char *)this + 88,
            0LL,
            (char *)this + 80,
            12288,
            4);
    LODWORD(v122) = v95;
    if ( v95 < 0 )
    {
      WdLogSingleEntry3(3LL, this, *v93, v95);
      WdLogGlobalForLineNumber = 1489;
      return (unsigned int)v122;
    }
    *((_QWORD *)this + 12) = MmSecureVirtualMemory(*((PVOID *)this + 11), *v93, 4u);
    if ( !*((_QWORD *)this + 12) )
    {
      WdLogSingleEntry2(3LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 1513;
      return 3221225495LL;
    }
  }
  v96 = *((unsigned int *)this + 26);
  if ( !(_DWORD)v96 )
    goto LABEL_175;
  v97 = (unsigned int)v96;
  v98 = 24 * v96;
  if ( v98 > 0xFFFFFFFF )
  {
    WdLogSingleEntry2(3LL, this, v97);
    WdLogGlobalForLineNumber = 1530;
    return 3221225621LL;
  }
  v99 = (SIZE_T *)((char *)this + 112);
  *((_QWORD *)this + 14) = (unsigned int)v98;
  v100 = DxgkGetVirtualMemoryInterface();
  v101 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))v100)(
           -1LL,
           (char *)this + 120,
           0LL,
           (char *)this + 112,
           12288,
           4);
  LODWORD(v122) = v101;
  if ( v101 < 0 )
  {
    WdLogSingleEntry3(3LL, this, *v99, v101);
    WdLogGlobalForLineNumber = 1549;
    return (unsigned int)v122;
  }
  *((_QWORD *)this + 17) = MmSecureVirtualMemory(*((PVOID *)this + 15), *v99, 4u);
  if ( !*((_QWORD *)this + 17) )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 1573;
    return 3221225495LL;
  }
  v102 = DXGGLOBAL::GetGlobal();
  if ( (unsigned __int8)DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                          (struct DXGGLOBAL *)((char *)v102 + 1668),
                          *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v103 = ExAllocatePool2(256LL, *((_QWORD *)this + 14), 1265072196LL);
    *((_QWORD *)this + 16) = v103;
    if ( !v103 )
    {
      WdLogSingleEntry3(3LL, this, *((_QWORD *)this + 14), -1073741801LL);
      WdLogGlobalForLineNumber = 1587;
      return 3221225495LL;
    }
  }
LABEL_175:
  v104 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  v105 = *((unsigned int *)this + 6);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v104 + 248));
  v106 = ((unsigned int)v105 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v106 < *(_DWORD *)(v104 + 296) )
  {
    v107 = *(_QWORD *)(v104 + 280);
    if ( (((unsigned int)v105 >> 25) & 0x60) == (*(_BYTE *)(v107 + 16 * v106 + 8) & 0x60)
      && (*(_DWORD *)(v107 + 16 * v106 + 8) & 0x1F) != 0 )
    {
      v108 = 16 * ((v105 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v107 + v108 + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 224;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          224LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*(_QWORD *)(v104 + 280) + v108 + 8) &= ~0x2000u;
    }
  }
  *(_QWORD *)(v104 + 256) = 0LL;
  ExReleasePushLockExclusiveEx(v104 + 248, 0LL);
  KeLeaveCriticalRegion();
  return 0LL;
}

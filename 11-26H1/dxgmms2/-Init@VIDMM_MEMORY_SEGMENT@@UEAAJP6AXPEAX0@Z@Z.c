/*
 * XREFs of ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX0@Z@Z @ 0x1400BE6C0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140037CA4 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z @ 0x14003B35C (-SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14004CE78 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@Z@Z @ 0x1400B6430 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@Z@Z.c)
 *     ?Init@VIDMM_CPU_HOST_APERTURE@@QEAAJXZ @ 0x1400BC4FC (-Init@VIDMM_CPU_HOST_APERTURE@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::Init(VIDMM_MEMORY_SEGMENT *this, void (*a2)(void *, void *))
{
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // edx
  char v7; // al
  int v8; // edx
  __int64 v9; // rcx
  __int64 result; // rax
  unsigned __int8 v11; // cf
  _QWORD *v12; // rax
  _QWORD *v13; // r9
  int v14; // edx
  __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  int v19; // edi
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // edx
  char v23; // cl
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rdx
  int v27; // r14d
  int v28; // esi
  int v29; // edi
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r9
  int v33; // r8d
  __int64 v34; // rax
  _DWORD *v35; // rsi
  DXGADAPTER *v36; // r8
  int v37; // eax
  unsigned __int16 v38; // ax
  __int64 v39; // rcx
  int v40; // [rsp+50h] [rbp-19h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO SystemInformation; // [rsp+58h] [rbp-11h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    v4 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v4 + 24) = *((unsigned __int16 *)this + 35);
    *(_QWORD *)(v4 + 32) = this;
    WdLogGlobalForLineNumber = 366;
  }
  v5 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)(v5 + 40) < 0x9006u )
    *((_DWORD *)this + 16) &= ~0x10u;
  v6 = *((_DWORD *)this + 16);
  if ( (v6 & 0x10) != 0 || (v7 = 0, (*(_DWORD *)(*(_QWORD *)(v5 + 24) + 444LL) & 8) != 0) )
    v7 = 1;
  v8 = v6 | 0x10;
  *((_BYTE *)this + 482) = v7;
  *((_DWORD *)this + 16) = v8;
  if ( (v8 & 0x40) == 0 )
    goto LABEL_13;
  if ( *((_QWORD *)this + 20) > (unsigned __int64)(qword_14008A640 - 0x800000) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 413;
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
    return 3221225473LL;
  }
  result = SysMmAllocateLogicalMemory(
             *(struct SYSMM_ADAPTER **)(*(_QWORD *)(v5 + 24) + 224LL),
             *((_QWORD *)this + 5),
             this,
             (void **)this + 61);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(*((_QWORD *)this + 1) + 6976LL) += *((_QWORD *)this + 5);
LABEL_13:
    v11 = _bittest((const signed __int32 *)this + 16, 0xDu);
    *((_QWORD *)this + 10) = *((_QWORD *)this + 5);
    if ( v11 )
    {
      v12 = (_QWORD *)operator new(88LL, 0x35346956u, 256LL);
      v13 = v12;
      if ( v12 )
      {
        v14 = *((_DWORD *)this + 32);
        v15 = *((_QWORD *)this + 4);
        v12[1] = v12;
        *v12 = v12;
        v16 = v12 + 2;
        v16[1] = v16;
        *v16 = v16;
        v13[5] = 0LL;
        v13[6] = (char *)this + 8;
        *((_DWORD *)v13 + 17) = v14;
        *((_DWORD *)v13 + 18) = v14;
        *(_QWORD *)((char *)v13 + 76) = 0LL;
        v13[4] = v15;
      }
      else
      {
        v13 = 0LL;
      }
      *((_QWORD *)this + 64) = v13;
      if ( !v13 )
      {
        _InterlockedAdd(&dword_14008A81C, 1u);
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 454;
        DxgkLogInternalTriageEvent(v17, 262145LL);
        return 3221225495LL;
      }
      v18 = VIDMM_CPU_HOST_APERTURE::Init((VIDMM_CPU_HOST_APERTURE *)v13);
      v19 = v18;
      if ( v18 < 0 )
      {
        WdLogSingleEntry1(1LL, v18);
        WdLogGlobalForLineNumber = 463;
LABEL_21:
        DxgkLogInternalTriageEvent(v20, 0x40000LL);
        return (unsigned int)v19;
      }
    }
    v19 = VIDMM_SEGMENT::Init(this, a2);
    if ( v19 < 0
      || !_bittest((const signed __int32 *)this + 16, 0xDu)
      || !*((_DWORD *)this + 45)
      || (v21 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 444LL), (v21 & 0x8000) == 0)
      || (v21 & 0x10000) == 0
      || (memset(&SystemInformation, 0, 32),
          ZwQuerySystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20u, 0LL) < 0) )
    {
LABEL_45:
      v34 = *((_QWORD *)this + 1);
      *((_BYTE *)this + 481) = 1;
      if ( (*(_DWORD *)(*(_QWORD *)(v34 + 24) + 5168LL) & 1) != 0 )
      {
        *(_QWORD *)&SystemInformation.Type = 40LL;
        *(_QWORD *)&SystemInformation.InputDataSize = 4LL;
        *(_QWORD *)&SystemInformation.Flags.0 = 0LL;
        HIDWORD(SystemInformation.hKmdProcessHandle) = 0;
        v35 = (_DWORD *)((char *)this + 496);
        v40 = VIDMM_SEGMENT::DriverId(this);
        SystemInformation.pInputData = &v40;
        SystemInformation.pOutputData = (char *)this + 496;
        SystemInformation.OutputDataSize = 4;
        v37 = DXGADAPTER::DdiQueryAdapterInfo(v36, &SystemInformation);
        v19 = v37;
        if ( v37 == -1073741822 )
        {
          v38 = VIDMM_SEGMENT::DriverId(this);
          WdLogSingleEntry1(4LL, v38);
          WdLogGlobalForLineNumber = 579;
          v19 = 0;
        }
        else
        {
          if ( v37 < 0 )
          {
            WdLogSingleEntry1(1LL, v37);
            WdLogGlobalForLineNumber = 586;
            goto LABEL_21;
          }
          if ( *v35 < 0x1000u || ((*v35 - 1) & *v35) != 0 )
          {
            WdLogSingleEntry1(1LL, (unsigned int)*v35);
            WdLogGlobalForLineNumber = 597;
            DxgkLogInternalTriageEvent(v39, 0x40000LL);
            return 3221225485LL;
          }
        }
      }
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 603;
      WdLogSingleEntry4(
        4LL,
        *((_QWORD *)this + 5),
        *((int *)this + 7),
        *((unsigned int *)this + 6),
        *((unsigned __int16 *)this + 35));
      WdLogGlobalForLineNumber = 608;
      return (unsigned int)v19;
    }
    if ( LODWORD(SystemInformation.pOutputData) != 1 )
    {
      if ( LODWORD(SystemInformation.pOutputData) == 2 )
      {
LABEL_32:
        v22 = 4;
LABEL_34:
        v23 = 12;
        if ( *((_DWORD *)this + 33) != 4096LL )
          v23 = 16;
        v24 = *(__int64 *)&SystemInformation.Type >> v23;
        v25 = ((unsigned __int64)(SystemInformation.InputDataSize * HIDWORD(SystemInformation.pInputData) * v22) >> v23)
            - 1
            + (*(__int64 *)&SystemInformation.Type >> v23)
            + (((*((unsigned int *)this + 33) - 1LL) & (SystemInformation.InputDataSize
                                                      * HIDWORD(SystemInformation.pInputData)
                                                      * v22)) != 0);
        v26 = *((__int64 *)this + 4) >> v23;
        if ( v26 > *(__int64 *)&SystemInformation.Type >> v23 )
          v24 = *((__int64 *)this + 4) >> v23;
        if ( v26 + (unsigned int)(*((_DWORD *)this + 32) - 1) < v25 )
          v25 = v26 + (unsigned int)(*((_DWORD *)this + 32) - 1);
        if ( v24 <= v25 )
        {
          v27 = v25 - v24;
          v28 = v24 - v26;
          v29 = v27 + 1;
          WdLogSingleEntry2(4LL, (unsigned int)(v24 - v26), (unsigned int)(v27 + 1));
          v30 = *((_QWORD *)this + 64);
          v31 = (unsigned int)(v28 + v27);
          *((_DWORD *)this + 53) = v28;
          *((_DWORD *)this + 54) = v31;
          WdLogGlobalForLineNumber = 546;
          v32 = *(_QWORD *)(v30 + 40);
          v33 = *(_DWORD *)(v32 + 4 * v31);
          if ( v28 == *(_DWORD *)(v30 + 76) )
            *(_DWORD *)(v30 + 76) = v33;
          else
            *(_DWORD *)(v32 + 4LL * (unsigned int)(v28 - 1)) = v33;
          *(_DWORD *)(*(_QWORD *)(v30 + 40) + 4LL * *((unsigned int *)this + 54)) = v29;
          *(_DWORD *)(v30 + 72) -= v29;
          *(_DWORD *)(v30 + 80) = v29;
          v19 = 0;
        }
        goto LABEL_45;
      }
      if ( LODWORD(SystemInformation.pOutputData) != 3 )
      {
        if ( LODWORD(SystemInformation.pOutputData) != 4 )
          goto LABEL_45;
        goto LABEL_32;
      }
    }
    v22 = 3;
    goto LABEL_34;
  }
  return result;
}

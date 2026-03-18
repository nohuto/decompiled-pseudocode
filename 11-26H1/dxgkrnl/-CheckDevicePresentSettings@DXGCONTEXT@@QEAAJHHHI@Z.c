/*
 * XREFs of ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHHI@Z @ 0x14037FA30
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140046328 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x14005B4F8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CheckDevicePresentSettings(DXGCONTEXT *this, int a2, int a3, int a4, unsigned int a5)
{
  __int64 *v5; // rdi
  __int64 v6; // r15
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rbp
  __int64 v15; // rbp
  char v16; // al
  ADAPTER_DISPLAY *v17; // rcx
  struct DXGDEVICE *VidPnSourceOwner; // rax
  __int64 v19; // rax
  struct DXGDEVICE *v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // ebx

  v5 = (__int64 *)((char *)this + 16);
  v6 = *((_QWORD *)this + 2);
  v10 = *(_QWORD *)(*(_QWORD *)(v6 + 1896) + 3160LL);
  v11 = *(_QWORD *)(v10 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v11 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v11 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6430;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 6430LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a5 >= *(_DWORD *)(v10 + 96) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6431;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      6431LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a5 < *(_DWORD *)(v10 + 96) && v6 == *(_QWORD *)(4024LL * a5 + *(_QWORD *)(v10 + 128) + 728) )
  {
    v14 = *(_QWORD *)(*v5 + 1896);
    if ( v14 )
    {
      if ( !*(_QWORD *)(v14 + 3160) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 10648;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayAdapter()", 10648LL, 0LL, 0LL, 0LL, 0LL);
      }
      v15 = *(_QWORD *)(v14 + 3160);
      if ( !v15 )
        goto LABEL_14;
      if ( a5 >= *(_DWORD *)(v15 + 96) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6468;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"VidPnSourceId < m_NumVidPnSources",
          6468LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v16 = 1;
      if ( !*(_BYTE *)(4024LL * a5 + *(_QWORD *)(v15 + 128) + 760) )
LABEL_14:
        v16 = 0;
      if ( !v16 )
      {
        if ( *(_DWORD *)(*v5 + 464) == 1 )
        {
          v22 = -1071775738;
          WdLogSingleEntry3(4LL, -1071775738LL, this, a5);
          WdLogGlobalForLineNumber = 551;
          return v22;
        }
        if ( a2 )
        {
          WdLogSingleEntry3(4LL, 0LL, this, a5);
          result = 3223192376LL;
          WdLogGlobalForLineNumber = 557;
          return result;
        }
      }
    }
    if ( a3 || *(_DWORD *)(*v5 + 464) != 1 || (*(_DWORD *)(*v5 + 4LL * a5 + 1240) & 0x100) != 0 )
      return 0LL;
    v22 = a4 != 0 ? -1071775719 : -1071775739;
    WdLogSingleEntry3(3LL, (int)v22, this, a5);
    WdLogGlobalForLineNumber = 575;
    return v22;
  }
  WdLogSingleEntry3(3LL, -1071775744LL, this, a5);
  v12 = *v5;
  WdLogGlobalForLineNumber = 500;
  if ( (*(_DWORD *)(*(_QWORD *)(v12 + 40) + 408LL) & 4) != 0
    && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                       *(ADAPTER_DISPLAY **)(*(_QWORD *)(v12 + 1896) + 3160LL),
                       a5) == 1 )
  {
    v17 = *(ADAPTER_DISPLAY **)(*(_QWORD *)(*v5 + 1896) + 3160LL);
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 16) + 4024LL * a5 + 752) + 408LL) & 4) != 0 )
    {
      VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(v17, a5);
      WdLogSingleEntry3(2LL, *v5, a5, VidPnSourceOwner);
      v19 = *v5;
      WdLogGlobalForLineNumber = 511;
      v20 = ADAPTER_DISPLAY::GetVidPnSourceOwner(*(ADAPTER_DISPLAY **)(*(_QWORD *)(v19 + 1896) + 3160LL), a5);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"This Dwm Device (0x%I64x) does not have VidPn ownership for source 0x%I64x, another DWM device (0x%I64x"
                  ") has shared ownership, likely Dwm device leak",
        *v5,
        a5,
        (__int64)v20,
        0LL,
        0LL);
      LOBYTE(v21) = 1;
      *(_BYTE *)(*v5 + 1954) = 1;
      if ( (unsigned __int8)WdIsDebuggerPresent(v21) )
      {
        DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
        __debugbreak();
      }
    }
  }
  return 3223191552LL;
}

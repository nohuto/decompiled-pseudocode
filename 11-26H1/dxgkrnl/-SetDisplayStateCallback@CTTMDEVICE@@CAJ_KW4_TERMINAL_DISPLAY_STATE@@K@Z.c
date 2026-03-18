/*
 * XREFs of ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x140203610
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     DxgkPowerOnOffMonitor @ 0x14024A2EC (DxgkPowerOnOffMonitor.c)
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z @ 0x14024E434 (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall CTTMDEVICE::SetDisplayStateCallback(struct _EX_RUNDOWN_REF *a1, signed int a2, unsigned int a3)
{
  __int64 v3; // r12
  __int64 v5; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct DXGSESSIONDATA *v8; // rdi
  unsigned int CurrentProcessSessionId; // eax
  const wchar_t *v10; // r9
  __int64 v11; // rax
  unsigned int v13; // eax
  int v14; // ecx
  unsigned int v15; // r12d
  unsigned int v16; // r12d
  unsigned __int64 v17; // rax
  void *v18; // r14
  __int16 v19; // ax
  __int64 v20; // rcx
  struct _EX_RUNDOWN_REF **v21; // rax
  _BYTE *v22; // rbx
  unsigned int v23; // r8d
  unsigned int v24; // edx
  struct _DEVICE_OBJECT *Count; // r14
  unsigned int v26; // r12d
  unsigned int v27; // r13d
  _BYTE *v28; // rdi
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  struct _EX_RUNDOWN_REF *v34; // rbx
  __int64 v35; // r8
  unsigned int v36; // ecx
  int v37; // eax
  __int64 v38; // rdx
  struct _EX_RUNDOWN_REF *v39; // rcx
  int v40; // eax
  __int64 v41; // r13
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const *v42; // rcx
  unsigned int i; // ebx
  int v44; // eax
  __int64 v45; // r13
  int v46; // eax
  __int64 v47; // r13
  __int64 v48; // rax
  struct _EX_RUNDOWN_REF **v49; // rbx
  struct _EX_RUNDOWN_REF *v50; // r9
  __int64 v51; // r8
  __int64 v52; // [rsp+20h] [rbp-99h]
  __int64 v53; // [rsp+20h] [rbp-99h]
  __int64 v54; // [rsp+28h] [rbp-91h]
  __int64 v55; // [rsp+30h] [rbp-89h]
  int v56; // [rsp+50h] [rbp-69h]
  unsigned int v57; // [rsp+54h] [rbp-65h]
  int v58; // [rsp+58h] [rbp-61h]
  _BYTE *v59; // [rsp+60h] [rbp-59h]
  signed int v60; // [rsp+68h] [rbp-51h]
  unsigned int v61; // [rsp+6Ch] [rbp-4Dh]
  struct _EX_RUNDOWN_REF **v62; // [rsp+70h] [rbp-49h]
  __int64 v63; // [rsp+70h] [rbp-49h]
  struct _EX_RUNDOWN_REF **v64; // [rsp+78h] [rbp-41h]
  int v65; // [rsp+80h] [rbp-39h] BYREF
  int v66; // [rsp+84h] [rbp-35h] BYREF
  struct _EX_RUNDOWN_REF *v67; // [rsp+88h] [rbp-31h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v68[2]; // [rsp+90h] [rbp-29h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v69[2]; // [rsp+A0h] [rbp-19h] BYREF
  struct _EX_RUNDOWN_REF *v70; // [rsp+B0h] [rbp-9h]
  struct DXGSESSIONDATA *v71; // [rsp+B8h] [rbp-1h]
  _BYTE v72[16]; // [rsp+C0h] [rbp+7h] BYREF

  v3 = a2;
  v60 = a2;
  v67 = 0LL;
  v59 = v72;
  v5 = a3;
  v56 = 4;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  v71 = SessionData;
  v8 = SessionData;
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 6693;
    LODWORD(v11) = PsGetCurrentProcessSessionId();
    v10 = L"Cannot find the session data for current session 0x%I64x, returning 0x%I64x.";
    v55 = 0LL;
    v54 = -1073741811LL;
    v11 = (unsigned int)v11;
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v11, v54, v55, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( a1 == (struct _EX_RUNDOWN_REF *)0xFFFFFFFFLL )
  {
    v30 = *((_DWORD *)SessionData + 4658);
    if ( v30 != (_DWORD)v5 )
    {
      WdLogSingleEntry2(2LL, v30, v5);
      v52 = *((unsigned int *)v8 + 4658);
      WdLogGlobalForLineNumber = 6845;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Batch sequence numbers are not match (0x%I64x : 0x%I64x).",
        v52,
        v5,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_DWORD *)v8 + 4659) != (_DWORD)v3 )
    {
      WdLogSingleEntry2(2LL, *((int *)v8 + 4659), v3);
      v53 = *((int *)v8 + 4659);
      WdLogGlobalForLineNumber = 6856;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"The display state from batch is not same as the one from flush (0x%I64x : 0x%I64x).",
        v53,
        v3,
        0LL,
        0LL,
        0LL);
      v60 = *((_DWORD *)v8 + 4659);
    }
    goto LABEL_38;
  }
  if ( *((_WORD *)SessionData + 9321) )
  {
    v13 = *((_DWORD *)SessionData + 4658);
    if ( v13 != (_DWORD)v5 )
    {
      WdLogSingleEntry3(2LL, v13, v5, -1073741811LL);
      v11 = *((unsigned int *)v8 + 4658);
      v10 = L"Batch sequence numbers are not match (0x%I64x : 0x%I64x), returning 0x%I64x.";
      v55 = -1073741811LL;
      v54 = v5;
      WdLogGlobalForLineNumber = 6720;
      goto LABEL_3;
    }
    if ( *((_DWORD *)v8 + 4659) != (_DWORD)v3 )
    {
      WdLogSingleEntry3(2LL, *((int *)v8 + 4659), v3, -1073741811LL);
      v11 = *((int *)v8 + 4659);
      v10 = L"Batch does not share same display state (0x%I64x : 0x%I64x), returning 0x%I64x.";
      v55 = -1073741811LL;
      v54 = v3;
      WdLogGlobalForLineNumber = 6734;
      goto LABEL_3;
    }
  }
  else
  {
    *((_DWORD *)SessionData + 4658) = v5;
    *((_DWORD *)SessionData + 4659) = v3;
  }
  v67 = a1;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6740;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pThis != NULL", 6740LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !ExAcquireRundownProtection(a1 + 6) )
    return 3221226166LL;
  v14 = *((unsigned __int16 *)v8 + 9321);
  v15 = *((unsigned __int16 *)v8 + 9320);
  if ( v15 > v14 + 1 )
  {
LABEL_24:
    *(_QWORD *)(*((_QWORD *)v8 + 2331) + 8LL * (unsigned __int16)v14) = a1;
    ++*((_WORD *)v8 + 9321);
    return 0LL;
  }
  v16 = v15 + 4;
  if ( v16 >= 0xFFFF )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 6784;
    goto LABEL_26;
  }
  v17 = 8LL * v16;
  if ( !is_mul_ok(v16, 8uLL) )
    v17 = -1LL;
  v18 = (void *)operator new[](v17, 0x4B677844u, 256LL);
  if ( v18 )
  {
    v19 = *((_WORD *)v8 + 9321);
    if ( v19 )
    {
      memmove(v18, *((const void **)v8 + 2331), 8LL * *((unsigned __int16 *)v8 + 9321));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)v8 + 2331));
      v19 = *((_WORD *)v8 + 9321);
    }
    *((_QWORD *)v8 + 2331) = v18;
    LOWORD(v14) = v19;
    *((_WORD *)v8 + 9320) = v16;
    goto LABEL_24;
  }
  WdLogSingleEntry1(6LL);
  WdLogGlobalForLineNumber = 6775;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate new batch buffer, size = 0x%I64x.",
    v16,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_26:
  v20 = *((_QWORD *)v8 + 2331);
  if ( !v20 )
  {
    v21 = &v67;
    v57 = 1;
    v64 = &v67;
LABEL_28:
    v22 = v72;
    goto LABEL_29;
  }
  *(_QWORD *)(v20 + 8LL * (unsigned __int16)(*((_WORD *)v8 + 9321))++) = a1;
LABEL_38:
  v21 = (struct _EX_RUNDOWN_REF **)*((_QWORD *)v8 + 2331);
  v31 = *((unsigned __int16 *)v8 + 9321);
  v64 = v21;
  v57 = v31;
  if ( (unsigned int)v31 <= 4 )
    goto LABEL_28;
  v32 = 4 * v31;
  if ( !is_mul_ok(v31, 4uLL) )
    v32 = -1LL;
  v33 = operator new[](v32, 0x4B677844u, 256LL);
  v59 = (_BYTE *)v33;
  if ( v33 )
  {
    v22 = (_BYTE *)v33;
    v56 = v31;
    v21 = v64;
    v23 = v31;
    goto LABEL_30;
  }
  WdLogSingleEntry1(6LL);
  WdLogGlobalForLineNumber = 6882;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate new batch buffer, size = 0x%I64x.",
    (unsigned int)v31,
    0LL,
    0LL,
    0LL,
    0LL);
  v21 = v64;
  v22 = v72;
  v59 = v72;
LABEL_29:
  v23 = 4;
LABEL_30:
  v24 = 0;
  Count = 0LL;
  v26 = 0;
  v61 = 0;
  v27 = -1073741637;
  v58 = -1073741637;
  if ( !v57 )
    goto LABEL_88;
  v28 = v59;
  while ( 2 )
  {
    v29 = v57;
    v62 = v21;
    while ( v26 < v23 )
    {
      v34 = *v21;
      v67 = v34;
      if ( !v34 || Count && (struct _DEVICE_OBJECT *)v34[9].Count != Count )
        goto LABEL_58;
      v35 = _InterlockedExchangeAdd((volatile signed __int32 *)&v34[78], 1u) & 0x1F;
      HIDWORD(v34[v35 + 78].Ptr) = v60;
      LODWORD(v34[v35 + 79].Count) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
      v70 = v34 + 111;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(&v34[111], 0LL);
      v36 = 0;
      for ( v34[112].Count = (ULONG_PTR)KeGetCurrentThread(); v36 < v26; ++v36 )
      {
        if ( *(_DWORD *)&v28[4 * v36] == LODWORD(v34[10].Count) )
          break;
      }
      if ( LOBYTE(v34[114].Count) || v36 < v26 )
      {
        v34[112].Count = 0LL;
        ExReleasePushLockExclusiveEx(&v34[111], 0LL);
        KeLeaveCriticalRegion();
        ExReleaseRundownProtection(v34 + 6);
        v21 = v62;
        v29 = v57;
        v24 = v61;
        v23 = v56;
        *v62 = 0LL;
LABEL_58:
        v22 = v59;
        goto LABEL_59;
      }
      if ( !Count )
      {
        Count = (struct _DEVICE_OBJECT *)v34[9].Count;
        ObfReferenceObject(Count);
      }
      HIDWORD(v34[114].Ptr) = v60;
      v37 = v34[10].Count;
      v22 = v59;
      v38 = v26++;
      *(_DWORD *)&v59[4 * v38] = v37;
      v39 = v70;
      v70[1].Count = 0LL;
      ExReleasePushLockExclusiveEx(v39, 0LL);
      KeLeaveCriticalRegion();
      v21 = v62;
      v29 = v57;
      v24 = v61;
      v23 = v56;
LABEL_59:
      ++v24;
      ++v21;
      v61 = v24;
      v62 = v21;
      if ( v24 >= v29 )
        goto LABEL_62;
      v28 = v59;
    }
    v22 = v59;
LABEL_62:
    v27 = v58;
    if ( Count )
    {
      if ( (unsigned int)v60 < 2 )
      {
        LOBYTE(v69[0]) = 0;
        CDisplayScenarioContextScope::ContextScopeConstructor(v69, 0LL, 0x36u, 0);
        v66 = 4;
        v46 = DxgkPowerOnOffMonitor((_DWORD)Count, v26, (_DWORD)v22, (unsigned int)&v66, 0, v69[1]);
        v47 = v46;
        v58 = v46;
        if ( v46 < 0 )
        {
          WdLogSingleEntry2(2LL, Count, v46);
          WdLogGlobalForLineNumber = 7021;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to power off monitors on device 0x%I64x, (Status = 0x%I64x).",
            (__int64)Count,
            v47,
            0LL,
            0LL,
            0LL);
        }
        v42 = v69;
      }
      else
      {
        if ( v60 == 2 )
        {
          for ( i = 0; i < v26; ++i )
          {
            v44 = DpiBrightnessNotifyMonitorDimming(Count, *(_DWORD *)&v59[4 * i], v23);
            v45 = v44;
            v58 = v44;
            if ( v44 < 0 )
            {
              WdLogSingleEntry3(2LL, *(unsigned int *)&v59[4 * i], Count, v44);
              WdLogGlobalForLineNumber = 7040;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to notify brightness dimming on target 0x%I64x from device 0x%I64x, (Status = 0x%I64x).",
                *(unsigned int *)&v59[4 * i],
                (__int64)Count,
                v45,
                0LL,
                0LL);
              goto LABEL_79;
            }
          }
          goto LABEL_79;
        }
        if ( v60 != 3 )
        {
          v58 = -1073741811;
          WdLogSingleEntry2(2LL, v60, -1073741811LL);
          WdLogGlobalForLineNumber = 7076;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Receieved unknown TTM display State 0x%I64x, returning 0x%I64x.",
            v60,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_79;
        }
        LOBYTE(v68[0]) = 0;
        CDisplayScenarioContextScope::ContextScopeConstructor(v68, 0LL, 0x37u, 0);
        v65 = 1;
        v40 = DxgkPowerOnOffMonitor((_DWORD)Count, v26, (_DWORD)v22, (unsigned int)&v65, 0, v68[1]);
        v41 = v40;
        v58 = v40;
        if ( v40 < 0 )
        {
          WdLogSingleEntry2(2LL, Count, v40);
          WdLogGlobalForLineNumber = 7064;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to power on monitors on device 0x%I64x, (Status = 0x%I64x).",
            (__int64)Count,
            v41,
            0LL,
            0LL,
            0LL);
        }
        v42 = v68;
      }
      CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v42);
LABEL_79:
      v48 = v57;
      v49 = v64;
      v63 = v57;
      do
      {
        v50 = *v49;
        if ( *v49 && (struct _DEVICE_OBJECT *)v50[9].Count == Count )
        {
          v51 = _InterlockedExchangeAdd((volatile signed __int32 *)&v50[78], 1u) & 0x1F;
          HIDWORD(v50[v51 + 78].Ptr) = v60 | 0x80000000;
          LODWORD(v50[v51 + 79].Count) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
          ExReleaseRundownProtection(*v49 + 6);
          v48 = v63;
          --v26;
          *v49 = 0LL;
        }
        ++v49;
        v63 = --v48;
      }
      while ( v48 );
      v28 = v59;
      if ( v26 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 7099;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"j == 0", 7099LL, 0LL, 0LL, 0LL, 0LL);
      }
      ObfDereferenceObject(Count);
      v21 = v64;
      v24 = 0;
      v23 = v56;
      Count = 0LL;
      v61 = 0;
      v26 = 0;
      continue;
    }
    break;
  }
  v8 = v71;
LABEL_88:
  if ( v22 != v72 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v22);
  *((_WORD *)v8 + 9321) = 0;
  return v27;
}

/*
 * XREFs of ?PresentDurationPlaneProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE@@_N@Z @ 0x1401DF50C
 * Callers:
 *     NtDxgkSetProperties @ 0x14036C450 (NtDxgkSetProperties.c)
 *     NtDxgkGetProperties @ 0x140413730 (NtDxgkGetProperties.c)
 * Callees:
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003DB88 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PresentDurationPlaneProperty(struct DXGPROCESS *a1, const struct _LUID *a2, char a3)
{
  __int64 v4; // rbx
  const wchar_t *v5; // r9
  struct DXGADAPTER *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v11; // [rsp+20h] [rbp-68h]
  __int64 v12; // [rsp+28h] [rbp-60h]
  struct DXGADAPTER *v13[2]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v14[32]; // [rsp+60h] [rbp-28h] BYREF

  v4 = (__int64)a2;
  if ( !a1 )
  {
    v4 = -1073741811LL;
    WdLogSingleEntry1(2LL);
    v5 = L"Invalid process context, returning 0x%I64x";
    WdLogGlobalForLineNumber = 6223;
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v5, v4, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v4;
  }
  if ( (*((_DWORD *)a1 + 102) & 0x1004) == 0 )
  {
    v4 = -1073741790LL;
    WdLogSingleEntry1(2LL);
    v5 = L"Only DWM or DRT test process is allowed to set and query present duration plane index. returning 0x%I64x";
    WdLogGlobalForLineNumber = 6229;
    goto LABEL_3;
  }
  v13[0] = 0LL;
  if ( DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v13, a2) )
  {
    v6 = v13[0];
    if ( *((_QWORD *)v13[0] + 396) )
    {
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v14, v13[0], 1);
      if ( *((_DWORD *)v6 + 50) == 1 )
      {
        LOBYTE(v9) = a3;
        LODWORD(v4) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 396) + 736LL)
                                                                                              + 8LL)
                                                                                  + 1064LL))(
                        *(_QWORD *)(*((_QWORD *)v6 + 396) + 744LL),
                        *(unsigned int *)(v4 + 8),
                        v9,
                        v4 + 12);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
      }
      else
      {
        WdLogSingleEntry3(2LL, *(int *)(v4 + 4), *(unsigned int *)v4, -1073741130LL);
        v12 = *(unsigned int *)v4;
        v11 = *(int *)(v4 + 4);
        WdLogGlobalForLineNumber = 6254;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Adapter (0x%I64x-0x%I64x) is not active, returning 0x%I64x",
          v11,
          v12,
          -1073741130LL,
          0LL,
          0LL);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
        LODWORD(v4) = -1073741130;
      }
    }
    else
    {
      v7 = *(unsigned int *)v4;
      v8 = *(int *)(v4 + 4);
      LODWORD(v4) = -1073741637;
      WdLogSingleEntry3(3LL, v8, v7, -1073741637LL);
      WdLogGlobalForLineNumber = 6244;
    }
  }
  else
  {
    LODWORD(v4) = -1073741811;
  }
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v13, 0LL);
  return (unsigned int)v4;
}

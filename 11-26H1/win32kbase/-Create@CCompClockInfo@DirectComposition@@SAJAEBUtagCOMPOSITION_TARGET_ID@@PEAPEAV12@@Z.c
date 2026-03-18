/*
 * XREFs of ?Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z @ 0x14010F4E8
 * Callers:
 *     NtDCompositionWaitForCompositorClock @ 0x1400A9220 (NtDCompositionWaitForCompositorClock.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z @ 0x14010F578 (--_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?Initialize@CCompClockInfo@DirectComposition@@AEAAJXZ @ 0x1401BF394 (-Initialize@CCompClockInfo@DirectComposition@@AEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CCompClockInfo::Create(
        const struct tagCOMPOSITION_TARGET_ID *a1,
        struct DirectComposition::CCompClockInfo **a2)
{
  __int64 v4; // rax
  void *v5; // rbx
  __int64 v6; // r8
  unsigned int v7; // edx
  int v8; // edi

  *a2 = 0LL;
  v4 = Win32AllocPoolWithQuotaZInitImpl((int)a1, 0x20uLL, 0x64704344u);
  v5 = (void *)v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)a1;
    *(_DWORD *)(v4 + 12) = *((_DWORD *)a1 + 4);
    *(_QWORD *)(v4 + 4) = v6;
    *(_DWORD *)(v4 + 16) = 0;
    *(_QWORD *)(v4 + 24) = 0LL;
    v8 = DirectComposition::CCompClockInfo::Initialize((DirectComposition::CCompClockInfo *)v4);
    if ( v8 < 0 )
    {
      DirectComposition::CCompClockInfo::`scalar deleting destructor'(v5, v7);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)v5);
      *a2 = (struct DirectComposition::CCompClockInfo *)v5;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}

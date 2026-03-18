/*
 * XREFs of ?Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z @ 0x140160AD8
 * Callers:
 *     ?GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z @ 0x1400C7E8C (-GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z @ 0x1400E8D74 (--_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?Initialize@CCompClockInfo@DirectComposition@@AEAAJXZ @ 0x1401980B8 (-Initialize@CCompClockInfo@DirectComposition@@AEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CCompClockInfo::Create(
        const struct tagCOMPOSITION_TARGET_ID *a1,
        struct DirectComposition::CCompClockInfo **a2)
{
  __int64 v4; // rax
  DirectComposition::CCompClockInfo *v5; // rbx
  int v6; // ecx
  __int64 v7; // r8
  int v8; // edi

  *a2 = 0LL;
  v4 = Win32AllocPoolWithQuotaZInitImpl((__int64)a1, 0x20uLL, 0x64704344u);
  v5 = (DirectComposition::CCompClockInfo *)v4;
  if ( v4 )
  {
    v6 = *((_DWORD *)a1 + 4);
    v7 = *(_QWORD *)a1;
    *(_DWORD *)(v4 + 16) = 0;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_DWORD *)(v4 + 12) = v6;
    *(_QWORD *)(v4 + 4) = v7;
    v8 = DirectComposition::CCompClockInfo::Initialize((DirectComposition::CCompClockInfo *)v4);
    if ( v8 < 0 )
    {
      DirectComposition::CCompClockInfo::`scalar deleting destructor'(v5);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)v5);
      *a2 = v5;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}

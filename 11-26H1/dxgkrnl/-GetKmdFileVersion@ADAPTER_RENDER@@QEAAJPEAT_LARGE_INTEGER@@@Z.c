/*
 * XREFs of ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1403FB3D8
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z @ 0x1403B089C (-DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z.c)
 *     DpiGetDriverFullPath @ 0x14042E03C (DpiGetDriverFullPath.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetKmdFileVersion(ADAPTER_RENDER *this, union _LARGE_INTEGER *a2)
{
  union _LARGE_INTEGER *v2; // rdi
  bool v3; // zf
  unsigned int v5; // ebx
  __int64 *v7; // rsi
  int DriverFullPath; // eax
  __int64 v9; // rdi
  const wchar_t *v10; // r9
  int FileVersion; // eax
  struct _UNICODE_STRING v12; // [rsp+50h] [rbp-18h] BYREF

  v2 = (union _LARGE_INTEGER *)((char *)this + 728);
  v3 = *((_QWORD *)this + 91) == -1LL;
  v12 = 0LL;
  if ( !v3 )
  {
    v5 = 0;
LABEL_3:
    *a2 = *v2;
    goto LABEL_4;
  }
  v7 = (__int64 *)((char *)this + 16);
  DriverFullPath = DpiGetDriverFullPath(*(_QWORD *)(*((_QWORD *)this + 2) + 216LL), &v12);
  v5 = DriverFullPath;
  if ( DriverFullPath >= 0 )
  {
    FileVersion = DxgkpGetFileVersion(&v12, v2, 0LL);
    v5 = FileVersion;
    if ( FileVersion >= 0 )
      goto LABEL_3;
    v9 = FileVersion;
    WdLogSingleEntry2(2LL, *v7, FileVersion);
    v10 = L"Failed to get kernel mode driver DLL version on adapter %I64d (ntStatus = %I64d).";
    WdLogGlobalForLineNumber = 4184;
  }
  else
  {
    v9 = DriverFullPath;
    WdLogSingleEntry2(2LL, *v7, DriverFullPath);
    v10 = L"DpiGetDriverFullPath failed on adapter %I64d (ntStatus = %I64d).";
    WdLogGlobalForLineNumber = 4173;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, *v7, v9, 0LL, 0LL, 0LL);
LABEL_4:
  if ( v12.Buffer )
    ExFreePoolWithTag(v12.Buffer, 0);
  return v5;
}

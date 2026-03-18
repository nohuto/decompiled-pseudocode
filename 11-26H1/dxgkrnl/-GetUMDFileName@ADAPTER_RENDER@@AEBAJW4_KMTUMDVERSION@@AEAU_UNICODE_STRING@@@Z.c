/*
 * XREFs of ?GetUMDFileName@ADAPTER_RENDER@@AEBAJW4_KMTUMDVERSION@@AEAU_UNICODE_STRING@@@Z @ 0x1403B072C
 * Callers:
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1403B0220 (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1403B02D8 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetUMDFileName(ADAPTER_RENDER *this, unsigned int a2, struct _UNICODE_STRING *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v8; // rax
  struct _UNICODE_STRING v9; // xmm0

  v3 = a2;
  if ( a2 >= 6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3570;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(UINT)umdVersion < (UINT)NUM_KMTUMDVERSIONS",
      3570LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGPROCESS::GetCurrent((__int64)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3571;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGPROCESS::GetCurrent() != NULL",
      3571LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v7 = *((_DWORD *)DXGPROCESS::GetCurrent(v6) + 102);
  if ( (v7 & 8) != 0 )
  {
    v8 = v3 + 26;
    goto LABEL_10;
  }
  if ( (_DWORD)v3 == 4 )
  {
    v9 = (struct _UNICODE_STRING)*((_OWORD *)this + 35);
    goto LABEL_11;
  }
  if ( (_DWORD)v3 == 5 )
  {
    v9 = (struct _UNICODE_STRING)*((_OWORD *)this + 36);
    goto LABEL_11;
  }
  if ( (v7 & 0x30) == 0 )
  {
    v8 = v3 + 20;
LABEL_10:
    v9 = (struct _UNICODE_STRING)*((_OWORD *)this + v8);
LABEL_11:
    *a3 = v9;
    return 0LL;
  }
  if ( (_DWORD)v3 == 3 )
  {
    v9 = (struct _UNICODE_STRING)*((_OWORD *)this + 34);
    goto LABEL_11;
  }
  return 3221225485LL;
}

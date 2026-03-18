/*
 * XREFs of ?ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z @ 0x140134A68
 * Callers:
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1401349AC (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1401B82C0 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall DpiInternal::ScaleOverrideTestHookCore(DpiInternal *this, unsigned __int16 *a2, unsigned int *a3)
{
  __int64 v4; // rax
  DpiInternal *v5; // r8
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  NTSTATUS v13; // eax
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+78h] [rbp-88h]
  int v18; // [rsp+80h] [rbp-80h]
  const wchar_t *v19; // [rsp+88h] [rbp-78h]
  int *v20; // [rsp+90h] [rbp-70h]
  int v21; // [rsp+98h] [rbp-68h]
  int *v22; // [rsp+A0h] [rbp-60h]
  int v23; // [rsp+A8h] [rbp-58h]
  __int64 v24; // [rsp+B0h] [rbp-50h]
  int v25; // [rsp+B8h] [rbp-48h]
  __int64 v26; // [rsp+C0h] [rbp-40h]
  __int128 v27; // [rsp+C8h] [rbp-38h]
  __int128 v28; // [rsp+D8h] [rbp-28h]
  unsigned __int16 v29[16]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int16 v30[80]; // [rsp+110h] [rbp+10h] BYREF

  *(_DWORD *)a2 = 0;
  v4 = -1LL;
  v5 = this;
  v6 = 314159269;
  do
    ++v4;
  while ( *((_WORD *)this + v4) );
  v7 = 2 * v4;
  if ( v7 )
  {
    v8 = v7;
    do
    {
      v9 = *(unsigned __int8 *)v5;
      v5 = (DpiInternal *)((char *)v5 + 1);
      v6 ^= v9 + (v6 >> 2) + 2080 * v6;
      --v8;
    }
    while ( v8 );
  }
  v10 = v6 & 0x7FFFFFFF;
  v11 = RtlStringCbPrintfW(v29, 0x16uLL, L"%d", v10);
  if ( v11 >= 0 )
  {
    v12 = RtlStringCbPrintfW(
            v30,
            0xA0uLL,
            L"%s\\%s\\%s",
            L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Scaling",
            L"Monitors",
            v29);
    if ( v12 >= 0 )
    {
      v14 = 0;
      v15 = 0;
      QueryTable.Name = v30;
      QueryTable.QueryRoutine = 0LL;
      v19 = L"DesktopScaleFactor";
      QueryTable.Flags = 5;
      v20 = &v14;
      QueryTable.EntryContext = 0LL;
      v22 = &v15;
      QueryTable.DefaultType = 0;
      QueryTable.DefaultData = 0LL;
      QueryTable.DefaultLength = 0;
      v17 = 0LL;
      v18 = 288;
      v21 = 0x4000000;
      v23 = 4;
      v24 = 0LL;
      v25 = 0;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v13 = RtlQueryRegistryValues(0, L"\\Registry\\Machine\\", &QueryTable, 0LL, 0LL);
      if ( v13 >= 0 )
      {
        if ( v14 != v15 )
          *(_DWORD *)a2 = v14;
      }
      else if ( v13 != -1073741772 )
      {
        WdLogSingleEntry1(2LL, v13);
        WdLogGlobalForLineNumber = 631;
      }
    }
    else
    {
      WdLogSingleEntry2(1LL, v12, v10);
      WdLogGlobalForLineNumber = 603;
    }
  }
  else
  {
    WdLogSingleEntry2(1LL, v11, v10);
    WdLogGlobalForLineNumber = 595;
  }
}

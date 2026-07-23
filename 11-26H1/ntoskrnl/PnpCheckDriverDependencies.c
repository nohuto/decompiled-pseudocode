/*
 * XREFs of PnpCheckDriverDependencies @ 0x1407A6F3C
 * Callers:
 *     PipProcessPendingObjects @ 0x140CCD2F0 (PipProcessPendingObjects.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140957518 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegQueryValue @ 0x1409728D0 (_PnpCtxRegQueryValue.c)
 */

__int64 __fastcall PnpCheckDriverDependencies(wchar_t *Str1, _BYTE *a2, __int64 a3)
{
  char v5; // si
  int CachedContextBaseKey; // ebx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  int v15; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  HANDLE v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+48h] [rbp-8h] BYREF
  int v19; // [rsp+98h] [rbp+48h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+50h] BYREF
  int v21; // [rsp+A8h] [rbp+58h] BYREF

  v20 = a3;
  *a2 = 0;
  v18 = 0LL;
  v5 = 0;
  v17 = 0LL;
  Handle = 0LL;
  v15 = 0;
  v19 = 0;
  v21 = 0;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD *)&PiPnpRtlCtx, 4LL, &v18);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_32;
  while ( *Str1 )
  {
    if ( wcsicmp(Str1, L"*") && !v5 )
    {
      if ( !v17 )
      {
        v7 = PnpCtxRegOpenKey(PiPnpRtlCtx, v18, (unsigned int)L"Control\\FirmwareResources", 0, 131097, (__int64)&v17);
        CachedContextBaseKey = v7;
        if ( v7 == -1073741772 || v7 == -1073741444 )
        {
          v5 = 1;
LABEL_24:
          CachedContextBaseKey = 0;
          goto LABEL_25;
        }
        if ( v7 < 0 )
          goto LABEL_32;
      }
      if ( Handle )
      {
        ZwClose(Handle);
        Handle = 0LL;
      }
      v8 = PnpCtxRegOpenKey(PiPnpRtlCtx, (_DWORD)v17, (_DWORD)Str1, 0, 1, (__int64)&Handle);
      CachedContextBaseKey = v8;
      if ( v8 == -1073741772 || v8 == -1073741444 )
        goto LABEL_24;
      if ( v8 < 0 )
        goto LABEL_32;
      LODWORD(v20) = 4;
      v10 = PnpCtxRegQueryValue(v9, Handle, L"Phase", &v21, &v19, &v20);
      CachedContextBaseKey = v10;
      if ( v10 == -1073741772 )
        goto LABEL_28;
      if ( v10 == -1073741444 )
        goto LABEL_24;
      if ( v10 < 0 )
        goto LABEL_32;
      if ( v19 != 2 )
        goto LABEL_30;
      LODWORD(v20) = 4;
      v12 = PnpCtxRegQueryValue(v11, Handle, L"LastAttemptStatus", &v21, &v15, &v20);
      CachedContextBaseKey = v12;
      if ( v12 == -1073741772 )
      {
LABEL_28:
        CachedContextBaseKey = 0;
        goto LABEL_30;
      }
      if ( v12 == -1073741444 )
        goto LABEL_24;
      if ( v12 < 0 )
        goto LABEL_32;
      if ( v15 )
        goto LABEL_30;
    }
LABEL_25:
    v13 = -1LL;
    do
      ++v13;
    while ( Str1[v13] );
    Str1 += v13 + 1;
  }
  if ( CachedContextBaseKey < 0 )
    goto LABEL_32;
LABEL_30:
  if ( !*Str1 )
    *a2 = 1;
LABEL_32:
  if ( v17 )
    ZwClose(v17);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)CachedContextBaseKey;
}

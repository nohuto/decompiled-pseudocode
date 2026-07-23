/*
 * XREFs of BiOpenSystemStore @ 0x1409A53B4
 * Callers:
 *     BiOpenStoreWithHash @ 0x140776404 (BiOpenStoreWithHash.c)
 *     BcdOpenSystemStore @ 0x14077E2CC (BcdOpenSystemStore.c)
 * Callees:
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     wcstoul @ 0x14053AE50 (wcstoul.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     BiLoadSystemStore @ 0x1409A0DF0 (BiLoadSystemStore.c)
 *     BiIsSystemStore @ 0x1409A1114 (BiIsSystemStore.c)
 *     BiCloseStore @ 0x1409A120C (BiCloseStore.c)
 *     BiEnumerateSubKeys @ 0x1409A2660 (BiEnumerateSubKeys.c)
 *     BiWasFirmwareModified @ 0x1409A37F8 (BiWasFirmwareModified.c)
 *     BiCleanupLoadedStores @ 0x1409A4348 (BiCleanupLoadedStores.c)
 *     BiOpenKeyNonBcd @ 0x1409A447C (BiOpenKeyNonBcd.c)
 *     BiBindEfiNamespaceObjects @ 0x1409A4844 (BiBindEfiNamespaceObjects.c)
 *     BiGetFirmwareType @ 0x1409A5660 (BiGetFirmwareType.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BiSetFirmwareModified @ 0x1409A5900 (BiSetFirmwareModified.c)
 *     BiOpenKey @ 0x1409A6EF4 (BiOpenKey.c)
 *     BiCloseKey @ 0x1409A7258 (BiCloseKey.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiOpenSystemStore(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rdi
  char v4; // r8
  int v5; // ebx
  int v7; // eax
  _QWORD *v8; // r14
  __int64 i; // rsi
  bool v10; // zf
  int v11; // r15d
  _BOOL8 v12; // rsi
  int v13; // eax
  int v14; // eax
  __int64 v15; // r9
  int v16; // eax
  int v17; // eax
  HANDLE Handle; // [rsp+20h] [rbp-10h] BYREF
  PVOID P; // [rsp+28h] [rbp-8h] BYREF
  ULONG v21; // [rsp+78h] [rbp+48h] BYREF
  int v22; // [rsp+80h] [rbp+50h]
  HANDLE v23; // [rsp+88h] [rbp+58h] BYREF

  v2 = 0LL;
  *a1 = 0LL;
  v21 = 0;
  Handle = 0LL;
  v23 = 0LL;
  P = 0LL;
  v22 = 0;
  BiLogMessage(2LL, L"Opening system store. Flags: 0x%x", a2);
  BiCleanupLoadedStores(16 * (v4 & 1));
  v5 = BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 0xF003Fu, &Handle);
  if ( v5 < 0 )
    goto LABEL_2;
  v7 = BiEnumerateSubKeys((unsigned __int64)Handle, &P, &v21);
  v8 = P;
  v5 = v7;
  if ( v7 >= 0 )
  {
    v5 = -1073741275;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v10 = (_DWORD)i == v21;
      if ( (unsigned int)i >= v21 )
        break;
      if ( !wcsnicmp((const wchar_t *)v8[i], L"BCD", 3uLL) && wcstoul((const wchar_t *)(v8[i] + 6LL), 0LL, 10) != -1 )
      {
        BiLogMessage(2LL, L"Found loaded store at key %s", v8[i]);
        v17 = BiOpenKey(Handle, v8[i], 131097LL, &v23);
        v2 = (__int64)v23;
        v5 = v17;
        if ( v17 >= 0 )
        {
          if ( BiIsSystemStore((__int64)v23) )
          {
            BiLogMessage(2LL, L"Store %s is the system store", v8[i]);
            v5 = 0;
            v10 = (_DWORD)i == v21;
            break;
          }
          BiCloseKey((HANDLE)v2);
        }
      }
    }
    if ( v10 )
    {
      BiLogMessage(2LL, L"The system store is not already loaded");
      v23 = 0LL;
      if ( (a2 & 4) != 0 )
      {
        BiLogMessage(4LL, L"Specified flags prevent opening unloaded system store");
        v5 = -1073741275;
        goto LABEL_20;
      }
      v16 = BiLoadSystemStore(&v23);
      v2 = (__int64)v23;
      v5 = v16;
      if ( v16 < 0 )
      {
        v11 = v22;
        goto LABEL_18;
      }
      v11 = 1;
    }
    else
    {
      v11 = v22;
    }
    if ( (a2 & 2) != 0 )
    {
      v2 |= 2uLL;
      goto LABEL_29;
    }
    v12 = BiWasFirmwareModified(v2);
    BiLogMessage(2LL, L"Synchronizing store with firmware. FirmwareModified: %d", v12);
    v13 = BiGetFirmwareType(0LL) - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( !v14 )
      {
        v5 = BiBindEfiNamespaceObjects((HANDLE)v2);
        v15 = (unsigned int)v5;
        if ( v5 < 0 )
        {
LABEL_17:
          BiLogMessage(4LL, L"Failed to bind with firmware. Flags: 0x%x Status: %x", a2, v15);
          goto LABEL_18;
        }
        goto LABEL_36;
      }
      if ( v14 != 1 )
      {
        v5 = -1073741637;
        v15 = 3221225659LL;
        goto LABEL_17;
      }
    }
    v5 = 0;
LABEL_36:
    if ( !v12 )
      BiSetFirmwareModified(v2, 0LL);
LABEL_29:
    *a1 = v2;
    if ( v5 >= 0 )
      goto LABEL_20;
LABEL_18:
    if ( v2 )
      BiCloseStore(v2, v11 != 0 ? 2 : 0);
  }
LABEL_20:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x4B444342u);
LABEL_2:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v5;
}

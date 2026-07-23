/*
 * XREFs of PiDrvDbOverlayNodeHive @ 0x1407B8F20
 * Callers:
 *     PiDrvDbSetupNodeHive @ 0x1407BAE00 (PiDrvDbSetupNodeHive.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407B898C (PiDrvDbOverlayCopyKeys.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegQueryValue @ 0x1409728D0 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegEnumKey @ 0x140974BF4 (_PnpCtxRegEnumKey.c)
 *     _PnpCtxRegCreateKey @ 0x140AED690 (_PnpCtxRegCreateKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDrvDbOverlayNodeHive(__int64 a1, const wchar_t *a2, int a3)
{
  __int64 v6; // rdi
  int v7; // eax
  int Key; // ebx
  int v9; // eax
  __int64 v10; // rax
  unsigned int v11; // edi
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  void *Pool2; // r14
  unsigned int v16; // r15d
  __int64 i; // r8
  __int64 v18; // rcx
  int v19; // edi
  int v20; // esi
  int v21; // r8d
  int v22; // eax
  int v24; // [rsp+20h] [rbp-89h]
  int v25; // [rsp+20h] [rbp-89h]
  int v26; // [rsp+40h] [rbp-69h] BYREF
  int v27; // [rsp+44h] [rbp-65h] BYREF
  int v28; // [rsp+48h] [rbp-61h] BYREF
  int v29; // [rsp+4Ch] [rbp-5Dh] BYREF
  HANDLE v30; // [rsp+50h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-51h] BYREF
  HANDLE v32; // [rsp+60h] [rbp-49h] BYREF
  HANDLE v33; // [rsp+68h] [rbp-41h] BYREF
  HANDLE v34; // [rsp+70h] [rbp-39h] BYREF
  HANDLE v35; // [rsp+78h] [rbp-31h] BYREF
  _OWORD v36[4]; // [rsp+80h] [rbp-29h] BYREF

  v35 = 0LL;
  memset_0(v36, 0, sizeof(v36));
  v33 = 0LL;
  v32 = 0LL;
  LODWORD(v6) = 0;
  v30 = 0LL;
  v34 = 0LL;
  Handle = 0LL;
  v28 = 0;
  v29 = 0;
  v27 = 0;
  if ( wcsicmp(a2, L"SYSTEM") )
  {
    if ( !wcsicmp(a2, L"SOFTWARE") && (*(_DWORD *)(a1 + 492) & 0x20) == 0 )
      goto LABEL_3;
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 492);
    if ( (v7 & 0x10) == 0 )
    {
LABEL_3:
      Key = 0;
      goto LABEL_50;
    }
    v36[0] = *(_OWORD *)off_140BE0CE8;
    v36[1] = *(_OWORD *)off_140BE0CF8;
    do
      v6 = (unsigned int)(v6 + 1);
    while ( (unsigned int)v6 < 4 );
    if ( (v7 & 0xC0) != 0 )
    {
      v9 = PnpCtxRegOpenKey(0, a3, (unsigned int)L"ControlSet001\\Services", 0, 131097, (__int64)&v30);
      Key = v9;
      if ( v9 == -1073741772 )
      {
        v30 = 0LL;
      }
      else if ( v9 < 0 )
      {
        goto LABEL_50;
      }
    }
    *((_QWORD *)v36 + v6) = L"ControlSet001\\Services";
    LODWORD(v6) = v6 + 1;
  }
  v10 = (unsigned int)v6;
  v11 = v6 + 1;
  *((_QWORD *)v36 + v10) = L"Setup\\ResolveFilePaths";
  v12 = PnpCtxRegOpenKey(
          0,
          -2147483646,
          (unsigned int)L"System\\CurrentControlSet\\Control\\StateSeparation\\PnP\\DriverHiveOverlays",
          0,
          131097,
          (__int64)&v33);
  Key = v12;
  if ( v12 == -1073741772 )
  {
    v33 = 0LL;
  }
  else
  {
    if ( v12 < 0 )
      goto LABEL_50;
    v13 = PnpCtxRegOpenKey(0, (_DWORD)v33, (_DWORD)a2, 0, 131097, (__int64)&v32);
    Key = v13;
    if ( v13 == -1073741772 )
    {
      v32 = 0LL;
    }
    else if ( v13 < 0 )
    {
      goto LABEL_50;
    }
  }
  Key = PnpCtxRegOpenKey(0, -2147483646, (_DWORD)a2, 0, 131103, (__int64)&v35);
  if ( Key >= 0 )
  {
    Key = PiDrvDbOverlayCopyKeys(a3, 0, (int)v35, 0, v24, (__int64)v36, v11, (__int64)v32);
    if ( Key >= 0 )
    {
      if ( v30 )
      {
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
        {
          Key = -1073741670;
          goto LABEL_50;
        }
        v16 = 0;
        for ( i = 0LL; ; i = v16 )
        {
          v26 = 260;
          v22 = PnpCtxRegEnumKey(v14, v30, i, Pool2, &v26);
          if ( v22 == -2147483622 )
          {
LABEL_49:
            ExFreePoolWithTag(Pool2, 0);
            goto LABEL_50;
          }
          if ( v22 < 0 || (int)PnpCtxRegOpenKey(0, (_DWORD)v30, (_DWORD)Pool2, 0, 131097, (__int64)&Handle) < 0 )
            goto LABEL_47;
          v26 = 4;
          if ( (int)PnpCtxRegQueryValue(v14, Handle, L"Type", &v27, &v28, &v26) < 0 || v27 != 4 || v26 != 4 )
            break;
          v26 = 4;
          if ( (int)PnpCtxRegQueryValue(v18, Handle, L"Start", &v27, &v29, &v26) < 0 || v27 != 4 || v26 != 4 )
          {
            v19 = v28;
LABEL_36:
            v29 = 0;
            v20 = 0;
            goto LABEL_37;
          }
          v19 = v28;
          v20 = v29;
LABEL_37:
          ZwClose(Handle);
          if ( !v19 )
            goto LABEL_47;
          if ( (v19 & 0xB) == 0 || v20 == 2 )
          {
            if ( (*(_DWORD *)(a1 + 492) & 0x80u) == 0 )
              goto LABEL_47;
          }
          else if ( (*(_DWORD *)(a1 + 492) & 0x40) == 0 )
          {
            goto LABEL_47;
          }
          v21 = (int)v34;
          if ( !v34 )
          {
            Key = PnpCtxRegCreateKey(
                    0,
                    (_DWORD)v35,
                    (unsigned int)L"ControlSet001\\Services",
                    0,
                    131103,
                    0LL,
                    (__int64)&v34,
                    0LL);
            if ( Key < 0 )
              goto LABEL_49;
            v21 = (int)v34;
          }
          Key = PiDrvDbOverlayCopyKeys((int)v30, (int)Pool2, v21, (int)Pool2, v25, 0LL, 0, 0LL);
          if ( Key < 0 )
            goto LABEL_49;
LABEL_47:
          ++v16;
        }
        v19 = 0;
        v28 = 0;
        goto LABEL_36;
      }
    }
  }
LABEL_50:
  if ( v32 )
    ZwClose(v32);
  if ( v33 )
    ZwClose(v33);
  if ( v30 )
    ZwClose(v30);
  if ( v34 )
    ZwClose(v34);
  if ( v35 )
    ZwClose(v35);
  return (unsigned int)Key;
}

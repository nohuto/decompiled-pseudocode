/*
 * XREFs of DrvDbSetDriverPackageMappedProperty @ 0x140B88288
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x140976AC0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140B88288 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14077E60C (DrvDbSetRegValueMappedProperty.c)
 *     DrvDbGetDriverPackageSignerName @ 0x1408A4B38 (DrvDbGetDriverPackageSignerName.c)
 *     _PnpCtxRegQueryValue @ 0x1409728D0 (_PnpCtxRegQueryValue.c)
 *     DrvDbOpenDriverPackageRegKey @ 0x140977F88 (DrvDbOpenDriverPackageRegKey.c)
 *     _PnpCtxRegSetValue @ 0x1409AD0CC (_PnpCtxRegSetValue.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x140B2B98C (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140B88288 (DrvDbSetDriverPackageMappedProperty.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbSetDriverPackageMappedProperty(
        __int64 a1,
        _WORD *a2,
        char *a3,
        __int64 a4,
        int a5,
        wchar_t *Src,
        unsigned int a7)
{
  int v8; // r9d
  wchar_t *v10; // r15
  unsigned int v11; // r8d
  _WORD *v12; // rbx
  int v13; // r10d
  __int64 *v14; // rcx
  unsigned int v15; // edx
  __int64 (**v16)[3]; // r12
  __int64 *v17; // rcx
  int v18; // ebx
  int v20; // eax
  bool v21; // zf
  __int64 v22; // rcx
  _OWORD *v23; // rsi
  HANDLE v24; // rdx
  NTSTATUS v25; // eax
  size_t v26; // r8
  char *v27; // rcx
  __int64 v28; // rcx
  HANDLE v29; // rdx
  const wchar_t *v30; // rdx
  __int64 v31; // rcx
  int v32; // eax
  char *v33; // r8
  HANDLE v34; // rdx
  int v35; // eax
  int v36; // r8d
  __int64 v37; // rdx
  __int64 v38; // rcx
  const wchar_t *v39; // rbx
  int v40; // r8d
  int v41; // r8d
  HANDLE v42; // rdx
  int v43; // eax
  char *v44; // r8
  int v45; // r8d
  HANDLE v46; // rdx
  int v47; // r8d
  unsigned int v48; // [rsp+40h] [rbp-20h] BYREF
  int v49; // [rsp+44h] [rbp-1Ch] BYREF
  int v50; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  wchar_t *Pool2; // [rsp+58h] [rbp-8h]

  Handle = 0LL;
  v8 = *(_DWORD *)(a4 + 16);
  v50 = 0;
  v10 = 0LL;
  v49 = 0;
  v11 = 0;
  Pool2 = 0LL;
  v12 = a2;
  v48 = 0;
  v13 = a1;
  do
  {
    v14 = off_140E0A460[v11];
    if ( *((_DWORD *)v14 + 4) == v8 && *v14 == *(_QWORD *)a4 && v14[1] == *(_QWORD *)(a4 + 8) )
      return (unsigned int)-1073741790;
    ++v11;
  }
  while ( v11 < 0xC );
  v15 = 0;
  while ( 1 )
  {
    v16 = &off_14000FAE0 + 5 * v15;
    v17 = (__int64 *)*v16;
    if ( LODWORD((**v16)[2]) == v8 && *v17 == *(_QWORD *)a4 && v17[1] == *(_QWORD *)(a4 + 8) )
      break;
    if ( ++v15 >= 0x2A )
      return (unsigned int)-1073741802;
  }
  if ( !v16 )
    return (unsigned int)-1073741802;
  if ( a5 != *((_DWORD *)v16 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v18 = DrvDbOpenDriverPackageRegKey(v13, (int)v12, 3, 0, (__int64)&Handle, 0LL);
    if ( v18 < 0 )
      goto LABEL_89;
    v12 = a2;
  }
  v20 = *((_DWORD *)v16 + 8);
  if ( !v20 )
  {
    v30 = L"Microsoft Windows";
    v31 = 0LL;
    if ( *(_DWORD *)(a4 + 16) == 7
      && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName
      && *(_QWORD *)(a4 + 8) == 0xBADB47CC74A2E194uLL
      && a5 == 18
      && a7 > 2 )
    {
      if ( Src )
      {
        if ( !Src[((unsigned __int64)a7 >> 1) - 1] )
        {
          v32 = wcsicmp(Src, L"Microsoft Windows");
          v31 = 0LL;
          if ( !v32 )
          {
            v33 = (char *)Handle;
            if ( a3 )
              v33 = a3;
            if ( (int)DrvDbGetDriverPackageSignerScore(a1, v12, v33, &v49) >= 0 && v49 == 218103811 )
            {
              v34 = Handle;
              if ( a3 )
                v34 = a3;
              v35 = DrvDbSetRegValueMappedProperty(v31, (__int64)v34, (__int64)v16, 0, 0LL, 0);
              v18 = 0;
              if ( v35 != -1073741275 )
                v18 = v35;
              goto LABEL_89;
            }
            goto LABEL_84;
          }
        }
      }
    }
    if ( *(_DWORD *)(a4 + 16) == 8
      && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerScore
      && *(_QWORD *)(a4 + 8) == 0xBADB47CC74A2E194uLL )
    {
      if ( a5 == 7 )
      {
        if ( a7 == 4 && Src )
        {
          if ( *(_DWORD *)Src == 218103811 )
          {
            v36 = (int)Handle;
            if ( a3 )
              v36 = (int)a3;
            if ( (unsigned int)DrvDbGetDriverPackageSignerName(0LL, (__int64)v30, v36, 0LL, 0, &v48) == -1073741789
              && v48 == 18 )
            {
              Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
              v39 = Pool2;
              if ( !Pool2 )
                goto LABEL_28;
              v40 = (int)Handle;
              if ( a3 )
                v40 = (int)a3;
              if ( (int)DrvDbGetDriverPackageSignerName(v38, v37, v40, Pool2, 18, &v48) >= 0
                && v48
                && !v39[v48 - 1]
                && !wcsicmp(v39, L"Microsoft Windows") )
              {
                v41 = (int)Handle;
                if ( a3 )
                  v41 = (int)a3;
                DrvDbSetDriverPackageMappedProperty(a1, (int)a2, v41, (int)&DEVPKEY_DriverPackage_SignerName, 0, 0LL, 0);
              }
            }
            goto LABEL_84;
          }
          goto LABEL_92;
        }
      }
      else if ( !a5 )
      {
LABEL_92:
        v44 = (char *)Handle;
        if ( a3 )
          v44 = a3;
        if ( (int)DrvDbGetDriverPackageSignerScore(a1, a2, v44, &v49) >= 0 && v49 == 218103811 )
        {
          v45 = (int)Handle;
          if ( a3 )
            v45 = (int)a3;
          if ( (unsigned int)DrvDbGetDriverPackageSignerName(v31, 0LL, v45, 0LL, 0, &v48) == -1073741275 )
          {
            v46 = Handle;
            if ( a3 )
              v46 = a3;
            v18 = DrvDbSetRegValueMappedProperty(v31, (__int64)v46, (__int64)v16, a5, (int *)Src, a7);
            if ( v18 >= 0 )
            {
              v47 = (int)Handle;
              if ( a3 )
                v47 = (int)a3;
              DrvDbSetDriverPackageMappedProperty(
                a1,
                (int)a2,
                v47,
                (int)&DEVPKEY_DriverPackage_SignerName,
                18,
                (void *)L"Microsoft Windows",
                36);
              v18 = 0;
            }
            goto LABEL_89;
          }
        }
      }
    }
LABEL_84:
    v42 = Handle;
    if ( a3 )
      v42 = a3;
    v43 = DrvDbSetRegValueMappedProperty(v31, (__int64)v42, (__int64)v16, a5, (int *)Src, a7);
    v10 = Pool2;
    v18 = v43;
    goto LABEL_87;
  }
  if ( a5 )
    v21 = a7 == v20;
  else
    v21 = a7 == 0;
  if ( !v21 )
  {
    v18 = -1073741823;
    goto LABEL_89;
  }
  v48 = 48;
  v23 = (_OWORD *)ExAllocatePool2(0x100uLL);
  if ( v23 )
  {
    v24 = Handle;
    if ( a3 )
      v24 = a3;
    v25 = PnpCtxRegQueryValue(v22, v24, L"Version", &v50, v23, &v48);
    v18 = v25;
    if ( v25 == -1073741772 )
    {
      *v23 = 0LL;
      v23[1] = 0LL;
      v23[2] = 0LL;
      goto LABEL_38;
    }
    if ( v25 == -1073741789 )
    {
      v18 = -1073741595;
    }
    else if ( v25 >= 0 )
    {
      if ( v50 == 3 && v48 == 48 )
      {
LABEL_38:
        v26 = *((unsigned int *)v16 + 8);
        v27 = (char *)v23 + *((unsigned int *)v16 + 7);
        if ( a5 )
          memmove(v27, Src, v26);
        else
          memset_0(v27, 0, v26);
        v29 = Handle;
        if ( a3 )
          v29 = a3;
        v18 = PnpCtxRegSetValue(v28, v29, (__int64)L"Version", 3LL, (__int64)v23, 0x30u);
        goto LABEL_45;
      }
      v18 = -1073741823;
    }
LABEL_45:
    ExFreePoolWithTag(v23, 0);
LABEL_87:
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
    goto LABEL_89;
  }
LABEL_28:
  v18 = -1073741801;
LABEL_89:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v18;
}

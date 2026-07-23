/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14097368C
 * Callers:
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14077F604 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x1408A1ED4 (_CmGetInstallerClassMappedPropertyKeys.c)
 *     _CmGetInstallerClassMappedProperty @ 0x140972FBC (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetInstallerClassCompoundFilters @ 0x1409734D8 (_CmGetInstallerClassCompoundFilters.c)
 * Callees:
 *     _CmGetInstallerClassRegProp @ 0x1409738BC (_CmGetInstallerClassRegProp.c)
 *     _PnpParseIndirectInfString @ 0x140973CE0 (_PnpParseIndirectInfString.c)
 *     _PnpParseIndirectResourceString @ 0x140973DB8 (_PnpParseIndirectResourceString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromRegProp(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        unsigned int *a8)
{
  _DWORD *v8; // r13
  unsigned int *v9; // r15
  __int64 v10; // rsi
  unsigned int v11; // r14d
  DEVPROPKEY **v12; // r8
  unsigned int i; // edx
  DEVPROPKEY *v14; // r10
  DEVPROPKEY **v15; // rdi
  int v16; // r12d
  unsigned int InstallerClassRegProp; // ebx
  __int64 v19; // rcx
  int v20; // eax
  void *Pool2; // rdi
  int v22; // eax
  int v23; // [rsp+40h] [rbp-10h] BYREF
  int v24; // [rsp+44h] [rbp-Ch] BYREF
  int v25; // [rsp+48h] [rbp-8h] BYREF

  v8 = a5;
  v9 = a8;
  v10 = a6;
  v23 = 0;
  *a5 = 0;
  *v9 = 0;
  v25 = 0;
  v24 = 0;
  if ( v10 )
  {
    v11 = a7;
    v10 &= -(__int64)(a7 != 0);
  }
  else
  {
    v11 = 0;
  }
  v12 = &CmClassRegPropMap;
  for ( i = 0; i < 9; ++i )
  {
    v14 = *v12;
    v15 = &CmClassRegPropMap + 3 * i;
    if ( *(_DWORD *)(a4 + 16) == (*v12)->pid )
    {
      v19 = *(_QWORD *)a4 - *(_QWORD *)&v14->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v14->fmtid.Data1 )
        v19 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v14->fmtid.Data4;
      if ( !v19 )
        break;
    }
    v12 += 3;
    v15 = 0LL;
  }
  if ( !v15 )
    return (unsigned int)-1073741264;
  v16 = *((_DWORD *)v15 + 3);
  if ( v16 == 25 )
    return (unsigned int)-1073741637;
  if ( v16 == 27 )
  {
    LODWORD(a5) = 4;
    InstallerClassRegProp = CmGetInstallerClassRegProp(a1, a2, a3, 27, (__int64)&v23, (__int64)&v24, (__int64)&a5);
    if ( (InstallerClassRegProp & 0x80000000) != 0 )
      return InstallerClassRegProp;
    if ( v23 != *((_DWORD *)v15 + 4) )
      return (unsigned int)-1073741811;
    *v9 = 1;
    *v8 = *((_DWORD *)v15 + 2);
    if ( v11 >= *v9 )
      *(_BYTE *)v10 = -(v24 != 0);
    else
      return (unsigned int)-1073741789;
    return InstallerClassRegProp;
  }
  *v9 = v11;
  InstallerClassRegProp = CmGetInstallerClassRegProp(a1, a2, a3, v16, (__int64)&v23, v10, (__int64)v9);
  if ( InstallerClassRegProp && InstallerClassRegProp != -1073741789 )
    return InstallerClassRegProp;
  if ( v23 != *((_DWORD *)v15 + 4) )
    return (unsigned int)-1073741811;
  v20 = *((_DWORD *)v15 + 2);
  *v8 = v20;
  if ( v20 != 18 )
    return InstallerClassRegProp;
  LODWORD(a5) = *v9;
  if ( !InstallerClassRegProp )
  {
    if ( v11 < 2 )
      return InstallerClassRegProp;
    Pool2 = 0LL;
    if ( !v10 )
      return InstallerClassRegProp;
    goto LABEL_23;
  }
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  v22 = CmGetInstallerClassRegProp(a1, a2, a3, v16, (__int64)&v25, (__int64)Pool2, (__int64)&a5);
  if ( v22 < 0 )
  {
    InstallerClassRegProp = v22;
    goto LABEL_26;
  }
  if ( (unsigned int)a5 < 2 )
  {
LABEL_26:
    ExFreePoolWithTag(Pool2, 0);
    return InstallerClassRegProp;
  }
  v10 = (__int64)Pool2;
LABEL_23:
  if ( (unsigned __int8)PnpParseIndirectInfString(v10) || (unsigned __int8)PnpParseIndirectResourceString(v10) )
    *v8 = 25;
  if ( Pool2 )
    goto LABEL_26;
  return InstallerClassRegProp;
}

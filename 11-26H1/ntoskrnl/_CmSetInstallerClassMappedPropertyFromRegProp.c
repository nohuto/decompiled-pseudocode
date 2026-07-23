/*
 * XREFs of _CmSetInstallerClassMappedPropertyFromRegProp @ 0x1408A26A0
 * Callers:
 *     _CmSetInstallerClassMappedProperty @ 0x140B40214 (_CmSetInstallerClassMappedProperty.c)
 * Callees:
 *     _CmSetInstallerClassRegProp @ 0x14089D5E0 (_CmSetInstallerClassRegProp.c)
 */

__int64 __fastcall CmSetInstallerClassMappedPropertyFromRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _BYTE *a6,
        int a7)
{
  int v7; // esi
  int *v8; // r10
  unsigned int v12; // ebx
  DEVPROPKEY **v13; // rdi
  int v14; // r11d
  DEVPROPKEY **v15; // rcx
  DEVPROPKEY *v16; // r8
  __int64 v17; // rdx
  int v19; // edx
  int v20; // r9d
  int v21; // r8d
  ULONG v22; // eax
  int v23; // [rsp+40h] [rbp-28h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v8 = 0LL;
  v23 = 0;
  v12 = 0;
  v13 = &CmClassRegPropMap;
  v14 = 1;
  do
  {
    v15 = &CmClassRegPropMap + 3 * v12;
    v16 = *v13;
    if ( v7 == (*v13)->pid )
    {
      v17 = *(_QWORD *)a4 - *(_QWORD *)&v16->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v16->fmtid.Data1 )
        v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v16->fmtid.Data4;
      if ( !v17 )
        break;
    }
    ++v12;
    v13 += 3;
    v15 = 0LL;
  }
  while ( v12 < 9 );
  if ( !v15 )
    return 3221226032LL;
  v19 = *((_DWORD *)v15 + 2);
  v20 = *((_DWORD *)v15 + 3);
  if ( a5 != v19 )
  {
    if ( a5 == 25 )
    {
      if ( v19 != 18 )
        return 3221225485LL;
    }
    else if ( a5 >= 2 )
    {
      return 3221225485LL;
    }
  }
  v21 = *((_DWORD *)v15 + 4);
  if ( v20 == 25 )
    return 3221225659LL;
  if ( v20 != 27 )
    return CmSetInstallerClassRegProp(a1, a2, a3, v20, v21, (__int64)a6, a7 & (unsigned int)-(a6 != 0LL));
  if ( a6 )
  {
    if ( !a7 )
      return 3221225485LL;
    if ( *a6 != 0xFF )
    {
      if ( *a6 )
        return 3221225485LL;
      v14 = 0;
    }
    v23 = v14;
    v8 = &v23;
    v22 = 4;
  }
  else
  {
    v22 = 0;
  }
  return CmSetInstallerClassRegProp(a1, a2, a3, 27, v21, (__int64)v8, v22);
}

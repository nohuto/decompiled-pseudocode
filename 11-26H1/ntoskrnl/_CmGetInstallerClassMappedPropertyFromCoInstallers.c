/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x140B43A1C
 * Callers:
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x1408A1ED4 (_CmGetInstallerClassMappedPropertyKeys.c)
 *     _CmGetInstallerClassMappedProperty @ 0x140972FBC (_CmGetInstallerClassMappedProperty.c)
 * Callees:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x140958180 (_PnpCtxGetCachedNodeBaseKey.c)
 *     _PnpCtxRegQueryValue @ 0x1409728D0 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegDeleteValue @ 0x1409AD448 (_PnpCtxRegDeleteValue.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromCoInstallers(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        int a6,
        _DWORD *a7)
{
  _DWORD *v7; // r15
  unsigned int v8; // ebx
  __int64 v9; // rsi
  int v12; // edi
  _QWORD *v13; // rdx
  int CachedNodeBaseKey; // eax
  __int64 v15; // rcx
  unsigned int v16; // eax
  void *v18; // [rsp+60h] [rbp+8h] BYREF
  int v19; // [rsp+70h] [rbp+18h] BYREF
  int v20; // [rsp+74h] [rbp+1Ch]

  v20 = HIDWORD(a3);
  v7 = a7;
  v8 = 0;
  v9 = a5;
  *a4 = 0;
  v19 = 0;
  *v7 = 0;
  v18 = 0LL;
  if ( v9 )
  {
    v12 = a6;
    v9 &= -(__int64)(a6 != 0);
  }
  else
  {
    v12 = 0;
  }
  v13 = *(_QWORD **)(a1 + 200);
  if ( !v13 )
  {
    v13 = *(_QWORD **)(a1 + 88);
    *(_QWORD *)(a1 + 200) = v13;
  }
  CachedNodeBaseKey = PnpCtxGetCachedNodeBaseKey(a1, v13, 13, &v18);
  if ( CachedNodeBaseKey >= 0 )
  {
    LODWORD(a7) = v12;
    v16 = PnpCtxRegQueryValue(v15, v18, a2, &v19, (void *)v9, (unsigned int *)&a7);
    if ( v16 == -1073741772 || v16 == -1073741444 )
    {
      return (unsigned int)-1073741275;
    }
    else if ( !v16 || v16 == -1073741789 )
    {
      if ( v19 == 7 )
      {
        *v7 = (_DWORD)a7;
        *a4 = 8210;
        if ( v16 || !v12 )
          return (unsigned int)-1073741789;
      }
      else
      {
        PnpCtxRegDeleteValue(v16, v18, a2);
      }
    }
    else
    {
      return v16;
    }
  }
  else
  {
    return (unsigned int)CachedNodeBaseKey;
  }
  return v8;
}

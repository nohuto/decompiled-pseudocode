/*
 * XREFs of ?GetPropertyValue@CDragVisualAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x180549970
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z @ 0x1804D1760 (-InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z.c)
 *     ?GetBoundingRectangle@AccessibilityHelpers@@YAJPEBUtagRECT@@PEAUtagVARIANT@@@Z @ 0x18054976C (-GetBoundingRectangle@AccessibilityHelpers@@YAJPEBUtagRECT@@PEAUtagVARIANT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDragVisualAcc::GetPropertyValue(struct tagVARIANT *this, int a2, struct tagVARIANT *a3)
{
  unsigned int inited; // ebx
  IRecordInfo *pRecInfo; // rsi
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  PVOID (__stdcall *RecordCreate)(IRecordInfo *); // rbx
  int v12; // eax
  bool v14; // zf
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  IRecordInfo *v19; // rax
  const unsigned __int16 *v20; // rcx
  unsigned __int16 *v22; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+28h] [rbp-20h]
  __int64 v24; // [rsp+30h] [rbp-18h]

  inited = 0;
  a3->vt = 0;
  pRecInfo = this[2].pRecInfo;
  if ( !pRecInfo )
    return inited;
  if ( a2 > 30013 )
  {
    v15 = a2 - 30016;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 )
      {
        a3->iVal = 0;
        goto LABEL_41;
      }
      v17 = v16 - 90;
      if ( !v17 )
        goto LABEL_29;
      v18 = v17 - 30;
      if ( v18 )
      {
        if ( v18 != 1 )
          return inited;
        v12 = 1;
        if ( (*(_DWORD *)&this[2].vt == 1 || *(_DWORD *)&this[2].vt == 2) && LOBYTE(this[2].decVal.Hi32)
          || this[2].lVal != 6 )
        {
          goto LABEL_15;
        }
LABEL_14:
        v12 = 0;
LABEL_15:
        a3->iVal = -(v12 != 0);
LABEL_41:
        a3->vt = 11;
        return inited;
      }
    }
    a3->iVal = -1;
    goto LABEL_41;
  }
  if ( a2 == 30013 )
  {
    v14 = *(_DWORD *)&this[2].vt == 1;
    goto LABEL_31;
  }
  v7 = a2 - 30001;
  if ( !v7 )
    return (unsigned int)AccessibilityHelpers::GetBoundingRectangle((AccessibilityHelpers *)&this[3], a3, this);
  v8 = v7 - 2;
  if ( !v8 )
  {
    a3->vt = 3;
    a3->lVal = 50032;
    return inited;
  }
  v9 = v8 - 2;
  if ( !v9 )
  {
LABEL_29:
    if ( this[2].lVal != 6 )
      goto LABEL_35;
    v14 = LOBYTE(this[2].decVal.Hi32) == 0;
LABEL_31:
    if ( v14 )
    {
      v19 = this[5].pRecInfo;
      v20 = &pvData;
      if ( v19 )
        v20 = (const unsigned __int16 *)v19;
      return (unsigned int)InitVariantFromString(v20, a3);
    }
LABEL_35:
    v20 = &pvData;
    if ( this[4].pRecInfo )
      v20 = (const unsigned __int16 *)this[4].pRecInfo;
    return (unsigned int)InitVariantFromString(v20, a3);
  }
  v10 = v9 - 4;
  if ( !v10 )
  {
    v12 = 1;
    if ( *(_DWORD *)&this[2].vt == 1 || *(_DWORD *)&this[2].vt == 2 )
      goto LABEL_15;
    goto LABEL_14;
  }
  if ( v10 == 2 )
  {
    v22 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    RecordCreate = pRecInfo->lpVtbl->RecordCreate;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v22);
    v23 = -1LL;
    v24 = -1LL;
    inited = ((__int64 (__fastcall *)(IRecordInfo *, unsigned __int16 **))RecordCreate)(pRecInfo, &v22);
    if ( (inited & 0x80000000) == 0 )
      inited = InitVariantFromString(v22, a3);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v22);
  }
  return inited;
}

/*
 * XREFs of ??$AddProperty@M@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBMPEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180167F0C
 * Callers:
 *     ??$SetProperty@M@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBMW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1802421D0 (--$SetProperty@M@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBMW4DCOMPOSITION_EXPRE.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18007F840 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@$0A@@@QEAAJPEFBUPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@I@Z @ 0x1801685AC (-AddMultipleAndSet@-$DynArray@UPropertyInfo@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUs.c)
 *     ?RemoveAt@?$DynArray@UPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@$0A@@@QEAAJI@Z @ 0x180168BD8 (-RemoveAt@-$DynArray@UPropertyInfo@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAll.c)
 */

__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<float>(
        __int64 a1,
        int a2,
        _DWORD *a3,
        unsigned int *a4)
{
  __int64 v5; // rsi
  unsigned int v7; // ebx
  __int64 result; // rax
  int v10; // ebp
  int v11; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+64h] [rbp+Ch]

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 56);
  v7 = *(_DWORD *)(a1 + 24);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  v11 = a2;
  v12 = v5 & 0x1FFFFFFF;
  result = DynArray<PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::PropertyInfo,0>::AddMultipleAndSet(
             a1,
             &v11);
  if ( (int)result >= 0 )
  {
    v10 = DynArrayImpl<0>::Grow(a1 + 32, 1u, 4, 1, 0LL);
    if ( v10 < 0 )
    {
      DynArray<PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::PropertyInfo,0>::RemoveAt(a1, v7);
      return (unsigned int)v10;
    }
    else
    {
      *(_DWORD *)(a1 + 56) += 4;
      *(_DWORD *)(v5 + *(_QWORD *)(a1 + 32)) = *a3;
      result = 0LL;
      *a4 = v7;
    }
  }
  return result;
}

/*
 * XREFs of ??$AddProperty@UD2DVector3@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@PEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180167BC0
 * Callers:
 *     ??$AddProperty@UD2DVector3@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x180168E0C (--$AddProperty@UD2DVector3@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IW4DCOMPOSITION_EXPRE.c)
 *     ??$SetProperty@UD2DVector3@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2DVector3@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1802425A8 (--$SetProperty@UD2DVector3@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2DVecto.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18007F840 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@$0A@@@QEAAJPEFBUPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@I@Z @ 0x1801685AC (-AddMultipleAndSet@-$DynArray@UPropertyInfo@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUs.c)
 *     ?RemoveAt@?$DynArray@UPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@$0A@@@QEAAJI@Z @ 0x180168BD8 (-RemoveAt@-$DynArray@UPropertyInfo@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAll.c)
 */

__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DVector3>(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v5; // rbp
  unsigned int v7; // ebx
  __int64 result; // rax
  int v10; // esi
  __int64 v11; // rcx
  int v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+64h] [rbp+Ch]

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 56);
  v7 = *(_DWORD *)(a1 + 24);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  v12 = a2;
  v13 = v5 & 0x1FFFFFFF;
  result = DynArray<PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::PropertyInfo,0>::AddMultipleAndSet(
             a1,
             &v12);
  if ( (int)result >= 0 )
  {
    v10 = DynArrayImpl<0>::Grow(a1 + 32, 1u, 12, 1, 0LL);
    if ( v10 < 0 )
    {
      DynArray<PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::PropertyInfo,0>::RemoveAt(a1, v7);
      return (unsigned int)v10;
    }
    else
    {
      *(_DWORD *)(a1 + 56) += 12;
      v11 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(v5 + v11) = *(_QWORD *)a3;
      *(_DWORD *)(v5 + v11 + 8) = *(_DWORD *)(a3 + 8);
      result = 0LL;
      *a4 = v7;
    }
  }
  return result;
}

/*
 * XREFs of ??$AddProperty@UD2DMatrix@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@PEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x1801689E8
 * Callers:
 *     ??$AddProperty@UD2DMatrix@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@@Z @ 0x180168744 (--$AddProperty@UD2DMatrix@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IW4DCOMPOSITION_EXPRES.c)
 *     ??$SetProperty@UD2DMatrix@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2DMatrix@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1802422AC (--$SetProperty@UD2DMatrix@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2DMatrix.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18007F840 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@$0A@@@QEAAJPEFBUPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@I@Z @ 0x1801685AC (-AddMultipleAndSet@-$DynArray@UPropertyInfo@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUs.c)
 *     ?RemoveAt@?$DynArray@UPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@$0A@@@QEAAJI@Z @ 0x180168BD8 (-RemoveAt@-$DynArray@UPropertyInfo@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAll.c)
 */

__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DMatrix>(
        __int64 a1,
        int a2,
        _OWORD *a3,
        unsigned int *a4)
{
  __int64 v5; // rbp
  unsigned int v7; // ebx
  __int64 result; // rax
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 56);
  v7 = *(_DWORD *)(a1 + 24);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  LODWORD(v12) = a2;
  HIDWORD(v12) = v5 & 0x1FFFFFFF;
  result = DynArray<PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::PropertyInfo,0>::AddMultipleAndSet(
             a1,
             &v12);
  if ( (int)result >= 0 )
  {
    v10 = DynArrayImpl<0>::Grow(a1 + 32, 1u, 64, 1, 0LL);
    if ( v10 < 0 )
    {
      DynArray<PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::PropertyInfo,0>::RemoveAt(a1, v7);
      return (unsigned int)v10;
    }
    else
    {
      *(_DWORD *)(a1 + 56) += 64;
      v11 = *(_QWORD *)(a1 + 32);
      *(_OWORD *)(v5 + v11) = *a3;
      *(_OWORD *)(v5 + v11 + 16) = a3[1];
      *(_OWORD *)(v5 + v11 + 32) = a3[2];
      *(_OWORD *)(v5 + v11 + 48) = a3[3];
      *a4 = v7;
      return 0LL;
    }
  }
  return result;
}

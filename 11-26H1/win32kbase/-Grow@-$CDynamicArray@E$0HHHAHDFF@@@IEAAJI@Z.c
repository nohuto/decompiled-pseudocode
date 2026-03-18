/*
 * XREFs of ?Grow@?$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z @ 0x1400A7C7C
 * Callers:
 *     ??$AddProperty@M@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBMPEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140187CA4 (--$AddProperty@M@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@.c)
 *     ??$AddProperty@UD2DMatrix@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@PEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140199C88 (--$AddProperty@UD2DMatrix@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelMod.c)
 *     ??$AddProperty@U_D3DCOLORVALUE@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@PEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140241254 (--$AddProperty@U_D3DCOLORVALUE@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKern.c)
 *     ??$AddProperty@UD2DVector2@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@PEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x1402413D4 (--$AddProperty@UD2DVector2@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelMo.c)
 *     ??$AddProperty@UD2DVector3@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@PEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140241554 (--$AddProperty@UD2DVector3@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelMo.c)
 *     ??$AddProperty@UD2D_MATRIX_3X2_F@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@PEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x1402416DC (--$AddProperty@UD2D_MATRIX_3X2_F@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKe.c)
 *     ??$AddProperty@_N@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_NPEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140241864 (--$AddProperty@_N@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall CDynamicArray<unsigned char,2003858261>::Grow(__int64 a1, unsigned int a2)
{
  unsigned int v3; // esi
  unsigned int v4; // ebx
  void *v5; // rax
  void *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  v3 = a2 + *(_DWORD *)(a1 + 8);
  if ( v3 < a2 )
    return (unsigned int)-1073741675;
  v4 = 0;
  if ( v3 <= *(_DWORD *)(a1 + 12) )
    return v4;
  if ( !is_mul_ok(v3, 1uLL) )
    return (unsigned int)-1073741675;
  v5 = Win32AllocPoolImpl(0x100uLL, v3, 0x77707355u);
  v6 = v5;
  if ( v5 )
  {
    if ( *(_QWORD *)a1 )
    {
      memmove(v5, *(const void **)a1, *(unsigned int *)(a1 + 8));
      GreDeleteFastMutex(*(char **)a1, v7, v8, v9);
    }
    *(_QWORD *)a1 = v6;
    *(_DWORD *)(a1 + 12) = v3;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}

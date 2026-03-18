/*
 * XREFs of ?AllocateVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0I@Z @ 0x1400C9374
 * Callers:
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1400C8FA4 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1400CCB80 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x14004DC48 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 *     ValidateVadAddressRange @ 0x1400CBD40 (ValidateVadAddressRange.c)
 */

struct VIDMM_VAD *__fastcall CVirtualAddressAllocator::AllocateVad(
        CVirtualAddressAllocator *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v5; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rbx

  v5 = a4;
  v8 = operator new[](24 * (a4 + 4), 0x39346956u, 256LL);
  v9 = v8;
  if ( v8 )
  {
    *(_QWORD *)(v8 + 24) = a2;
    *(_QWORD *)(v8 + 32) = a3;
    ValidateVadAddressRange(this, v8);
    *(_DWORD *)(v9 + 72) ^= ((unsigned __int16)*(_DWORD *)(v9 + 72) ^ (unsigned __int16)(16 * v5)) & 0x7F0;
    if ( (_DWORD)v5 )
    {
      v10 = (_QWORD *)(v9 + 104);
      do
      {
        *(v10 - 1) = 0LL;
        if ( (unsigned int)Feature_3358814523__private_IsEnabledDeviceUsageNoInline() )
        {
          v10[1] = v10;
          *v10 = v10;
        }
        v10 += 3;
        --v5;
      }
      while ( v5 );
    }
    *(_QWORD *)(v9 + 88) = v9 + 80;
    *(_QWORD *)(v9 + 80) = v9 + 80;
  }
  return (struct VIDMM_VAD *)v9;
}

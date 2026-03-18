/*
 * XREFs of ?FreeVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@@Z @ 0x140104E98
 * Callers:
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1400CCB80 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x140104E78 (-FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1401061D4 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140038D60 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x14004DC48 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 *     ValidateVadAddressRange @ 0x1400CBD40 (ValidateVadAddressRange.c)
 *     ReleaseVaRangeCb @ 0x140122DE8 (ReleaseVaRangeCb.c)
 */

void __fastcall CVirtualAddressAllocator::FreeVad(CVirtualAddressAllocator *this, struct VIDMM_VAD *a2)
{
  unsigned int v3; // esi
  __int64 v4; // rax
  __int64 v5; // rbp
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rdi
  _QWORD **v11; // rdi
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  VIDMM_MAPPED_VA_RANGE *v14; // rcx

  ValidateVadAddressRange((__int64)this, (__int64)a2);
  v3 = 0;
  if ( (*((_DWORD *)a2 + 18) & 0x7F0) != 0 )
  {
    do
    {
      v4 = v3 + 4LL;
      v5 = 3 * v4;
      v6 = (_QWORD *)*((_QWORD *)a2 + 3 * v4);
      if ( v6 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v7 = v6;
              if ( !*v6 )
                break;
              v6 = (_QWORD *)*v6;
              *v7 = 0LL;
            }
            v8 = v6 + 1;
            if ( !v6[1] )
              break;
            v6 = (_QWORD *)v6[1];
            *v8 = 0LL;
          }
          v9 = v6[2];
          ReleaseVaRangeCb(v6, 0LL);
          v10 = v9 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v10 )
            break;
          v6 = (_QWORD *)v10;
        }
      }
      *((_QWORD *)a2 + v5) = 0LL;
      if ( (unsigned int)Feature_3358814523__private_IsEnabledDeviceUsageNoInline() )
      {
        v11 = (_QWORD **)((char *)a2 + 8 * v5 + 8);
        while ( 1 )
        {
          v12 = *v11;
          if ( *v11 == v11 )
            break;
          if ( (_QWORD **)v12[1] != v11 || (v13 = (_QWORD *)*v12, *(_QWORD **)(*v12 + 8LL) != v12) )
            __fastfail(3u);
          *v11 = v13;
          v14 = (VIDMM_MAPPED_VA_RANGE *)(v12 - 1);
          v13[1] = v11;
          *((_DWORD *)v14 + 18) &= ~0x8000u;
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v14);
        }
      }
      ++v3;
    }
    while ( v3 < ((*((_DWORD *)a2 + 18) >> 4) & 0x7Fu) );
  }
  operator delete(a2);
}

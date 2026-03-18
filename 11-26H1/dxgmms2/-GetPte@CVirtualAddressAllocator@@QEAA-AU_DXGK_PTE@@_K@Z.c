/*
 * XREFs of ?GetPte@CVirtualAddressAllocator@@QEAA?AU_DXGK_PTE@@_K@Z @ 0x1400AA3A4
 * Callers:
 *     ValidateGpuPtes @ 0x1400A8308 (ValidateGpuPtes.c)
 * Callees:
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x140037560 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 */

struct _DXGK_PTE *__fastcall CVirtualAddressAllocator::GetPte(
        CVirtualAddressAllocator *this,
        struct _DXGK_PTE *__return_ptr retstr,
        unsigned __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdi
  struct _DXGK_PTE *v5; // r10
  __int64 *v7; // r9
  __int64 v8; // rbp
  struct VIDMM_PAGE_DIRECTORY *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // r14
  __int64 v13; // r11
  unsigned __int64 v14; // r9
  unsigned int NumPde; // eax
  __int64 v16; // r9
  __int64 v17; // r11
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rdx

  v3 = *((_QWORD *)this + 12);
  v4 = a3 >> 12;
  v5 = retstr;
  *(_OWORD *)&retstr->0 = 0LL;
  v7 = *(__int64 **)(v3 + 40320);
  v8 = *v7;
  v9 = (struct VIDMM_PAGE_DIRECTORY *)**((_QWORD **)this + 16);
  v10 = *(int *)(*v7 + 548);
  if ( (int)v10 > 0 )
  {
    v11 = *(int *)(*v7 + 548);
    v12 = (_QWORD *)(v8 + 48 * v10 + 232);
    do
    {
      v13 = *((_QWORD *)v9 + 7);
      v14 = (v4 & *(v12 - 1)) >> *v12;
      if ( (unsigned __int64)v11 <= 1 )
      {
        if ( !v13 )
          return v5;
        NumPde = CVirtualAddressAllocator::GetNumPde(this, v9);
        v18 = *((_QWORD *)v9 + 6);
        if ( (*(_DWORD *)(v18 + 16 * v16) & 0x400LL) != 0 )
        {
          *v5 = *(struct _DXGK_PTE *)(v18 + 16 * v16);
          v5->PageAddress = *(_QWORD *)(v8 + 224) & (v4 + v5->PageAddress);
        }
        else
        {
          v19 = (v4 & *(_QWORD *)(v8 + 224)) >> *(_QWORD *)(v8 + 232);
          v20 = *(_QWORD *)(v17 + 8 * v16);
          if ( (*(_DWORD *)v9 & 0x2000) != 0
            && (v21 = *(_QWORD *)(v17 + 8 * (v16 + NumPde))) != 0
            && (v22 = *(_QWORD *)(v21 + 40), (*(_BYTE *)(v22 + 16LL * (unsigned int)(v19 >> 4)) & 1) != 0) )
          {
            *v5 = *(struct _DXGK_PTE *)(v22 + 16LL * (unsigned int)(v19 >> 4));
            v5->PageAddress += v4 & 0xF;
          }
          else if ( v20 )
          {
            v23 = *(_QWORD *)(v20 + 40);
            v24 = 2 * v19;
            if ( (*(_BYTE *)(v23 + 8 * v24) & 1) != 0 )
              *v5 = *(struct _DXGK_PTE *)(v23 + 8 * v24);
          }
        }
      }
      else
      {
        if ( !v13 || (*(_BYTE *)(*((_QWORD *)v9 + 6) + 16 * v14) & 1) == 0 )
          return v5;
        v9 = *(struct VIDMM_PAGE_DIRECTORY **)(v13 + 8 * v14);
      }
      --v11;
      v12 -= 6;
    }
    while ( v11 > 0 );
  }
  return v5;
}

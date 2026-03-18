/*
 * XREFs of ?SetOpacityInternal@CVisual@@QEAAXM@Z @ 0x18011096C
 * Callers:
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180110FA0 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?ExpandStorage@AllocatedStorage@CSparseStorage@@SAXPEAPEAV12@_K@Z @ 0x1801121F8 (-ExpandStorage@AllocatedStorage@CSparseStorage@@SAXPEAPEAV12@_K@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 */

void __fastcall CVisual::SetOpacityInternal(CVisual *this, float a2)
{
  int v3; // eax
  struct CSparseStorage::AllocatedStorage **v4; // rsi
  struct CSparseStorage::AllocatedStorage *v5; // rdi
  int v6; // ebp
  float *v7; // rbx
  unsigned __int64 v8; // r8
  float v9; // edx
  int v10; // ecx
  struct CSparseStorage::AllocatedStorage *v11; // rcx
  char *v12; // rbx
  float v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = a2;
  v3 = memcmp_0(&v13, &`CVisual::SetOpacityInternal'::`2'::sc_defaultValue, 4uLL);
  v4 = (struct CSparseStorage::AllocatedStorage **)((char *)this + 216);
  v5 = *v4;
  if ( v3 )
  {
    v6 = *((_DWORD *)v5 + 1) & 0x8000000;
    if ( v5 == (struct CSparseStorage::AllocatedStorage *)&CSparseStorage::s_defaultEmptyAllocatedStorage )
    {
      v5 = (struct CSparseStorage::AllocatedStorage *)DefaultHeap::AllocClear(0x2CuLL);
      if ( !v5 )
        RaiseFailFastException(0LL, 0LL, 0);
      *(_DWORD *)v5 = 44;
      *v4 = v5;
    }
    v7 = (float *)((char *)v5 + 12);
    v8 = (unsigned __int64)v5 + *(unsigned int *)v5;
    while ( 1 )
    {
      if ( (unsigned __int64)(v7 + 1) > v8 )
      {
        v11 = *v4;
        goto LABEL_14;
      }
      v9 = *v7;
      v10 = HIBYTE(*(_DWORD *)v7) & 0x7F;
      if ( v10 == 5 )
        goto LABEL_9;
      if ( !v10 )
        break;
      if ( !v6 && (LODWORD(v9) & 0xFFFFFF) == 4 && (__ROR4__(1, v10) & *((_DWORD *)v5 + 1)) == 0 )
        goto LABEL_9;
      v7 = (float *)((char *)v7 + (*(_QWORD *)&v9 & 0xFFFFFFLL) + 4);
    }
    v11 = *v4;
    if ( (unsigned __int64)(v7 + 2) <= v8 )
    {
      *(_DWORD *)v7 = LODWORD(v9) & 0xFF000000 | 4;
      goto LABEL_9;
    }
LABEL_14:
    v12 = (char *)((char *)v7 - (char *)v11);
    CSparseStorage::AllocatedStorage::ExpandStorage(v4, (unsigned __int64)(v12 + 32));
    v7 = (float *)&v12[(_QWORD)*v4];
    *(_DWORD *)v7 = *(_DWORD *)v7 & 0xFF000000 | 4;
LABEL_9:
    v7[1] = v13;
    *(_DWORD *)v7 &= 0x85FFFFFF;
    *(_DWORD *)v7 |= 0x5000000u;
    *((_DWORD *)*v4 + 1) |= 0x8000000u;
  }
  else
  {
    *((_DWORD *)v5 + 1) &= ~0x8000000u;
  }
}

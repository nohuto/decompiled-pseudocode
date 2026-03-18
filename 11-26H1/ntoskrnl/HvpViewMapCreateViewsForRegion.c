/*
 * XREFs of HvpViewMapCreateViewsForRegion @ 0x1408B8388
 * Callers:
 *     HvpViewMapStart @ 0x1408B790C (HvpViewMapStart.c)
 *     HvpViewMapExtendStorage @ 0x1408B8788 (HvpViewMapExtendStorage.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     CmSiGetMemoryAllocationGranularity @ 0x1404E5654 (CmSiGetMemoryAllocationGranularity.c)
 *     HvpViewMapFreeView @ 0x1408B7E00 (HvpViewMapFreeView.c)
 *     HvpViewMapCreateView @ 0x1408B868C (HvpViewMapCreateView.c)
 *     HvpViewMapMakeViewRangeValid @ 0x1408B9648 (HvpViewMapMakeViewRangeValid.c)
 */

__int64 __fastcall HvpViewMapCreateViewsForRegion(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v4; // rbx
  __int64 MemoryAllocationGranularity; // rcx
  __int64 v9; // r14
  __int64 v10; // r10
  __int64 v11; // rax
  __int64 i; // r8
  __int64 j; // rdx
  __int64 v14; // rdi
  __int64 v15; // rdi
  int v16; // ebx
  int ViewRangeValid; // esi
  int v18; // r9d
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rax
  unsigned __int64 *v22; // rdi
  unsigned __int64 v23; // rdx
  bool v24; // r8
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  _QWORD *v31; // [rsp+30h] [rbp-10h] BYREF
  _QWORD **v32; // [rsp+38h] [rbp-8h]
  _QWORD *v33; // [rsp+88h] [rbp+48h] BYREF
  __int64 v34; // [rsp+90h] [rbp+50h]
  char v35; // [rsp+98h] [rbp+58h]

  v35 = a4;
  v4 = 0LL;
  v32 = &v31;
  v33 = 0LL;
  v31 = &v31;
  MemoryAllocationGranularity = CmSiGetMemoryAllocationGranularity();
  v34 = MemoryAllocationGranularity;
  v9 = 0x200000LL;
  while ( a2 < a3 )
  {
    v10 = a2 & -MemoryAllocationGranularity;
    v11 = a3 - v10;
    if ( v9 <= a3 - v10 )
    {
      v15 = v9 + v10;
      v16 = v9 + v10;
    }
    else
    {
      for ( i = MemoryAllocationGranularity; i < v11; i *= 2LL )
        ;
      for ( j = 2 * i; v10 + j - a3 <= a3 / 8; j *= 2LL )
        i = j;
      v14 = v9;
      if ( i < v9 )
        v14 = i;
      v15 = v10 + v14;
      if ( (*(_DWORD *)(a1 + 32) & 1) != 0 && v15 >= *(_QWORD *)(a1 + 16) )
        v15 = *(_QWORD *)(a1 + 16);
      v16 = a3;
    }
    ViewRangeValid = HvpViewMapCreateView(a1, v10, v15, &v33);
    if ( ViewRangeValid < 0 )
    {
      MemoryAllocationGranularity = v34;
      v4 = v33;
      if ( v9 <= v34 )
        goto LABEL_32;
      v9 /= 2LL;
    }
    else
    {
      v18 = v16;
      v4 = v33;
      ViewRangeValid = HvpViewMapMakeViewRangeValid(a1, (_DWORD)v33, a2, v18, v35);
      if ( ViewRangeValid < 0 )
        goto LABEL_32;
      v19 = v32;
      if ( *v32 != &v31 )
        goto LABEL_16;
      v4[1] = v32;
      *v4 = &v31;
      a2 = v15;
      MemoryAllocationGranularity = v34;
      *v19 = v4;
      v32 = (_QWORD **)v4;
      v4 = 0LL;
      v33 = 0LL;
    }
  }
  v20 = v31;
  if ( (_QWORD **)v31[1] != &v31 || (v21 = *v31, *(_QWORD **)(*v31 + 8LL) != v31) )
LABEL_16:
    __fastfail(3u);
  v31 = (_QWORD *)*v31;
  *(_QWORD *)(v21 + 8) = &v31;
  if ( v20 != &v31 )
  {
    v22 = (unsigned __int64 *)(a1 + 40);
    v4 = 0LL;
    do
    {
      v23 = *v22;
      if ( (*(_BYTE *)(a1 + 48) & 1) != 0 && v23 )
        v23 ^= (unsigned __int64)v22;
      v24 = 0;
      if ( v23 )
      {
        while ( 1 )
        {
          if ( v20[5] < *(_QWORD *)(v23 + 40) )
          {
            v25 = *(_QWORD *)v23;
            if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
            {
              if ( !v25 )
                goto LABEL_50;
              v25 ^= v23;
            }
            if ( !v25 )
            {
LABEL_50:
              v24 = 0;
              break;
            }
          }
          else
          {
            v25 = *(_QWORD *)(v23 + 8);
            if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
            {
              if ( !v25 )
                goto LABEL_27;
              v25 ^= v23;
            }
            if ( !v25 )
            {
LABEL_27:
              v24 = 1;
              break;
            }
          }
          v23 = v25;
        }
      }
      RtlRbInsertNodeEx(a1 + 40, v23, v24, (unsigned __int64)v20);
      v20 = v31;
      if ( (_QWORD **)v31[1] != &v31 )
        goto LABEL_16;
      v26 = *v31;
      if ( *(_QWORD **)(*v31 + 8LL) != v31 )
        goto LABEL_16;
      v31 = (_QWORD *)*v31;
      *(_QWORD *)(v26 + 8) = &v31;
    }
    while ( v20 != &v31 );
  }
  ViewRangeValid = 0;
LABEL_32:
  if ( v4 )
    HvpViewMapFreeView(a1, (__int64)v4);
  v27 = v31;
  if ( v31 != &v31 )
  {
    if ( (_QWORD **)v31[1] == &v31 )
    {
      v29 = *v31;
      if ( *(_QWORD **)(*v31 + 8LL) == v31 )
      {
        v31 = (_QWORD *)*v31;
        *(_QWORD *)(v29 + 8) = &v31;
        while ( 1 )
        {
          HvpViewMapFreeView(a1, (__int64)v27);
          v27 = v31;
          if ( (_QWORD **)v31[1] != &v31 )
            break;
          v30 = *v31;
          if ( *(_QWORD **)(*v31 + 8LL) != v31 )
            break;
          v31 = (_QWORD *)*v31;
          *(_QWORD *)(v30 + 8) = &v31;
          if ( v27 == &v31 )
            return (unsigned int)ViewRangeValid;
        }
      }
    }
    goto LABEL_16;
  }
  return (unsigned int)ViewRangeValid;
}

/*
 * XREFs of CmpFilterAcpiDockingState @ 0x140858F34
 * Callers:
 *     CmSetAcpiHwProfile @ 0x140857958 (CmSetAcpiHwProfile.c)
 * Callees:
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpFilterAcpiDockingState(unsigned __int16 *a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  int v6; // r14d
  __int64 v7; // rdi
  char v9; // r10
  char v10; // r13
  __int64 v14; // r14
  unsigned int v15; // ecx
  SIZE_T v16; // rax
  unsigned int v17; // edx
  unsigned int v18; // r8d
  int v19; // edi
  __int64 v20; // rcx
  char v21; // dl
  unsigned int v22; // ebx
  unsigned int v23; // edi
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rbp
  void *v27; // rcx
  char v29; // [rsp+20h] [rbp-38h]
  int v30; // [rsp+24h] [rbp-34h]
  int v31; // [rsp+28h] [rbp-30h]
  int v32; // [rsp+78h] [rbp+20h]
  char v33; // [rsp+80h] [rbp+28h]

  v32 = a4;
  v7 = 0LL;
  LOBYTE(v6) = 0;
  v9 = 0;
  v31 = 0;
  v10 = 0;
  v30 = v6;
  v29 = 0;
  v33 = 0;
  if ( a6 && *(_DWORD *)(a6 + 4) )
  {
    do
    {
      v14 = 3 * v7;
      if ( (*(_DWORD *)(a6 + 24 * v7 + 12) & 3) == 0 || (*(_DWORD *)(a6 + 24 * v7 + 12) & 3) == (*a1 & 3) )
      {
        v15 = *(_DWORD *)(a6 + 24 * v7 + 16);
        if ( v15 == a1[1] )
        {
          v16 = RtlCompareMemory(a1 + 2, *(const void **)(a6 + 24 * v7 + 24), v15);
          a4 = v32;
          v9 = v29;
          if ( *(_DWORD *)(a6 + 24 * v7 + 16) == v16 )
          {
            v17 = *(_DWORD *)(a5 + 4);
            v18 = 0;
            if ( v17 )
            {
              v19 = v30;
              do
              {
                v20 = 32LL * v18;
                if ( *(_DWORD *)(v20 + a5 + 28) == *(_DWORD *)(a6 + 8 * v14 + 8) )
                {
                  *(_DWORD *)(v20 + a5 + 32) |= 2u;
                  v10 = 1;
                  v17 = *(_DWORD *)(a5 + 4);
                }
                if ( a2 == *a1 )
                {
                  v19 = (unsigned __int8)v19;
                  if ( !a3 )
                    v19 = 1;
                }
                if ( *(_DWORD *)(a6 + 8 * v14 + 8) == v32 )
                  v9 = 1;
                ++v18;
              }
              while ( v18 < v17 );
              v30 = v19;
              LODWORD(v7) = v31;
              v29 = v9;
            }
          }
        }
      }
      v7 = (unsigned int)(v7 + 1);
      v31 = v7;
    }
    while ( (unsigned int)v7 < *(_DWORD *)(a6 + 4) );
    LOBYTE(v6) = v30;
    if ( (_BYTE)v30 )
      goto LABEL_24;
  }
  if ( a3 || v10 || a2 != *a1 )
  {
LABEL_24:
    v21 = 0;
  }
  else
  {
    v21 = 1;
    v10 = 1;
    v33 = 1;
  }
  v22 = 0;
  if ( *(_DWORD *)(a5 + 4) )
  {
    v23 = 1;
    do
    {
      v24 = 32LL * v22;
      v25 = *(_DWORD *)(v24 + a5 + 32);
      if ( (_BYTE)v6 )
      {
        if ( (v25 & 2) == 0 )
          goto LABEL_38;
        if ( !v9 )
        {
          *(_DWORD *)(v24 + a5 + 32) = v25 | 8;
          goto LABEL_31;
        }
      }
      else
      {
        if ( (v25 & 4) != 0 && !v10 || (v25 & 1) != 0 || (v25 & 2) != 0 )
          goto LABEL_31;
        if ( !v21 )
        {
LABEL_38:
          v26 = 32LL * v22;
          v27 = *(void **)(a5 + v26 + 16);
          if ( v27 )
          {
            ExFreePoolWithTag(v27, 0x20204D43u);
            *(_QWORD *)(a5 + v26 + 16) = 0LL;
          }
          if ( *(_DWORD *)(a5 + 4) + ~v22 )
            memmove(
              (void *)(a5 + 32LL * v22 + 8),
              (const void *)(a5 + 32LL * v23 + 8),
              32LL * (*(_DWORD *)(a5 + 4) + ~v22));
          --*(_DWORD *)(a5 + 4);
          goto LABEL_43;
        }
      }
      if ( *(_DWORD *)(v24 + a5 + 28) != a4 )
        goto LABEL_38;
LABEL_31:
      ++v22;
      ++v23;
LABEL_43:
      a4 = v32;
      v9 = v29;
      v21 = v33;
    }
    while ( v22 < *(_DWORD *)(a5 + 4) );
  }
  return 0LL;
}

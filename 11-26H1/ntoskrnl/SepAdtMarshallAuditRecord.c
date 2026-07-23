/*
 * XREFs of SepAdtMarshallAuditRecord @ 0x1402159B0
 * Callers:
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepAdtMarshallAuditRecord(char *Src, void **a2, _DWORD *a3, int a4)
{
  unsigned int v4; // edi
  char *v5; // r15
  unsigned int v6; // ebx
  unsigned int v7; // r11d
  char *v8; // r10
  void **v11; // r12
  unsigned int v13; // eax
  unsigned int v14; // edi
  PVOID PoolWithTag; // rax
  unsigned int v16; // ebp
  int v17; // ecx
  char *v18; // rsi
  signed __int64 *v19; // r14
  int v20; // eax
  const void **v22; // rbx
  __int16 v23; // ax
  unsigned int *v24; // rax
  unsigned int v25; // ecx
  __int64 v26; // r8
  __int64 *v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  unsigned int *v30; // rdi
  char *v31; // rbx
  signed __int64 v32; // rax
  char *v33; // r12
  __int64 v34; // r13
  _QWORD *v35; // rbp
  unsigned int v36; // r12d
  const void **v37; // r13
  size_t v38; // rbx
  unsigned int v39; // [rsp+20h] [rbp-48h]
  char *v40; // [rsp+28h] [rbp-40h]

  v4 = *((_DWORD *)Src + 2);
  v5 = Src + 24;
  v6 = 0;
  v40 = Src + 24;
  v7 = 0;
  v8 = Src + 24;
  v11 = a2;
  while ( v7 < v4 )
  {
    if ( *(_DWORD *)v8 == 17 )
    {
      v24 = (unsigned int *)*((_QWORD *)v8 + 3);
      v25 = *v24;
      v26 = *((_QWORD *)v24 + 1);
      v13 = 16 * (*v24 + 1);
      if ( v25 )
      {
        v27 = (__int64 *)(v26 + 8);
        v28 = v25;
        do
        {
          v29 = *v27;
          v27 += 2;
          v13 += (4 * *(unsigned __int8 *)(v29 + 1) + 15) & 0xFFFFFFF8;
          --v28;
        }
        while ( v28 );
      }
    }
    else
    {
      v13 = (*((_DWORD *)v8 + 1) + 7) & 0xFFFFFFF8;
    }
    if ( v13 + v6 < v6 )
      return 3221225485LL;
    ++v7;
    v6 += v13;
    v8 += 32;
  }
  v14 = v6 + 32 * v4 + 24;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a4 | 0x400), v14, 0x70416553u);
  *v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    *a3 = (a4 != 1) + 4;
    memmove(*v11, Src, 1048 - 32LL * (unsigned int)(32 - *((_DWORD *)Src + 2)));
    v16 = 0;
    v39 = 0;
    *((_DWORD *)*v11 + 3) = v14;
    *((_DWORD *)*v11 + 5) |= 1u;
    v17 = *((_DWORD *)Src + 2);
    v18 = (char *)*v11 - 32 * (unsigned int)(32 - v17) + 1048;
    if ( v17 )
    {
      v19 = (signed __int64 *)((char *)*v11 + 48);
      do
      {
        v20 = *(_DWORD *)v5;
        if ( *(_DWORD *)v5 == 34 )
        {
LABEL_15:
          v22 = (const void **)*((_QWORD *)v5 + 3);
          *v19 = v18 - (_BYTE *)*v11;
          memmove(v18 + 16, v22[1], *(unsigned __int16 *)v22);
          v23 = *(_WORD *)v22;
          *(_WORD *)v18 = *(_WORD *)v22;
          *((_WORD *)v18 + 1) = v23;
          *((_QWORD *)v18 + 1) = v18 + 16 - (_BYTE *)*v11;
          v18 += ((*(unsigned __int16 *)v22 + 7LL) & 0xFFFFFFF8LL) + 16;
        }
        else if ( v20 == 13 )
        {
LABEL_23:
          memmove(v18, *((const void **)v5 + 3), *((unsigned int *)v5 + 1));
          *v19 = v18 - (_BYTE *)*v11;
          v18 += (*((unsigned int *)v5 + 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
        }
        else
        {
          switch ( v20 )
          {
            case 1:
            case 2:
              goto LABEL_15;
            case 4:
            case 8:
            case 9:
            case 23:
            case 24:
            case 28:
            case 29:
            case 30:
            case 31:
            case 33:
              goto LABEL_23;
            case 17:
              v30 = (unsigned int *)*((_QWORD *)v5 + 3);
              v31 = v18;
              *(_OWORD *)v18 = *(_OWORD *)v30;
              v32 = v18 - (_BYTE *)*v11;
              v18 += 16;
              *v19 = v32;
              v33 = v18;
              v34 = *((_QWORD *)v30 + 1);
              if ( *v30 )
              {
                memmove(v18, *((const void **)v30 + 1), 16LL * *v30);
                *((_QWORD *)v31 + 1) = v18 - (_BYTE *)*a2;
                v18 += 16 * *v30;
              }
              else
              {
                *((_QWORD *)v31 + 1) = 0LL;
              }
              if ( *v30 )
              {
                v35 = v33 + 8;
                v36 = 0;
                v37 = (const void **)(v34 + 8);
                do
                {
                  *v35 = v18 - (_BYTE *)*a2;
                  v38 = 4LL * *((unsigned __int8 *)*v37 + 1) + 8;
                  memmove(v18, *v37, v38);
                  ++v36;
                  v35 += 2;
                  v18 += (v38 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
                  v37 += 2;
                }
                while ( v36 < *v30 );
                v16 = v39;
                v5 = v40;
              }
              v11 = a2;
              break;
            case 22:
              *((_DWORD *)*v11 + 5) |= 2u;
              break;
            case 32:
              *((_DWORD *)*v11 + 5) |= 2u;
              goto LABEL_23;
            default:
              break;
          }
        }
        ++v16;
        v5 += 32;
        v39 = v16;
        v19 += 4;
        v40 = v5;
      }
      while ( v16 < *((_DWORD *)Src + 2) );
    }
    return 0LL;
  }
  else
  {
    *a3 = 0;
    return 3221225626LL;
  }
}

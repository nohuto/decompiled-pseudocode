/*
 * XREFs of RtlpMergeSecurityAttributeInformation @ 0x1800D65D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpIsAttributeAceInSacl @ 0x1800D69F8 (RtlpIsAttributeAceInSacl.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpMergeSecurityAttributeInformation(__int64 a1, __int64 a2, unsigned __int16 **a3, char a4)
{
  unsigned __int16 *Heap_0; // rbx
  char v5; // di
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // r12d
  _BYTE *v12; // r14
  unsigned int v13; // ebp
  _BYTE *i; // rdi
  __int64 v15; // r8
  unsigned int v16; // ebp
  _BYTE *v17; // rdi
  unsigned int v18; // ebp
  _BYTE *v19; // rdi
  __int64 v20; // r8
  unsigned int v21; // r12d
  _WORD *v22; // rbp
  unsigned int v23; // r15d
  _WORD *v24; // rbp
  unsigned int v26; // edi
  unsigned int v27; // [rsp+20h] [rbp-48h]
  char v28; // [rsp+80h] [rbp+18h] BYREF
  char v29; // [rsp+88h] [rbp+20h]

  v29 = a4;
  Heap_0 = 0LL;
  v5 = a4;
  v28 = 0;
  if ( !a3 )
  {
    v26 = -1073741811;
    goto LABEL_69;
  }
  if ( a1 )
  {
    v9 = *(unsigned __int16 *)(a1 + 2);
    if ( !a2 )
    {
      v10 = 0;
      goto LABEL_5;
    }
  }
  else
  {
    if ( !a2 )
    {
LABEL_65:
      *a3 = Heap_0;
      return 0LL;
    }
    v9 = 0;
  }
  v10 = *(unsigned __int16 *)(a2 + 2);
LABEL_5:
  v11 = v10 + v9;
  v27 = v10 + v9;
  if ( (unsigned int)(v10 + v9) < 8 )
  {
    v26 = -1073741705;
  }
  else
  {
    Heap_0 = (unsigned __int16 *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v11);
    if ( Heap_0 )
    {
      v12 = Heap_0 + 4;
      *(_QWORD *)Heap_0 = 0LL;
      *(_BYTE *)Heap_0 = 2;
      Heap_0[1] = 8;
      if ( a1 )
      {
        v13 = 0;
        for ( i = (_BYTE *)(a1 + 8); ; i += *((unsigned __int16 *)i + 1) )
        {
          if ( v13 >= *(unsigned __int16 *)(a1 + 4) )
          {
            v5 = v29;
            break;
          }
          if ( *i == 18 && (i[1] & 0x10) == 0 && !(unsigned __int8)RtlpIsAttributeAceInSacl(i, Heap_0, 0LL, &v28) )
          {
            if ( a2 && !v29 && (LOBYTE(v15) = 1, (unsigned __int8)RtlpIsAttributeAceInSacl(i, a2, v15, &v28)) && v28 )
            {
              Heap_0[1] += *((_WORD *)i + 1);
              if ( Heap_0[1] > v11 )
              {
LABEL_68:
                v26 = -1073741705;
                RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
                goto LABEL_69;
              }
              memmove(v12, i, *((unsigned __int16 *)i + 1));
              ++Heap_0[2];
              v12[1] |= 0x10u;
            }
            else
            {
              Heap_0[1] += *((_WORD *)i + 1);
              if ( Heap_0[1] > v11 )
                goto LABEL_68;
              memmove(v12, i, *((unsigned __int16 *)i + 1));
              ++Heap_0[2];
            }
            v12 += *((unsigned __int16 *)i + 1);
          }
          ++v13;
        }
      }
      if ( a2 && v5 )
      {
        v16 = 0;
        v17 = (_BYTE *)(a2 + 8);
        while ( v16 < *(unsigned __int16 *)(a2 + 4) )
        {
          if ( *v17 == 18 && (v17[1] & 0x10) == 0 && !(unsigned __int8)RtlpIsAttributeAceInSacl(v17, Heap_0, 0LL, &v28) )
          {
            Heap_0[1] += *((_WORD *)v17 + 1);
            if ( Heap_0[1] > v11 )
              goto LABEL_68;
            memmove(v12, v17, *((unsigned __int16 *)v17 + 1));
            ++Heap_0[2];
            v12 += *((unsigned __int16 *)v17 + 1);
          }
          ++v16;
          v17 += *((unsigned __int16 *)v17 + 1);
        }
      }
      if ( a1 )
      {
        v18 = 0;
        v19 = (_BYTE *)(a1 + 8);
        while ( v18 < *(unsigned __int16 *)(a1 + 4) )
        {
          if ( *v19 == 18 && (v19[1] & 0x10) != 0 && !(unsigned __int8)RtlpIsAttributeAceInSacl(v19, Heap_0, 0LL, &v28) )
          {
            if ( a2 && (LOBYTE(v20) = 1, (unsigned __int8)RtlpIsAttributeAceInSacl(v19, a2, v20, &v28)) && v28 )
            {
              Heap_0[1] += *((_WORD *)v19 + 1);
              if ( Heap_0[1] > v11 )
                goto LABEL_68;
              memmove(v12, v19, *((unsigned __int16 *)v19 + 1));
              ++Heap_0[2];
              v12[1] |= 0x10u;
            }
            else
            {
              Heap_0[1] += *((_WORD *)v19 + 1);
              if ( Heap_0[1] > v11 )
                goto LABEL_68;
              memmove(v12, v19, *((unsigned __int16 *)v19 + 1));
              ++Heap_0[2];
              v12[1] &= ~0x10u;
            }
            v12 += *((unsigned __int16 *)v19 + 1);
          }
          ++v18;
          v19 += *((unsigned __int16 *)v19 + 1);
        }
        v21 = 0;
        v22 = (_WORD *)(a1 + 8);
        while ( v21 < *(unsigned __int16 *)(a1 + 4) )
        {
          if ( *(_BYTE *)v22 != 18 )
          {
            Heap_0[1] += v22[1];
            if ( Heap_0[1] > v27 )
              goto LABEL_68;
            memmove(v12, v22, (unsigned __int16)v22[1]);
            ++Heap_0[2];
            v12 += (unsigned __int16)v22[1];
          }
          ++v21;
          v22 = (_WORD *)((char *)v22 + (unsigned __int16)v22[1]);
        }
        v11 = v27;
      }
      if ( a2 && v29 )
      {
        v23 = 0;
        v24 = (_WORD *)(a2 + 8);
        while ( v23 < *(unsigned __int16 *)(a2 + 4) )
        {
          if ( *(_BYTE *)v24 != 18 )
          {
            Heap_0[1] += v24[1];
            if ( Heap_0[1] > v11 )
              goto LABEL_68;
            memmove(v12, v24, (unsigned __int16)v24[1]);
            ++Heap_0[2];
            v12 += (unsigned __int16)v24[1];
          }
          ++v23;
          v24 = (_WORD *)((char *)v24 + (unsigned __int16)v24[1]);
        }
      }
      goto LABEL_65;
    }
    v26 = -1073741801;
  }
LABEL_69:
  *a3 = 0LL;
  return v26;
}

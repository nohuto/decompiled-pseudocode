/*
 * XREFs of RtlSelfRelativeToAbsoluteSD @ 0x1800DED30
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlSelfRelativeToAbsoluteSD(
        __int16 *Src,
        void *a2,
        _DWORD *a3,
        void *a4,
        unsigned int *a5,
        void *a6,
        unsigned int *a7,
        void *a8,
        unsigned int *a9,
        void *a10,
        unsigned int *a11)
{
  unsigned __int8 *v13; // rbx
  unsigned int v14; // r8d
  unsigned __int16 *v15; // rsi
  unsigned int v16; // edx
  unsigned __int8 *v17; // r14
  unsigned int v18; // r9d
  unsigned __int16 *v19; // rdi
  unsigned int v20; // eax
  unsigned int *v21; // r10
  __int64 result; // rax

  if ( Src[1] >= 0 )
    return 3221225703LL;
  if ( !*((_DWORD *)Src + 1) )
  {
    v13 = 0LL;
    goto LABEL_38;
  }
  v13 = (unsigned __int8 *)Src + *((unsigned int *)Src + 1);
  if ( !v13 )
  {
LABEL_38:
    v14 = 0;
    goto LABEL_5;
  }
  v14 = (4 * v13[1] + 11) & 0xFFFFFFFC;
LABEL_5:
  if ( (Src[1] & 4) != 0 && *((_DWORD *)Src + 4) )
  {
    v15 = (unsigned __int16 *)((char *)Src + *((unsigned int *)Src + 4));
    if ( v15 )
    {
      v16 = (v15[1] + 3) & 0xFFFFFFFC;
      goto LABEL_9;
    }
  }
  else
  {
    v15 = 0LL;
  }
  v16 = 0;
LABEL_9:
  if ( !*((_DWORD *)Src + 2) )
  {
    v17 = 0LL;
    goto LABEL_36;
  }
  v17 = (unsigned __int8 *)Src + *((unsigned int *)Src + 2);
  if ( !v17 )
  {
LABEL_36:
    v18 = 0;
    goto LABEL_12;
  }
  v18 = (4 * v17[1] + 11) & 0xFFFFFFFC;
LABEL_12:
  if ( (Src[1] & 0x10) != 0 && *((_DWORD *)Src + 3) )
  {
    v19 = (unsigned __int16 *)((char *)Src + *((unsigned int *)Src + 3));
    if ( v19 )
    {
      v20 = (v19[1] + 3) & 0xFFFFFFFC;
      goto LABEL_15;
    }
  }
  else
  {
    v19 = 0LL;
  }
  v20 = 0;
LABEL_15:
  v21 = a11;
  if ( a2 && (v21 = a11, *a3 >= 0x28u) && v14 <= *a9 && v16 <= *a5 && v20 <= *a7 && v18 <= *a11 )
  {
    memmove(a2, Src, 0x14uLL);
    *((_WORD *)a2 + 1) &= ~0x8000u;
    *((_QWORD *)a2 + 1) = 0LL;
    *((_QWORD *)a2 + 2) = 0LL;
    *((_QWORD *)a2 + 3) = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    if ( v13 )
    {
      memmove(a8, v13, 4LL * v13[1] + 8);
      *((_QWORD *)a2 + 1) = a8;
    }
    if ( v17 )
    {
      memmove(a10, v17, 4LL * v17[1] + 8);
      *((_QWORD *)a2 + 2) = a10;
    }
    if ( v19 )
    {
      memmove(a6, v19, v19[1]);
      *((_QWORD *)a2 + 3) = a6;
    }
    if ( v15 )
    {
      memmove(a4, v15, v15[1]);
      *((_QWORD *)a2 + 4) = a4;
    }
    return 0LL;
  }
  else
  {
    *a3 = 40;
    *v21 = v18;
    *a9 = v14;
    *a7 = v20;
    result = 3221225507LL;
    *a5 = v16;
  }
  return result;
}

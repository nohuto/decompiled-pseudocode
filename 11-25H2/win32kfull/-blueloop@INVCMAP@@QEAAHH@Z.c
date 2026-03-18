/*
 * XREFs of ?blueloop@INVCMAP@@QEAAHH@Z @ 0x1400CDFD0
 * Callers:
 *     ?greenloop@INVCMAP@@QEAAHH@Z @ 0x1400CDDBC (-greenloop@INVCMAP@@QEAAHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall INVCMAP::blueloop(INVCMAP *this, int a2)
{
  unsigned int v2; // ebp
  int v3; // r14d
  int v4; // r10d
  int v5; // ebx
  int v7; // edi
  int v8; // ecx
  int v9; // r15d
  unsigned int v10; // eax
  int v11; // edx
  int v12; // r8d
  unsigned int *v13; // rcx
  _BYTE *v14; // r9
  int v15; // r8d
  int v16; // edx
  unsigned int v17; // ecx
  unsigned int *v18; // rax
  _BYTE *v19; // r9
  __int64 result; // rax

  v2 = 0;
  v3 = *((_DWORD *)this + 29);
  v4 = 2 * *((_DWORD *)this + 27);
  v5 = *((_DWORD *)this + 43);
  v7 = *((_DWORD *)this + 44);
  if ( a2 )
  {
    v5 = 0;
    *((_DWORD *)this + 42) = *((_DWORD *)this + 2);
    v8 = *((_DWORD *)this + 28);
    *((_DWORD *)this + 47) = *((_DWORD *)this + 8);
    *((_DWORD *)this + 45) = v8;
    v7 = v8 - 1;
  }
  v9 = v5;
  v10 = *((_DWORD *)this + 5);
  v11 = *((_DWORD *)this + 42);
  v12 = *((_DWORD *)this + 47);
  v13 = (unsigned int *)*((_QWORD *)this + 6);
  v14 = (_BYTE *)*((_QWORD *)this + 9);
  while ( v11 <= v7 )
  {
    if ( *v13 > v10 )
    {
      if ( v11 > *((_DWORD *)this + 42) )
      {
        *((_DWORD *)this + 42) = v11;
        v9 = v11;
        *((_QWORD *)this + 6) = v13;
        *((_QWORD *)this + 9) = v14;
        *((_DWORD *)this + 5) = v10;
        *((_DWORD *)this + 47) = v12;
      }
      v2 = 1;
      do
      {
        if ( *v13 <= v10 )
          break;
        *v13 = v10;
        ++v11;
        v10 += v12;
        *v14++ = v3;
        v12 += v4;
        ++v13;
      }
      while ( v11 <= v7 );
      break;
    }
    ++v11;
    ++v13;
    ++v14;
    v10 += v12;
    v12 += v4;
  }
  v15 = *((_DWORD *)this + 47) - v4;
  v16 = *((_DWORD *)this + 42) - 1;
  v17 = *((_DWORD *)this + 5) - v15;
  v18 = (unsigned int *)(*((_QWORD *)this + 6) - 4LL);
  v19 = (_BYTE *)(*((_QWORD *)this + 9) - 1LL);
  if ( v2 )
    goto LABEL_17;
  while ( v16 >= v5 )
  {
    if ( *v18 > v17 )
    {
      *((_DWORD *)this + 42) = v16;
      v2 = 1;
      *((_QWORD *)this + 6) = v18;
      *((_QWORD *)this + 9) = v19;
      *((_DWORD *)this + 5) = v17;
      *((_DWORD *)this + 47) = v15;
LABEL_17:
      while ( v16 >= v5 )
      {
        if ( *v18 <= v17 )
        {
          v9 = v16 + 1;
          goto LABEL_21;
        }
        *v18 = v17;
        --v16;
        *v19 = v3;
        --v18;
        --v19;
        v15 -= v4;
        v17 -= v15;
      }
      break;
    }
    --v16;
    --v18;
    --v19;
    v15 -= v4;
    v17 -= v15;
  }
LABEL_21:
  result = v2;
  if ( v2 )
    *((_DWORD *)this + 45) = v9;
  return result;
}

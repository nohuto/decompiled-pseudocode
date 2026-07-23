/*
 * XREFs of EmonSaveProfilingContextInternal @ 0x140598FB4
 * Callers:
 *     EmonSaveProfilingContext @ 0x140BF36D0 (EmonSaveProfilingContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EmonSaveProfilingContextInternal(int a1, int a2)
{
  __int64 v2; // r8
  int v3; // ecx
  int v4; // ecx
  __int64 result; // rax
  unsigned int v6; // r10d
  int v7; // edx
  __int64 i; // r9
  __int64 v9; // rbx
  _DWORD *v10; // rdi
  unsigned __int64 v11; // rax

  v2 = *(_QWORD *)(KiProcessorBlock[a2] + 88);
  if ( a1 )
  {
    v3 = a1 - 1;
    if ( v3 )
    {
      v4 = v3 - 99;
      if ( v4 )
      {
        if ( v4 == 1 )
          v2 += 72LL;
        else
          v2 = 0LL;
      }
      else
      {
        v2 += 48LL;
      }
    }
    else
    {
      v2 += 24LL;
    }
  }
  result = *(unsigned int *)(v2 + 4);
  v6 = 0;
  if ( (_DWORD)result )
  {
    while ( 1 )
    {
      v7 = 0;
      for ( i = 0LL; (unsigned int)i <= *(_DWORD *)(v2 + 8); i = (unsigned int)(i + 1) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v2 + 16) + 48 * i + 28) != 3 && ++v7 > v6 )
          goto LABEL_16;
      }
      i = 0xFFFFFFFFLL;
LABEL_16:
      v9 = *(_QWORD *)(v2 + 16);
      if ( *(_DWORD *)(v9 + 48 * i + 24) != 2 )
        goto LABEL_22;
      v10 = *(_DWORD **)(v9 + 48 * i + 16);
      if ( !*(_DWORD *)v2 )
        break;
      if ( *(_DWORD *)v2 == 1 )
      {
        *(_QWORD *)(v9 + 48 * i) = __readmsr((int)i + 777);
        v11 = __readmsr(0x38Du);
        LODWORD(v11) = (15LL << (4 * (unsigned __int8)i)) & v11;
LABEL_21:
        *v10 = v11;
      }
LABEL_22:
      result = *(unsigned int *)(v2 + 4);
      if ( ++v6 >= (unsigned int)result )
        return result;
    }
    *(_QWORD *)(v9 + 48 * i) = __readmsr((int)i + 193);
    v11 = __readmsr((int)i + 390);
    goto LABEL_21;
  }
  return result;
}

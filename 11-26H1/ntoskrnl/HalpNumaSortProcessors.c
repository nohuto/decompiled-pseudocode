/*
 * XREFs of HalpNumaSortProcessors @ 0x140CB8688
 * Callers:
 *     HalpNumaInitializeStaticConfiguration @ 0x140CB7A3C (HalpNumaInitializeStaticConfiguration.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpNumaSortProcessors(unsigned int a1, __int64 a2, int *a3)
{
  unsigned int v3; // r9d
  char v6; // di
  __int64 v7; // rbx
  int *v8; // rdx
  __int64 v9; // r10
  int *v10; // r8
  int v11; // ecx
  int v12; // ecx

  if ( a1 >= 2 )
  {
    v3 = a1 - 1;
    do
    {
      v6 = 0;
      v7 = v3;
      v8 = a3 + 1;
      v9 = a2 - (_QWORD)a3;
      v10 = a3;
      do
      {
        if ( *v10 > (unsigned int)*v8 || *v10 == *v8 && *(int *)((char *)v10 + v9) > *(unsigned int *)((char *)v8 + v9) )
        {
          v11 = *(int *)((char *)v10 + v9);
          v6 = 1;
          *(int *)((char *)v10 + v9) = *(int *)((char *)v8 + v9);
          *(int *)((char *)v8 + v9) = v11;
          v12 = *v10;
          *v10 = *v8;
          *v8 = v12;
        }
        ++v8;
        ++v10;
        --v7;
      }
      while ( v7 );
      if ( !v6 )
        break;
      --v3;
    }
    while ( v3 );
  }
}

/*
 * XREFs of PpmHeteroHgsGetContainmentType @ 0x1404F8888
 * Callers:
 *     PpmHeteroHgsUpdateContainmentConfiguration @ 0x14051704C (PpmHeteroHgsUpdateContainmentConfiguration.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PpmHeteroHgsGetContainmentType(unsigned __int16 *a1, unsigned int *a2)
{
  unsigned __int64 result; // rax
  unsigned int v3; // r8d
  _QWORD *v6; // r10
  __int64 v7; // rbx
  _DWORD *v8; // r9
  unsigned int i; // r8d
  unsigned __int16 v10; // si
  unsigned __int16 *v11; // rbp
  unsigned __int16 *v12; // r14
  unsigned __int16 v13; // r12
  unsigned __int16 j; // dx
  unsigned __int64 v15; // rcx
  _UNKNOWN *retaddr; // [rsp+20h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v3 = PpmParkNumNodes;
  *a2 = 3;
  if ( v3 )
  {
    v6 = (_QWORD *)(PpmParkNodes + 1240);
    v7 = v3;
    do
    {
      v8 = (_DWORD *)*v6;
      for ( i = 0; i < *(_DWORD *)*v6; ++i )
      {
        if ( v8 )
        {
          v10 = *a1;
          v11 = a1;
          v12 = (unsigned __int16 *)&v8[66 * i + 4];
          v13 = *v12;
          if ( *a1 < *v12 )
            v11 = (unsigned __int16 *)&v8[66 * i + 4];
          else
            v13 = *a1;
          if ( v10 >= *v12 )
            v10 = *v12;
          for ( j = 0; j < v10; ++j )
          {
            v15 = *(_QWORD *)&a1[4 * j + 4];
            result = v15 & *(_QWORD *)&v12[4 * j + 4];
            if ( result != v15 )
              goto LABEL_19;
          }
          if ( v11 != v12 )
          {
            while ( j < v13 )
            {
              result = j;
              if ( *(_QWORD *)&a1[4 * j + 4] )
                goto LABEL_19;
              ++j;
            }
          }
          *a2 = i;
          *((_BYTE *)v8 + 808) = 1;
          result = *a2;
          v8[203] = result;
          break;
        }
LABEL_19:
        ;
      }
      v6 += 158;
      --v7;
    }
    while ( v7 );
  }
  return result;
}

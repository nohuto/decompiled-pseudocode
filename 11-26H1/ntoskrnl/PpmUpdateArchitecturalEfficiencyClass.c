/*
 * XREFs of PpmUpdateArchitecturalEfficiencyClass @ 0x140CDAB70
 * Callers:
 *     PoInitHeteroDetection @ 0x140CD4948 (PoInitHeteroDetection.c)
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 PpmUpdateArchitecturalEfficiencyClass()
{
  unsigned int v0; // edi
  unsigned __int8 v1; // bl
  char v2; // r14
  unsigned int v3; // esi
  unsigned __int8 *v4; // r15
  __int64 Prcb; // rax
  unsigned __int8 v6; // si
  unsigned __int8 *v7; // r8
  unsigned __int8 v8; // dl
  __int64 v9; // r9
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al
  unsigned int v12; // r12d
  unsigned __int8 v13; // bp
  unsigned int v14; // r15d
  unsigned __int8 *v15; // r13
  __int64 v16; // rax
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // cl
  unsigned int v19; // r13d
  unsigned __int8 *v20; // r15
  __int64 v21; // rax
  unsigned __int8 v22; // dl
  unsigned __int8 v23; // cl
  __int64 result; // rax
  unsigned int v25; // esi
  unsigned __int8 v26; // bl
  char v27; // [rsp+20h] [rbp-848h]
  unsigned __int8 v28; // [rsp+30h] [rbp-838h] BYREF
  char v29; // [rsp+31h] [rbp-837h] BYREF

  v0 = KeNumberProcessors_0;
  v1 = 0;
  memset_0(&v28, 0, 0x800uLL);
  v2 = 2;
  if ( v0 <= 0x800 )
  {
    v3 = 0;
    if ( v0 )
    {
      v4 = &v28;
      do
      {
        Prcb = KeGetPrcb(v3++);
        *v4++ = *(_BYTE *)(Prcb + 35352);
      }
      while ( v3 < v0 );
    }
    v6 = v28;
    if ( v0 > 1 )
    {
      v7 = (unsigned __int8 *)&v29;
      v8 = v28;
      v9 = v0 - 1;
      do
      {
        v10 = v6;
        if ( v6 >= *v7 )
          v10 = *v7;
        v6 = v10;
        v11 = v8;
        if ( v8 <= *v7 )
          v11 = *v7;
        ++v7;
        v8 = v11;
        --v9;
      }
      while ( v9 );
      if ( v6 != v11 )
      {
        v12 = v0;
        v27 = 0;
        v13 = 0;
LABEL_14:
        v14 = 0;
        v15 = &v28;
        do
        {
          if ( *v15 == v6 )
          {
            v27 = 1;
            v16 = KeGetPrcb(v14);
            v17 = v1;
            --v12;
            *(_BYTE *)(v16 + 35352) = v13;
            if ( v1 <= v13 )
              v17 = v13;
            v1 = v17;
          }
          ++v14;
          ++v15;
        }
        while ( v14 < v0 );
        while ( v12 )
        {
          ++v6;
          v18 = v13 + 1;
          if ( !v27 )
            v18 = v13;
          v19 = 0;
          v27 = 0;
          v13 = v18;
          if ( !v18 )
            goto LABEL_14;
          v20 = &v28;
          do
          {
            if ( *v20 == v6 )
            {
              v27 = 1;
              v21 = KeGetPrcb(v19);
              v22 = v13;
              *(_BYTE *)(v21 + 35352) = v13;
              if ( *(_BYTE *)(v21 + 141) == 2 )
              {
                *(_BYTE *)(v21 + 35352) = 1;
                v22 = 1;
              }
              v23 = v1;
              --v12;
              if ( v1 <= v22 )
                v23 = v22;
              v1 = v23;
            }
            ++v19;
            ++v20;
          }
          while ( v19 < v0 );
        }
      }
    }
  }
  result = (unsigned int)PpmHeteroMultiCoreClassesRegValue;
  if ( PpmHeteroMultiCoreClassesRegValue == -1 )
    result = v1 >= 2u;
  v25 = 0;
  for ( PpmHeteroMultiCoreClassesEnabled = result; v25 < v0; ++v25 )
  {
    result = KeGetPrcb(v25);
    if ( *(_BYTE *)(result + 35352) && !PpmHeteroMultiCoreClassesEnabled )
      *(_BYTE *)(result + 35352) = 1;
  }
  v26 = v1 + 1;
  PpmMaxCoreClasses = v26;
  if ( !PpmHeteroMultiCoreClassesEnabled )
  {
    result = v26;
    if ( v26 < 2u )
      v2 = v26;
    PpmMaxCoreClasses = v2;
  }
  return result;
}

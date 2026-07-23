/*
 * XREFs of ObpObjectRefsByStackAddTrace @ 0x140AB76B0
 * Callers:
 *     ObpPushRefDerefInfoNoLock @ 0x1407732BC (ObpPushRefDerefInfoNoLock.c)
 * Callees:
 *     ObpTraceAllocateMemory @ 0x140531C58 (ObpTraceAllocateMemory.c)
 *     ObpTraceFreeMemory @ 0x140532F70 (ObpTraceFreeMemory.c)
 *     ObpStackDbAllocRoutine @ 0x1407C8210 (ObpStackDbAllocRoutine.c)
 *     ObpStackDbFreeRoutine @ 0x1407C8230 (ObpStackDbFreeRoutine.c)
 *     ObpGetObjectRefsByStack @ 0x140AB7A04 (ObpGetObjectRefsByStack.c)
 */

void __fastcall ObpObjectRefsByStackAddTrace(__int64 a1, __int16 a2, unsigned int a3, __int64 a4)
{
  __int16 v5; // r13
  __int64 ObjectRefsByStack; // rax
  __int64 v7; // r14
  int v8; // edi
  __int64 v9; // r9
  char v10; // r12
  __int64 v11; // r8
  _QWORD *v12; // rsi
  _QWORD *v13; // rax
  unsigned __int64 Memory; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // r8d
  __int64 v19; // r9
  __int64 v20; // rdi
  _QWORD *v21; // rax
  char *v22; // r8
  char v23; // cl
  unsigned __int64 v24; // rcx
  unsigned int v25; // edi
  __int64 v26; // r9
  __int64 v27; // r13
  void *v28; // rcx
  _QWORD *v29; // r10
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  unsigned int v32; // edi
  __int64 v33; // rbx
  char *v34; // r8
  unsigned __int64 v35; // rcx
  __int64 v36; // r10
  __int64 v37; // r12
  _QWORD *v38; // r9
  __int64 v39; // rdx
  void *v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // [rsp+20h] [rbp-48h]
  __int64 v44; // [rsp+20h] [rbp-48h]
  __int64 v45; // [rsp+20h] [rbp-48h]
  __int64 v46; // [rsp+20h] [rbp-48h]
  __int64 v47; // [rsp+20h] [rbp-48h]

  v5 = a2;
  ObjectRefsByStack = ObpGetObjectRefsByStack();
  v7 = ObjectRefsByStack;
  if ( ObjectRefsByStack )
  {
    v8 = *(_DWORD *)(ObjectRefsByStack + 36) >> 5;
    v9 = -1LL << (*(_BYTE *)(ObjectRefsByStack + 36) & 0x1F);
    v10 = -1;
    v11 = a4 & v9;
    if ( v8 )
    {
      v43 = a4 & v9;
      v12 = (_QWORD *)(*(_QWORD *)(ObjectRefsByStack + 40)
                     + 8LL
                     * ((v8 - 1) & (HIBYTE(v43)
                                  - 877075889
                                  + 442596621 * (unsigned __int8)v11
                                  + 37
                                  * (BYTE6(v43)
                                   + 37
                                   * (BYTE5(v43)
                                    + 37
                                    * (BYTE4(v43) + 37
                                                  * (BYTE3(v43) + 37 * (BYTE2(v43) + 37 * (unsigned int)BYTE1(v43)))))))));
      while ( 1 )
      {
        v13 = (_QWORD *)*v12;
        v12 = v13;
        if ( ((unsigned __int8)v13 & 1) != 0 )
          break;
        if ( v11 == (v9 & v13[1]) )
        {
          if ( v13 )
            goto LABEL_11;
          break;
        }
      }
    }
    Memory = ObpTraceAllocateMemory(24LL);
    v12 = (_QWORD *)Memory;
    if ( Memory )
    {
      *(_QWORD *)(Memory + 8) = a4;
      *(_QWORD *)(Memory + 16) = 0LL;
      v15 = (unsigned int)(2 * (*(_DWORD *)(v7 + 36) >> 5));
      if ( *(_DWORD *)(v7 + 32) >= (unsigned int)v15 )
      {
        if ( (unsigned int)v15 < 4 )
          v15 = 4LL;
        v22 = (char *)ObpStackDbAllocRoutine(8LL * (unsigned int)v15);
        if ( v22 )
        {
          if ( (((_DWORD)v15 - 1) & (unsigned int)v15) != 0 )
          {
            v23 = -1;
            do
            {
              ++v23;
              LODWORD(v15) = (unsigned int)v15 >> 1;
            }
            while ( (_DWORD)v15 );
            v15 = (unsigned int)(1 << v23);
          }
          if ( (unsigned int)v15 > 0x4000000 )
            v15 = 0x4000000LL;
          v24 = (unsigned int)v15;
          if ( v22 > &v22[8 * v15] )
            v24 = 0LL;
          if ( v24 )
            memset64(v22, (v7 + 32) | 1, v24);
          v25 = 0;
          v26 = -1LL << (*(_BYTE *)(v7 + 36) & 0x1F);
          if ( (*(_DWORD *)(v7 + 36) & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v27 = *(_QWORD *)(v7 + 40);
              while ( 1 )
              {
                v29 = *(_QWORD **)(v27 + 8LL * v25);
                if ( ((unsigned __int8)v29 & 1) != 0 )
                  break;
                *(_QWORD *)(v27 + 8LL * v25) = *v29;
                v45 = v26 & v29[1];
                v30 = ((_DWORD)v15 - 1) & (HIBYTE(v45)
                                         + 37
                                         * (BYTE6(v45)
                                          + 37
                                          * (BYTE5(v45)
                                           + 37
                                           * (BYTE4(v45)
                                            + 37
                                            * (BYTE3(v45)
                                             + 374026047
                                             + 37
                                             * (BYTE2(v45) + 37 * (BYTE1(v45) + 37 * (unsigned int)(unsigned __int8)v45)))))));
                *v29 = *(_QWORD *)&v22[8 * v30];
                *(_QWORD *)&v22[8 * v30] = v29;
              }
              ++v25;
            }
            while ( v25 < *(_DWORD *)(v7 + 36) >> 5 );
            v5 = a2;
          }
          v28 = *(void **)(v7 + 40);
          *(_QWORD *)(v7 + 40) = v22;
          *(_DWORD *)(v7 + 36) = (32 * v15) | *(_DWORD *)(v7 + 36) & 0x1F;
          if ( v28 )
            ObpStackDbFreeRoutine(v28);
        }
        else if ( *(_DWORD *)(v7 + 36) < 0x20u )
        {
          goto LABEL_40;
        }
      }
      v44 = v12[1] & (-1LL << (*(_DWORD *)(v7 + 36) & 0x1F));
      v16 = *(_QWORD *)(v7 + 40);
      v17 = ((*(_DWORD *)(v7 + 36) >> 5) - 1) & (HIBYTE(v44)
                                               + 37
                                               * (BYTE6(v44)
                                                + 37
                                                * (BYTE5(v44)
                                                 + 37
                                                 * (BYTE4(v44)
                                                  + 37
                                                  * (BYTE3(v44)
                                                   + 374026047
                                                   + 37
                                                   * (BYTE2(v44)
                                                    + 37 * (BYTE1(v44) + 37 * (unsigned int)(unsigned __int8)v44)))))));
      *v12 = *(_QWORD *)(v16 + 8 * v17);
      *(_QWORD *)(v16 + 8 * v17) = v12;
      ++*(_DWORD *)(v7 + 32);
LABEL_11:
      v12[2] += v5;
      v18 = *(_DWORD *)(v7 + 52) >> 5;
      v19 = -1LL << (*(_BYTE *)(v7 + 52) & 0x1F);
      v20 = (unsigned int)v19 & a3;
      if ( v18 )
      {
        v12 = (_QWORD *)(*(_QWORD *)(v7 + 56)
                       + 8LL
                       * ((v18 - 1) & (HIBYTE(v20)
                                     - 877075889
                                     + 442596621 * (unsigned __int8)v20
                                     + 37
                                     * (BYTE6(v20)
                                      + 37
                                      * (BYTE5(v20)
                                       + 37
                                       * (BYTE4(v20)
                                        + 37 * (BYTE3(v20) + 37 * (BYTE2(v20) + 37 * (unsigned int)BYTE1(v20)))))))));
        while ( 1 )
        {
          v21 = (_QWORD *)*v12;
          v12 = v21;
          if ( ((unsigned __int8)v21 & 1) != 0 )
            break;
          if ( v20 == (v19 & v21[1]) )
          {
            if ( !v21 )
              break;
            goto LABEL_16;
          }
        }
      }
      v31 = ObpTraceAllocateMemory(24LL);
      v32 = 0;
      v12 = (_QWORD *)v31;
      if ( !v31 )
        return;
      *(_QWORD *)(v31 + 8) = a3;
      *(_QWORD *)(v31 + 16) = 0LL;
      v33 = (unsigned int)(2 * (*(_DWORD *)(v7 + 52) >> 5));
      if ( *(_DWORD *)(v7 + 48) < (unsigned int)v33 )
      {
LABEL_63:
        v47 = v12[1] & (-1LL << (*(_DWORD *)(v7 + 52) & 0x1F));
        v41 = *(_QWORD *)(v7 + 56);
        v42 = ((*(_DWORD *)(v7 + 52) >> 5) - 1) & (HIBYTE(v47)
                                                 + 37
                                                 * (BYTE6(v47)
                                                  + 37
                                                  * (BYTE5(v47)
                                                   + 37
                                                   * (BYTE4(v47)
                                                    + 37
                                                    * (BYTE3(v47)
                                                     + 374026047
                                                     + 37
                                                     * (BYTE2(v47)
                                                      + 37 * (BYTE1(v47) + 37 * (unsigned int)(unsigned __int8)v47)))))));
        *v12 = *(_QWORD *)(v41 + 8 * v42);
        *(_QWORD *)(v41 + 8 * v42) = v12;
        ++*(_DWORD *)(v7 + 48);
LABEL_16:
        v12[2] += v5;
        return;
      }
      if ( (unsigned int)v33 < 4 )
        v33 = 4LL;
      v34 = (char *)ObpStackDbAllocRoutine(8LL * (unsigned int)v33);
      if ( v34 )
      {
        if ( (((_DWORD)v33 - 1) & (unsigned int)v33) != 0 )
        {
          do
          {
            ++v10;
            LODWORD(v33) = (unsigned int)v33 >> 1;
          }
          while ( (_DWORD)v33 );
          v33 = (unsigned int)(1 << v10);
        }
        if ( (unsigned int)v33 > 0x4000000 )
          v33 = 0x4000000LL;
        v35 = (unsigned int)v33;
        if ( v34 > &v34[8 * v33] )
          v35 = 0LL;
        if ( v35 )
        {
          memset64(v34, (v7 + 48) | 1, v35);
          v32 = 0;
        }
        v36 = -1LL << (*(_BYTE *)(v7 + 52) & 0x1F);
        if ( (*(_DWORD *)(v7 + 52) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v37 = *(_QWORD *)(v7 + 56);
            while ( 1 )
            {
              v38 = *(_QWORD **)(v37 + 8LL * v32);
              if ( ((unsigned __int8)v38 & 1) != 0 )
                break;
              *(_QWORD *)(v37 + 8LL * v32) = *v38;
              v46 = v36 & v38[1];
              v39 = ((_DWORD)v33 - 1) & (HIBYTE(v46)
                                       + 37
                                       * (BYTE6(v46)
                                        + 37
                                        * (BYTE5(v46)
                                         + 37
                                         * (BYTE4(v46)
                                          + 37
                                          * (BYTE3(v46)
                                           + 374026047
                                           + 37
                                           * (BYTE2(v46) + 37 * (BYTE1(v46) + 37 * (unsigned int)(unsigned __int8)v46)))))));
              *v38 = *(_QWORD *)&v34[8 * v39];
              *(_QWORD *)&v34[8 * v39] = v38;
            }
            ++v32;
          }
          while ( v32 < *(_DWORD *)(v7 + 52) >> 5 );
        }
        v40 = *(void **)(v7 + 56);
        *(_QWORD *)(v7 + 56) = v34;
        *(_DWORD *)(v7 + 52) = (32 * v33) | *(_DWORD *)(v7 + 52) & 0x1F;
        if ( v40 )
          ObpStackDbFreeRoutine(v40);
        goto LABEL_63;
      }
      if ( *(_DWORD *)(v7 + 52) >= 0x20u )
        goto LABEL_63;
LABEL_40:
      ObpTraceFreeMemory(v12);
    }
  }
}

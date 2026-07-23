/*
 * XREFs of MiFindBestZeroingProcessor @ 0x1402F6038
 * Callers:
 *     MiSelectBestZeroingProcessor @ 0x1402F59A4 (MiSelectBestZeroingProcessor.c)
 *     MiAddZeroingThread @ 0x140521E94 (MiAddZeroingThread.c)
 *     MiFindOptimalEngineToAddThread @ 0x14052203C (MiFindOptimalEngineToAddThread.c)
 *     MiSuitableZeroingProcessorAvailable @ 0x14052A72C (MiSuitableZeroingProcessorAvailable.c)
 * Callees:
 *     MiInitializeEngineWorkAffinity @ 0x1402F63C4 (MiInitializeEngineWorkAffinity.c)
 *     MiEngineAffinity @ 0x1402F6724 (MiEngineAffinity.c)
 *     MiGetNextAffinityWalker @ 0x1402F68CC (MiGetNextAffinityWalker.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiFindBestZeroingProcessor(__int64 a1, int *a2, int a3, unsigned int a4)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // r15
  int v13; // r14d
  unsigned int v14; // r13d
  __int64 v15; // rbx
  _QWORD **v16; // r13
  _WORD *v17; // rdi
  __int64 v18; // rbx
  unsigned int v19; // r12d
  __int64 v20; // r14
  __int64 v21; // r15
  unsigned int v22; // edx
  _QWORD *v23; // rcx
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rbx
  bool v26; // cc
  int v28; // [rsp+24h] [rbp-DCh]
  int v29; // [rsp+28h] [rbp-D8h]
  unsigned int v30; // [rsp+2Ch] [rbp-D4h]
  int v31; // [rsp+30h] [rbp-D0h]
  unsigned __int16 *v32; // [rsp+38h] [rbp-C8h]
  _WORD *v33; // [rsp+40h] [rbp-C0h]
  __int64 v35; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-70h] BYREF
  char v37; // [rsp+98h] [rbp-68h]
  bool v38; // [rsp+99h] [rbp-67h]
  int v39; // [rsp+9Ch] [rbp-64h]
  _BYTE v40[368]; // [rsp+A0h] [rbp-60h] BYREF

  v7 = a1;
  memset_0(&BugCheckParameter2, 0, 0x178uLL);
  result = 0LL;
  if ( !*a2 )
  {
    *(_QWORD *)(v7 + 40) = 0LL;
    *(_WORD *)(v7 + 32) = 0;
    *(_QWORD *)(v7 + 24) = -1LL;
    return result;
  }
  *(_OWORD *)v7 = 0LL;
  *(_OWORD *)(v7 + 16) = 0LL;
  *(_OWORD *)(v7 + 32) = 0LL;
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_DWORD *)(v7 + 44) = -1;
  *(_DWORD *)(v7 + 40) = 5;
  result = MiEngineAffinity(a2, v8, *((_QWORD *)a2 + 17));
  v28 = v11;
  v12 = result;
  v13 = v11;
  if ( !a4 || a2[3] != a2[2] )
  {
    v14 = *(_DWORD *)(result + 8);
    v39 = *a2;
    v15 = v39;
    LODWORD(BugCheckParameter2) = *(_DWORD *)(v10 + 56);
    HIDWORD(BugCheckParameter2) = *(_DWORD *)(v10 + 56);
    v37 = *((_BYTE *)a2 + 39);
    v31 = v11;
    v30 = v14;
    memset_0(v40, 0, 0x108uLL);
    v29 = 0;
    v38 = a3 == 0;
    result = 32 * v15;
    v35 = result;
    *(_DWORD *)&v40[result + 272] = 0;
    *(_DWORD *)&v40[result + 288] = 0;
    *(_DWORD *)&v40[result + 292] = -1;
    if ( !v14 )
      goto LABEL_22;
    result = v12 + 16;
    v32 = (unsigned __int16 *)(v12 + 16);
    v16 = (_QWORD **)(a2 + 28);
    v33 = (_WORD *)(v12 + 16);
LABEL_5:
    v17 = v33;
    v18 = 0LL;
    v19 = 0;
    v20 = 0LL;
    while ( 1 )
    {
      v21 = v20 + *((_QWORD *)a2 + 11);
      if ( *(_DWORD *)(v21 + 40) )
      {
        if ( (unsigned int)MiInitializeEngineWorkAffinity(a2, v19, a4) )
        {
          v17 = v32;
          v16 = (_QWORD **)(a2 + 28);
          v31 = 1;
        }
        v22 = (unsigned __int16)*v17;
        result = 0LL;
        v23 = *v16;
        if ( *v17 )
        {
          while ( !*v23 )
          {
            result = (unsigned int)(result + 1);
            v23 += 2;
            if ( (unsigned int)result >= v22 )
              goto LABEL_12;
          }
LABEL_13:
          if ( v18 )
          {
            result = *(unsigned int *)(v18 + 32);
            if ( *(_DWORD *)(v21 + 32) < (unsigned int)result )
              v18 = v21;
          }
          else
          {
            v18 = v21;
          }
          goto LABEL_15;
        }
LABEL_12:
        if ( (_DWORD)result != v22 )
          goto LABEL_13;
      }
LABEL_15:
      v17 = v32;
      ++v19;
      v20 += 48LL;
      v16 = (_QWORD **)(a2 + 28);
      if ( v19 >= v30 )
      {
        v7 = a1;
        v13 = v28;
        if ( v18 )
        {
          v24 = (__int64)((unsigned __int128)((v18 - *((_QWORD *)a2 + 11)) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
          v25 = (v24 >> 63) + v24;
          MiInitializeEngineWorkAffinity(a2, (unsigned int)v25, a4);
          v33 = v32;
          *(_DWORD *)&v40[v35 + 276] = *v32;
          *(_QWORD *)&v40[v35 + 280] = *((_QWORD *)a2 + 14);
          *(_DWORD *)&v40[v35 + 268] = 1;
          result = MiGetNextAffinityWalker((ULONG_PTR)&BugCheckParameter2);
          if ( (int)result >= 0 )
          {
            result = 0xFFFFFFFFLL;
            if ( *(int *)(a1 + 40) > 0 )
            {
              *(_OWORD *)a1 = 0LL;
              *(_OWORD *)(a1 + 16) = 0LL;
              *(_OWORD *)(a1 + 32) = 0LL;
              *(_QWORD *)(a1 + 48) = 0LL;
              *(_DWORD *)(a1 + 44) = v25;
            }
            if ( *(_DWORD *)(a1 + 40) )
            {
              if ( ++v29 < v30 )
                goto LABEL_5;
            }
          }
        }
        if ( v28 )
        {
          if ( (v28 & 2) != 0 )
          {
            v26 = *(_DWORD *)(a1 + 40) <= 1;
          }
          else
          {
            if ( (v28 & 8) == 0 )
              goto LABEL_22;
            v26 = *(_DWORD *)(a1 + 40) <= 3;
          }
          if ( !v26 )
            ++a2[5];
        }
LABEL_22:
        if ( *(_DWORD *)(v7 + 44) == -1 )
        {
          *(_DWORD *)(v7 + 40) = 5;
          if ( v13 )
          {
            ++a2[6];
          }
          else if ( v31 )
          {
            ++a2[7];
          }
        }
        return result;
      }
    }
  }
  return result;
}

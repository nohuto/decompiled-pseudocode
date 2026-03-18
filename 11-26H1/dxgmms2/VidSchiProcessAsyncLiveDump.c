/*
 * XREFs of VidSchiProcessAsyncLiveDump @ 0x140054CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x14002BF80 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

void __fastcall VidSchiProcessAsyncLiveDump(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  _BYTE *v4; // rbx
  unsigned int *v5; // rbx
  _BYTE *Pool2; // rax
  __int64 v7; // r13
  _QWORD *v8; // r14
  _QWORD *v9; // rax
  _OWORD *v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rcx
  int v13; // [rsp+30h] [rbp-A1h]
  _BYTE v14[48]; // [rsp+38h] [rbp-99h] BYREF
  PVOID P; // [rsp+68h] [rbp-69h]
  _BYTE v16[120]; // [rsp+70h] [rbp-61h] BYREF
  int v17; // [rsp+E8h] [rbp+17h]

  P = 0LL;
  v17 = 0;
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v14, (unsigned __int64 *)(a1 + 6880), 1, 0);
  AcquireSpinLock::Release((AcquireSpinLock *)v14);
  v2 = *(unsigned int *)(a1 + 6936);
  if ( (unsigned int)v2 <= 3 )
  {
    Pool2 = v16;
    P = v16;
    if ( (_DWORD)v2 )
    {
      memset(v16, 0, 40 * v2);
      Pool2 = P;
    }
  }
  else
  {
    v3 = (unsigned int)v2;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v2 < 0x28 )
    {
      v4 = 0LL;
      goto LABEL_4;
    }
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, 40 * v2, 895641942LL);
    P = Pool2;
  }
  v17 = v2;
  v3 = v2;
  v4 = Pool2;
  if ( Pool2 )
  {
    v7 = 0LL;
    v8 = *(_QWORD **)(a1 + 6920);
    while ( v8 != (_QWORD *)(a1 + 6920) )
    {
      v9 = v8;
      v10 = v8 - 1;
      v8 = (_QWORD *)*v8;
      if ( (_QWORD *)v8[1] != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
        __fastfail(3u);
      *v11 = v8;
      v8[1] = v11;
      v12 = 5 * v7;
      *(_OWORD *)&v4[8 * v12] = *v10;
      *(_OWORD *)&v4[8 * v12 + 16] = v10[1];
      *(_QWORD *)&v4[8 * v12 + 32] = *((_QWORD *)v10 + 4);
      ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(a1 + 6944), v10);
      v7 = (unsigned int)(v7 + 1);
    }
  }
LABEL_4:
  *(_DWORD *)(a1 + 6936) = 0;
  KeSetEvent((PRKEVENT)(a1 + 7040), 0, 0);
  if ( v4 && (_DWORD)v2 )
  {
    v5 = (unsigned int *)(v4 + 28);
    do
    {
      if ( *(v5 - 7) )
      {
        WdLogSingleEntry1(3LL, (int)*(v5 - 7));
        WdLogGlobalForLineNumber = 31516;
      }
      else
      {
        LOBYTE(v13) = 1;
        DxgCreateLiveDumpWithWdLogs(403LL, 2079LL, *(v5 - 1), *v5, v5[1], v13);
      }
      v5 += 10;
      --v3;
    }
    while ( v3 );
  }
  if ( P != v16 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
}

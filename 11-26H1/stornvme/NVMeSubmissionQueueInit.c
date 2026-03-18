/*
 * XREFs of NVMeSubmissionQueueInit @ 0x140006270
 * Callers:
 *     AdminQueueInitialize @ 0x1400067B0 (AdminQueueInitialize.c)
 *     IoQueuesInitialize @ 0x140014D10 (IoQueuesInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeSubmissionQueueInit(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rbx
  int v9; // esi
  __int16 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  int v23; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v9 = a3;
  v23 = 0;
  if ( a3 )
    v12 = 0;
  else
    v12 = *(_WORD *)(a1 + 234);
  v13 = 324LL;
  if ( a3 )
    v13 = 326LL;
  v14 = *(unsigned __int16 *)(v13 + a1);
  v15 = a5;
  *(_QWORD *)a2 = a4;
  if ( v15 )
    *(_QWORD *)(a2 + 8) = v15;
  else
    *(_QWORD *)(a2 + 8) = StorPortGetPhysicalAddress(a1, 0LL, a4, &v23);
  v16 = (unsigned int)(2 * *(_DWORD *)(a1 + 200) * v9);
  v17 = *(_QWORD *)(a1 + 176) + 4096LL;
  *(_WORD *)(a2 + 48) = v9;
  v18 = v17 + v16;
  *(_QWORD *)(a2 + 50) = 0LL;
  *(_QWORD *)(a2 + 24) = a6;
  *(_QWORD *)(a2 + 32) = a7;
  result = a8;
  *(_QWORD *)(a2 + 40) = a8;
  *(_QWORD *)(a2 + 16) = v18;
  *(_WORD *)(a2 + 58) = 0;
  *(_WORD *)(a2 + 60) = v12;
  *(_WORD *)(a2 + 136) = 0;
  *(_DWORD *)(a2 + 140) = 0;
  if ( (_WORD)v14 )
  {
    v20 = 0LL;
    v21 = v14;
    do
    {
      v8 += 16LL;
      result = *(_QWORD *)(a2 + 24);
      v22 = v20 + *(_QWORD *)a2;
      v20 += 64LL;
      *(_QWORD *)(v8 + result - 16) = v22;
      --v21;
    }
    while ( v21 );
  }
  return result;
}

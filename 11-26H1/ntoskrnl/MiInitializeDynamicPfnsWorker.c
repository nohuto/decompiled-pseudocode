/*
 * XREFs of MiInitializeDynamicPfnsWorker @ 0x1406E9410
 * Callers:
 *     MiCreateDynamicPfns @ 0x140865E98 (MiCreateDynamicPfns.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiInitializeNewPfns @ 0x1406E6548 (MiInitializeNewPfns.c)
 *     MiCreatePfnTemplate @ 0x1406E70E8 (MiCreatePfnTemplate.c)
 *     MiInitializeNewPfnsLockProtos @ 0x1406E9584 (MiInitializeNewPfnsLockProtos.c)
 */

unsigned __int64 __fastcall MiInitializeDynamicPfnsWorker(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned __int64 result; // rax
  __int64 v8; // r12
  unsigned __int16 *v9; // rdx
  unsigned __int64 *BugCheckParameter4; // r14
  int v11; // ecx
  unsigned __int8 v12; // r13
  unsigned __int16 v13; // r8
  unsigned __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // [rsp+40h] [rbp-40h]
  __int64 **v17; // [rsp+48h] [rbp-38h]
  int v18[4]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v19; // [rsp+60h] [rbp-20h]
  __int128 v20; // [rsp+70h] [rbp-10h]
  char v21; // [rsp+C0h] [rbp+40h] BYREF
  int v22; // [rsp+D0h] [rbp+50h]
  __int64 v23; // [rsp+D8h] [rbp+58h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v5 = v4;
  if ( a3 == -1 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    a3 = 0LL;
  }
  else
  {
    v6 = 1024LL;
    v5 = v4 + (a3 << 10);
    if ( a3 + 1 == *(_QWORD *)(a1 + 24) )
      v6 = *(_QWORD *)(a1 + 16) - (a3 << 10);
  }
  result = *(_QWORD *)(a1 + 40);
  v8 = 0LL;
  v9 = *(unsigned __int16 **)a1;
  BugCheckParameter4 = 0LL;
  v11 = *(_DWORD *)(a1 + 32);
  v12 = 17;
  v22 = v11;
  v16 = (__int64)v9;
  v17 = (__int64 **)result;
  v23 = 0LL;
  v21 = 17;
  if ( result )
    BugCheckParameter4 = (unsigned __int64 *)(*(_QWORD *)(result + 8) + (a3 << 13));
  for ( ; v6; v6 -= v14 )
  {
    v13 = *v9;
    *(_OWORD *)v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    MiCreatePfnTemplate((__int64)v18, v11, v13);
    v14 = v6;
    if ( BugCheckParameter4 )
    {
      v15 = MiInitializeNewPfnsLockProtos(a1, v18, BugCheckParameter4, v5, v6, &v23, &v21);
      v12 = v21;
      v14 = v15;
      v8 = v23;
    }
    result = MiInitializeNewPfns(
               (__m128i *)(48 * v5 - 0x220000000000LL),
               v14,
               (const __m128i *)v18,
               v16,
               v22,
               v17,
               BugCheckParameter4);
    if ( BugCheckParameter4 )
    {
      result = MiUnlockProtoPoolPage(v8, v12);
      BugCheckParameter4 += v14;
    }
    v11 = v22;
    v5 += v14;
    v9 = (unsigned __int16 *)v16;
  }
  return result;
}

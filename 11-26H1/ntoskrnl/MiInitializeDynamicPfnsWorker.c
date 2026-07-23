/*
 * XREFs of MiInitializeDynamicPfnsWorker @ 0x1406EE0B0
 * Callers:
 *     MiCreateDynamicPfns @ 0x14086C278 (MiCreateDynamicPfns.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiInitializeNewPfns @ 0x1406EB1F8 (MiInitializeNewPfns.c)
 *     MiCreatePfnTemplate @ 0x1406EBD98 (MiCreatePfnTemplate.c)
 *     MiInitializeNewPfnsLockProtos @ 0x1406EE224 (MiInitializeNewPfnsLockProtos.c)
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
  char v12; // r13
  unsigned __int16 v13; // r8
  unsigned __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // [rsp+40h] [rbp-40h]
  __int64 **v19; // [rsp+48h] [rbp-38h]
  int v20[4]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v21; // [rsp+60h] [rbp-20h]
  __int128 v22; // [rsp+70h] [rbp-10h]
  char v23; // [rsp+C0h] [rbp+40h] BYREF
  int v24; // [rsp+D0h] [rbp+50h]
  __int64 v25; // [rsp+D8h] [rbp+58h] BYREF

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
  v24 = v11;
  v18 = (__int64)v9;
  v19 = (__int64 **)result;
  v25 = 0LL;
  v23 = 17;
  if ( result )
    BugCheckParameter4 = (unsigned __int64 *)(*(_QWORD *)(result + 8) + (a3 << 13));
  for ( ; v6; v6 -= v14 )
  {
    v13 = *v9;
    *(_OWORD *)v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    MiCreatePfnTemplate((__int64)v20, v11, v13);
    v14 = v6;
    if ( BugCheckParameter4 )
    {
      v15 = MiInitializeNewPfnsLockProtos(a1, v20, BugCheckParameter4, v5, v6, &v25, &v23);
      v12 = v23;
      v14 = v15;
      v8 = v25;
    }
    result = MiInitializeNewPfns(
               (__m128i *)(48 * v5 - 0x220000000000LL),
               v14,
               (const __m128i *)v20,
               v18,
               v24,
               v19,
               BugCheckParameter4);
    if ( BugCheckParameter4 )
    {
      LOBYTE(v16) = v12;
      result = MiUnlockProtoPoolPage(v8, v16, v17);
      BugCheckParameter4 += v14;
    }
    v11 = v24;
    v5 += v14;
    v9 = (unsigned __int16 *)v18;
  }
  return result;
}

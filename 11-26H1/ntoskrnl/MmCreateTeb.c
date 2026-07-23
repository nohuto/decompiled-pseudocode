/*
 * XREFs of MmCreateTeb @ 0x140999CF8
 * Callers:
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiCreatePebOrTeb @ 0x140999EB0 (MiCreatePebOrTeb.c)
 *     MiInitializeTeb @ 0x14099A1CC (MiInitializeTeb.c)
 */

__int64 __fastcall MmCreateTeb(ULONG_PTR BugCheckParameter1, _QWORD *a2, __int128 *a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // r14
  unsigned int v9; // ebx
  __int64 *v10; // rax
  __int64 v11; // rdx
  int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int128 v15; // xmm0
  unsigned int v16; // ebx
  __int64 result; // rax
  __int16 v18; // ax
  __int64 v19; // [rsp+20h] [rbp-C1h] BYREF
  __int128 v20; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v21; // [rsp+40h] [rbp-A1h]
  __int64 v22; // [rsp+48h] [rbp-99h]
  int v23; // [rsp+58h] [rbp-89h]
  __int16 v24; // [rsp+62h] [rbp-7Fh]
  __int64 v25; // [rsp+68h] [rbp-79h]
  _QWORD v26[10]; // [rsp+70h] [rbp-71h] BYREF
  _OWORD v27[3]; // [rsp+C0h] [rbp-21h] BYREF

  v5 = 0LL;
  v19 = 0LL;
  v9 = 4;
  *a5 = 0LL;
  v10 = *(__int64 **)(BugCheckParameter1 + 784);
  memset(v27, 0, sizeof(v27));
  if ( v10 )
  {
    v5 = *v10;
    if ( *v10 )
    {
      v18 = *(_WORD *)(BugCheckParameter1 + 1772);
      if ( v18 == 332 || (v9 = 6, v18 == 452) )
        v9 = 5;
    }
  }
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v27);
  v12 = MiCreatePebOrTeb(v9, v11, &v19);
  if ( v12 < 0 )
  {
    KiUnstackDetachProcess((__int64)v27, 0);
    return (unsigned int)v12;
  }
  else
  {
    memset_0(&v20, 0, 0x88uLL);
    v13 = *(_QWORD *)(BugCheckParameter1 + 736);
    v14 = v19;
    v15 = *a3;
    v21 = v13;
    v22 = 7680LL;
    v24 = 522;
    v25 = v19 + 4712;
    v26[0] = a2[2];
    v26[1] = a2[3];
    v26[2] = a2[4];
    v26[6] = v26;
    v26[3] = a2[5];
    v26[4] = a2[6];
    v26[5] = a2[7];
    v23 = 65534;
    v20 = v15;
    v26[7] = v5;
    v16 = MiInitializeTeb(v19, &v20, v9);
    KiUnstackDetachProcess((__int64)v27, 0);
    result = v16;
    *a5 = v14;
  }
  return result;
}

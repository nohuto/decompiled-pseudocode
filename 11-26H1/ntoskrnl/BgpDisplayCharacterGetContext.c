/*
 * XREFs of BgpDisplayCharacterGetContext @ 0x140C55BB4
 * Callers:
 *     BgpConsoleInitialize @ 0x140C56420 (BgpConsoleInitialize.c)
 *     BgpBcInitializeCriticalMode @ 0x140D1AA6C (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140357C64 (BgpFwAllocateMemory.c)
 *     BgpTxtCreateRegion @ 0x140C57CF0 (BgpTxtCreateRegion.c)
 *     BgpTxtDestroyRegion @ 0x140C57F4C (BgpTxtDestroyRegion.c)
 */

__int64 __fastcall BgpDisplayCharacterGetContext(__int64 a1, int *a2, int a3)
{
  __int64 v3; // rdi
  __int64 Memory; // rbx
  int v8; // r8d
  __int64 v10; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v11[6]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v12; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v12 = 0LL;
  Memory = BgpFwAllocateMemory(0x20uLL);
  if ( Memory )
  {
    v8 = *a2;
    v11[1] = a2[1];
    v11[0] = v8;
    v11[2] = v8;
    v10 = 0LL;
    if ( (int)BgpTxtCreateRegion((unsigned int)&v10, (unsigned int)v11, a1, 0, (__int64)&v12, a3) < 0 )
    {
      BgpFwFreeMemory(Memory);
      if ( v12 )
        BgpTxtDestroyRegion(v12);
    }
    else
    {
      v3 = Memory;
      *(_QWORD *)(Memory + 12) = *(_QWORD *)a2;
      *(_DWORD *)(Memory + 20) = a2[2];
      *(_QWORD *)Memory = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(Memory + 8) = *(_DWORD *)(a1 + 16);
      *(_QWORD *)(Memory + 24) = v12;
    }
  }
  return v3;
}

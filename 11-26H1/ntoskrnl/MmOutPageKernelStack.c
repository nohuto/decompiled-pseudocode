/*
 * XREFs of MmOutPageKernelStack @ 0x140410180
 * Callers:
 *     KiOutSwapKernelStacks @ 0x14040FA14 (KiOutSwapKernelStacks.c)
 * Callees:
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     KeEnumerateKernelStackSegments @ 0x14040FEF8 (KeEnumerateKernelStackSegments.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MmOutPageKernelStack(__int64 a1)
{
  int v2; // ecx
  BOOL v3; // edx
  void *v4; // [rsp+20h] [rbp-89h] BYREF
  BOOL v5; // [rsp+28h] [rbp-81h]
  int v6; // [rsp+2Ch] [rbp-7Dh]
  unsigned int v7; // [rsp+30h] [rbp-79h]
  int v8; // [rsp+34h] [rbp-75h]
  bool v9; // [rsp+38h] [rbp-71h]
  __int16 v10; // [rsp+39h] [rbp-70h]
  int v11; // [rsp+3Ch] [rbp-6Dh]
  __int64 v12; // [rsp+40h] [rbp-69h]
  __int64 v13; // [rsp+48h] [rbp-61h]

  memset_0(&v4, 0, 0xC8uLL);
  if ( (MiFlags & 0x40) != 0 )
  {
    v6 = 20;
    v9 = (dword_140E37538 & 0x40) != 0;
    v7 = 8;
    v8 = 1;
    v4 = &unk_140E37480;
    if ( (dword_140E37538 & 0xF) != 0
      || &unk_140E37480 == (_UNKNOWN *)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      v2 = v7;
      v3 = (dword_140E37538 & 0xF) == 0;
    }
    else
    {
      v3 = 0;
      v2 = 9;
    }
    v5 = v3;
    v7 = v2 & 0xFFFFFFDB;
    v10 = 0;
    v11 = 0;
    v12 = 0LL;
    v13 = 0LL;
    KeEnumerateKernelStackSegments(a1);
    MiFlushTbList((__int64)&v4);
  }
}

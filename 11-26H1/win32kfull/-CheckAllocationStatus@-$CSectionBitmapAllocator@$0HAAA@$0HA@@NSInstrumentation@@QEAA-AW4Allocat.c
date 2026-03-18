/*
 * XREFs of ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1402F3880
 * Callers:
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1402F39DC (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<28672,112>::CheckAllocationStatus(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r10
  int v3; // r8d
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // r9

  v2 = a1[2];
  v3 = a2;
  v4 = a1[1];
  v5 = v4 ^ v2;
  if ( !a2 || a2 < v5 || a2 >= v5 + 28672 )
    return 0LL;
  v7 = a2 & 0xFFF;
  v8 = ((a2 & 0xFFF) * (unsigned __int128)0x2492492492492493uLL) >> 64;
  v9 = (v8 + (((unsigned __int64)(unsigned int)v7 - v8) >> 1)) >> 6;
  if ( v7 == 112 * v9 )
    return 2
         - (unsigned int)(RtlTestBit(
                            (PRTL_BITMAP)(a1[3] ^ v2),
                            v9 + 36 * ((v3 - ((unsigned int)v2 ^ (unsigned int)v4)) >> 12)) != 0);
  else
    return 3LL;
}

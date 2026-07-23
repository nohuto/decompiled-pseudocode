/*
 * XREFs of MiDefragmentAllSlabsHelper @ 0x14070AED0
 * Callers:
 *     MiDefragmentAllSlabAllocators @ 0x14049A638 (MiDefragmentAllSlabAllocators.c)
 * Callees:
 *     MiDefragmentSlabAllocator @ 0x14070B024 (MiDefragmentSlabAllocator.c)
 *     MiDefragmentSlabWorker @ 0x14070B0B4 (MiDefragmentSlabWorker.c)
 *     MiInitializeSlabDefragmentContext @ 0x14070C20C (MiInitializeSlabDefragmentContext.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiDefragmentAllSlabsHelper(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  unsigned int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  __int64 v11; // rsi
  int v12; // eax
  _BYTE v14[624]; // [rsp+20h] [rbp-298h] BYREF

  if ( a2 )
    v6 = a2;
  else
    v6 = 232LL * *(int *)(a3 + 28) + *(_QWORD *)(a1 + 16) + 14752LL;
  v7 = *(_DWORD *)(v6 + 128);
  if ( v7 != 3 && v7 - 5 > 2 && v7 > 4 == (*(_DWORD *)(a3 + 24) == 0) )
  {
    v8 = *(unsigned __int16 *)(v6 + 136);
    v9 = (unsigned __int16)v8;
    v10 = (v8 >> 3) & 3;
    if ( *(_DWORD *)a3 >= v10 )
    {
      v11 = LODWORD(MiPageSizes[(v9 >> 3) & 3]);
      if ( *(_DWORD *)a3 <= v10
        || (v9 & 0x18) != 0
        || *(_QWORD *)(a3 + 8) - *(_QWORD *)(a3 + 16) >= (unsigned __int64)(unsigned int)v11 >> 1 )
      {
        while ( 1 )
        {
          if ( a2 )
          {
            v12 = MiDefragmentSlabAllocator(a1, a2);
          }
          else
          {
            memset_0(v14, 0, 0x268uLL);
            MiInitializeSlabDefragmentContext(v14, a1, 0LL, *(unsigned int *)(a3 + 28));
            v12 = MiDefragmentSlabWorker(v14);
          }
          if ( v12 )
            break;
          *(_QWORD *)(a3 + 16) += v11;
          if ( *(_QWORD *)(a3 + 16) >= *(_QWORD *)(a3 + 8) )
            return 1LL;
        }
      }
    }
  }
  return 0LL;
}

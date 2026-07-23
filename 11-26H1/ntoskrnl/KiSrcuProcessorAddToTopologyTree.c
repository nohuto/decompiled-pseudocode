/*
 * XREFs of KiSrcuProcessorAddToTopologyTree @ 0x1405F8284
 * Callers:
 *     KiSrcuProcessorInitialize @ 0x14052FBD8 (KiSrcuProcessorInitialize.c)
 *     KiSrcuInitializeTopology @ 0x1405F7DC0 (KiSrcuInitializeTopology.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSrcuProcessorAddToTopologyTree(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r10
  __int64 v5; // r11
  unsigned int v6; // et2
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = *(unsigned int *)(a1 + 36);
  LODWORD(v3) = (unsigned __int8)byte_140F14FC1[0];
  while ( (_DWORD)v3 )
  {
    v3 = (unsigned int)(v3 - 1);
    v5 = KiSrcuState[v3 + 7];
    v6 = (unsigned int)result % *((unsigned __int8 *)&KiSrcuState[4] + v3 + 2);
    result = (unsigned int)result / *((unsigned __int8 *)&KiSrcuState[4] + v3 + 2);
    v7 = 1LL << v6;
    v8 = *(_QWORD *)(v5 + 16LL * (unsigned int)result);
    if ( a2 )
    {
      *(_QWORD *)(v5 + 16LL * (unsigned int)result) = v7 | v8;
    }
    else
    {
      v9 = v8 & ~v7;
      *(_QWORD *)(v5 + 16LL * (unsigned int)result) = v9;
      if ( v9 )
        break;
    }
  }
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return result;
}

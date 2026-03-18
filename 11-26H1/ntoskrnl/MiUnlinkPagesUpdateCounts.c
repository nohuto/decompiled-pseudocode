/*
 * XREFs of MiUnlinkPagesUpdateCounts @ 0x1402F8E80
 * Callers:
 *     MiUnlinkProtoPages @ 0x140297A00 (MiUnlinkProtoPages.c)
 *     MiFinishUnlinkBatch @ 0x1402990A0 (MiFinishUnlinkBatch.c)
 * Callees:
 *     MiDecreaseAvailablePages @ 0x1402F8CD0 (MiDecreaseAvailablePages.c)
 */

unsigned __int64 __fastcall MiUnlinkPagesUpdateCounts(__int64 a1)
{
  volatile signed __int64 *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 result; // rax
  __int64 v6; // rdx

  v2 = *(volatile signed __int64 **)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    if ( v3 == 1 )
      _InterlockedDecrement64(v2 + 2088);
    else
      _InterlockedAdd64(v2 + 2088, -v3);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 72);
  if ( v4 )
  {
    if ( v4 == 1 )
      _InterlockedDecrement64(v2 + 952);
    else
      _InterlockedAdd64(v2 + 952, -v4);
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  result = *(_QWORD *)(a1 + 88);
  if ( result )
  {
    if ( result == 1 )
    {
      _InterlockedDecrement64(v2 + 2932);
    }
    else
    {
      result = -(__int64)result;
      _InterlockedAdd64(v2 + 2932, result);
    }
    *(_QWORD *)(a1 + 88) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 96);
  if ( v6 )
  {
    result = MiDecreaseAvailablePages((__int64)v2, v6, 0xFFFFFFFFFFFFFFFFuLL, 0);
    if ( !(_DWORD)result )
      *(_DWORD *)a1 |= 0x400u;
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  return result;
}

/*
 * XREFs of ?Add@InterlockedCounterWithHistoryRelease@@QEAAJJPEAI_K@Z @ 0x14003BF28
 * Callers:
 *     ?VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJPEAVDXGDEVICE@@IQEBIIPEAUVIDMM_PRIMARIES_REFERENCES@@@Z @ 0x1400FE610 (-VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJPEAVDXGDEVICE@@IQEBIIPEAUVIDMM_PRIMARIES_REFE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InterlockedCounterWithHistoryRelease::Add(
        InterlockedCounterWithHistoryRelease *this,
        signed int a2,
        unsigned int *a3)
{
  unsigned __int32 v4; // esi
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ecx
  unsigned __int64 v8; // rbx

  v4 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)this, a2);
  if ( a3 )
  {
    v5 = *a3;
    if ( a2 < 0 )
      v6 = v5 - 1;
    else
      v6 = v5 + 1;
    *a3 = v6;
  }
  v7 = *((_DWORD *)this + 130);
  v8 = (unsigned __int64)v7 << 6;
  *((_DWORD *)this + 130) = ((_BYTE)v7 + 1) & 7;
  *(_DWORD *)((char *)this + v8 + 64) = v4;
  *(_QWORD *)((char *)this + v8 + 8) = 0LL;
  *(_WORD *)((char *)this + v8 + 68) = RtlCaptureStackBackTrace(1u, 6u, (PVOID *)((char *)this + v8 + 16), 0LL);
  return v4;
}

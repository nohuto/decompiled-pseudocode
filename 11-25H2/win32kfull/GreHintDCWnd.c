/*
 * XREFs of GreHintDCWnd @ 0x14009A6C0
 * Callers:
 *     UpdateRedirectedDCE @ 0x140059FD0 (UpdateRedirectedDCE.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x140234300 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x14009A87C (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x14009A8C8 (--1DCOBJA@@QEAA@XZ.c)
 *     UserGetHwndProcess @ 0x14009AD44 (UserGetHwndProcess.c)
 *     ?Lookup@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1400B0960 (-Lookup@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1401442AC (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1401442FC (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreHintDCWnd(HDC a1, unsigned __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  DC *v11; // rdi
  __int64 HwndProcess; // rbx
  unsigned int v13; // esi
  __int64 v15; // rax
  DC *v16; // rdi
  unsigned __int64 v17; // r14
  __int64 v18; // r15
  int v19; // eax
  __m128 v20; // xmm1
  void *v21; // [rsp+20h] [rbp-78h] BYREF
  DC *v22[10]; // [rsp+30h] [rbp-68h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v22, a1);
  v11 = v22[0];
  HwndProcess = 0LL;
  if ( v22[0] )
  {
    v15 = *((_QWORD *)v22[0] + 62);
    v13 = 1;
    *((_QWORD *)v22[0] + 58) = a2;
    if ( !v15 || *(int *)(v15 + 112) < 0 )
    {
      if ( a2
        && (v17 = a2 >> 1,
            v21 = 0LL,
            v18 = *(_QWORD *)(W32GetSessionState(v9, v8, v10) + 96),
            RtlTestBit((PRTL_BITMAP)(v18 + 4848), v17 & 0x3FFF))
        && NSInstrumentation::CPointerHashTable::Lookup(
             *(NSInstrumentation::CPointerHashTable **)(v18 + 4840),
             (const void *)(v17 & 0x3FFF),
             &v21)
        && (_WORD)v21 != 96 )
      {
        v20 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels(v21));
        v20.m128_f32[0] = v20.m128_f32[0] / 96.0;
        DC::vSetDpiScaling(v11, _mm_unpacklo_ps(v20, v20).m128_u64[0]);
      }
      else
      {
        v19 = *((_DWORD *)v11 + 130);
        if ( (v19 & 1) != 0 )
        {
          *((_DWORD *)v11 + 9) |= 0x10u;
          *(_QWORD *)((char *)v11 + 524) = 0LL;
          *((_DWORD *)v11 + 130) = v19 & 0xFFFFFFF8 | 4;
          *(_QWORD *)((char *)v11 + 532) = 0LL;
          DC::vUpdateCachedDPIScaleValue(v11);
        }
      }
    }
    v16 = v22[0];
    *((_QWORD *)v22[0] + 59) = a3;
    if ( a3 )
      HwndProcess = UserGetHwndProcess(a3);
    *((_QWORD *)v16 + 60) = HwndProcess;
    *((_DWORD *)v22[0] + 122) = a4;
    *((_DWORD *)v22[0] + 123) = a5;
  }
  else
  {
    v13 = 0;
  }
  DCOBJA::~DCOBJA((DCOBJA *)v22);
  return v13;
}

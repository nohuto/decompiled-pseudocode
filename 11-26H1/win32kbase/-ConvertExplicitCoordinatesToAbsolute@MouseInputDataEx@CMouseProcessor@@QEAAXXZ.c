/*
 * XREFs of ?ConvertExplicitCoordinatesToAbsolute@MouseInputDataEx@CMouseProcessor@@QEAAXXZ @ 0x140081794
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14009F170 (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 * Callees:
 *     EngMulDiv @ 0x140081830 (EngMulDiv.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1400818C4 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x140085C70 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 */

void __fastcall CMouseProcessor::MouseInputDataEx::ConvertExplicitCoordinatesToAbsolute(
        CMouseProcessor::MouseInputDataEx *this)
{
  __m128i *UnionRegion; // rax
  int v3; // ecx
  __m128i v4; // xmm1
  unsigned __int64 v5; // xmm0_8
  INT v6; // eax
  INT v7; // ecx
  _BYTE v8[720]; // [rsp+20h] [rbp-2D8h] BYREF

  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(this, 4LL) )
  {
    UnionRegion = (__m128i *)InputConfig::Mouse::GetUnionRegion(v8);
    v3 = *((_DWORD *)this + 3);
    v4 = *UnionRegion;
    *((_WORD *)this + 1) |= 3u;
    v5 = _mm_srli_si128(v4, 8).m128i_u64[0];
    v6 = EngMulDiv(v3 - v4.m128i_i32[0], 0xFFFF, v5 - v4.m128i_i32[0]);
    v7 = *((_DWORD *)this + 4) - v4.m128i_i32[1];
    *((_DWORD *)this + 3) = v6;
    *((_DWORD *)this + 4) = EngMulDiv(v7, 0xFFFF, HIDWORD(v5) - v4.m128i_i32[1]);
  }
}

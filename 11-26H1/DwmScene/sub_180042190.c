/*
 * XREFs of sub_180042190 @ 0x180042190
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007AB00 @ 0x18007AB00 (sub_18007AB00.c)
 *     __RTDynamicCast @ 0x1800D7C64 (__RTDynamicCast.c)
 */

bool __fastcall sub_180042190(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  bool result; // al

  result = (unsigned __int8)sub_18007AB00()
        && (v4 = _RTDynamicCast(
                   a2,
                   0LL,
                   &Spectre::Engine::Component `RTTI Type Descriptor',
                   &Spectre::Engine::Light `RTTI Type Descriptor',
                   1),
            *(_DWORD *)(v4 + 128) == *(_DWORD *)(a1 + 128))
        && *(_DWORD *)(v4 + 120) == *(_DWORD *)(a1 + 120)
        && *(_BYTE *)(v4 + 124) == *(_BYTE *)(a1 + 124)
        && !_mm_movemask_ps(_mm_cmpneq_ps(*(__m128 *)(v4 + 88), *(__m128 *)(a1 + 88)))
        && *(float *)(v4 + 104) == *(float *)(a1 + 104)
        && *(float *)(v4 + 116) == *(float *)(a1 + 116)
        && *(float *)(v4 + 112) == *(float *)(a1 + 112)
        && *(_DWORD *)(v4 + 108) == *(_DWORD *)(a1 + 108);
  return result;
}

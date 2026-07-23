/*
 * XREFs of ExtEnvClearBits @ 0x14053553C
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x140BF6A38 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 */

void __fastcall ExtEnvClearBits(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlClearBits(a1, a2, a3);
}

/*
 * XREFs of ExtEnvClearBits @ 0x1405330BC
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x140BF0A38 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     RtlClearBits @ 0x1403591A0 (RtlClearBits.c)
 */

void __fastcall ExtEnvClearBits(RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlClearBits(a1, a2, a3);
}

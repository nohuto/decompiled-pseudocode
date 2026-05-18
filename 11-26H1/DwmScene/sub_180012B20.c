/*
 * XREFs of sub_180012B20 @ 0x180012B20
 * Callers:
 *     sub_180012470 @ 0x180012470 (sub_180012470.c)
 *     sub_18001D848 @ 0x18001D848 (sub_18001D848.c)
 *     sub_1800209D0 @ 0x1800209D0 (sub_1800209D0.c)
 *     sub_1800254C0 @ 0x1800254C0 (sub_1800254C0.c)
 *     sub_1800260D0 @ 0x1800260D0 (sub_1800260D0.c)
 *     sub_180026C20 @ 0x180026C20 (sub_180026C20.c)
 *     sub_180026D10 @ 0x180026D10 (sub_180026D10.c)
 *     sub_18002F288 @ 0x18002F288 (sub_18002F288.c)
 *     sub_180030628 @ 0x180030628 (sub_180030628.c)
 *     sub_180030CF0 @ 0x180030CF0 (sub_180030CF0.c)
 *     sub_180032804 @ 0x180032804 (sub_180032804.c)
 *     sub_180032AD4 @ 0x180032AD4 (sub_180032AD4.c)
 *     sub_180035030 @ 0x180035030 (sub_180035030.c)
 *     sub_1800351DC @ 0x1800351DC (sub_1800351DC.c)
 *     sub_180035A5C @ 0x180035A5C (sub_180035A5C.c)
 *     sub_180036544 @ 0x180036544 (sub_180036544.c)
 *     sub_180036EBC @ 0x180036EBC (sub_180036EBC.c)
 *     sub_180036FAC @ 0x180036FAC (sub_180036FAC.c)
 *     sub_180037410 @ 0x180037410 (sub_180037410.c)
 *     sub_1800553F4 @ 0x1800553F4 (sub_1800553F4.c)
 *     sub_180097BF8 @ 0x180097BF8 (sub_180097BF8.c)
 *     sub_180097C94 @ 0x180097C94 (sub_180097C94.c)
 *     sub_180097D90 @ 0x180097D90 (sub_180097D90.c)
 *     sub_180098C90 @ 0x180098C90 (sub_180098C90.c)
 *     sub_1800C0910 @ 0x1800C0910 (sub_1800C0910.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_180012B20(__int64 *a1)
{
  __int64 perf_frequency; // rdi
  __int64 perf_counter; // rax
  __int64 v4; // rax

  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  if ( perf_frequency == 10000000 )
  {
    v4 = 100 * perf_counter;
LABEL_6:
    *a1 = v4;
    return a1;
  }
  if ( perf_frequency != 24000000 )
  {
    v4 = 1000000000 * (perf_counter / perf_frequency) + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
    goto LABEL_6;
  }
  *a1 = 1000000000 * (perf_counter / 24000000) + 1000000000 * (perf_counter % 24000000) / 24000000;
  return a1;
}

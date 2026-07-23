/*
 * XREFs of cos_piby4 @ 0x18012A3B0
 * Callers:
 *     cos @ 0x18012A0C0 (cos.c)
 *     sin @ 0x18012A460 (sin.c)
 * Callees:
 *     <none>
 */

double __fastcall cos_piby4(double a1, double a2)
{
  double v2; // xmm3_8

  v2 = a1 * a1;
  return (((((0.000000002087614638223296 - v2 * 1.138263980679449e-11) * v2 - 0.0000002755731727234419) * v2
          + 0.00002480158729876704)
         * v2
         - 0.00138888888888874)
        * v2
        + 0.04166666666666666)
       * (v2
        * v2)
       + 1.0
       - (1.0
        - a1 * a1 * 0.5)
       - a1 * a1 * 0.5
       - a1 * a2
       + 1.0
       - a1 * a1 * 0.5;
}

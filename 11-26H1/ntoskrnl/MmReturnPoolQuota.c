/*
 * XREFs of MmReturnPoolQuota @ 0x1404BD3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MmReturnPoolQuota(int a1, __int64 a2)
{
  if ( a1 == 1 )
    qword_140E2C610 -= a2;
  else
    qword_140E2C618 -= a2;
}

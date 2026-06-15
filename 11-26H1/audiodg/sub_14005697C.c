/*
 * XREFs of sub_14005697C @ 0x14005697C
 * Callers:
 *     sub_1400582D0 @ 0x1400582D0 (sub_1400582D0.c)
 *     sub_14007C690 @ 0x14007C690 (sub_14007C690.c)
 *     sub_14007CA54 @ 0x14007CA54 (sub_14007CA54.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14005697C(struct _TP_TIMER **a1, _BYTE *a2, __int64 a3)
{
  struct _TP_TIMER *v3; // rcx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  if ( v3 )
  {
    pftDueTime = (struct _FILETIME)(-10000 * a3);
    SetThreadpoolTimer(v3, &pftDueTime, 0, (unsigned int)a3 >> 2);
    *a2 = 1;
  }
}

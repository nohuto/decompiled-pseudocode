/*
 * XREFs of ?s_InteractionOutputCallback@GestureTracker@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801A8DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GestureTracker::s_InteractionOutputCallback(_BYTE *a1, const struct INTERACTION_CONTEXT_OUTPUT *a2)
{
  bool v2; // zf
  float v3; // xmm0_4
  float v4; // xmm0_4

  v2 = a1[52] == 0;
  *((_QWORD *)a1 + 1) = *((_QWORD *)a2 + 5);
  if ( !v2 )
  {
    v3 = (float)*((int *)a1 + 11) + *((float *)a2 + 10);
    *((float *)a1 + 1) = (float)*((int *)a1 + 12) + *((float *)a2 + 11);
    *(float *)a1 = v3;
  }
  v4 = *((float *)a2 + 15) * 1000.0;
  *((float *)a1 + 5) = *((float *)a2 + 16) * 1000.0;
  *((float *)a1 + 4) = v4;
}

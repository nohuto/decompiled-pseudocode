/*
 * XREFs of ?HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180085470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCInputRouter::HitTest(
        MPCInputRouter *this,
        struct _InputHitTestRequest *a2,
        struct _InputHitTestResult *a3,
        struct InputContext *a4,
        struct IInputBuffer *a5,
        struct IInputTarget **a6)
{
  return DWMInputRouter::HitTest(this, a2, a3, a4, a5, a6);
}

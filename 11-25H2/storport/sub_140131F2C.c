/*
 * XREFs of sub_140131F2C @ 0x140131F2C
 * Callers:
 *     sub_1401317F8 @ 0x1401317F8 (sub_1401317F8.c)
 *     sub_1401318E4 @ 0x1401318E4 (sub_1401318E4.c)
 *     sub_1401319E0 @ 0x1401319E0 (sub_1401319E0.c)
 *     sub_140131E30 @ 0x140131E30 (sub_140131E30.c)
 *     sub_140133728 @ 0x140133728 (sub_140133728.c)
 * Callees:
 *     <none>
 */

LONG __fastcall sub_140131F2C(__int64 a1, struct _LIST_ENTRY *a2)
{
  LONG result; // eax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( a1 )
  {
    if ( a2 )
    {
      ExInterlockedInsertTailList((PLIST_ENTRY)(a1 + 144), a2, (PKSPIN_LOCK)(a1 + 160));
      _InterlockedOr(v4, 0);
      return KeSetEvent((PRKEVENT)(a1 + 88), 0, 0);
    }
  }
  return result;
}

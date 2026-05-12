/*
 * XREFs of sub_140131AB4 @ 0x140131AB4
 * Callers:
 *     sub_1401317F8 @ 0x1401317F8 (sub_1401317F8.c)
 *     sub_1401318E4 @ 0x1401318E4 (sub_1401318E4.c)
 *     sub_1401319E0 @ 0x1401319E0 (sub_1401319E0.c)
 *     sub_140131E30 @ 0x140131E30 (sub_140131E30.c)
 *     sub_140133728 @ 0x140133728 (sub_140133728.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 */

__int64 __fastcall sub_140131AB4(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 16);
    result = (__int64)ExInterlockedRemoveHeadList((PLIST_ENTRY)(a1 + 120), (PKSPIN_LOCK)(a1 + 136));
    if ( result )
    {
LABEL_5:
      *(_DWORD *)(result + 16) = 0;
      return result;
    }
    result = sub_1400143E0(64LL, 24LL, 1296851282LL, *(_QWORD *)(v1 + 8));
    if ( result )
    {
      *(_BYTE *)(result + 20) |= 1u;
      goto LABEL_5;
    }
  }
  return 0LL;
}

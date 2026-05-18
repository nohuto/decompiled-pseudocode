/*
 * XREFs of sub_180055F5C @ 0x180055F5C
 * Callers:
 *     sub_18005664C @ 0x18005664C (sub_18005664C.c)
 * Callees:
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001CF60 @ 0x18001CF60 (sub_18001CF60.c)
 */

char __fastcall sub_180055F5C(_DWORD *a1, _DWORD *a2)
{
  char v2; // bl
  __int64 v3; // rdx
  const void *v4; // rax
  __int64 v5; // r9
  __int64 v6; // rdx
  const void *v7; // r8
  int v8; // eax

  if ( *a1 < *a2 )
    return 1;
  v2 = 0;
  if ( *a2 >= *a1 )
  {
    sub_1800148EC((__int64)(a2 + 2));
    v4 = (const void *)sub_1800148EC(v3);
    LOBYTE(v8) = sub_18001CF60(v4, *(_QWORD *)(v6 + 16), v7, *(_QWORD *)(v5 + 16));
    if ( v8 < 0 )
      return 1;
  }
  return v2;
}

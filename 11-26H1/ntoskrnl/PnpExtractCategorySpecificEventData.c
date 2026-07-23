/*
 * XREFs of PnpExtractCategorySpecificEventData @ 0x140ADE7E8
 * Callers:
 *     PiUEventGatherEventData @ 0x140ADE7B0 (PiUEventGatherEventData.c)
 * Callees:
 *     <none>
 */

void __fastcall PnpExtractCategorySpecificEventData(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  int v3; // r9d
  int v4; // r9d
  int v5; // r9d
  int v6; // r9d
  __int64 v7; // rax
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d

  v3 = *(_DWORD *)(a1 + 16);
  *a2 = 0LL;
  *a3 = 0LL;
  if ( v3 == 7 )
  {
    *a2 = a1 + 48;
    return;
  }
  if ( v3 > 7 )
  {
    v9 = v3 - 8;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( (unsigned int)(v10 - 1) > 1 )
          return;
      }
    }
LABEL_15:
    v7 = a1 + 48;
    goto LABEL_7;
  }
  v4 = v3 - 1;
  if ( !v4 )
    goto LABEL_15;
  v5 = v4 - 1;
  if ( !v5 )
  {
    *a2 = a1 + 48;
    v7 = a1 + 64;
    goto LABEL_7;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v7 = a1 + 56;
LABEL_7:
    *a3 = v7;
    return;
  }
  v8 = v6 - 1;
  if ( !v8 )
    goto LABEL_15;
  if ( v8 == 2 )
  {
    v7 = a1 + 52;
    goto LABEL_7;
  }
}

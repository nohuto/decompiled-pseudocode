/*
 * XREFs of CmQueryValueKeyCallout @ 0x140A74B90
 * Callers:
 *     <none>
 * Callees:
 *     CmQueryValueKey @ 0x1408DEEA0 (CmQueryValueKey.c)
 */

void __fastcall CmQueryValueKeyCallout(_OWORD *Parameter)
{
  __int128 v1; // xmm0
  size_t v2; // r9
  int v4; // r8d
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // [rsp+28h] [rbp-20h]
  unsigned __int16 v8[12]; // [rsp+30h] [rbp-18h] BYREF

  v1 = Parameter[1];
  v2 = *((_QWORD *)Parameter + 5);
  v4 = *((_DWORD *)Parameter + 8);
  v7 = *((_QWORD *)Parameter + 7);
  v5 = *((_DWORD *)Parameter + 12);
  v6 = *((_QWORD *)Parameter + 1);
  *(_OWORD *)v8 = v1;
  *(_DWORD *)Parameter = CmQueryValueKey(v6, v8, v4, v2, v5, v7);
}

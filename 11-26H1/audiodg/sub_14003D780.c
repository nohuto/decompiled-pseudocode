/*
 * XREFs of sub_14003D780 @ 0x14003D780
 * Callers:
 *     <none>
 * Callees:
 *     sub_140061290 @ 0x140061290 (sub_140061290.c)
 *     sub_1400612E0 @ 0x1400612E0 (sub_1400612E0.c)
 *     sub_140061414 @ 0x140061414 (sub_140061414.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14003D780(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  _QWORD *v5; // r14
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  if ( a2 < (unsigned int)dword_1400E8920 )
  {
    v5 = (_QWORD *)(a1 + 272);
    v6 = sub_140061290(a1 + 272);
    if ( v6 < 0 )
      goto LABEL_17;
    v7 = sub_140061414(a1 + 56);
    v11 = v7;
    while ( v7 )
    {
      sub_1400612E0(a1 + 56, &v11);
      v6 = sub_1400B6010(*v5);
      if ( v6 < 0 )
      {
LABEL_15:
        sub_1400B6010(a1 - 8);
        goto LABEL_17;
      }
      v7 = v11;
    }
    v8 = sub_140061414(a1 + 128);
    v11 = v8;
    while ( v8 )
    {
      sub_1400612E0(a1 + 128, &v11);
      v6 = sub_1400B6010(*v5);
      if ( v6 < 0 )
        goto LABEL_15;
      v8 = v11;
    }
    v9 = sub_140061414(a1 + 200);
    v11 = v9;
    while ( v9 )
    {
      sub_1400612E0(a1 + 200, &v11);
      v6 = sub_1400B6010(*v5);
      if ( v6 < 0 )
        goto LABEL_15;
      v9 = v11;
    }
  }
  v6 = 0;
LABEL_17:
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v6;
}

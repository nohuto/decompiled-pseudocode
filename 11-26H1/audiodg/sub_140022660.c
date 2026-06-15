/*
 * XREFs of sub_140022660 @ 0x140022660
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140022784 @ 0x140022784 (sub_140022784.c)
 *     sub_140022828 @ 0x140022828 (sub_140022828.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140022660(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  int v3; // eax
  unsigned int v4; // edi
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // [rsp+40h] [rbp-38h] BYREF
  __int64 v9; // [rsp+48h] [rbp-30h]
  __int64 v10; // [rsp+50h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  int v12; // [rsp+80h] [rbp+8h] BYREF
  __int64 v13; // [rsp+88h] [rbp+10h] BYREF
  __int64 v14; // [rsp+90h] [rbp+18h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 264));
  v3 = sub_1400B6010(*(_QWORD *)(a1 + 152));
  v4 = v3;
  if ( v3 >= 0 )
  {
    sub_140022784(a1 + 80, &v8);
    v7 = sub_140006470(v6);
    if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
    {
      v13 = v10;
      v14 = v9;
      v12 = v8;
      sub_140022828(v7, (unsigned int)&unk_1400D19DC, a1 + 344, v7, (__int64)&v12, (__int64)&v14, (__int64)&v13);
    }
    if ( v1 )
      LeaveCriticalSection(v1);
    return 0LL;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 801, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v3);
    if ( v1 )
      LeaveCriticalSection(v1);
    return v4;
  }
}

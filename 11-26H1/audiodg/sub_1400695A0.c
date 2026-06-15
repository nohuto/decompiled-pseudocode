/*
 * XREFs of sub_1400695A0 @ 0x1400695A0
 * Callers:
 *     sub_140005E9C @ 0x140005E9C (sub_140005E9C.c)
 * Callees:
 *     sub_140048384 @ 0x140048384 (sub_140048384.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400695A0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  int v4; // r15d
  __int64 v5; // rcx
  __int64 v7; // rcx
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h]

  v1 = *a1;
  v3 = *(_QWORD *)(*a1 + 152LL);
  if ( *(_DWORD *)(v1 + 12) == 1 )
  {
    v4 = sub_1400B6010(v3);
    if ( v4 < 0 )
    {
      v5 = a1[3];
      sub_140048384(
        (int)retaddr,
        3095,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (unsigned int)v4,
        "Activate failed for {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        *(_DWORD *)(*(_QWORD *)v5 + 8LL),
        *(unsigned __int16 *)(*(_QWORD *)v5 + 12LL),
        *(unsigned __int16 *)(*(_QWORD *)v5 + 14LL),
        *(unsigned __int8 *)(*(_QWORD *)v5 + 16LL),
        *(unsigned __int8 *)(*(_QWORD *)v5 + 17LL),
        *(unsigned __int8 *)(*(_QWORD *)v5 + 18LL),
        *(unsigned __int8 *)(*(_QWORD *)v5 + 19LL),
        *(unsigned __int8 *)(*(_QWORD *)v5 + 20LL),
        *(unsigned __int8 *)(*(_QWORD *)v5 + 21LL),
        *(unsigned __int8 *)(*(_QWORD *)v5 + 22LL),
        *(unsigned __int8 *)(*(_QWORD *)v5 + 23LL));
      return (unsigned int)v4;
    }
  }
  else
  {
    v4 = sub_1400B6010(v3);
    if ( v4 < 0 )
    {
      v7 = a1[3];
      sub_140048384(
        (int)retaddr,
        3100,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (unsigned int)v4,
        "Activate failed for {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        *(_DWORD *)(*(_QWORD *)v7 + 8LL),
        *(unsigned __int16 *)(*(_QWORD *)v7 + 12LL),
        *(unsigned __int16 *)(*(_QWORD *)v7 + 14LL),
        *(unsigned __int8 *)(*(_QWORD *)v7 + 16LL),
        *(unsigned __int8 *)(*(_QWORD *)v7 + 17LL),
        *(unsigned __int8 *)(*(_QWORD *)v7 + 18LL),
        *(unsigned __int8 *)(*(_QWORD *)v7 + 19LL),
        *(unsigned __int8 *)(*(_QWORD *)v7 + 20LL),
        *(unsigned __int8 *)(*(_QWORD *)v7 + 21LL),
        *(unsigned __int8 *)(*(_QWORD *)v7 + 22LL),
        *(unsigned __int8 *)(*(_QWORD *)v7 + 23LL));
      return (unsigned int)v4;
    }
  }
  return 0LL;
}

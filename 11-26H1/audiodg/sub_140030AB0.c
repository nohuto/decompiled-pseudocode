/*
 * XREFs of sub_140030AB0 @ 0x140030AB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140030D0C @ 0x140030D0C (sub_140030D0C.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14006A86C @ 0x14006A86C (sub_14006A86C.c)
 *     sub_140072AE0 @ 0x140072AE0 (sub_140072AE0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140030AB0(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v6; // r8
  int v7; // r15d
  __int64 v8; // rdx
  __int128 v9; // [rsp+30h] [rbp-78h]
  __int128 v10; // [rsp+40h] [rbp-68h] BYREF
  __int128 v11; // [rsp+50h] [rbp-58h]
  __int128 v12; // [rsp+60h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h]

  v11 = *(_OWORD *)(a1 - 56);
  v12 = v11;
  EtwEventActivityIdControl(4LL, &v12);
  if ( !(unsigned __int8)sub_140030D0C(a1 - 160, a2) )
  {
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x200) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
    {
      sub_14006A86C(*((_QWORD *)off_1400E73D8 + 2), 27LL, &unk_1400C6808, a2);
    }
    goto LABEL_8;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 120));
  --*(_DWORD *)(a1 + 44);
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x200) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 26LL, &unk_1400C6808);
  }
  if ( *(_DWORD *)(a1 + 44) )
    goto LABEL_5;
  v9 = *(_OWORD *)(a1 - 56);
  v10 = v9;
  EtwEventActivityIdControl(4LL, &v10);
  v4 = sub_1400B6010(*(_QWORD *)(a1 + 24));
  v7 = 1;
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8 && (*((_DWORD *)off_1400E73D8 + 7) & 0x200) != 0 )
  {
    v8 = ((v4 >> 31) & 0xFFFFFFFE) + 4;
    if ( *((unsigned __int8 *)off_1400E73D8 + 25) >= (unsigned int)v8 )
      sub_140072AE0(
        *((_QWORD *)off_1400E73D8 + 2),
        v8,
        v6,
        *(unsigned int *)(a1 + 32),
        1,
        v4,
        v9,
        *((_QWORD *)&v9 + 1),
        v10,
        *((_QWORD *)&v10 + 1),
        v11,
        *((_QWORD *)&v11 + 1));
  }
  if ( v4 < 0 )
    v7 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = v7;
  EtwEventActivityIdControl(4LL, &v10);
  if ( v4 >= 0 )
  {
LABEL_5:
    if ( a1 != 120 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 - 120));
LABEL_8:
    v4 = 0;
    goto LABEL_9;
  }
  sub_14000C2A8((int)retaddr, 678, (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp", v4);
  if ( a1 != 120 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 - 120));
LABEL_9:
  EtwEventActivityIdControl(4LL, &v12);
  return (unsigned int)v4;
}

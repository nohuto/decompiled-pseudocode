/*
 * XREFs of sub_1400307E0 @ 0x1400307E0
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

__int64 __fastcall sub_1400307E0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // r14
  bool v6; // zf
  int v7; // ebx
  __int64 v8; // r8
  _QWORD *v9; // rcx
  int v10; // r12d
  __int64 v12; // rdx
  __int128 v13; // [rsp+30h] [rbp-50h]
  __int128 v14; // [rsp+40h] [rbp-40h] BYREF
  __int128 v15; // [rsp+50h] [rbp-30h]
  __int128 v16; // [rsp+60h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+28h]

  v15 = *(_OWORD *)(a1 - 56);
  v16 = v15;
  EtwEventActivityIdControl(4LL, &v16);
  v4 = a1 - 160;
  if ( !(unsigned __int8)sub_140030D0C(a1 - 160, a2) )
  {
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x200) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
    {
      sub_14006A86C(*((_QWORD *)off_1400E73D8 + 2), 25LL, &unk_1400C6808, a2);
    }
    goto LABEL_14;
  }
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 - 120);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 120));
  ++*(_DWORD *)(a1 + 44);
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x200) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 24LL, &unk_1400C6808);
  }
  if ( *(_DWORD *)(a1 + 44) != 1 )
    goto LABEL_12;
  v6 = *(_DWORD *)(a1 + 32) == 0;
  v13 = *(_OWORD *)(v4 + 104);
  v14 = v13;
  if ( v6 )
  {
    EtwEventActivityIdControl(4LL, &v14);
    v7 = sub_1400B6010(*(_QWORD *)(v4 + 184));
    v9 = off_1400E73D8;
    v10 = 3;
  }
  else
  {
    EtwEventActivityIdControl(4LL, &v14);
    v7 = sub_1400B6010(*(_QWORD *)(v4 + 184));
    v9 = off_1400E73D8;
    v10 = 2;
  }
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8 && (*((_DWORD *)v9 + 7) & 0x200) != 0 )
  {
    v12 = ((v7 >> 31) & 0xFFFFFFFE) + 4;
    if ( *((unsigned __int8 *)v9 + 25) >= (unsigned int)v12 )
      sub_140072AE0(
        v9[2],
        v12,
        v8,
        *(unsigned int *)(v4 + 192),
        v10,
        v7,
        v13,
        *((_QWORD *)&v13 + 1),
        v14,
        *((_QWORD *)&v14 + 1),
        v15,
        *((_QWORD *)&v15 + 1));
  }
  if ( v7 < 0 )
    v10 = *(_DWORD *)(v4 + 192);
  *(_DWORD *)(v4 + 192) = v10;
  EtwEventActivityIdControl(4LL, &v14);
  if ( v7 >= 0 )
  {
LABEL_12:
    if ( v5 )
      LeaveCriticalSection(v5);
LABEL_14:
    v7 = 0;
    goto LABEL_15;
  }
  sub_14000C2A8((int)retaddr, 645, (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp", v7);
  if ( v5 )
    LeaveCriticalSection(v5);
LABEL_15:
  EtwEventActivityIdControl(4LL, &v16);
  return (unsigned int)v7;
}

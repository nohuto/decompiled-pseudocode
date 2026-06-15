/*
 * XREFs of sub_14003D900 @ 0x14003D900
 * Callers:
 *     sub_14001DD58 @ 0x14001DD58 (sub_14001DD58.c)
 * Callees:
 *     sub_140002114 @ 0x140002114 (sub_140002114.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_14002813C @ 0x14002813C (sub_14002813C.c)
 *     sub_14003DF40 @ 0x14003DF40 (sub_14003DF40.c)
 *     sub_140047B38 @ 0x140047B38 (sub_140047B38.c)
 *     sub_14005A010 @ 0x14005A010 (sub_14005A010.c)
 */

__int64 __fastcall sub_14003D900(__int64 a1, __int64 a2)
{
  void *v3; // rcx
  DWORD v4; // eax
  __int64 v5; // rcx
  _DWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  HANDLE CurrentProcess; // rax
  __int64 v10; // rcx
  _DWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  HANDLE v14; // rax
  HANDLE Handles[3]; // [rsp+30h] [rbp-18h] BYREF
  int v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  v3 = off_1400E73D8;
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_BYTE *)off_1400E73D8 + 28) & 0x10) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14005A010(*((_QWORD *)off_1400E73D8 + 2), 14LL, &unk_1400C8AF0);
  }
  Handles[0] = *(HANDLE *)(a1 + 120);
  Handles[1] = *(HANDLE *)(a1 + 136);
  if ( (byte_1400E8400 & 0x20) != 0 )
    sub_14003DF40(v3, a2, *(unsigned int *)(a1 + 152));
  do
  {
    while ( 1 )
    {
      v4 = WaitForMultipleObjectsEx(2u, Handles, 0, 0xFFFFFFFF, 0);
      if ( v4 != 1 )
        break;
      *(_BYTE *)(a1 + 148) = 1;
      v6 = (_DWORD *)sub_140006470(v5);
      if ( *v6 > 2u )
      {
        if ( sub_14002813C((__int64)v6, 0x400000000000LL) )
        {
          v17 = *(_DWORD *)(a1 + 144);
          v18 = 0x1000000LL;
          sub_140002114(v8, (int)&unk_1400D1C3B, v7, v8, (__int64)&v18, (__int64)&v17);
        }
      }
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0x64u);
    }
  }
  while ( v4 );
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_BYTE *)off_1400E73D8 + 28) & 0x10) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14005A010(*((_QWORD *)off_1400E73D8 + 2), 15LL, &unk_1400C8AF0);
  }
  if ( qword_1400E7C48 || dword_1400E8788 > 0 )
  {
    sub_140047B38("AudioDg.exe", qword_1400E7C48, (unsigned int)dword_1400E8788);
    v11 = (_DWORD *)sub_140006470(v10);
    if ( *v11 > 4u )
    {
      if ( sub_14002813C((__int64)v11, 4LL) )
      {
        v17 = dword_1400E8788;
        v18 = qword_1400E7C48;
        sub_140002114(v13, (int)&unk_1400D1C04, v12, v13, (__int64)&v18, (__int64)&v17);
      }
    }
  }
  v14 = GetCurrentProcess();
  TerminateProcess(v14, 0);
  return 0LL;
}

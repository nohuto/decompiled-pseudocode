/*
 * XREFs of _tlgWriteTransfer_EtwEventWriteTransfer @ 0x140001008
 * Callers:
 *     SmpCopyFile @ 0x140011D40 (SmpCopyFile.c)
 *     SmpSendPlatformBinaryStatus @ 0x1400182B0 (SmpSendPlatformBinaryStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tlgWriteTransfer_EtwEventWriteTransfer(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  __int64 v6; // rax
  unsigned __int16 *v7; // rdx
  _DWORD v9[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]

  v9[0] = *a2 << 24;
  v9[1] = *(unsigned __int16 *)(a2 + 1);
  v6 = *(_QWORD *)(a2 + 3);
  v7 = (unsigned __int16 *)(a2 + 11);
  v10 = v6;
  *(_QWORD *)a6 = off_140030E50;
  *(_DWORD *)(a6 + 8) = *(unsigned __int16 *)off_140030E50;
  *(_QWORD *)(a6 + 16) = v7;
  *(_DWORD *)(a6 + 12) = 2;
  *(_DWORD *)(a6 + 24) = *v7;
  *(_DWORD *)(a6 + 28) = 1;
  return ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD, int, __int64))EtwEventWriteTransfer)(
           qword_140030E68,
           v9,
           0LL,
           0LL,
           a5,
           a6);
}

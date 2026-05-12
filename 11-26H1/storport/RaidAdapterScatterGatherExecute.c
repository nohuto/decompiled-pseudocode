/*
 * XREFs of RaidAdapterScatterGatherExecute @ 0x14002A660
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001BC80 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x14006DF50 (RaidpAdapterContinueDataBufferScatterGather.c)
 *     RaUnitStartResetIo @ 0x1400A2224 (RaUnitStartResetIo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidAdapterScatterGatherExecute(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // ebx
  __int64 v7; // rax
  unsigned int v8; // r14d
  __int64 v9; // rax
  bool v10; // si
  __int64 *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, __int64), _QWORD *, bool, _QWORD *, int); // rax
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 (__fastcall *v18)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, __int64), _QWORD *, int); // rax
  int v19; // [rsp+38h] [rbp-40h]

  v4 = a2[21];
  v5 = *(unsigned __int8 *)(v4 + 2);
  if ( (_BYTE)v5 == 40 )
    v6 = *(_DWORD *)(v4 + 20);
  else
    v6 = *(unsigned __int8 *)(v4 + 2);
  v7 = 60LL;
  if ( (_BYTE)v5 != 40 )
    v7 = 16LL;
  v8 = *(_DWORD *)(v7 + v4);
  v9 = 24LL;
  if ( (_BYTE)v5 != 40 )
    v9 = 12LL;
  v10 = (*(_DWORD *)(v9 + v4) & 0x80) != 0;
  if ( (*(_DWORD *)(a1 + 604) & 8) == 0 && (*(_BYTE *)(a1 + 108) & 4) == 0 )
  {
    LOBYTE(v5) = 1;
    LOBYTE(v4) = (*(_DWORD *)(v9 + v4) & 0x40) != 0;
    KeFlushIoBuffers(a2[13], v4, v5);
  }
  if ( v6 == 23 && *(_DWORD *)(a2[13] + 40LL) > v8 )
    v8 = *(_DWORD *)(a2[13] + 40LL);
  v11 = (__int64 *)(a1 + 896);
  if ( a1 == -896 )
    return 3221225485LL;
  v12 = *v11;
  if ( !*v11 )
    return 3221225485LL;
  v13 = *(_QWORD *)(v12 + 8);
  if ( !v13 )
    return 3221225485LL;
  v14 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, __int64), _QWORD *, bool, _QWORD *, int))(v13 + 112);
  if ( !v14 )
    return 3221225485LL;
  result = v14(v12, *(_QWORD *)(a1 + 8), a2[13], a2[23], v8, RaidpAdapterContinueScatterGather, a2, v10, a2 + 29, 424);
  if ( (_DWORD)result == -1073741789 )
  {
    v16 = *v11;
    if ( *v11
      && (v17 = *(_QWORD *)(v16 + 8)) != 0
      && (v18 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, __int64), _QWORD *, int))(v17 + 88)) != 0LL )
    {
      LOBYTE(v19) = v10;
      return v18(v16, *(_QWORD *)(a1 + 8), a2[13], a2[23], v8, RaidpAdapterContinueScatterGather, a2, v19);
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}

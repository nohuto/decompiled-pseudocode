/*
 * XREFs of RtlLogMessageInEventLogger @ 0x180120950
 * Callers:
 *     LdrpLogEtwHotPatchStatus @ 0x18006FB5C (LdrpLogEtwHotPatchStatus.c)
 *     RtlWow64LogMessageInEventLogger @ 0x18015CC30 (RtlWow64LogMessageInEventLogger.c)
 * Callees:
 *     LdrLoadDll @ 0x180043A10 (LdrLoadDll.c)
 *     LdrUnloadDll @ 0x1800553B0 (LdrUnloadDll.c)
 *     LdrGetProcedureAddress @ 0x180085BA0 (LdrGetProcedureAddress.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_UNKNOWN **__fastcall RtlLogMessageInEventLogger(
        __int16 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int16 a5)
{
  _UNKNOWN **result; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // [rsp+50h] [rbp-20h] BYREF
  __int64 (__fastcall *v16)(_QWORD, __int64); // [rsp+58h] [rbp-18h] BYREF
  void (__fastcall *v17)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int16, _DWORD, __int64, _QWORD); // [rsp+60h] [rbp-10h] BYREF
  void (__fastcall *v18)(__int64); // [rsp+68h] [rbp-8h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+8h] BYREF

  result = &retaddr;
  v15 = 0LL;
  v18 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( !LdrpIsSecureProcess )
  {
    result = (_UNKNOWN **)LdrLoadDll(0LL, 0LL, (__int64)&unk_180172E38, &v15);
    if ( (int)result >= 0 )
    {
      if ( (int)LdrGetProcedureAddress(v15, (int)&unk_180172E08, 0, (int)&v16) >= 0
        && (int)LdrGetProcedureAddress(v15, (int)&unk_180172E48, 0, (int)&v18) >= 0
        && (int)LdrGetProcedureAddress(v15, (int)&unk_180172E28, 0, (int)&v17) >= 0 )
      {
        v13 = v16(0LL, a4);
        v14 = v13;
        if ( v13 )
        {
          v17(v13, a5, 0LL, a3, 0LL, a1, 0, a2, 0LL);
          v18(v14);
        }
      }
      return (_UNKNOWN **)LdrUnloadDll(v15, v10, v11, v12);
    }
  }
  return result;
}

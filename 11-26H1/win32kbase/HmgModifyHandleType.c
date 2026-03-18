/*
 * XREFs of HmgModifyHandleType @ 0x140057BB0
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@KHH@Z @ 0x140164CD8 (--0DCMEMOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@KHH@Z.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1401794C0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     bInitBRUSHOBJ @ 0x1402F4354 (bInitBRUSHOBJ.c)
 * Callees:
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1400580D0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     McTemplateK0ppqqq_EtwWriteTransfer @ 0x14005826C (McTemplateK0ppqqq_EtwWriteTransfer.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HmgModifyHandleType(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 *v5; // rdi
  unsigned int v6; // ebx
  char EtwGdiHandleType; // r14
  __int64 v8; // r15
  __int64 result; // rax
  char CurrentWin32kSessionId; // al
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int16 v14; // [rsp+60h] [rbp+8h]

  v2 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  v3 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + 8) + 16LL))(*(_QWORD *)(v3 + 8), v2);
  v5 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + 8) + 96LL))(*(_QWORD *)(v3 + 8), v2);
  LOBYTE(v14) = BYTE2(a1);
  v6 = *(_DWORD *)(v4 + 8) & 0xFFFFFFFE;
  HIBYTE(v14) = BYTE3(a1);
  EtwGdiHandleType = GetEtwGdiHandleType(*(unsigned __int8 *)(v4 + 14));
  v8 = *v5;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
  {
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
    McTemplateK0ppqqq_EtwWriteTransfer(v12, v11, v13, v8, a1, EtwGdiHandleType, CurrentWin32kSessionId, v6);
  }
  *(_WORD *)(v4 + 12) = v14;
  result = a1;
  *v5 = a1;
  return result;
}

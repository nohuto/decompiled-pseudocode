/*
 * XREFs of KdpPrint @ 0x140C1BD30
 * Callers:
 *     KdpTrap @ 0x140C1DA90 (KdpTrap.c)
 * Callees:
 *     KdCopyToUser @ 0x140536320 (KdCopyToUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     KdExitDebugger @ 0x140C18008 (KdExitDebugger.c)
 *     KdLogDbgPrint @ 0x140C1BA40 (KdLogDbgPrint.c)
 *     KdpPrintString @ 0x140C1CAD8 (KdpPrintString.c)
 *     KdEnterDebugger @ 0x140C1D858 (KdEnterDebugger.c)
 */

__int64 __fastcall KdpPrint(
        unsigned int a1,
        unsigned int a2,
        _BYTE *a3,
        unsigned __int16 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        _BYTE *a8)
{
  _BYTE *v8; // r15
  __int64 v9; // r11
  unsigned int v10; // r10d
  unsigned int v11; // ebx
  unsigned __int16 v12; // si
  void *v13; // rsp
  char v14; // di
  __int64 v15; // rdx
  __int64 v16; // rcx
  _BYTE v18[480]; // [rsp+0h] [rbp-200h] BYREF
  __int128 v19; // [rsp+200h] [rbp+0h] BYREF

  v8 = a3;
  v19 = 0LL;
  v9 = 101LL;
  if ( a1 < 0x9C )
    v9 = a1;
  v10 = 3;
  if ( a1 < 0x9C )
    v10 = a2;
  *a8 = 0;
  if ( v10 <= 0x1F )
    v10 = 1 << v10;
  if ( (v10 & Kd_WIN2000_Mask) != 0 || (_mm_lfence(), (v10 & *(_DWORD *)*(&KdComponentTable + v9)) != 0) )
  {
    v12 = 512;
    if ( a4 <= 0x200u )
      v12 = a4;
    if ( a5 )
    {
      ProbeForRead(a3, v12, 1u);
      v13 = alloca(512LL);
      KdCopyToUser((__int64)v18, (__int64)v8, v12);
      v8 = v18;
    }
    *((_QWORD *)&v19 + 1) = v8;
    LOWORD(v19) = v12;
    KdLogDbgPrint((unsigned __int16 *)&v19);
    if ( (_BYTE)KdDebuggerNotPresent && !KdEventLoggingPresent )
    {
      v11 = -1073741667;
      goto LABEL_24;
    }
    v14 = KdEnterDebugger(a6, a7);
    if ( (unsigned __int8)KdpPrintString(&v19) )
    {
      v11 = -2147483645;
      if ( KdDisableNoUmExBreakFix || !a5 || !KdIgnoreUmExceptions )
        goto LABEL_23;
      BYTE4(KdpContext) = 1;
    }
    v11 = 0;
LABEL_23:
    LOBYTE(v16) = v14;
    KdExitDebugger(v16, v15);
    goto LABEL_24;
  }
  v11 = 0;
LABEL_24:
  *a8 = 1;
  return v11;
}

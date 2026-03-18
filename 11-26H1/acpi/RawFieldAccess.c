/*
 * XREFs of RawFieldAccess @ 0x140036EEC
 * Callers:
 *     AccFieldUnit @ 0x14000ACF0 (AccFieldUnit.c)
 *     ReadField @ 0x14000CB30 (ReadField.c)
 *     WriteField @ 0x14000D02C (WriteField.c)
 *     WriteObject @ 0x140014190 (WriteObject.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 *     FindRSAccess @ 0x1400371C0 (FindRSAccess.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall RawFieldAccess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  _QWORD *v8; // r12
  __int64 RSAccess; // rax
  __int64 v10; // r15
  char v11; // al
  _DWORD *v12; // r13
  unsigned int v13; // ebx
  __int64 *v14; // rax
  __int64 *v15; // rbp
  unsigned int v16; // ebx
  const void *v18; // rdx
  unsigned int v19; // ecx
  const void *v20; // rdx
  unsigned int v21; // ecx
  __int64 *v22; // rax
  unsigned int v23; // [rsp+88h] [rbp+10h]
  char v24; // [rsp+90h] [rbp+18h]

  v23 = a2;
  v7 = **(_QWORD **)(a3 + 32);
  if ( *(_WORD *)(v7 + 66) != 131 )
  {
    v16 = -1072431101;
    LogError(-1072431101);
    AcpiDiagTraceAmlError(a1, -1072431101);
    v18 = (const void *)*(unsigned __int16 *)(v7 + 66);
    v19 = 157;
    goto LABEL_16;
  }
  v8 = *(_QWORD **)(**(_QWORD **)(v7 + 96) + 96LL);
  RSAccess = FindRSAccess(*((unsigned __int8 *)v8 + 12), a2, a3, a4);
  v10 = RSAccess;
  if ( !RSAccess || !*(_QWORD *)(RSAccess + 32) )
  {
    v16 = -1072431088;
    LogError(-1072431088);
    AcpiDiagTraceAmlError(a1, -1072431088);
    v18 = (const void *)*((unsigned __int8 *)v8 + 12);
    v19 = 158;
LABEL_16:
    PrintDebugMessage(v19, v18, 0LL, 0LL, 0LL);
    return v16;
  }
  _m_prefetchw(&gDebugger);
  v11 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
  v12 = *(_DWORD **)(a3 + 32);
  v13 = 40;
  v24 = v11;
  if ( v12[7] )
    v13 = v12[9] + 40;
  v14 = HeapAlloc(*(_QWORD **)(a1 + 320), 1430537800, v13);
  v15 = v14;
  if ( !v14 )
  {
    v16 = -1073741670;
    LogError(-1073741670);
    AcpiDiagTraceAmlError(a1, -1073741670);
    v20 = 0LL;
    v21 = 155;
LABEL_21:
    PrintDebugMessage(v21, v20, 0LL, 0LL, 0LL);
    goto LABEL_8;
  }
  memmove(v14, v12, v13);
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64, _QWORD, __int64 (__fastcall *)(__int64), __int64))(v10 + 32))(
          v23,
          *v8,
          v15,
          a4,
          *(_QWORD *)(v10 + 40),
          RestartCtxtCallback,
          a1 + 328);
  if ( v16 == -1073741789 )
  {
    v22 = HeapAlloc((_QWORD *)gpheapGlobal, 1179992648, *(_DWORD *)(a4 + 16));
    *(_QWORD *)(a4 + 32) = v22;
    if ( v22 )
    {
      *(_DWORD *)(a4 + 24) = *(_DWORD *)(a4 + 16);
      *(_WORD *)(a4 + 2) = 3;
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64, _QWORD, __int64 (__fastcall *)(__int64), __int64))(v10 + 32))(
              v23,
              *v8,
              v15,
              a4,
              *(_QWORD *)(v10 + 40),
              RestartCtxtCallback,
              a1 + 328);
      goto LABEL_8;
    }
    v16 = -1073741670;
    LogError(-1073741670);
    AcpiDiagTraceAmlError(a1, -1073741670);
    v20 = (const void *)*(unsigned int *)(a4 + 16);
    v21 = 156;
    goto LABEL_21;
  }
LABEL_8:
  if ( (v24 & 0x10) != 0 )
    _InterlockedOr(&gDebugger, 0x10u);
  if ( v16 == 259 )
  {
    v16 = 32772;
  }
  else if ( v16 )
  {
    LogError(-1072431080);
    AcpiDiagTraceAmlError(a1, -1072431080);
    PrintDebugMessage(0x9Fu, (const void *)*((unsigned __int8 *)v8 + 12), (const void *)(int)v16, 0LL, 0LL);
    v16 = -1072431080;
  }
  if ( v15 )
    HeapFree(v15);
  return v16;
}

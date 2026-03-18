/*
 * XREFs of ?bGrow@EFSOBJ@@QEAAHXZ @ 0x140102268
 * Callers:
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x140102DBC (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 * Callees:
 *     ??1EFSMEMOBJ@@QEAA@XZ @ 0x1400B91F8 (--1EFSMEMOBJ@@QEAA@XZ.c)
 *     ??0EFSMEMOBJ@@QEAA@AEBUPARAMETERS@EFSTATE@@KKPEAXPEAK@Z @ 0x14010235C (--0EFSMEMOBJ@@QEAA@AEBUPARAMETERS@EFSTATE@@KKPEAXPEAK@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall EFSOBJ::bGrow(EFSOBJ *this)
{
  __int64 v1; // r9
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rdi
  size_t v7; // rbx
  size_t v8; // rax
  _QWORD v10[10]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v11; // [rsp+90h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  v3 = (*(_QWORD *)(*(_QWORD *)this + 96LL) - *(_QWORD *)this - 116LL) >> 3;
  if ( (int)v3 + 16 < (unsigned int)v3 )
    return 0LL;
  v11 = *(_DWORD *)(v1 + 24);
  EFSMEMOBJ::EFSMEMOBJ(
    (EFSMEMOBJ *)v10,
    (const struct EFSTATE::PARAMETERS *)(v1 + 32),
    v3 + 16,
    *(_DWORD *)(v1 + 8),
    *(void **)(v1 + 16),
    &v11);
  v4 = v10[0];
  v5 = 0;
  if ( v10[0] )
  {
    v6 = *(_QWORD *)this;
    v7 = 8LL * (unsigned int)((*(_QWORD *)(*(_QWORD *)this + 88LL) - *(_QWORD *)this - 116LL) >> 3);
    memmove((void *)(v10[0] + 116LL), (const void *)(*(_QWORD *)this + 116LL), v7);
    v8 = v7 + v4 + 116;
    v5 = 1;
    *(_QWORD *)(v4 + 88) = v8;
    *(_DWORD *)(v4 + 112) = *(_DWORD *)(v6 + 112);
    *(_DWORD *)(v4 + 28) = *(_DWORD *)(v6 + 28);
    v10[0] = *(_QWORD *)this;
    *(_QWORD *)this = v4;
  }
  EFSMEMOBJ::~EFSMEMOBJ((EFSMEMOBJ *)v10);
  return v5;
}

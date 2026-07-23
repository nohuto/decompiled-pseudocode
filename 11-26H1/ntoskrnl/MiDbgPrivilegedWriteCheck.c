/*
 * XREFs of MiDbgPrivilegedWriteCheck @ 0x1407036F0
 * Callers:
 *     MiDbgWriteCheck @ 0x140703A18 (MiDbgWriteCheck.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiDbgIsPfn @ 0x140702CF4 (MiDbgIsPfn.c)
 */

__int64 __fastcall MiDbgPrivilegedWriteCheck(int *a1)
{
  int v1; // r14d
  unsigned __int64 *v2; // rsi
  unsigned __int64 v3; // r12
  int v4; // r13d
  __int64 v5; // rbx
  unsigned int v7; // edi
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx

  v1 = *a1;
  v2 = (unsigned __int64 *)(a1 + 18);
  v3 = *((_QWORD *)a1 + 4);
  v4 = 0;
  v5 = 0LL;
  v7 = 1;
  if ( (MiFlags & 0x2000) == 0 )
  {
    *((_QWORD *)a1 + 10) = 0LL;
    goto LABEL_19;
  }
  v8 = *((_QWORD *)a1 + 7) >> 12;
  if ( (unsigned int)MiDbgIsPfn(v8) )
  {
    v5 = 48 * v8 - 0x220000000000LL;
    if ( (a1[22] & 3) == 0 )
    {
      if ( (v1 & 2) == 0 )
      {
        v9 = 4LL;
        goto LABEL_10;
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
      {
        stru_140E2ED08.SuspendEvent.Header.SignalState |= 0x200u;
        return 0LL;
      }
      v4 = 1;
    }
    v9 = 1LL;
LABEL_10:
    if ( !(unsigned int)MiGetPagePrivilege((_QWORD *)v5, v9, (unsigned __int64)v2) )
    {
LABEL_23:
      if ( v4 )
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return v7;
    }
    if ( (MiFlags & 0x10000) == 0
      || (v1 & 2) != 0
      || *(__int64 *)(v5 + 40) >= 0
      || (*(_DWORD *)(v5 + 16) & 0x400LL) != 0
      || v3 < 0xFFFF800000000000uLL
      || !v2 )
    {
LABEL_20:
      if ( (v1 & 4) != 0 )
      {
        v7 = 2;
      }
      else
      {
        v7 = 0;
        stru_140E2ED08.SuspendEvent.Header.SignalState |= 0x100u;
      }
      goto LABEL_23;
    }
LABEL_19:
    *v2 = v3;
    goto LABEL_20;
  }
  return v7;
}

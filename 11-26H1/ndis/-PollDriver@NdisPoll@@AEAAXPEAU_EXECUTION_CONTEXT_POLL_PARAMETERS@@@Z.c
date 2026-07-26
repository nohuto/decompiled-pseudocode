/*
 * XREFs of ?PollDriver@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x14006E6F0
 * Callers:
 *     ?EvtPollDriver@NdisPoll@@CAXPEAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x14006E6D0 (-EvtPollDriver@NdisPoll@@CAXPEAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall NdisPoll::PollDriver(NdisPoll *this, struct _EXECUTION_CONTEXT_POLL_PARAMETERS *a2)
{
  _BYTE *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx

  v4 = (char *)this + 168;
  v5 = 44LL;
  *(_OWORD *)((char *)this + 168) = 0LL;
  *(_OWORD *)((char *)this + 184) = 0LL;
  *(_OWORD *)((char *)this + 200) = 0LL;
  *(_OWORD *)((char *)this + 216) = 0LL;
  *(_OWORD *)((char *)this + 232) = 0LL;
  *(_OWORD *)((char *)this + 248) = 0LL;
  *(_OWORD *)((char *)this + 264) = 0LL;
  *(_OWORD *)((char *)this + 280) = 0LL;
  *(_OWORD *)((char *)this + 296) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_BYTE *)this + 169) = 1;
  *((_WORD *)this + 85) = 152;
  v6 = *((_QWORD *)this + 79);
  *v4 = 0x80;
  if ( *(_BYTE *)a2 == 2 )
    v5 = 48LL;
  *((_DWORD *)this + 62) = *(_DWORD *)(v6 + v5);
  v7 = 40LL;
  if ( *(_BYTE *)a2 != 2 )
    v7 = 36LL;
  v8 = *(_DWORD *)(v7 + v6);
  v9 = *((_QWORD *)this + 76);
  *((_DWORD *)this + 44) = v8;
  (*((void (__fastcall **)(__int64))this + 78))(v9);
}

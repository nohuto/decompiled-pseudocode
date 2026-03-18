/*
 * XREFs of bPEBCacheHandle @ 0x1400549F0
 * Callers:
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x140055690 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bPEBCacheHandle(__int64 a1, _DWORD *a2, unsigned int *a3, HANDLELOCK *a4, __int64 a5)
{
  __int64 v7; // r13
  unsigned int v8; // esi
  _QWORD *v9; // r12
  _QWORD *v10; // r15
  __int64 v11; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessPeb; // rax
  __int64 v14; // rbx
  __int64 v15; // rcx
  BOOL v16; // edx
  __int64 v17; // r9
  _QWORD *v18; // rcx
  _QWORD *v19; // r9
  signed __int32 v21[8]; // [rsp+0h] [rbp-68h] BYREF
  int v22; // [rsp+20h] [rbp-48h]
  BOOL v23; // [rsp+24h] [rbp-44h]
  _QWORD *v24; // [rsp+28h] [rbp-40h]
  signed __int64 v25; // [rsp+30h] [rbp-38h]

  v7 = (int)a1;
  v8 = 0;
  v22 = 0;
  v9 = (_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 8LL);
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v9 + 96LL))(*v9, *a3);
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v9 + 80LL))(*v9, v10);
  CurrentProcess = PsGetCurrentProcess(v11);
  ProcessPeb = PsGetProcessPeb(CurrentProcess);
  v14 = ProcessPeb;
  if ( ProcessPeb )
  {
    v15 = *(_QWORD *)(ProcessPeb + 320);
    v16 = 0;
    v23 = 0;
    if ( !v15 )
    {
      v25 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(ProcessPeb + 320),
              (signed __int64)KeGetPcr()->NtTib.Self,
              0LL);
      v16 = v25 == 0;
      v23 = v16;
    }
    if ( v16 )
    {
      v17 = (unsigned int)dword_140278DD8[v7];
      if ( *(_DWORD *)(ProcessPeb + 4 * v7 + 328) < (unsigned int)v17 )
      {
        v18 = (_QWORD *)(ProcessPeb + 8 * ((unsigned int)dword_140278DE8[v7] + 43LL));
        v24 = v18;
        v19 = &v18[v17];
        while ( v18 != v19 )
        {
          if ( !*v18 )
          {
            *v18 = *v10;
            ++*(_DWORD *)(ProcessPeb + 4 * v7 + 328);
            *a2 &= 0xFFFFFFF5;
            *a2 |= 1u;
            _InterlockedOr(v21, 0);
            v8 = 1;
            v22 = 1;
            HANDLELOCK::vUnlock(a4);
            if ( a5 )
            {
              _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)a5 + 12LL));
              *(_QWORD *)a5 = 0LL;
            }
            break;
          }
          v24 = ++v18;
        }
      }
      *(_QWORD *)(v14 + 320) = 0LL;
    }
  }
  if ( !v8 )
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v9 + 88LL))(*v9, v10);
  return v8;
}

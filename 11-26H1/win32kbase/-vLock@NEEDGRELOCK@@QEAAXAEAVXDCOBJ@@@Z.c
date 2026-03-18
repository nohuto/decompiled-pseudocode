/*
 * XREFs of ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x140110D10
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B5D4 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall NEEDGRELOCK::vLock(NEEDGRELOCK *this, struct XDCOBJ *a2, int a3)
{
  struct XDCOBJ *v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  struct _ERESOURCE **v9; // rcx

  *(_QWORD *)this = 0LL;
  v3 = a2;
  v5 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  if ( *(_QWORD *)a2 )
  {
    if ( (LODWORD(a2) = *(_DWORD *)(*(_QWORD *)a2 + 36LL), ((unsigned __int16)a2 & 0x200) != 0)
      && ((unsigned __int16)a2 & 0x8000) == 0
      || (v6 = *(unsigned int *)(v5 + 40), (*(_DWORD *)(v5 + 40) & 0x1000001) != 1)
      || *(_DWORD *)(v5 + 2604) != 5
      && (v6 & 0x20000) == 0
      && ((v7 = *(_QWORD *)(v5 + 2568)) == 0 || v7 == -4 || (*(_DWORD *)(v7 + 160) & 0x800000) == 0)
      || (v8 = *(_QWORD *)(v5 + 24),
          a2 = *(struct XDCOBJ **)(W32GetSessionState(v6) + 88),
          (*(_DWORD *)(v5 + 2112) & 0x400) != 0)
      || (*(_DWORD *)(v5 + 40) & 0x48000000) != 0
      || (*(_DWORD *)(v5 + 1808) & 0x8000000) != 0
      || (*(_DWORD *)(v8 + 40) & 0x1000000) != 0
      || !*((_DWORD *)a2 + 1058) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 48LL) + 40LL) & 0x8000) == 0 )
      {
        v9 = (struct _ERESOURCE **)*((_QWORD *)v3 + 2);
        *(_QWORD *)this = *v9 + 11;
        GreAcquireSemaphore<2,>(v9, (int)a2, a3);
      }
    }
  }
}

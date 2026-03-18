/*
 * XREFs of ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x14028F80C
 * Callers:
 *     ?RegistryNotificaionEnumerationEnd@@YAXPEAK@Z @ 0x140257CD0 (-RegistryNotificaionEnumerationEnd@@YAXPEAK@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FE100 (--$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?PffBucket@PFT@@QEBA?AVPffIterator@@K@Z @ 0x14025A850 (-PffBucket@PFT@@QEBA-AVPffIterator@@K@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z @ 0x14028B4D4 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z.c)
 *     ??EPffIterator@@QEAAAEAV0@XZ @ 0x140296FC4 (--EPffIterator@@QEAAAEAV0@XZ.c)
 *     ??0PffIterator@@QEAA@PEAVPFF@@@Z @ 0x140297050 (--0PffIterator@@QEAA@PEAVPFF@@@Z.c)
 *     ??0PFF_PLACEHOLDER@@QEAA@XZ @ 0x140326904 (--0PFF_PLACEHOLDER@@QEAA@XZ.c)
 *     ?vRemovePFF@PFF@@QEAAXXZ @ 0x140327A04 (-vRemovePFF@PFF@@QEAAXXZ.c)
 */

void __fastcall PUBLIC_PFTOBJ::bCleanupPFT(__int64 *a1, int a2, _DWORD *a3)
{
  int v6; // r13d
  unsigned int v7; // r14d
  __int64 v8; // rdx
  int v9; // ecx
  unsigned int v10; // edi
  __int64 v11; // rsi
  struct PFF *v12; // r10
  int v13; // r9d
  int v14; // r9d
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // ecx
  __int64 SessionState; // rax
  struct PFF **v20; // rax
  __int64 v21; // [rsp+20h] [rbp-E0h]
  _BYTE v22[8]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v23[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+38h] [rbp-C8h]
  struct PFF *v25; // [rsp+40h] [rbp-C0h]
  unsigned int v26; // [rsp+198h] [rbp+98h]
  struct PFF *v27; // [rsp+1A8h] [rbp+A8h] BYREF

  if ( a2 )
  {
    if ( a2 != 1 )
      return;
    v6 = 0;
    v7 = *(_DWORD *)(*a1 + 24);
  }
  else
  {
    v7 = 20;
    v6 = 128;
  }
  v26 = v7;
  PFF_PLACEHOLDER::PFF_PLACEHOLDER((PFF_PLACEHOLDER *)v23);
  if ( a3 )
    *a3 = 0;
  v10 = 0;
  v21 = *(_QWORD *)(W32GetSessionState(v9, v8) + 96);
  if ( v7 )
  {
    v11 = 40LL;
    do
    {
      PFT::PffBucket(*a1, (PffIterator *)&v27, v10);
      v12 = v27;
      if ( !v27 )
        goto LABEL_26;
      do
      {
        if ( a2 == 1 )
        {
          v13 = *((_DWORD *)v12 + 13);
          if ( (v13 & 0x400) == 0 )
          {
            PffIterator::operator++(&v27);
LABEL_13:
            v12 = v27;
            continue;
          }
          if ( (v13 & 0x800) != 0 )
          {
            PffIterator::operator++(&v27);
            *(_DWORD *)(v15 + 52) = v14 & 0xFFFFF7FF;
            goto LABEL_13;
          }
        }
        v24 = *((_QWORD *)v12 + 1);
        v16 = v24;
        v25 = v12;
        *((_QWORD *)v12 + 1) = v23;
        if ( v16 )
          *(_QWORD *)(v16 + 16) = v23;
        if ( PFTOBJ::bUnloadWorkhorse((PFTOBJ *)a1, v12, v10, v6) )
        {
          GreQuerySystemTime(v21 + 20408);
          if ( a3 )
            ++*a3;
        }
        SessionState = W32GetSessionState(v18, v17);
        GreAcquireSemaphore<17,>(*(_QWORD *)(SessionState + 96) + 4864LL);
        if ( *(_BYTE **)(v11 + *a1) == v23 )
          *(_QWORD *)(v11 + *a1) = v24;
        v20 = (struct PFF **)PffIterator::PffIterator((PffIterator *)v22, (struct PFF *)v23);
        v27 = *v20;
        *v20 = 0LL;
        PFF::vRemovePFF((PFF *)v23);
      }
      while ( v12 );
      v7 = v26;
LABEL_26:
      ++v10;
      v11 += 8LL;
    }
    while ( v10 < v7 );
  }
}

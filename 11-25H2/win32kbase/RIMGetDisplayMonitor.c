/*
 * XREFs of RIMGetDisplayMonitor @ 0x14014FDC0
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1401E5C14 (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMGetDisplayMonitor(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  unsigned int v5; // ebp
  unsigned int v6; // r9d
  unsigned int v7; // r11d
  unsigned int *v9; // rsi
  __int64 v10; // r10
  __int64 i; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v15; // [rsp+44h] [rbp+Ch]

  v3 = *(_QWORD *)(a1 * 4 + 16);
  v4 = 0;
  v5 = *(_DWORD *)(a1 * 4 + 24);
  v6 = 0;
  v7 = *a2;
  v15 = HIDWORD(v3);
  v9 = a2;
  v10 = a1 * 4;
  while ( v6 < v7 )
  {
    a2 = (unsigned int *)*((_QWORD *)v9 + 1);
    a1 = 54LL * v6;
    if ( a2[a1 + 29] == *(_DWORD *)(v10 + 116) && a2[a1 + 30] == *(_DWORD *)(v10 + 120) )
    {
      v3 = *(_QWORD *)&a2[a1 + 4];
      v5 = a2[a1 + 6];
      v15 = HIDWORD(v3);
      break;
    }
    ++v6;
  }
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1 * 4, a2) + 56968) + 112LL); i; i = *(_QWORD *)(i + 56) )
  {
    v12 = *(_QWORD *)(i + 88);
    if ( v12 )
    {
      if ( (*(_DWORD *)(v12 + 40) & 0x20000) == 0 )
      {
        v13 = *(_QWORD *)(v12 + 2568);
        if ( ((v13 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0
          && (*(_DWORD *)(v13 + 160) & 0x800000) != 0
          && *(_DWORD *)(v13 + 248) == v5
          && *(_QWORD *)(v13 + 240) == __PAIR64__(v15, v3) )
        {
          *a3 = i;
          return 1;
        }
      }
    }
  }
  return v4;
}

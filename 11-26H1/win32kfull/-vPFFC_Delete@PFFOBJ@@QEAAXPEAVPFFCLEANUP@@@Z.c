/*
 * XREFs of ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1400D3914
 * Callers:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1400C6734 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     bKillPFFOBJ @ 0x1400D38E8 (bKillPFFOBJ.c)
 *     ?vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ @ 0x140329940 (-vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?vDelete@PFEOBJ@@QEAAXXZ @ 0x1400D3AD4 (-vDelete@PFEOBJ@@QEAAXXZ.c)
 *     FreeFileView @ 0x1400D3C10 (FreeFileView.c)
 */

void __fastcall PFFOBJ::vPFFC_Delete(void **this, struct PFFCLEANUP *a2, __int64 a3)
{
  __int64 v4; // rdi
  _QWORD *v5; // rcx
  struct PFFCLEANUP *v6; // rsi
  void *v7; // rbp
  _QWORD *v8; // r10
  __int64 v9; // rcx
  void *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r11
  __int64 SessionState; // rax
  _QWORD *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = *this;
  v6 = a2;
  v7 = (void *)v5[28];
  if ( *((_DWORD *)v5 + 54) )
  {
    do
    {
      v16 = v5[v4 + 28];
      if ( v16 )
        PFEOBJ::vDelete((PFEOBJ *)&v16);
      v5 = *this;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *((_DWORD *)*this + 54) );
  }
  *((_QWORD *)v6 + 1) = v5[11];
  *(_QWORD *)v6 = *((_QWORD *)*this + 12);
  *((_QWORD *)v6 + 2) = *((_QWORD *)*this + 20);
  v8 = *this;
  v9 = *((_QWORD *)*this + 20);
  if ( v9 )
  {
    v11 = *(_QWORD *)(v9 + 208);
    if ( v11 )
    {
      a2 = (struct PFFCLEANUP *)v8[3];
      if ( a2 )
      {
        if ( *(struct PFFCLEANUP **)(*(_QWORD *)v11 + 80LL) == a2 )
        {
          v12 = 0LL;
          if ( *(_DWORD *)(v9 + 36) )
          {
            do
            {
              a3 = v8[20];
              v9 = *(_QWORD *)(*(_QWORD *)(a3 + 208) + 8 * v12);
              a2 = (struct PFFCLEANUP *)(a3 + *(_QWORD *)(*(_QWORD *)(v8[26] + 8 * v12) + 80LL) - (_QWORD)v8);
              v12 = (unsigned int)(v12 + 1);
              *(_QWORD *)(v9 + 80) = a2;
              v8 = *this;
            }
            while ( (unsigned int)v12 < *(_DWORD *)(*((_QWORD *)*this + 20) + 36LL) );
          }
        }
      }
    }
    SessionState = W32GetSessionState(v9, a2, a3);
    v14 = *this;
    if ( *((_QWORD *)*this + 12) == *(_QWORD *)(*(_QWORD *)(SessionState + 96) + 24136LL) )
    {
      v15 = v14[11];
      if ( *(_QWORD **)(v15 + 8) == v14 )
        *(_QWORD *)(v15 + 8) = v14[20];
    }
    *(_QWORD *)(*((_QWORD *)*this + 20) + 160LL) = 0LL;
  }
  else
  {
    if ( v8[26] && *((_DWORD *)v8 + 9) )
      FreeFileView();
    v10 = (void *)*((_QWORD *)*this + 25);
    if ( v10 )
      Win32FreePool(v10);
  }
  if ( v7 )
    Win32FreePool(v7);
  Win32FreePool(*this);
  *this = 0LL;
}

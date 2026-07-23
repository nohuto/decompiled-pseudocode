/*
 * XREFs of WmipSendGuidUpdateNotifications @ 0x140A0B3B8
 * Callers:
 *     WmipUpdateDataSource @ 0x140A09CB4 (WmipUpdateDataSource.c)
 *     WmipGenerateRegistrationNotification @ 0x140A0C7AC (WmipGenerateRegistrationNotification.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     WmipProcessEvent @ 0x140A0CBD4 (WmipProcessEvent.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall WmipSendGuidUpdateNotifications(int a1, unsigned int a2, _OWORD **a3)
{
  __int64 v3; // rsi
  int v6; // ebp
  unsigned int v7; // r14d
  char *Pool2; // rax
  char *v9; // rbx
  _WORD *v10; // rcx
  __int64 v11; // rdx
  __int16 v12; // ax
  _WORD *v13; // rax
  __int64 v14; // rax
  char *v15; // rcx
  __int64 v16; // r8
  _OWORD *v17; // rax

  v3 = a2;
  v6 = 16 * a2 + 8;
  v7 = 16 * a2 + 110;
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  v9 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, v7);
    *(_QWORD *)(v9 + 4) = 0LL;
    v10 = v9 + 66;
    *(_QWORD *)(v9 + 12) = 0LL;
    *((_DWORD *)v9 + 5) = 0;
    v11 = 14LL;
    *(_QWORD *)(v9 + 36) = 271124169LL;
    *((_DWORD *)v9 + 6) = -1265808991;
    *((_DWORD *)v9 + 7) = 298903415;
    *((_DWORD *)v9 + 8) = -1610609499;
    *(_DWORD *)v9 = v7;
    *((_DWORD *)v9 + 11) = 10;
    *((_DWORD *)v9 + 12) = 64;
    *((_DWORD *)v9 + 14) = 96;
    *((_DWORD *)v9 + 15) = v6;
    *((_WORD *)v9 + 32) = 28;
    do
    {
      if ( v11 == -2147483632 )
        break;
      v12 = *(_WORD *)((char *)v10 + (char *)L"REGUPDATEINFO" - (v9 + 66));
      if ( !v12 )
        break;
      *v10++ = v12;
      --v11;
    }
    while ( v11 );
    v13 = v10 - 1;
    if ( v11 )
      v13 = v10;
    *v13 = 0;
    v14 = *((unsigned int *)v9 + 14);
    *(_DWORD *)&v9[v14] = a1;
    v15 = &v9[v14 + 8];
    *(_DWORD *)&v9[v14 + 4] = v3;
    if ( (_DWORD)v3 )
    {
      v16 = v3;
      do
      {
        v17 = *a3;
        a3 += 2;
        *(_OWORD *)v15 = *v17;
        v15 += 16;
        --v16;
      }
      while ( v16 );
    }
    WmipProcessEvent(v9);
    ExFreePoolWithTag(v9, 0);
  }
}

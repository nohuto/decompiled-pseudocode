/*
 * XREFs of ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x14012EF8C
 * Callers:
 *     _ChangeWindowMessageFilterEx @ 0x14012BF48 (_ChangeWindowMessageFilterEx.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z @ 0x14012F08C (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z.c)
 * Callees:
 *     <none>
 */

void **__fastcall GetWindowMessageFilter(struct tagWND *a1)
{
  __int64 v1; // r8
  _DWORD *v3; // r9
  unsigned int v4; // edx
  int v5; // ecx
  __int64 v6; // rax
  struct tagWND **v7; // r10

  v1 = 0LL;
  v3 = *(_DWORD **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 848LL);
  if ( v3 )
  {
    v4 = *v3;
    v5 = 1;
    v6 = 0LL;
    if ( *v3 )
    {
      v7 = (struct tagWND **)(v3 + 6);
      while ( a1 != *v7 )
      {
        v6 = (unsigned int)(v6 + 1);
        v7 += 2;
        if ( (unsigned int)v6 >= v4 )
          goto LABEL_6;
      }
      goto LABEL_9;
    }
LABEL_6:
    if ( (unsigned int)v6 < v4 )
    {
LABEL_9:
      v1 = *(_QWORD *)&v3[4 * v6 + 4];
      return (void **)(v1 & -(__int64)(v5 != 0));
    }
  }
  v5 = 0;
  return (void **)(v1 & -(__int64)(v5 != 0));
}

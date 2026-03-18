/*
 * XREFs of ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1401758DC
 * Callers:
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z @ 0x140175800 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z.c)
 *     _ChangeWindowMessageFilterEx @ 0x140256184 (_ChangeWindowMessageFilterEx.c)
 * Callees:
 *     <none>
 */

void **__fastcall GetWindowMessageFilter(struct tagWND *a1)
{
  __int64 v1; // r8
  _DWORD *v3; // r9
  unsigned int v4; // edx
  __int64 v5; // rax
  struct tagWND **v6; // r10
  int v7; // ecx

  v1 = 0LL;
  v3 = *(_DWORD **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 848LL);
  if ( !v3 )
    goto LABEL_7;
  v4 = *v3;
  v5 = 0LL;
  if ( !*v3 )
    goto LABEL_7;
  v6 = (struct tagWND **)(v3 + 6);
  v7 = 1;
  do
  {
    if ( a1 == *v6 )
      break;
    v5 = (unsigned int)(v5 + 1);
    v6 += 2;
  }
  while ( (unsigned int)v5 < v4 );
  if ( (unsigned int)v5 < v4 )
    v1 = *(_QWORD *)&v3[4 * v5 + 4];
  else
LABEL_7:
    v7 = 0;
  return (void **)(v1 & -(__int64)(v7 != 0));
}

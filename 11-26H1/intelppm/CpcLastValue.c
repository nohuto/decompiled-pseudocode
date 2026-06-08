/*
 * XREFs of CpcLastValue @ 0x14002BD80
 * Callers:
 *     ProcLibCpcRundown @ 0x14002C048 (ProcLibCpcRundown.c)
 * Callees:
 *     <none>
 */

char __fastcall CpcLastValue(_QWORD *a1, int a2, _QWORD *a3)
{
  __int64 v3; // rax
  char v4; // r9
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  __int64 v11; // rax

  v3 = a1[31];
  v4 = 1;
  *a3 = 0LL;
  if ( v3 )
  {
    v5 = a2 - 8;
    if ( !v5 )
    {
      v11 = *(_QWORD *)(v3 + 40);
      goto LABEL_26;
    }
    v6 = v5 - 24;
    if ( !v6 )
    {
      v11 = *(_QWORD *)(v3 + 48);
      goto LABEL_26;
    }
    v7 = v6 - 24;
    if ( !v7 )
    {
      v11 = *(_QWORD *)(v3 + 56);
      goto LABEL_26;
    }
    v8 = v7 - 24;
    if ( !v8 )
    {
      v11 = *(_QWORD *)(v3 + 64);
      goto LABEL_26;
    }
    v9 = v8 - 24;
    if ( !v9 )
    {
      v11 = *(_QWORD *)(v3 + 88);
      goto LABEL_26;
    }
    v10 = v9 - 336;
    if ( !v10 )
    {
      v11 = *(_QWORD *)(v3 + 72);
      goto LABEL_26;
    }
    if ( v10 == 48 )
    {
      v11 = *(unsigned int *)(v3 + 96);
LABEL_26:
      *a3 = v11;
      return v4;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 8:
        *a3 = a1[48];
        return v4;
      case 32:
        v11 = a1[49];
        goto LABEL_26;
      case 56:
        v11 = a1[50];
        goto LABEL_26;
      case 80:
        v11 = a1[51];
        goto LABEL_26;
      case 488:
        v11 = a1[52];
        goto LABEL_26;
    }
  }
  return 0;
}

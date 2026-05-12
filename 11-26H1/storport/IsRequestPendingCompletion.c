/*
 * XREFs of IsRequestPendingCompletion @ 0x140049640
 * Callers:
 *     WaitForNVMeCommandCompleteWithCustomTimeout @ 0x140031CB4 (WaitForNVMeCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsRequestPendingCompletion(__int64 a1, unsigned __int16 a2, _DWORD *a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int16 *v6; // r11
  __int16 v7; // cx
  __int16 v8; // ax
  bool v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int i; // esi
  unsigned __int64 v13; // rdx
  __int64 v14; // rdi

  if ( a2 == 0xFFFF )
  {
    v11 = *(_QWORD *)(a1 + 856);
    v6 = (unsigned __int16 *)(*(_QWORD *)v11 + 16LL * *(unsigned __int16 *)(v11 + 34));
    if ( (v6[7] & 1) != *(_WORD *)(v11 + 36) )
    {
LABEL_15:
      v9 = 1;
      goto LABEL_16;
    }
    v9 = 0;
    for ( i = 0; ; ++i )
    {
      v14 = *(_QWORD *)(a1 + 864);
      if ( !v14 )
        break;
      v9 = 0;
      if ( i >= *(unsigned __int16 *)(a1 + 26) )
        break;
      v13 = (unsigned __int64)i << 7;
      v6 = (unsigned __int16 *)(16LL * *(unsigned __int16 *)(v13 + v14 + 34) + *(_QWORD *)(v13 + v14));
      if ( (v6[7] & 1) != *(_WORD *)(v13 + v14 + 36) )
        goto LABEL_15;
    }
  }
  else
  {
    if ( a2 )
      v5 = ((unsigned __int64)a2 << 7) + *(_QWORD *)(a1 + 864) - 128LL;
    else
      v5 = *(_QWORD *)(a1 + 856);
    v6 = (unsigned __int16 *)(16LL * *(unsigned __int16 *)(v5 + 34) + *(_QWORD *)v5);
    v7 = *(_WORD *)(v5 + 36);
    v8 = v6[7] & 1;
    v9 = v8 != v7;
    if ( v8 != v7 )
    {
      if ( !a2 )
      {
        v10 = *(_QWORD *)(a1 + 712);
LABEL_17:
        *a3 = *(unsigned __int16 *)(((unsigned __int64)v6[6] << 7) + *(_QWORD *)(v10 + 32) + 52);
        return v9;
      }
LABEL_16:
      v10 = 192LL * v6[5] + *(_QWORD *)(a1 + 728) - 192LL;
      goto LABEL_17;
    }
  }
  return v9;
}

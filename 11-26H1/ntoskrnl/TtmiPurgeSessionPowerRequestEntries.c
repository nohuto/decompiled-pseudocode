/*
 * XREFs of TtmiPurgeSessionPowerRequestEntries @ 0x1407EC1F0
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x1407F1C68 (TtmiSessionTerminalListWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall TtmiPurgeSessionPowerRequestEntries(__int64 a1)
{
  _QWORD **v1; // rsi
  _QWORD *v3; // rbx
  _QWORD *result; // rax
  _QWORD *v5; // r14
  _QWORD *i; // rdi
  _QWORD *v7; // r9
  _QWORD *v8; // r8
  _QWORD *v9; // rax

  v1 = *(_QWORD ***)(a1 + 280);
  v3 = v1;
  while ( v3 )
  {
    result = (_QWORD *)*v3;
    v3 = result;
    if ( ((unsigned __int8)result & 1) != 0 )
      break;
LABEL_9:
    if ( !result )
      return result;
    v5 = result + 6;
    for ( i = (_QWORD *)result[6]; i != v5; i = (_QWORD *)*i )
    {
      v7 = i - 1;
      v8 = i;
      if ( ((*(char *)(((unsigned __int64)*((unsigned int *)i - 2) >> 3) + *(_QWORD *)(a1 + 64)) >> (*(_DWORD *)(i - 1) & 7)) & 1) == 0 )
      {
        v9 = (_QWORD *)*i;
        i = (_QWORD *)i[1];
        if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*i != v8 )
          __fastfail(3u);
        *i = v9;
        v9[1] = i;
        ExFreePoolWithTag(v7, 0x52507454u);
      }
    }
  }
  ++v1;
  result = *(_QWORD **)(a1 + 280);
  while ( v1 < &result[(unsigned __int64)*(unsigned int *)(a1 + 276) >> 5] )
  {
    v3 = *v1;
    if ( ((unsigned __int8)*v1 & 1) == 0 )
    {
      result = *v1;
      goto LABEL_9;
    }
    ++v1;
  }
  return result;
}

/*
 * XREFs of MiValidateSectionUpdate @ 0x140AFE1A8
 * Callers:
 *     MiValidateSectionCreate @ 0x14099C8D4 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     SeReleaseImageValidationContext @ 0x140AFE304 (SeReleaseImageValidationContext.c)
 */

__int64 __fastcall MiValidateSectionUpdate(__int64 a1)
{
  int v2; // ecx
  unsigned __int64 i; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  int v10; // ebp
  __int64 result; // rax
  unsigned __int64 v12; // rax

  v2 = *(_DWORD *)(a1 + 56);
  i = *(_QWORD *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 88);
  if ( v2 > 1 )
  {
    if ( v2 <= 3 )
      i = v4 ^ (v4 ^ i) & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_9:
    v10 = 0;
  }
  else
  {
    if ( (i & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFFFFFFFFF8LL )
    {
      if ( v2 )
        v5 = i & 0xFFFFFFFFFFFFFFFCuLL | 2;
      else
        v5 = i & 0xFFFFFFFFFFFFFFFCuLL | 1;
    }
    else
    {
      v5 = 8 * i;
    }
    v6 = *(_QWORD *)(a1 + 96);
    v7 = v5 | 4;
    if ( *(char *)(*(_QWORD *)(**(_QWORD **)(a1 + 8) + 56LL) + 46LL) >= 0 )
      v7 = v5;
    for ( i = v7; ; i = i & 0xFFFFFFFFFFFFFFFCuLL | 2 )
    {
      while ( 1 )
      {
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), i, v4);
        v9 = v8;
        if ( v4 == v8 )
          goto LABEL_8;
        v12 = v8 >> 3;
        if ( i >> 3 > 0xFFFFFFFFFFFFFFFLL )
          break;
        if ( v12 >= i >> 3 )
          goto LABEL_25;
        v4 = v9;
      }
      v4 = v9;
      if ( v12 > 0xFFFFFFFFFFFFFFFLL )
        break;
      *(_QWORD *)(a1 + 88) = v9;
    }
    v4 = v9 & 0xFFFFFFFFFFFFFFF8uLL;
    i &= 0xFFFFFFFFFFFFFFF8uLL;
    if ( SepRmCapTableLock.IptSaveArea )
      v10 = guard_dispatch_icall_no_overrides(v4, i);
    else
      v10 = 0;
    SeReleaseImageValidationContext(i);
    if ( v10 >= 0 )
    {
LABEL_25:
      i = v9;
LABEL_8:
      v4 = i;
      goto LABEL_9;
    }
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 130;
  }
  result = (unsigned int)v10;
  *(_QWORD *)(a1 + 80) = i;
  *(_QWORD *)(a1 + 88) = v4;
  return result;
}

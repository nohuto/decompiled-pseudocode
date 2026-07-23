/*
 * XREFs of IoGetFileObjectFilterContext @ 0x140440B70
 * Callers:
 *     IopDeleteFile @ 0x140A282F0 (IopDeleteFile.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoGetFileObjectFilterContext(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  __int64 result; // rax
  __int64 *Pool2; // rax
  unsigned int v9; // edx

  v3 = 0LL;
  if ( *(_QWORD *)(a1 + 208) )
  {
LABEL_2:
    v6 = *(_QWORD *)(a1 + 208);
    if ( v6 )
      v3 = *(_QWORD *)(v6 + 32);
    result = 0LL;
    goto LABEL_5;
  }
  if ( a3 )
  {
    Pool2 = (__int64 *)ExAllocatePool2(0x40uLL);
    v9 = -1073741670;
    if ( Pool2 )
      v9 = 0;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 208), (signed __int64)Pool2, 0LL) )
    {
      if ( Pool2 )
      {
        if ( Pool2 != qword_1400137E0 )
          ExFreePoolWithTag(Pool2, 0);
        goto LABEL_2;
      }
    }
    else if ( Pool2 )
    {
      goto LABEL_2;
    }
    result = v9;
LABEL_5:
    *a2 = v3;
    return result;
  }
  result = 0LL;
  *a2 = 0LL;
  return result;
}

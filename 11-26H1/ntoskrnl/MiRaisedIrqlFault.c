/*
 * XREFs of MiRaisedIrqlFault @ 0x1403A4788
 * Callers:
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 * Callees:
 *     MiTransientCombineAddress @ 0x1403A8290 (MiTransientCombineAddress.c)
 *     MiNoFaultFound @ 0x1403A85F8 (MiNoFaultFound.c)
 *     KeInvalidAccessAllowed @ 0x1403A8A70 (KeInvalidAccessAllowed.c)
 *     MiCheckSystemNxFault @ 0x1404E4804 (MiCheckSystemNxFault.c)
 *     MiGenerateAccessViolation @ 0x1404E6E58 (MiGenerateAccessViolation.c)
 *     MiGetBaseLoaderPortion @ 0x1404EE710 (MiGetBaseLoaderPortion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiRaisedIrqlFault(_QWORD *a1)
{
  __int64 v2; // rcx
  _DWORD *MmInternal; // rcx
  int v4; // ecx
  ULONG_PTR v5; // r8
  bool v6; // cc
  __int64 v7; // rcx
  _BYTE *v8; // rax
  __int64 v10; // rax
  __int64 **i; // rdx
  __int64 v12; // rcx
  unsigned __int64 *v13; // rsi
  unsigned __int64 v14; // rbx
  ULONG_PTR BaseLoaderPortion; // rax
  ULONG_PTR v16; // rax

  v2 = a1[2];
  if ( (v2 & 1) == 0 && (unsigned __int8)KeInvalidAccessAllowed(v2, 1LL) )
    return 3221225477LL;
  if ( (*((_DWORD *)a1 + 20) & 0x80u) != 0 )
    KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0xEuLL);
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( MmInternal )
  {
    v4 = MmInternal[80];
    if ( v4 )
    {
      if ( KeGetCurrentIrql() != 2 )
        KeBugCheckEx(0x50u, *a1, a1[1], KeGetCurrentIrql(), 0xAuLL);
      if ( v4 == 1 )
      {
        v5 = *a1;
        if ( *a1 >= 0xFFFFF6FB40000000uLL && v5 <= 0xFFFFF6FB7FFFFFFFuLL
          || v5 >= 0xFFFFF6FB7DA00000uLL && v5 <= 0xFFFFF6FB7DBFFFF8uLL )
        {
          return 3221225477LL;
        }
        if ( v5 < 0xFFFFF6FB7DBED000uLL )
          goto LABEL_50;
        v6 = v5 <= 0xFFFFF6FB7DBEDFF8uLL;
      }
      else
      {
        if ( v4 != 2 || *a1 < 0xFFFFF68000000000uLL )
          goto LABEL_50;
        v6 = *a1 <= 0xFFFFF6FFFFFFFFFFuLL;
      }
      if ( v6 )
        return 3221225477LL;
LABEL_50:
      KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0xBuLL);
    }
  }
  v7 = a1[2];
  v8 = (_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v7 & 1) != 0 )
  {
    if ( *v8 == 1 || *v8 == 3 || *v8 == 6 )
      return 3221225477LL;
  }
  else if ( (unsigned __int8)KeInvalidAccessAllowed(v7, 0LL) )
  {
    return 3221225477LL;
  }
  if ( (unsigned int)MiTransientCombineAddress(KeGetCurrentThread(), *a1, 1LL)
    || (unsigned int)MiGenerateAccessViolation(a1) )
  {
    return 3221225477LL;
  }
  if ( *a1 >= 0xFFFF800000000000uLL )
  {
    v10 = 3LL;
    for ( i = (__int64 **)(a1 + 6); ; --i )
    {
      v12 = **i;
      if ( (v12 & 1) == 0 )
        return 3489660934LL;
      if ( (v12 & 0x80u) != 0LL )
      {
        if ( (a1[1] & 2) != 0 && (v12 & 0x800) == 0 )
        {
          v16 = ((__int64 (*)(void))MiGetBaseLoaderPortion)();
          KeBugCheckEx(0xBEu, *a1, v16, a1[2], 0xFuLL);
        }
        MiCheckSystemNxFault(a1, **i, 3LL);
        if ( *a1 >= 0xFFFFF68000000000uLL && *a1 <= 0xFFFFF6FFFFFFFFFFuLL )
          KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 8uLL);
        return 0LL;
      }
      if ( !v10 )
        break;
      --v10;
    }
    v13 = (unsigned __int64 *)(((*a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v14 = *v13;
    if ( (*v13 & 1) == 0 )
      return 3489660934LL;
    if ( (a1[1] & 2) != 0 )
    {
      if ( (v14 & 0x200) != 0 )
        return 3489660934LL;
      if ( (v14 & 0x800) == 0 )
      {
        BaseLoaderPortion = MiGetBaseLoaderPortion(*v13);
        KeBugCheckEx(0xBEu, *a1, BaseLoaderPortion, a1[2], 0xAuLL);
      }
    }
    MiCheckSystemNxFault(a1, *v13, 0LL);
    if ( (unsigned __int16)*(_DWORD *)(48 * ((v14 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 32) > 1u
      || (*(_QWORD *)(48 * ((v14 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) & 1) == 0
      || (*(_DWORD *)(48 * ((v14 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 32) & 0x8000000) != 0 )
    {
      MiNoFaultFound((_DWORD)a1, (_DWORD)v13, *a1, a1[2], 1, v14);
      return 0LL;
    }
  }
  return 3489660934LL;
}

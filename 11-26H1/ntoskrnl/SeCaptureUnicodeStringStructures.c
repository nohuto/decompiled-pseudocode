/*
 * XREFs of SeCaptureUnicodeStringStructures @ 0x140A86AF0
 * Callers:
 *     SepCaptureUnicodeStringArray @ 0x140925834 (SepCaptureUnicodeStringArray.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCaptureUnicodeStringStructures(__int64 a1, unsigned int a2, char a3, __int64 *a4)
{
  unsigned int v5; // edi
  __int64 v7; // rbx
  int v8; // esi
  __int64 Pool2; // r14
  unsigned int i; // r12d
  __int128 v12; // [rsp+28h] [rbp-50h]

  v5 = a2;
  *a4 = 0LL;
  if ( !a1 && a2 )
    return (unsigned int)-1073741811;
  if ( !a1 )
    return 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    *a4 = a1;
    return 0;
  }
  v7 = 16LL * a2;
  if ( is_mul_ok(0x10uLL, a2) )
  {
    v8 = 0;
  }
  else
  {
    v7 = -1LL;
    v8 = -1073741675;
  }
  if ( v8 >= 0 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      if ( v7 && (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      for ( i = 0; i < v5; ++i )
      {
        DWORD1(v12) = 0;
        LODWORD(v12) = RtlReadULongFromUser((unsigned int *)(a1 + 16LL * i));
        *((_QWORD *)&v12 + 1) = RtlReadULong64FromUser((volatile void *)(a1 + 16LL * i + 8));
        *(_OWORD *)(Pool2 + 16LL * i) = v12;
        v5 = a2;
      }
      *a4 = Pool2;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v8;
}

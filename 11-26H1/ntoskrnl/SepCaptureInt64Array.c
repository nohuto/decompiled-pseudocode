/*
 * XREFs of SepCaptureInt64Array @ 0x140819768
 * Callers:
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140AF2E38 (SepCaptureTokenSecurityAttributesInformation.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCaptureInt64Array(void *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v6; // rax
  unsigned int v7; // ecx
  signed int v8; // edi
  size_t v9; // rsi
  void *Pool2; // rax
  void *v11; // rbx

  v6 = 8LL * a2;
  v7 = -1;
  if ( v6 <= 0xFFFFFFFF )
    v7 = 8 * a2;
  v8 = v6 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v6 <= 0xFFFFFFFF )
  {
    v9 = v7;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v11 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    if ( v9 && ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyFromUser(Pool2, Src, v9);
    if ( v8 >= 0 )
      *a4 = v11;
    else
      ExFreePoolWithTag(v11, 0);
  }
  return (unsigned int)v8;
}

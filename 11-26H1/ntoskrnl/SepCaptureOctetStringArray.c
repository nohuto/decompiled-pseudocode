/*
 * XREFs of SepCaptureOctetStringArray @ 0x140819830
 * Callers:
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140AF2E38 (SepCaptureTokenSecurityAttributesInformation.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCaptureOctetStringArray(void *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  size_t v6; // rbx
  unsigned int v7; // r12d
  unsigned int *Pool2; // rax
  unsigned int *v9; // rsi
  unsigned int v10; // edi
  unsigned int i; // ecx
  unsigned int v13; // ebx
  _QWORD *v14; // rax
  _QWORD *v15; // r14
  char *v16; // r15

  v6 = 16LL * a2;
  if ( v6 > 0xFFFFFFFF )
    return 3221225621LL;
  v7 = 16 * a2;
  Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL);
  v9 = Pool2;
  v10 = 0;
  if ( !Pool2 )
    return 3221225626LL;
  if ( (_DWORD)v6 && ((unsigned __int8)Src & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  RtlCopyFromUser(Pool2, Src, (unsigned int)v6);
  for ( i = 0; i < a2; ++i )
  {
    if ( v7 + v9[4 * i + 2] < v7 )
    {
      v13 = -1073741675;
LABEL_14:
      ExFreePoolWithTag(v9, 0);
      return v13;
    }
    v7 += v9[4 * i + 2];
  }
  v14 = (_QWORD *)ExAllocatePool2(0x100uLL);
  v15 = v14;
  if ( !v14 )
  {
    v13 = -1073741670;
    goto LABEL_14;
  }
  memmove(v14, v9, v6);
  v16 = (char *)&v15[v6 / 8];
  while ( v10 < a2 )
  {
    RtlCopyFromUser(v16, *(void **)&v9[4 * v10], v9[4 * v10 + 2]);
    v15[2 * v10] = v16;
    v16 += v9[4 * v10++ + 2];
  }
  ExFreePoolWithTag(v9, 0);
  *a4 = v15;
  return 0LL;
}
